Original code from http://sourceforge.net/p/epics/svn/HEAD/tree/applications/trunk/DAQmxBase/

The original documentation for this module is posted at https://isiscomputinggroup.github.io/EPICS-DAQmxBase/

Local modifications to:
- Build on Windows
- Build against NI-DAQmx as well as NI-DAQmxBase

The Makefile can build separate libraries each linked against either 
DAQmx or DAQmxBase. However DAQmxBase is deprecated as full DAQmx is now
available for Linux, so it builds only against DAQmx but many of
the function namaes may still have "Base" in them for historic reasons.

NI-DAQmx is available from
https://www.ni.com/en/support/downloads/drivers/download.ni-daq-mx.html

Original example st.cmd files are in https://github.com/ISISComputingGroup/EPICS-DAQmxBase/tree/master/iocBoot/iocDAQmxBase
