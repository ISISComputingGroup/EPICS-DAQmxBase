TOP = ../..
include $(TOP)/configure/CONFIG
#ARCH = windows-x64-debug
ARCH = $(EPICS_HOST_ARCH)
TARGETS = envPaths dllPath.bat relPaths.sh
ifdef ISIS_DAQMX
TARGETS += runIOC.bat runIOC.sh
endif
include $(TOP)/configure/RULES.ioc
