#!../../bin/windows-x64-debug/DAQmx

## You may have to change DAQmx to something else
## everywhere it appears in this file

# Increase this if you get <<TRUNCATED>> or discarded messages warnings in your errlog output
errlogInit2(65536, 256)

< envPaths

cd "${TOP}"

## Register all support components
dbLoadDatabase "dbd/DAQmx.dbd"
DAQmx_registerRecordDeviceDriver pdbbase

## NI cDAQ-9181 with NI 9375 card

epicsEnvSet("DAQ","cDAQ1Mod1")
#epicsEnvSet("DAQ","cDAQ-R3G39Mod1")

## port0 is input
DAQmxConfig("myport0", "$(DAQ)/port0/line0:3", 0, "BI","OneShot N=1 F=0")
#asynSetTraceMask("myport0", 0, 0x11)

## port1 is output
DAQmxConfig("myport1", "$(DAQ)/port1/line0:3", 0, "BO","N=1 F=0")
asynSetTraceMask("myport1", 0,0x11)

## Load record instances
dbLoadRecords("db/DAQmxBaseDigIn.vdb","DAQMX=test,PORT=myport0,CHAN=0")
dbLoadRecords("db/DAQmxBaseControl.vdb","DAQMX=test,PORT=myport0,CHAN=0")

dbLoadRecords("db/DAQmxBaseDigOut.vdb","DAQMX=test,PORT=myport1,CHAN=0")
dbLoadRecords("db/DAQmxBaseControl.vdb","DAQMX=test,PORT=myport1,CHAN=0")

cd "${TOP}/iocBoot/${IOC}"
iocInit
