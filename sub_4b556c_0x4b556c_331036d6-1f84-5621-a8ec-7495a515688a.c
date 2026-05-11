// ============================================================
// 函数名称: sub_4b556c
// 虚拟地址: 0x4b556c
// WARP GUID: 331036d6-1f84-5621-a8ec-7495a515688a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WNetCloseEnum, WNetEnumResourceA, WNetOpenEnumA
// [内部子函数调用]: sub_402d00, sub_403fb0, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4b566c
// ============================================================

int32_t* __convention("regparm")sub_4b556c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ esi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = arg1
    int32_t* esp_1 = &var_8
    int32_t i_2 = 4
    int32_t i
    
    do
        esp_1[-0x400] = i_2
        esp_1 = &esp_1[-0x400]
        i = i_2
        i_2 -= 1
    while (i != 1)
    int32_t entry_ebx
    esp_1[-0xb] = entry_ebx
    esp_1[-0xc] = arg4
    int32_t var_4030 = 0
    esp_1[-0xd] = &var_4
    esp_1[-0xe] = j_sub_4037f0
    TEB* fsbase
    esp_1[-0xf] = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &esp_1[-0xf]
    int32_t i_5 = 0xffffffff
    esp_1[-0x10] = &var_8
    esp_1[-0x11] = arg3
    esp_1[-0x12] = 0
    esp_1[-0x13] = 1
    esp_1[-0x14] = 5
    void* esp_14 = &esp_1[-0xf]
    
    if (WNetOpenEnumA() == 0)
        void var_402c
        sub_402d00(&var_402c, data_52fe44, 0)
        *(esp_14 - 4) = &data_52fe44
        *(esp_14 - 8) = &var_402c
        *(esp_14 - 0xc) = &i_5
        *(esp_14 - 0x10) = var_8
        WNetEnumResourceA()
        int32_t ecx = (*(*data_532edc + 0x40))()
        int32_t i_4 = i_5
        
        if (add_overflow(i_4, 0xffffffff))
            sub_403010()
            noreturn
        
        void* ebx
        
        if (i_4 - 1 s>= 0)
            int32_t i_3 = i_4
            void var_4018
            ebx = &var_4018
            int32_t i_1
            
            do
                sub_403fb0(ecx, *ebx)
                ecx = (*(*data_532edc + 0x34))()
                ebx += 0x20
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        *(esp_14 + 0x1038) = var_8
        esp_14 += 0x103c
        
        if (WNetCloseEnum() == 0)
            ebx.b = 1
    
    *(esp_14 + 8)
    fsbase->NtTib.ExceptionList = *esp_14
    *(esp_14 + 8) = sub_4b5663
    int32_t* result = &var_4030
    sub_403df8(result)
    return result
}
