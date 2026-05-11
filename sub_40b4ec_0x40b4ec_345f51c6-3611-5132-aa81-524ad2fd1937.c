// ============================================================
// 函数名称: sub_40b4ec
// 虚拟地址: 0x40b4ec
// WARP GUID: 345f51c6-3611-5132-aa81-524ad2fd1937
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_403df8, sub_403e4c, sub_409ae0
// [被调用的父级函数]: sub_410478, sub_42b260, sub_4a3b70, sub_408781, sub_411774, sub_4b2abc, sub_42eac0, sub_40b774, sub_412f00, sub_40880c, sub_42ba70, sub_442414, sub_4b526c, sub_40faf0, sub_49c50c, sub_4534e4, sub_440f08, sub_443d2c, sub_40bad8, sub_40b90c
// ============================================================

char** __convention("regparm")sub_40b4ec(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* esp_1 = &var_14
    int32_t ecx
    
    if (arg2.b != 0)
        void var_24
        esp_1 = &var_24
        arg1 = sub_4033d0(ecx, arg2)
    
    *(esp_1 - 4) = &var_4
    *(esp_1 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0xc
    *(esp_1 - 0x10) = &var_8
    sub_409ae0(arg3, arg4, ecx)
    sub_403e4c(arg1 + 4, var_8)
    *(esp_1 - 4)
    fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
    *(esp_1 - 4) = sub_40b54d
    char** result = &var_8
    sub_403df8(result)
    return result
}
