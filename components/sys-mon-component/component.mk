
COMPONENT_ADD_INCLUDEDIRS := ./sys-monitor/src/

COMPONENT_PRIV_INCLUDEDIRS := ./../../config
COMPONENT_PRIV_INCLUDEDIRS += ./sys-monitor/src/port/inc
 
COMPONENT_SRCDIRS := ./sys-monitor/src
COMPONENT_SRCDIRS += ./sys-monitor/src/port/ESP8266

#target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")
#sys-monitor/src/smonitor.c: CPPFLAGS += -Wno-format
CPPFLAGS += -Wno-format
