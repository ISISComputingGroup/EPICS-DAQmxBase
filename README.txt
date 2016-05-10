Original code from http://sourceforge.net/p/epics/svn/HEAD/tree/applications/trunk/DAQmxBase/

Local modifications to:
- Build on Windows
- Build with NI-DAQmx as well as NI-DAQmxBase (note: DAQmx is only available on Windows)

The Makefile as is will try to build separate libraries each linked against either NI-DAQmxBase and NI-DAQmx,
you probably don't want (or have) both, so comment out as appropriate.
   