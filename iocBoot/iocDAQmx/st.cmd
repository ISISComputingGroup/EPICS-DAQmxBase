#!../../bin/windows-x64-debug/DAQmx

## You may have to change DAQmx to something else
## everywhere it appears in this file

< envPaths

cd "${TOP}"

## Register all support components
dbLoadDatabase "dbd/DAQmx.dbd"
DAQmx_registerRecordDeviceDriver pdbbase

## NI cDAQ-9181 with NI 9375 card

epicsEnvSet("DAQ","cDAQ1Mod3")

## port0 is input
DAQmxConfig("myport1", "$(DAQ)/ai0", 0, "AI","$(DAQMODE=N=1000 F=1000)")
DAQmxConfig("myport1", "$(DAQ)/ai1", 1, "AI","$(DAQMODE=N=1000 F=1000)")
DAQmxConfig("myport1", "$(DAQ)/ai2", 2, "AI","$(DAQMODE=N=1000 F=1000)")
DAQmxConfig("myport1", "$(DAQ)/ai3", 3, "AI","$(DAQMODE=N=1000 F=1000)")
#asynSetTraceMask("myport0", 0, 0x11)

## Load record instances
dbLoadRecords("db/DAQmxBaseI.vdb","DAQMX=$(MYPVPREFIX)DAQMXTEST,PORT=myport1,NELM=100")

cd "${TOP}/iocBoot/${IOC}"
iocInit

$(DAQPOSTIOCINITCMD=)
