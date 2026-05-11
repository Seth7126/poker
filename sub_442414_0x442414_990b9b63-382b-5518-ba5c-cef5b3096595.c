// ============================================================
// 函数名称: sub_442414
// 虚拟地址: 0x442414
// WARP GUID: 990b9b63-382b-5518-ba5c-cef5b3096595
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4033d0, sub_4102e4, sub_40b4ec, sub_403018, sub_405ae8, sub_40301c, sub_40ca2c, sub_40c9e0
// [被调用的父级函数]: sub_47d208
// ============================================================

int32_t* __convention("regparm")sub_442414(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_11c = ebx
    int32_t* esp_1 = &var_11c
    char* var_118 = nullptr
    
    if (arg2.b != 0)
        void var_12c
        esp_1 = &var_12c
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    char var_9 = arg2.b
    *(esp_1 - 4) = &var_4
    *(esp_1 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0xc
    sub_40c9e0(*data_530a10)
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0x18
    *(esp_1 - 0x1c) = 0
    (*(*arg1 + 0xcc))()
    
    if (sub_403018(arg1) == &data_43f864 || (arg1[8].b & 0x10) != 0)
        esp_1[0x47]
        fsbase->NtTib.ExceptionList = esp_1[0x45]
        esp_1[0x47] = sub_44255f
        return sub_40ca2c(*data_530a10)
    
    arg1[0xb3].b |= 1
    esp_1[0x44] = &var_4
    esp_1[0x43] = j_sub_4037f0
    esp_1[0x42] = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &esp_1[0x42]
    
    if (sub_4102e4(arg1) != 0)
        esp_1[0x44]
        fsbase->NtTib.ExceptionList = esp_1[0x42]
        esp_1[0x44] = 0x442527
        arg1[0xb3].b &= 0xfe
        return arg1
    
    void var_114
    sub_40301c(*arg1, &var_114)
    void* var_14 = &var_114
    char var_10 = 4
    esp_1[0x41] = &var_14
    esp_1[0x40] = 0
    sub_405ae8(data_530464, &var_118)
    int32_t edx_4
    edx_4.b = 1
    sub_40b4ec(0x40e924, edx_4)
    sub_403828()
    noreturn
}
