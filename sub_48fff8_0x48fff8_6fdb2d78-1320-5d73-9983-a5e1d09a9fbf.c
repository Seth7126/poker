// ============================================================
// 函数名称: sub_48fff8
// 虚拟地址: 0x48fff8
// WARP GUID: 6fdb2d78-1320-5d73-9983-a5e1d09a9fbf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_40422c, sub_48fca4, sub_403e1c, sub_48ee20
// [被调用的父级函数]: sub_490768
// ============================================================

int32_t __convention("regparm")sub_48fff8(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t* esp_1 = &var_18
    char* var_c = nullptr
    
    if (arg2.b != 0)
        void var_28
        esp_1 = &var_28
        arg1 = sub_4033d0(arg3, arg2)
    
    sub_40422c(arg3)
    *(esp_1 - 4) = &var_4
    *(esp_1 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0xc
    sub_48ee20(arg4, &var_c)
    *(esp_1 - 0x10) = var_c
    *(esp_1 - 0x14) = arg4
    void* ebp_1 = sub_48fca4(arg1, 0, arg3)
    *(esp_1 - 0xc)
    fsbase->NtTib.ExceptionList = *(esp_1 - 0x14)
    *(esp_1 - 0xc) = sub_49006f
    return sub_403e1c(ebp_1 - 8, 2)
}
