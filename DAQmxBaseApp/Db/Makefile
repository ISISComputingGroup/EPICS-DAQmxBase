TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE

#----------------------------------------------------
#  Optimization of db files using dbst (DEFAULT: NO)
#DB_OPT = YES

#----------------------------------------------------
# In a Diamond Support Module, install
# templates like this
#
#DB += motor.template
#DB += basic_motor.template

#----------------------------------------------------
# In a Diamond IOC Application, build db files from
# template files like this
#
DB += DAQmxBase.vdb
DB += DAQmxBaseControl.vdb
DB += DAQmxBaseI.vdb
DB += DAQmxBaseO.vdb
DB += DAQmxBaseScan.vdb
DB += DAQmxBaseDigOut.vdb
DB += DAQmxBaseDigOutLine.vdb
DB += DAQmxBaseDigIn.vdb
DB += DAQmxBaseDigInLine.vdb
DB += DAQmxBaseDigInDirect.vdb
DB += DAQmxBaseCnt.vdb
DB += DAQmxBaseIOC.vdb
#DB += BL06I-MO-IOC-01_sim.db


#USES_TEMPLATE += $(MOTOR)/db/motor.template
#USES_TEMPLATE += $(MOTOR)/db/basic_motor.template

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
