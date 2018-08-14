#include "enumerate.h"

#include <stdio.h>
#include <stdlib.h>

#include "MvCameraControl.h"

int MVS_WTF_enumerate() {
    MV_CC_DEVICE_INFO_LIST m_stDevList = {0};
    int nRet = MV_CC_EnumDevices(MV_USB_DEVICE, &m_stDevList);
    if(MV_OK != nRet) {
        printf("error: EnumDevices fail [%x]\n", nRet);
        exit(1);
    }
    printf("m_stDevList.nDeviceNum: %d\n", m_stDevList.nDeviceNum);
    return m_stDevList.nDeviceNum;
}
