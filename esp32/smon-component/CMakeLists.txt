
set(SMON_DIR_PATH ../../components/sys-monitor)

set(srcs "")
list(APPEND srcs ${SMON_DIR_PATH}/src/smonitor.c)
list(APPEND srcs ${SMON_DIR_PATH}/src/port/ESP32/port.c)

set(priv_incs "")
list(APPEND priv_incs ../config)
list(APPEND priv_incs ${SMON_DIR_PATH}/src/port/inc)

set(priv_req esp_pm)
if (IDF_VERSION_MAJOR EQUAL 4)
list(APPEND priv_req driver)
endif()

if (IDF_VERSION_MAJOR EQUAL 5)
list(APPEND priv_req esp_driver_uart esp_driver_gpio)
endif()

idf_component_register( SRCS ${srcs}
                        INCLUDE_DIRS ${SMON_DIR_PATH}/src/
                        PRIV_INCLUDE_DIRS ${priv_incs}
                        PRIV_REQUIRES ${priv_req} )

target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")
