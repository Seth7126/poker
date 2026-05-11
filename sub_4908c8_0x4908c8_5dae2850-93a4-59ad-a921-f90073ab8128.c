// ============================================================
// 函数名称: sub_4908c8
// 虚拟地址: 0x4908c8
// WARP GUID: 5dae2850-93a4-59ad-a921-f90073ab8128
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_48fa98, sub_4033d0, sub_405b40, sub_405b58
// [被调用的父级函数]: sub_51b687
// ============================================================

int32_t** __convention("regparm")sub_4908c8(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t* esp_1 = &var_24
    int32_t* var_8 = nullptr
    
    if (arg2.b != 0)
        void var_34
        esp_1 = &var_34
        arg1 = sub_4033d0(arg3, arg2)
    
    void var_18
    __builtin_memcpy(&var_18, arg3, 0x10)
    *(esp_1 - 4) = &var_4
    *(esp_1 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0xc
    void* esi_2
    
    if (sub_48fa98(&var_18, data_5301f8) == 0)
        esi_2 = &var_18
    else
        esi_2 = nullptr
    
    *(esp_1 - 0x10) = 0
    sub_405b40(&var_8)
    *(esp_1 - 0x14) = &var_8
    *(esp_1 - 0x18) = esi_2
    
    if ((*data_530a68)() == 0)
        sub_405b58(arg1 + 4, var_8)
    else
        sub_405b40(arg1 + 4)
    
    esp_1[9]
    fsbase->NtTib.ExceptionList = esp_1[7]
    esp_1[9] = sub_490964
    int32_t** result = &var_8
    sub_405b40(result)
    return result
}
