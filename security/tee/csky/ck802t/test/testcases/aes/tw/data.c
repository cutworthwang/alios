/**
 * Copyright (C) 2015 The YunOS Project. All rights reserved.
 */

#include "aes_test.h"
uint8_t SrcData[] = {
0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a,
0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a,
0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 
0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 
0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 
0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 
0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 
0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, };
uint8_t DstData_Key128_Opssl_ECB_Out[] = {
0xb3, 0x4d, 0x19, 0xe5, 0x99, 0x9c, 0x03, 0x52, 0x91, 0x1e, 0x39, 0x51, 0x3c, 0x1e, 0xc9, 0x50, 
0x69, 0xcd, 0xf1, 0x2d, 0x97, 0x66, 0xcf, 0xe3, 0x52, 0x77, 0xf7, 0xa6, 0x02, 0xc3, 0x5e, 0x33, 
0xb3, 0x4d, 0x19, 0xe5, 0x99, 0x9c, 0x03, 0x52, 0x91, 0x1e, 0x39, 0x51, 0x3c, 0x1e, 0xc9, 0x50, 
0x69, 0xcd, 0xf1, 0x2d, 0x97, 0x66, 0xcf, 0xe3, 0x52, 0x77, 0xf7, 0xa6, 0x02, 0xc3, 0x5e, 0x33, 
0xb3, 0x4d, 0x19, 0xe5, 0x99, 0x9c, 0x03, 0x52, 0x91, 0x1e, 0x39, 0x51, 0x3c, 0x1e, 0xc9, 0x50, 
0x69, 0xcd, 0xf1, 0x2d, 0x97, 0x66, 0xcf, 0xe3, 0x52, 0x77, 0xf7, 0xa6, 0x02, 0xc3, 0x5e, 0x33, 
0xb3, 0x4d, 0x19, 0xe5, 0x99, 0x9c, 0x03, 0x52, 0x91, 0x1e, 0x39, 0x51, 0x3c, 0x1e, 0xc9, 0x50, 
0x69, 0xcd, 0xf1, 0x2d, 0x97, 0x66, 0xcf, 0xe3, 0x52, 0x77, 0xf7, 0xa6, 0x02, 0xc3, 0x5e, 0x33, };
uint8_t DstData_Key192_Opssl_ECB_Out[] = {
0x1e, 0x8b, 0x12, 0x4a, 0xc3, 0xdd, 0x10, 0x17, 0xc1, 0x75, 0x86, 0x8c, 0xd0, 0x49, 0x75, 0xc7, 
0x88, 0xf9, 0x3e, 0x58, 0xc5, 0xd0, 0xeb, 0x8f, 0xea, 0x98, 0xc1, 0xf6, 0x14, 0xfe, 0x65, 0x30, 
0x1e, 0x8b, 0x12, 0x4a, 0xc3, 0xdd, 0x10, 0x17, 0xc1, 0x75, 0x86, 0x8c, 0xd0, 0x49, 0x75, 0xc7, 
0x88, 0xf9, 0x3e, 0x58, 0xc5, 0xd0, 0xeb, 0x8f, 0xea, 0x98, 0xc1, 0xf6, 0x14, 0xfe, 0x65, 0x30, 
0x1e, 0x8b, 0x12, 0x4a, 0xc3, 0xdd, 0x10, 0x17, 0xc1, 0x75, 0x86, 0x8c, 0xd0, 0x49, 0x75, 0xc7, 
0x88, 0xf9, 0x3e, 0x58, 0xc5, 0xd0, 0xeb, 0x8f, 0xea, 0x98, 0xc1, 0xf6, 0x14, 0xfe, 0x65, 0x30, 
0x1e, 0x8b, 0x12, 0x4a, 0xc3, 0xdd, 0x10, 0x17, 0xc1, 0x75, 0x86, 0x8c, 0xd0, 0x49, 0x75, 0xc7, 
0x88, 0xf9, 0x3e, 0x58, 0xc5, 0xd0, 0xeb, 0x8f, 0xea, 0x98, 0xc1, 0xf6, 0x14, 0xfe, 0x65, 0x30, };
uint8_t DstData_Key256_Opssl_ECB_Out[] = {
0x6e, 0xce, 0xbd, 0xee, 0x4f, 0xfc, 0x0c, 0x00, 0x9c, 0xbc, 0x07, 0x13, 0xe0, 0x12, 0x94, 0x1f, 
0x10, 0x86, 0x93, 0x82, 0xef, 0xcf, 0x26, 0xd0, 0xc4, 0x0d, 0x71, 0x74, 0xbc, 0x72, 0x2b, 0xcf, 
0x6e, 0xce, 0xbd, 0xee, 0x4f, 0xfc, 0x0c, 0x00, 0x9c, 0xbc, 0x07, 0x13, 0xe0, 0x12, 0x94, 0x1f, 
0x10, 0x86, 0x93, 0x82, 0xef, 0xcf, 0x26, 0xd0, 0xc4, 0x0d, 0x71, 0x74, 0xbc, 0x72, 0x2b, 0xcf, 
0x6e, 0xce, 0xbd, 0xee, 0x4f, 0xfc, 0x0c, 0x00, 0x9c, 0xbc, 0x07, 0x13, 0xe0, 0x12, 0x94, 0x1f, 
0x10, 0x86, 0x93, 0x82, 0xef, 0xcf, 0x26, 0xd0, 0xc4, 0x0d, 0x71, 0x74, 0xbc, 0x72, 0x2b, 0xcf, 
0x6e, 0xce, 0xbd, 0xee, 0x4f, 0xfc, 0x0c, 0x00, 0x9c, 0xbc, 0x07, 0x13, 0xe0, 0x12, 0x94, 0x1f, 
0x10, 0x86, 0x93, 0x82, 0xef, 0xcf, 0x26, 0xd0, 0xc4, 0x0d, 0x71, 0x74, 0xbc, 0x72, 0x2b, 0xcf, };
uint8_t DstData_Key128_Opssl_CBC_Out[] = {
0x78, 0xbf, 0xd3, 0xf8, 0x79, 0xf2, 0xaf, 0x85, 0x0a, 0xfe, 0x32, 0xbf, 0x7e, 0xbe, 0x2b, 0xb0, 
0x95, 0xe4, 0xb4, 0xeb, 0xd3, 0x94, 0x03, 0x75, 0x85, 0x1c, 0xa8, 0x7f, 0x9e, 0x05, 0x5c, 0x29, 
0x19, 0x67, 0x60, 0x60, 0xa5, 0xa5, 0x40, 0xf6, 0xaf, 0x8f, 0xb5, 0x14, 0x43, 0x68, 0xa2, 0x65, 
0x33, 0x9e, 0x4c, 0x18, 0x2f, 0xc7, 0x8f, 0xd5, 0xc6, 0x13, 0x7a, 0x3d, 0x33, 0x85, 0xc5, 0x24, 
0xc8, 0xfd, 0x71, 0x9c, 0x12, 0x92, 0x17, 0x52, 0x08, 0x53, 0xaa, 0xcc, 0xd9, 0xbe, 0x3d, 0xde, 
0xaf, 0x4b, 0xcf, 0x7d, 0xd4, 0xfc, 0x90, 0x6e, 0xbc, 0x6e, 0x63, 0x92, 0x4c, 0x16, 0x58, 0xa2, 
0xa0, 0x51, 0x5a, 0x47, 0x6c, 0xb6, 0xe6, 0x3f, 0xb8, 0x81, 0x5b, 0xf6, 0x4d, 0x35, 0x9f, 0xc6, 
0x33, 0xbc, 0x7f, 0xc6, 0xb9, 0x02, 0x4f, 0x5a, 0xa6, 0x5e, 0x74, 0x00, 0xd5, 0x25, 0x98, 0xc8, };
