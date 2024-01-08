#ifndef DAQMX_CONSTANTS_H
#define DAQMX_CONSTANTS_H

#ifdef __cplusplus
extern "C" {
#endif

extern int DAQmx_GetUnits(const char* units);
extern int DAQmx_GetThermocoupleType(const char* thermocoupleType);
extern int DAQmx_GetCJCSource(const char* cjcSource);
extern int DAQmx_GetAIADCTimingMode(const char* mode);
extern int DAQmx_GetAIAutoZeroMode(const char* mode);

#ifndef DAQmx_Val_Automatic
#define DAQmx_Val_Automatic 16097 /* Automatic mode for DAQmx_AI_ADCTimingMode */
#endif

#ifdef __cplusplus
}
#endif

#endif /* DAQMX_CONSTANTS_H */
