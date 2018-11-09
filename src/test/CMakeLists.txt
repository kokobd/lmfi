add_executable(lmfi-test
        src/testMain.cpp
        src/lmfi/utilTest.cpp
        )
target_include_directories(lmfi-test
        PRIVATE src
        )
target_link_libraries(lmfi-test
        Catch2::Catch
        lmfi
        )
add_test(lmfi-test lmfi-test)
