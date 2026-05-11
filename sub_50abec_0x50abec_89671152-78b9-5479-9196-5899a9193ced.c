// ============================================================
// 函数名称: sub_50abec
// 虚拟地址: 0x50abec
// WARP GUID: 89671152-78b9-5479-9196-5899a9193ced
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_408e1c, sub_404080, sub_47a9a0, sub_40401c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_5148a0, sub_514784
// ============================================================

int32_t __convention("regparm")sub_50abec(int32_t* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_2 = 7
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
    *(esp_2 - 0xc) = arg2
    *(esp_2 - 0x10) = arg3
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x1c
    sub_403df8(arg1)
    int32_t var_8
    *(esp_2 - 0x20) = &var_8
    sub_47a9a0(*data_53054c, *data_530438, *data_530304)
    char* var_18
    sub_408e1c(var_8, &var_18)
    sub_404080(arg1, var_18)
    *(esp_2 - 0x20) = &var_8
    sub_47a9a0(*data_53084c, *data_530438, *data_530304)
    char* var_1c
    sub_408e1c(var_8, &var_1c)
    sub_404080(arg1, var_1c)
    *(esp_2 - 0x20) = &var_8
    sub_47a9a0(*data_52ffe4, *data_530438, *data_530304)
    char* var_20
    sub_408e1c(var_8, &var_20)
    sub_404080(arg1, var_20)
    *(esp_2 - 0x20) = &var_8
    sub_47a9a0(*data_5309f8, *data_530438, *data_530304)
    char* var_24
    sub_408e1c(var_8, &var_24)
    sub_404080(arg1, var_24)
    *(esp_2 - 0x20) = &var_8
    sub_47a9a0(*data_530164, *data_530438, *data_530304)
    char* var_28
    sub_408e1c(var_8, &var_28)
    sub_404080(arg1, var_28)
    void* esp_18
    *esp_18 = &var_8
    sub_47a9a0(*data_530424, *data_530438, *data_530304)
    char* var_2c
    sub_408e1c(var_8, &var_2c)
    sub_404080(arg1, var_2c)
    *esp_18 = &var_8
    sub_47a9a0(*data_5309f0, *data_530438, *data_530304)
    void* esp_23 = esp_18 + 4
    char* var_30
    sub_408e1c(var_8, &var_30)
    sub_404080(arg1, var_30)
    int32_t i_1 = 1
    void* edi = data_5304d8
    int32_t ecx_25
    
    do
        var_8 = 0
        bool o_1 = unimplemented  {imul eax, esi, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t eax_29
        eax_29.b = *(*data_530454 + i_1 * 0x3a4 - 0x50)
        
        if (eax_29.b != 0)
            bool o_2 = unimplemented  {imul edx, esi, 0xe9}
            
            if (o_2)
                sub_403010()
                noreturn
            
            *data_530454
            
            if (eax_29.b != 1)
                bool o_3 = unimplemented  {imul edx, esi, 0xe9}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                *data_530454
                
                if (eax_29.b != 2)
                    bool o_4 = unimplemented  {imul edx, esi, 0xe9}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    *data_530454
                    
                    if (eax_29.b != 3)
                        bool o_5 = unimplemented  {imul edx, esi, 0xe9}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        *data_530454
                        
                        if (eax_29.b != 5)
                            bool o_6 = unimplemented  {imul edx, esi, 0xe9}
                            
                            if (o_6)
                                sub_403010()
                                noreturn
                            
                            *data_530454
                            
                            if (eax_29.b == 4)
                                var_8 = 6
                        else
                            var_8 = 5
                    else
                        var_8 = 4
                else
                    var_8 = 3
            else
                var_8 = 2
        else
            var_8 = 1
        
        int32_t eax_30 = var_8
        *(esp_23 - 4) = &var_8
        sub_47a9a0(*edi, *data_530438, *data_530304)
        int32_t eax_33 = var_8
        bool o_7 = unimplemented  {imul eax, esi, 0xe9}
        
        if (o_7)
            sub_403010()
            noreturn
        
        int32_t var_14_1
        
        if (*(*data_530454 + i_1 * 0x3a4 + 0x185) == 0)
            var_14_1 = 0
        else
            var_14_1 = 1
        
        *(esp_23 - 4) = *arg1
        int32_t var_34
        sub_408e1c(eax_30, &var_34)
        *(esp_23 - 8) = var_34
        int32_t var_38
        sub_408e1c(eax_33, &var_38)
        *(esp_23 - 0xc) = var_38
        int32_t var_3c
        sub_408e1c(var_14_1, &var_3c)
        *(esp_23 - 0x10) = var_3c
        ecx_25 = sub_404138(arg1, 4)
        esp_23 += 0x20
        i_1 += 1
        edi += 4
    while (i_1 != 9)
    
    sub_40401c(ecx_25, *data_530454 + 0x10)
    char* var_40
    sub_404080(arg1, var_40)
    *(esp_23 + 8)
    fsbase->NtTib.ExceptionList = *esp_23
    *(esp_23 + 8) = sub_50af44
    return sub_403e1c(&var_40, 0xb)
}
