aux_source_directory(src A2_SOURCES)

add_library(A2 STATIC ${A2_SOURCES})

target_include_directories(A2 PUBLIC include)

target_compile_options(A2 PRIVATE -include cstddef)