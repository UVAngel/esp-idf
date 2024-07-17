idf_build_get_property(target IDF_TARGET)

if(${target} STREQUAL "linux")
    return() # This component is not supported by the POSIX/Linux simulator
endif()

idf_build_get_property(arch IDF_TARGET_ARCH)

if(NOT "${arch}" STREQUAL "xtensa")
    return()
endif()

set(xtensa_perfmon_srcs "xtensa_perfmon_access.c"
                        "xtensa_perfmon_apis.c"
                        "xtensa_perfmon_masks.c")

idf_component_register(SRCS "${xtensa_perfmon_srcs}"
                       INCLUDE_DIRS "include"
                       REQUIRES "xtensa")

# During the port to v5.2, we encountered an internal compiler error
#      xtensa_perfmon_apis.c:60:1: error: insn does not satisfy its constraints
# Apparently, it's a known Xtensa compiler bug. This expressif ticket
#       https://github.com/espressif/esp-idf/issues/11696#issuecomment-1596208414
# mentions that one workround is to disable "-fno-if-conversion" for this library.
target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format" "-fno-if-conversion")
