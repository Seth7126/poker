// ============================================================
// 函数名称: sub_441b0c
// 虚拟地址: 0x441b0c
// WARP GUID: cb149806-1d2b-5f9b-90a0-cd496e940478
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_440f88, sub_403428, sub_4033d0, sub_42d8f4
// [被调用的父级函数]: sub_44231c, sub_4425d8
// ============================================================

int32_t* __convention("regparm")sub_441b0c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp_1 = &var_8
    
    if (arg2.b != 0)
        void var_18
        esp_1 = &var_18
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_42d8f4(arg1, 0)
    *(esp_1 - 4) = 0
    int32_t edx
    edx.b = 1
    int32_t eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_440f88(arg1, edx, 0x43e568)
    arg1[0x7c] = eax_2
    *(esp_1 - 4) = 1
    edx_1.b = 1
    void* esp_5 = esp_1
    arg1[0x7d] = sub_440f88(arg1, edx_1, 0x43e568)
    arg1[0x7e].b = 1
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_5
        esp_5 += 0x10
    
    *esp_5
    *(esp_5 + 4)
    return arg1
}
