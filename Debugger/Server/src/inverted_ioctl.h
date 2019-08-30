#pragma once

#define FILE_DEVICE_INVERTED 0xCF54

#define IOCTL_OSR_INVERT_NOTIFICATION CTL_CODE(FILE_DEVICE_INVERTED, 2049, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_OSR_INVERT_SIMULATE_EVENT_OCCURRED CTL_CODE(FILE_DEVICE_INVERTED, 2050, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_MARCUS_SEND_PID CTL_CODE(FILE_DEVICE_INVERTED, 2051, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_MARCUS_GET_DATA CTL_CODE(FILE_DEVICE_INVERTED, 2052, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_MARCUS_GET_REG CTL_CODE(FILE_DEVICE_INVERTED, 2053, METHOD_BUFFERED, FILE_ANY_ACCESS)