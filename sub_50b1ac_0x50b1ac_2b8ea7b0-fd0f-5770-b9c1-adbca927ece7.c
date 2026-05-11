// ============================================================
// 函数名称: sub_50b1ac
// 虚拟地址: 0x50b1ac
// WARP GUID: 2b8ea7b0-fd0f-5770-b9c1-adbca927ece7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_47ab08, sub_40422c, sub_50c5e0, sub_50d318, sub_47b304, sub_40401c, sub_403010, sub_402bdc, sub_403e1c, sub_403df8, sub_404280, sub_408e80
// [被调用的父级函数]: sub_514ef8
// ============================================================

void** __convention("regparm")sub_50b1ac(void* arg1, int32_t arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_2 = 0x29
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_2
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg3
    *(esp_2 - 0x10) = arg4
    void* var_8 = arg1
    sub_40422c(var_8)
    void* esi = data_530454
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    void* esp_9 = esp_2 - 0x1c
    fsbase->NtTib.ExceptionList = esp_9
    
    if (sub_50d318(*esi) == 0 || *(*esi + 0x344) != 0)
        char* var_24
        *(esp_9 - 4) = &var_24
        sub_404280(1, 1, var_8)
        *(esp_9 - 4) = sub_408e80(var_24)
        sub_47b304(*data_53054c, *data_530438, *data_530304)
        char* var_28
        *(esp_9 - 4) = &var_28
        sub_404280(1, 2, var_8)
        *(esp_9 - 4) = sub_408e80(var_28)
        sub_47b304(*data_53084c, *data_530438, *data_530304)
        char* var_2c
        *(esp_9 - 4) = &var_2c
        sub_404280(1, 3, var_8)
        *(esp_9 - 4) = sub_408e80(var_2c)
        sub_47b304(*data_52ffe4, *data_530438, *data_530304)
        char* var_30
        *(esp_9 - 4) = &var_30
        sub_404280(1, 4, var_8)
        *(esp_9 - 4) = sub_408e80(var_30)
        sub_47b304(*data_5309f8, *data_530438, *data_530304)
        char* var_34
        *(esp_9 - 4) = &var_34
        sub_404280(1, 5, var_8)
        void* esp_26
        *esp_26 = sub_408e80(var_34)
        sub_47b304(*data_530164, *data_530438, *data_530304)
        char* var_38
        *esp_26 = &var_38
        sub_404280(1, 6, var_8)
        *esp_26 = sub_408e80(var_38)
        sub_47b304(*data_530424, *data_530438, *data_530304)
        char* var_3c
        *esp_26 = &var_3c
        sub_404280(1, 7, var_8)
        *esp_26 = sub_408e80(var_3c)
        sub_47b304(*data_5309f0, *data_530438, *data_530304)
        esp_9 = esp_26 + 4
    
    int32_t i_1 = 1
    void* var_20 = data_5304d8
    char* var_48
    
    do
        char* var_40
        *(esp_9 - 4) = &var_40
        
        if (add_overflow(i_1, 0xffffffff))
            sub_403010()
            noreturn
        
        int32_t edi = (i_1 - 1) * 3
        bool o_2 = unimplemented  {imul edi, eax, 0x3}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (add_overflow(edi, 7))
            sub_403010()
            noreturn
        
        if (add_overflow(edi + 7, 1))
            sub_403010()
            noreturn
        
        sub_404280(1, edi + 8, var_8)
        int32_t eax_44 = sub_408e80(var_40)
        char* var_44
        *(esp_9 - 4) = &var_44
        
        if (add_overflow(edi + 7, 2))
            sub_403010()
            noreturn
        
        sub_404280(1, edi + 9, var_8)
        int32_t eax_47 = sub_408e80(var_44)
        *(esp_9 - 4) = &var_48
        
        if (add_overflow(edi + 7, 3))
            sub_403010()
            noreturn
        
        sub_404280(1, edi + 0xa, var_8)
        int32_t eax_50 = sub_408e80(var_48)
        char var_19
        
        switch (eax_44)
            case 1
                var_19 = 0
            case 2
                var_19 = 1
            case 3
                var_19 = 2
            case 4
                var_19 = 3
            case 5
                var_19 = 5
            case 6
                var_19 = 4
        
        int32_t edi_2 = i_1 * 0xe9
        bool o_7 = unimplemented  {imul edi, ebx, 0xe9}
        
        if (o_7)
            sub_403010()
            noreturn
        
        if (*(*esi + (edi_2 << 2) - 0x50) == 1 || var_19 == 1)
            *(*esi + (edi_2 << 2) - 0x50) = var_19
        else if (sub_50d318(*esi) == 0 || *(*esi + 0x344) != 0)
            *(*esi + (edi_2 << 2) - 0x50) = var_19
        
        if (*(*esi + (edi_2 << 2) - 0x50) != 1)
            *(*esi + (edi_2 << 2) + 0x185) = 0
        
        if (sub_50d318(*esi) == 0 || *(*esi + 0x344) != 0)
            *(esp_9 - 4) = eax_47
            sub_47b304(*var_20, *data_530438, *data_530304)
        
        bool o_8 = unimplemented  {imul eax, ebx, 0xe9}
        
        if (o_8)
            sub_403010()
            noreturn
        
        *(*esi + i_1 * 0x3a4 + 0x185) = eax_50 == 1
        i_1 += 1
        var_20 += 4
    while (i_1 != 9)
    
    *(*esi + 0x348) = 8
    sub_50c5e0(0, 0)
    int32_t var_150
    
    if (sub_50d318(*esi) == 0 || *(*esi + 0x344) != 0)
    label_50b572:
        void* var_14c
        *(esp_9 - 4) = &var_14c
        sub_404280(0x21, 0x20, var_8)
        char var_148[0x100]
        sub_404054(&var_148, var_14c, 0xff)
        sub_40401c(sub_402bdc(*esi + 0x10, &var_148, 0x20), *esi + 0x10)
        *(esp_9 - 4) = var_150
        int80_t x87_r0
        sub_47ab08(*data_530304, *data_530438, 1, x87_r0)
        esp_9 += 0x20
    else if (*(*esi + 0x350) != arg2 && *(*esi + 0x10) == 0)
        goto label_50b572
    
    i_1.b = 1
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_50b619
    sub_403e1c(&var_150, 2)
    sub_403e1c(&var_48, 0xa)
    void** result = &var_8
    sub_403df8(result)
    return result
}
