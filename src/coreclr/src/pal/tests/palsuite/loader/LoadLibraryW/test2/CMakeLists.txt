set(SOURCES
  loadlibraryw.cpp
)

add_executable(paltest_loadlibraryw_test2
  ${SOURCES}
)

add_dependencies(paltest_loadlibraryw_test2 coreclrpal)

target_link_libraries(paltest_loadlibraryw_test2
  ${COMMON_TEST_LIBRARIES}
)
