// ============================================================
// 函数名称: sub_44c644
// 虚拟地址: 0x44c644
// WARP GUID: 587631b6-6718-5a49-8aa8-7da6df230c38
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateFontIndirectA, SystemParametersInfoA
// [内部子函数调用]: sub_403428, sub_4033d0, sub_418aa8, sub_4425d8
// [被调用的父级函数]: sub_44c778
// ============================================================

int32_t* __convention("regparm")sub_44c644(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ebx
    int32_t var_15c = ebx
    int32_t esi
    int32_t var_160 = esi
    int32_t* esp_1 = &var_160
    
    if (arg2.b != 0)
        void var_170
        esp_1 = &var_170
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    *(esp_1 - 4) = 0
    sub_4425d8(arg1, 0)
    int32_t var_158 = 0x154
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = &var_158
    *(esp_1 - 0xc) = 0
    *(esp_1 - 0x10) = 0x29
    void* esp_8 = esp_1
    
    if (SystemParametersInfoA() != 0)
        void var_40
        *(esp_8 - 4) = &var_40
        int32_t eax_2 = CreateFontIndirectA()
        sub_418aa8(arg1[0x16], eax_2)
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_8
        esp_8 += 0x10
    
    *esp_8
    *(esp_8 + 4)
    return arg1
}
