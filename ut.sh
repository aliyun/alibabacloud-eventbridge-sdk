#!/bin/bash

basepath=$(cd `dirname $0`/; pwd)

echo $basepath

function upload_codecov_report {
  # upload_codecov_report <dir> <flag>
  cd "$1" || return 126
  wget --no-check-certificate https://codecov.io/bash -O codecov.sh
  pwd
  bash codecov.sh -cF "$2"
  return $?
}

function run_php {
  cd $basepath/util/php/ || return 126
  composer --version
  composer install -vvv
  composer test || return 126
  upload_codecov_report $basepath/util/php php
}

function run_go {
  cd $basepath/util/golang/ || return 126
  export GO111MODULE=on
  go mod tidy
  go test -race -coverprofile=coverage.txt -covermode=atomic ./client/... || return 126
  upload_codecov_report $basepath/util/golang go
}

function run_csharp {
  # before_install
  wget https://download.visualstudio.microsoft.com/download/pr/42f39f2f-3f24-4340-8c57-0a3133620c21/0a353696275b00cbddc9f60069867cfc/dotnet-sdk-2.2.110-linux-x64.tar.gz
  mkdir -p ~/dotnet/ && tar zxf dotnet-sdk-2.2.110-linux-x64.tar.gz -C ~/dotnet/
  sudo ln -sf ~/dotnet/dotnet /usr/bin/dotnet
  dotnet --info

  # install
  cd $basepath/util/csharp/tests/ || return 126
  dotnet tool install --global altcover.visualizer
  dotnet restore
  dotnet build

  # run tests
  cd ../
  dotnet test tests/ /p:AltCover=true || return 126

  # upload code coverage report
  upload_codecov_report $basepath/util/csharp csharp
}

function run_python {
  #env
  export PYTHONPATH=$PYTHONPATH:`pwd`/util/python
  echo $PYTHONPATH
  # install
  cd $basepath/util/python || return 126
  pip install coverage
  pip install alibabacloud-tea
  pip install alibabacloud-tea-util

  coverage run --source="./alibabacloud_eventbridge_util" -m pytest tests/test_* || return 126
  upload_codecov_report $basepath/util/python python
}

function contains {
  local value=$2
  for i in $1
  do
    if [ "$i" == "$value" ]; then
      echo "y"
      return 0
    fi
  done
  echo "n"
  return 1
}

lang=$1

if [ "$lang" == "php" ]
then
  echo "run php"
  run_php
elif [ "$lang" == "csharp" ]
then
  echo "run csharp"
  run_csharp
elif [ "$lang" == "go" ]
then
  echo "run golang"
  run_go
elif [ "$lang" == "python" ]
then
  echo "run python"
  run_python
fi

exit $?
