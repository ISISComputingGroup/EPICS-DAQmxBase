TOP = ../..
include $(TOP)/configure/CONFIG
ARCH = $(EPICS_HOST_ARCH)
TARGETS = envPaths dllPath.bat relPaths.sh
# local STFC ISIS startup file - comment out of not used
TARGETS += runIOC.bat runIOC.sh
#SCRIPTS=stDAQmxBase.boot
include $(TOP)/configure/RULES.ioc
