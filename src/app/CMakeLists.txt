
add_executable(lmfi-app
        src/main.cpp
        )
target_include_directories(lmfi-app
        PRIVATE src
        )
target_link_libraries(lmfi-app
        PRIVATE lmfi
        )