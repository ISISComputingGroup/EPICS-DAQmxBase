Original code from http://sourceforge.net/p/epics/svn/HEAD/tree/applications/trunk/DAQmxBase/

The original documentation for this module is posted at https://isiscomputinggroup.github.io/EPICS-DAQmxBase/

There are some STFC ISIS specific notes on our usage of the driver at https://isiscomputinggroup.github.io/ibex_developers_manual/specific_iocs/DAQ.html

Our Local modifications were to:
- Build on Windows
- Build with NI-DAQmx as well as NI-DAQmxBase

The Makefile can build separate libraries each linked against either 
DAQmx or DAQmxBase. However DAQmxBase is deprecated as full DAQmx is now
available for Linux, so a build only against DAQmx is now done but many of
the function names still have "Base" in them for historic reasons.

NI-DAQmx library is available from
https://www.ni.com/en/support/downloads/drivers/download.ni-daq-mx.html You only need this and EPICS ASYN module to build the driver

Example st.cmd files are in https://github.com/ISISComputingGroup/EPICS-DAQmxBase/tree/master/iocBoot/iocDAQmxBase though if you find the referenced Db files have been changed too much by us check the original imported versions via https://github.com/ISISComputingGroup/EPICS-DAQmxBase/tree/vendor 
