find_package(alibabacloud_event_bridge_util ${alibabacloud_event_bridge_util_MINIMUM_REQUIRED} QUIET COMPONENTS ${alibabacloud_event_bridge_util_COMPONENTS_REQUIRED})

if(alibabacloud_event_bridge_util_FOUND)
  message(STATUS "Found alibabacloud_event_bridge_util version ${alibabacloud_event_bridge_util_VERSION}")
else()
  message(STATUS "alibabacloud_event_bridge_util could not be located, Building alibabacloud_event_bridge_util instead.")
  include(FetchContent)

  FetchContent_Declare(
    _alibabacloud_event_bridge_util
    GIT_REPOSITORY https://github.com/alibabacloud-sdk-cpp/eventbridge-util.git
    GIT_TAG master
    CMAKE_ARGS
      -DENABLE_UNIT_TESTS:BOOL="0")
  
  FetchContent_GetProperties(_alibabacloud_event_bridge_util)
  if(NOT _alibabacloud_event_bridge_util_POPULATED)
    FetchContent_Populate(_alibabacloud_event_bridge_util)
    message(STATUS "Added alibabacloud_event_bridge_util source : ${_alibabacloud_event_bridge_util_SOURCE_DIR}")
    message(STATUS "Added alibabacloud_event_bridge_util binary : ${_alibabacloud_event_bridge_util_BINARY_DIR}")
    add_subdirectory(
      ${_alibabacloud_event_bridge_util_SOURCE_DIR} 
      ${_alibabacloud_event_bridge_util_BINARY_DIR}
    )
  endif()
  target_include_directories(alibabacloud_event_bridge PRIVATE "${_alibabacloud_event_bridge_util_SOURCE_DIR}/include")
endif()
