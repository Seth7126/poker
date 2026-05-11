// ============================================================
// 函数名称: sub_40c310
// 虚拟地址: 0x40c310
// WARP GUID: 964ca87b-d172-5165-9168-30a1fc7ecaed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetThreadLocale
// [内部子函数调用]: sub_40aff4, sub_403e90, sub_40ad6c, sub_408ebc, sub_404138, sub_40ad08, sub_403e4c, sub_40c258, sub_40af44, sub_403df8, sub_40acbc, sub_403e1c
// [被调用的父级函数]: sub_40da04, sub_448590
// ============================================================

int32_tsub_40c310()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_1 = 8
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = &var_4
    *(esp_2 - 0xc) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x10) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x10
    sub_40c258()
    void* ebp_1 = sub_40ad6c()
    
    if (data_5315bc != 0)
        ebp_1 = sub_40af44()
    
    uint32_t eax = GetThreadLocale()
    *(esp_2 - 0x14) = ebp_1 - 0x10
    sub_40acbc(0, 0x14, eax)
    sub_403e4c(&data_5314f4, *(ebp_1 - 0x10))
    *(esp_2 - 0x14) = ebp_1 - 0x14
    int32_t ecx_2 = sub_40acbc(U"0", 0x1b, eax)
    *(ebp_1 - 0x14)
    data_5314f8 = sub_408ebc(ecx_2, 0)
    *(esp_2 - 0x14) = ebp_1 - 0x18
    int32_t ecx_4 = sub_40acbc(U"0", 0x1c, eax)
    *(ebp_1 - 0x18)
    char eax_10
    int32_t ecx_5
    eax_10, ecx_5 = sub_408ebc(ecx_4, 0)
    data_5314f9 = eax_10
    ecx_5.b = 0x2c
    char eax_12
    int32_t ecx_6
    eax_12, ecx_6 = sub_40ad08(eax, 0xf, ecx_5)
    data_5314fa = eax_12
    ecx_6.b = 0x2e
    data_5314fb = sub_40ad08(eax, 0xe, ecx_6)
    *(esp_2 - 0x14) = ebp_1 - 0x1c
    int32_t ecx_8 = sub_40acbc(U"0", 0x19, eax)
    *(ebp_1 - 0x1c)
    char eax_18
    int32_t ecx_9
    eax_18, ecx_9 = sub_408ebc(ecx_8, 0)
    data_5314fc = eax_18
    ecx_9.b = 0x2f
    data_5314fd = sub_40ad08(eax, 0x1d, ecx_9)
    *(esp_2 - 0x14) = ebp_1 - 0x24
    sub_40acbc("m/d/yy", 0x1f, eax)
    void* ebp_2 = sub_40aff4(*(ebp_1 - 0x24), ebp_1 - 0x20)
    sub_403e4c(&data_531500, *(ebp_2 - 0x20))
    *(esp_2 - 0x14) = ebp_2 - 0x2c
    sub_40acbc("mmmm d, yyyy", 0x20, eax)
    void* ebp_3 = sub_40aff4(*(ebp_2 - 0x2c), ebp_2 - 0x28)
    sub_403e4c(&data_531504, *(ebp_3 - 0x28))
    int32_t ecx_12
    ecx_12.b = 0x3a
    data_531508 = sub_40ad08(eax, 0x1e, ecx_12)
    *(esp_2 - 0x14) = ebp_3 - 0x30
    sub_40acbc("am", 0x28, eax)
    sub_403e4c(&data_53150c, *(ebp_3 - 0x30))
    void* esp_19
    *esp_19 = ebp_3 - 0x34
    sub_40acbc("pm", 0x29, eax)
    sub_403e4c(&data_531510, *(ebp_3 - 0x34))
    sub_403df8(ebp_3 - 8)
    sub_403df8(ebp_3 - 0xc)
    *esp_19 = ebp_3 - 0x38
    int32_t ecx_16 = sub_40acbc(U"0", 0x25, eax)
    *(ebp_3 - 0x38)
    
    if (sub_408ebc(ecx_16, 0) != 0)
        sub_403e90(ebp_3 - 4, 0x40c648)
    else
        sub_403e90(ebp_3 - 4, 0x40c63c)
    
    *esp_19 = ebp_3 - 0x3c
    int32_t ecx_18 = sub_40acbc(U"0", 0x23, eax)
    void* esp_26 = esp_19 + 4
    *(ebp_3 - 0x3c)
    
    if (sub_408ebc(ecx_18, 0) == 0)
        *(esp_26 - 4) = ebp_3 - 0x40
        int32_t ecx_20 = sub_40acbc(U"0", 0x1005, eax)
        *(ebp_3 - 0x40)
        
        if (sub_408ebc(ecx_20, 0) != 0)
            sub_403e90(ebp_3 - 8, "AMPM ")
        else
            sub_403e90(ebp_3 - 0xc, " AMPM")
    
    *(esp_26 - 4) = *(ebp_3 - 8)
    *(esp_26 - 8) = *(ebp_3 - 4)
    *(esp_26 - 0xc) = &data_40c674
    *(esp_26 - 0x10) = *(ebp_3 - 0xc)
    sub_404138(&data_531514, 4)
    *(esp_26 - 4) = *(ebp_3 - 8)
    *(esp_26 - 8) = *(ebp_3 - 4)
    *(esp_26 - 0xc) = ":mm:ss"
    *(esp_26 - 0x10) = *(ebp_3 - 0xc)
    sub_404138(&data_531518, 4)
    int32_t ecx_21
    ecx_21.b = 0x2c
    data_5315f8 = sub_40ad08(eax, 0xc, ecx_21)
    *(esp_26 + 8)
    fsbase->NtTib.ExceptionList = *esp_26
    *(esp_26 + 8) = sub_40c5e2
    return sub_403e1c(ebp_3 - 0x40, 0x10)
}
