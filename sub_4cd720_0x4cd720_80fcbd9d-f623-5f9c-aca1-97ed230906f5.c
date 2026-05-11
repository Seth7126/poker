// ============================================================
// 函数名称: sub_4cd720
// 虚拟地址: 0x4cd720
// WARP GUID: 80fcbd9d-f623-5f9c-aca1-97ed230906f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4c2ca0, sub_40422c, sub_52ba68, sub_4c1108, sub_404188, sub_402bdc, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4cd720(int32_t arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_110 = ebx
    int32_t esi
    int32_t var_114 = esi
    int32_t edi
    int32_t var_118 = edi
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_11c = &var_4
    int32_t (* var_120)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx_1 = *data_5301f4 + 0x20060
    char var_10c[0x104]
    sub_404054(&var_10c, var_8, 0xff)
    int32_t edi_1 = arg1 * 0x41
    bool o = unimplemented  {imul edi, esi, 0x41}
    
    if (o)
        sub_403010()
        noreturn
    
    sub_402bdc(ebx_1 + (edi_1 << 3) - 0x1b2, &var_10c, 0x96)
    *(ebx_1 + (edi_1 << 3) + 0x14) = 0
    
    if (*(data_530598 + 0x24) == 3)
        sub_4c1108()
        int32_t ebx_2 = 0
        sub_404188(var_8, "seErhoehen")
        bool o_1 = unimplemented  {imul eax, esi, 0x41}
        
        if (o_1)
            sub_403010()
            noreturn
        
        char temp2_1 = *(*data_5301f4 + arg1 * 0x208 + 0x1fea2)
        bool cond:0_1 = temp2_1 == 4
        
        if (temp2_1 != 4)
            sub_404188(var_8, "seSetzen")
            
            if (not(cond:0_1))
                sub_404188(var_8, "seErhoehen")
            
            if (not(cond:0_1) && temp2_1 != 4)
                sub_404188(var_8, "seMitgehen")
                
                if (temp2_1 != 4)
                    sub_404188(var_8, "seHalten")
                    
                    if (temp2_1 != 4)
                        sub_404188(var_8, "sePassen")
                        
                        if (temp2_1 != 4)
                            sub_404188(var_8, "seAllIn")
                            
                            if (temp2_1 == 4 && sub_4c2ca0() s> 1)
                                int32_t var_128_6 = 0
                                
                                if (add_overflow(ebx_2, 0xf))
                                    sub_403010()
                                    noreturn
                                
                                sub_52ba68("All-In", *(*data_5301f4 + 0x10020), ebx_2 + 0xf, arg1)
                                esp = &var_8
                        else
                            int32_t var_128_5 = 0
                            
                            if (add_overflow(ebx_2, 0xe))
                                sub_403010()
                                noreturn
                            
                            sub_52ba68("Passe", *(*data_5301f4 + 0x10020), ebx_2 + 0xe, arg1)
                            esp = &var_8
                    else if (sub_4c2ca0() s> 1)
                        int32_t var_128_4 = 0
                        
                        if (add_overflow(ebx_2, 0xd))
                            sub_403010()
                            noreturn
                        
                        sub_52ba68("Weiter", *(*data_5301f4 + 0x10020), ebx_2 + 0xd, arg1)
                        esp = &var_8
                else if (sub_4c2ca0() s> 1)
                    int32_t var_128_3 = 0
                    
                    if (add_overflow(ebx_2, 0xc))
                        sub_403010()
                        noreturn
                    
                    sub_52ba68("Gehe mit", *(*data_5301f4 + 0x10020), ebx_2 + 0xc, arg1)
                    esp = &var_8
            else if (sub_4c2ca0() s> 1)
                int32_t var_128_2 = 0
                
                if (add_overflow(ebx_2, 0xb))
                    sub_403010()
                    noreturn
                
                sub_52ba68("Setze", *(*data_5301f4 + 0x10020), ebx_2 + 0xb, arg1)
                esp = &var_8
        else if (sub_4c2ca0() s> 1)
            int32_t var_128_1 = 0
            
            if (add_overflow(ebx_2, 0xa))
                sub_403010()
                noreturn
            
            sub_52ba68(0x4cd9a0, *(*data_5301f4 + 0x10020), ebx_2 + 0xa, arg1)
            esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4cd977
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
