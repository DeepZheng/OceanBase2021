if(EXISTS "/home/deep/OceanBase2021/build/unitest/path_test[1]_tests.cmake")
  include("/home/deep/OceanBase2021/build/unitest/path_test[1]_tests.cmake")
else()
  add_test(path_test_NOT_BUILT path_test_NOT_BUILT)
endif()
