#include "temperatur.h"

static uint8_t _driverPort;

void temperatur_create(uint8_t portNo){
    _driverPort = portNo;
}