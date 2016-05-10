TOP=../..

include $(TOP)/configure/CONFIG

# -------------------------------
# Build an Diamond Support Module
# -------------------------------

ifneq ($(findstring windows,$(EPICS_HOST_ARCH)),)
DAQMXLIB = $(ICPBINARYDIR)/NIDAQmx/lib/msvc64
DAQMXBASELIB = $(ICPBINARYDIR)/NIDAQmxBase/lib/msvc64
else
DAQMXLIB = $(ICPBINARYDIR)/NIDAQmx/lib/msvc
DAQMXBASELIB = $(ICPBINARYDIR)/NIDAQmxBase/lib/msvc
endif

LIBRARY_IOC += DAQmxBaseSupport DAQmxSupport

drvDaqMxBase_INCLUDES += -I$(ICPBINARYDIR)/NIDAQmxBase/include

drvDaqMx_INCLUDES += -I$(ICPBINARYDIR)/NIDAQmx/include
drvDaqMx_CFLAGS += -DDODAQMXFULL=1

# xxxRecord.dbd will be installed into <top>/dbd
DBD += DAQmxBaseSupport.dbd DAQmxSupport.dbd

# The following are compiled and added to the support library

DAQmxBaseSupport_SRCS += drvDaqMxBase.c
DAQmxSupport_SRCS += drvDaqMx.c

# We need to link against the EPICS Base libraries
DAQmxBaseSupport_LIBS += asyn $(EPICS_BASE_IOC_LIBS)
DAQmxSupport_LIBS += asyn $(EPICS_BASE_IOC_LIBS)

USR_CFLAGS_Linux += -Wno-comments
USR_CFLAGS_WIN32 += -D_USE_MATH_DEFINES -DWIN32 -DDllExport=__declspec(dllimport)

DAQmxBaseSupport_SYS_LIBS_WIN32 += $(DAQMXBASELIB)/NIDAQmxBase
DAQmxSupport_SYS_LIBS_WIN32 += $(DAQMXLIB)/NIDAQmx 

# ------------------------
# Build an IOC Application
# ------------------------

PROD_IOC = DAQmxBase DAQmx

# DAQmxBase.dbd will be installed into <top>/dbd
DBD += DAQmxBase.dbd DAQmx.dbd

# DAQmxBase.dbd will be created from these files
DAQmxBase_DBD += base.dbd
DAQmxBase_DBD += DAQmxBaseSupport.dbd
DAQmxBase_DBD += asyn.dbd

DAQmx_DBD += base.dbd
DAQmx_DBD += DAQmxSupport.dbd
DAQmx_DBD += asyn.dbd

# DAQmxBase_registerRecordDeviceDriver.cpp will be created
# DAQmxBase.dbd
DAQmxBase_SRCS += DAQmxBase_registerRecordDeviceDriver.cpp
DAQmx_SRCS += DAQmx_registerRecordDeviceDriver.cpp

# These two lines are needed for non-vxWorks builds, such as Linux
DAQmxBase_SRCS_DEFAULT += DAQmxBaseMain.cpp
DAQmxBase_SRCS_vxWorks += -nil-

DAQmx_SRCS_DEFAULT += DAQmxBaseMain.cpp
DAQmx_SRCS_vxWorks += -nil-

# Add locally compiled object code
#DAQmxBase_SRCS +=

# The following adds object code from base/src/vxWorks
DAQmxBase_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary
DAQmx_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary

# This line says that this IOC Application depends on the
# xxx Support Module
DAQmxBase_LIBS += DAQmxBaseSupport
DAQmxBase_LIBS += asyn

DAQmx_LIBS += DAQmxSupport
DAQmx_LIBS += asyn

# We need to link this IOC Application against the EPICS Base libraries
DAQmxBase_LIBS += $(EPICS_BASE_IOC_LIBS)
DAQmx_LIBS += $(EPICS_BASE_IOC_LIBS)

DAQmxBase_SYS_LIBS_WIN32 += $(DAQMXBASELIB)/NIDAQmxBase
DAQmx_SYS_LIBS_WIN32 += $(DAQMXLIB)/NIDAQmx

# ---------------------------------------------------

include $(TOP)/configure/RULES

drvDaqMx.c : ../drvDaqMxBase.c
	$(CP) $< $@
