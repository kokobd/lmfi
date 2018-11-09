add_library(Catch2::Catch INTERFACE IMPORTED GLOBAL)
set_property(TARGET Catch2::Catch
        PROPERTY INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/include"
        )
