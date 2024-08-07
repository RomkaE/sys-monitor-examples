
set(srcs "")
list(APPEND srcs "sys-monitor/src/smonitor.c")
list(APPEND srcs "sys-monitor/src/port/ESP32/port.c")

set(priv_incs "")
list(APPEND priv_incs ${CMAKE_SOURCE_DIR})
list(APPEND priv_incs "${CMAKE_SOURCE_DIR}/config")
#list(APPEND priv_incs "./sys-monitor/src/port/inc")

idf_component_register( SRCS ${srcs}
                        INCLUDE_DIRS "sys-monitor/src/"
                        PRIV_INCLUDE_DIRS ${priv_incs}
                        REQUIRES driver app-error-check utils)

target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")
