#define S_FUNCTION_LEVEL    2
#define S_FUNCTION_NAME     issue_warning
#include "simstruc.h"
#ifndef MATLAB_MEX_FILE
# include <Brtenv.h>
# include <DsFlRecUSB.h>
#endif

void setup(void)
{

    Int16 Ierror;
    Ierror = dsflrec_usb_initialize(DSFLREC_MODE_OVERWRITE,250);

}