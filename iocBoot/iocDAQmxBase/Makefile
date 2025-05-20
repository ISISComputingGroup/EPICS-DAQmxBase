TOP = ../..
include $(TOP)/configure/CONFIG
ARCH = $(EPICS_HOST_ARCH)
TARGETS = envPaths dllPath.bat relPaths.sh
ifdef ISIS_DAQMX
TARGETS += runIOC.bat runIOC.sh
endif

#SCRIPTS=stDAQmxBase.boot
include $(TOP)/configure/RULES.ioc
