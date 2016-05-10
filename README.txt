Original code from http://sourceforge.net/p/epics/svn/HEAD/tree/applications/trunk/DAQmxBase/

Local modifications to:
- Build on Windows
- Build against NI-DAQmx as well as NI-DAQmxBase

The Makefile as is will try to build separate libraries each linked against either 
NI-DAQmxBase or NI-DAQmx; you probably don't want (or have) both installed, so 
comment out as appropriate.
