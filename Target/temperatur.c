#include "temperatur.h"

static uint8_t _driverPort;

void temperatur_create(uint8_t portNo){
    _driverPort = portNo;
}

void temperatur_meassure(void)
{
}

float temperatur_getTemperatur()
{
    float temperatur = 0;
    return temperatur;
}