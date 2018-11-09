
add_library(lmfi STATIC
        src/util.cpp
        include/lmfi/util.hpp
        )
target_include_directories(lmfi
        PUBLIC include
        PRIVATE src
        )
target_link_libraries(lmfi
        PUBLIC ${OpenCV_LIBS}
        )
