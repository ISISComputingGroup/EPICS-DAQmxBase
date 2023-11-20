#include <map>
#include <string>
#include <iostream>

#include <NIDAQmx.h>

#include "DAQmxConstants.h"

static int lookupItem(const std::map<std::string, int>& table, const std::string& tableName, const std::string& key) {
    auto item = table.find(key);
    if (item != table.end()) {
        return item->second;
    } else {
        std::cerr << "Cannot find item \"" << key << "\" in " << tableName << " table" << std::endl;
        std::cerr << "Valid items are: ";
        for(item = table.cbegin(); item != table.cend(); ++item) {
            std::cerr << item->first << " ";
        }
        std::cerr << std::endl;
        return -1;
    }
}

static std::map<std::string, int> g_units = {
    { "DegC", DAQmx_Val_DegC }, 
    { "DegF", DAQmx_Val_DegF },
    { "Kelvins", DAQmx_Val_Kelvins },
    { "DegR", DAQmx_Val_DegR },
    { "Volts", DAQmx_Val_Volts }
};

int DAQmx_GetUnits(const char* units)
{
    return lookupItem(g_units, "units", units);
}

static std::map<std::string, int> g_thermocoupleType = {
    { "J_Type_TC", DAQmx_Val_J_Type_TC }, 
    { "K_Type_TC", DAQmx_Val_K_Type_TC }, 
    { "N_Type_TC", DAQmx_Val_N_Type_TC }, 
    { "R_Type_TC", DAQmx_Val_R_Type_TC }, 
    { "S_Type_TC", DAQmx_Val_S_Type_TC }, 
    { "T_Type_TC", DAQmx_Val_T_Type_TC }, 
    { "B_Type_TC", DAQmx_Val_B_Type_TC }, 
    { "E_Type_TC", DAQmx_Val_E_Type_TC }
};

int DAQmx_GetThermocoupleType(const char* thermocoupleType)
{
    return lookupItem(g_thermocoupleType, "thermocouple", thermocoupleType);
}

static std::map<std::string, int> g_cjcSource = {
    { "BuiltIn", DAQmx_Val_BuiltIn }, 
    { "ConstVal", DAQmx_Val_ConstVal }, 
    { "Chan", DAQmx_Val_Chan }
};

int DAQmx_GetCJCSource(const char* cjcSource)
{
    return lookupItem(g_cjcSource, "cjcSource", cjcSource);
}

static std::map<std::string, int> g_AIADCTimingMode = {
    { "Automatic", DAQmx_Val_Automatic },
    { "HighResolution", DAQmx_Val_HighResolution }, 
    { "HighSpeed", DAQmx_Val_HighSpeed },
    { "Best50HzRejection", DAQmx_Val_Best50HzRejection },
    { "Best60HzRejection", DAQmx_Val_Best60HzRejection }
};

int DAQmx_GetAIADCTimingMode(const char* mode)
{
    return lookupItem(g_AIADCTimingMode, "AIADCTimingMode", mode);
}

static std::map<std::string, int> g_AIAutoZeroMode = {
    { "None", DAQmx_Val_None }, 
    { "Once", DAQmx_Val_Once }, 
    { "EverySample", DAQmx_Val_EverySample }
};

int DAQmx_GetAIAutoZeroMode(const char* mode)
{
    return lookupItem(g_AIAutoZeroMode, "AIAutoZeroMode", mode);
}
