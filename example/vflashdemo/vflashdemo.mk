NAME := vflashdemo

$(NAME)_SOURCES := main.c

GLOBAL_DEFINES += AOS_NO_WIFI

ifeq ($(BENCHMARKS),1)
$(NAME)_COMPONENTS  += benchmarks
GLOBAL_DEFINES      += CONFIG_CMD_BENCHMARKS
endif

