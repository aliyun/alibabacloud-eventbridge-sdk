find_package(alibabacloud_event_bridge QUIET)

if(alibabacloud_event_bridge_FOUND)
  message(STATUS "Found alibabacloud_event_bridge version ${alibabacloud_event_bridge_VERSION}")
else()
  message(STATUS "alibabacloud_event_bridge could not be located, Building alibabacloud_event_bridge instead.")
  include(FetchContent)

  FetchContent_Declare(
    _alibabacloud_event_bridge
    GIT_REPOSITORY https://github.com/alibabacloud-sdk-cpp/eventbridge.git
    GIT_TAG ,
    CMAKE_ARGS
      -DENABLE_UNIT_TESTS:BOOL="0")

  FetchContent_GetProperties(_alibabacloud_event_bridge)
  if(NOT _alibabacloud_event_bridge_POPULATED)
    FetchContent_Populate(_alibabacloud_event_bridge)
    message(STATUS "Added alibabacloud_event_bridge source : ${_alibabacloud_event_bridge_SOURCE_DIR}")
    message(STATUS "Added alibabacloud_event_bridge binary : ${_alibabacloud_event_bridge_BINARY_DIR}")
    add_subdirectory(
      ${_alibabacloud_event_bridge_SOURCE_DIR}
      ${_alibabacloud_event_bridge_BINARY_DIR}
    )
  endif()
  target_include_directories(alibabacloud_sample PRIVATE "${_alibabacloud_event_bridge_SOURCE_DIR}/include")
endif()
