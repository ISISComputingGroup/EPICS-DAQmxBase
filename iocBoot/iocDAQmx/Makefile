TOP = ../..
include $(TOP)/configure/CONFIG
#ARCH = windows-x64-debug
ARCH = $(EPICS_HOST_ARCH)
TARGETS = envPaths dllPath.bat relPaths.sh
# local STFC ISIS startup file - comment out of not used
TARGETS += runIOC.bat runIOC.sh
include $(TOP)/configure/RULES.ioc
