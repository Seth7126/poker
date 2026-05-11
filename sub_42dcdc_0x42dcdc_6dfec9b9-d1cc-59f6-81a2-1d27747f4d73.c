// ============================================================
// 函数名称: sub_42dcdc
// 虚拟地址: 0x42dcdc
// WARP GUID: 6dfec9b9-d1cc-59f6-81a2-1d27747f4d73
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv
// [内部子函数调用]: sub_431bcc, sub_40fa94
// [被调用的父级函数]: sub_42e078
// ============================================================

int32_t* __convention("regparm")sub_42dcdc(int32_t* arg1, char arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* eax
    
    if (arg2 != 0)
        eax.b = arg2
        eax.b = *(eax + 0x52e748)
    
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
    TEB* fsbase
    
    if (arg2 == 0 || eax.b != *(arg1 + 0x51))
        int32_t* eax_1 = arg1
        
        if (eax_1[0x20] != 0)
            eax_1 = arg1
            
            if (eax_1[0x21] != 0)
                arg1[0xc]
                arg1[0xd]
                int32_t var_10 = arg1[0xe]
                int32_t var_14 = arg1[0xf]
                int32_t nNumerator_3
                int32_t nNumerator
                
                if (sub_431bcc(arg1[9]) == 0)
                    void* edi_1 = arg1[9]
                    sub_40fa94(*(edi_1 + 0x38), *(edi_1 + 0x3c), &nNumerator_3)
                else
                    (*(*arg1[9] + 0x40))()
                    int32_t nNumerator_4
                    nNumerator_3 = nNumerator_4
                    int32_t nNumerator_2
                    nNumerator = nNumerator_2
                
                if ((*(arg1 + 0x51) & 4) == 0)
                    if ((*(arg1 + 0x51) & 1) == 0)
                        int32_t nDenominator = arg1[0x20]
                        int32_t nNumerator_1 = nNumerator_3
                        ExceptionList = arg1[0x1e]
                        MulDiv(ExceptionList, nNumerator_1, nDenominator)
                        unimplemented  {sar eax, 0x1}
                else if ((*(arg1 + 0x51) & 1) == 0)
                    arg1[0x20] - arg1[0x1e]
                else
                    var_10 = nNumerator_3 - (arg1[0x20] - arg1[0x1e])
                
                if ((*(arg1 + 0x51) & 8) == 0)
                    if ((*(arg1 + 0x51) & 2) == 0)
                        int32_t nDenominator_1 = arg1[0x21]
                        ExceptionList = arg1[0x1f]
                        MulDiv(ExceptionList, nNumerator, nDenominator_1)
                        unimplemented  {sar eax, 0x1}
                else if ((*(arg1 + 0x51) & 2) == 0)
                    arg1[0x21] - arg1[0x1f]
                else
                    var_14 = nNumerator - (arg1[0x21] - arg1[0x1f])
                
                *(arg1 + 0x52) = 1
                int32_t* var_3c_3 = &var_4
                int32_t (* var_40_3)(void* arg1, void* arg2) = j_sub_4037f0
                ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                (*(*arg1 + 0x7c))(var_14, var_10, ExceptionList, var_40_3, var_3c_3)
                fsbase->NtTib.ExceptionList = arg1
                __return_addr = &data_42deae
                *(arg1 + 0x52) = 0
                return arg1
        
        if (arg2 == 0)
            return eax_1
    
    int32_t var_10_1 = *(*(arg3 - 4) + 8) - **(arg3 - 4)
    char temp0_1
    
    if (var_10_1 s>= 0)
        int32_t eax_56
        eax_56.b = arg2
        eax_56.b -= 3
        temp0_1 = eax_56.b
        eax_56.b -= 2
    
    if (var_10_1 s< 0 || temp0_1 u< 2)
        var_10_1 = arg1[0xe]
    
    int32_t var_14_1 = *(*(arg3 - 4) + 0xc) - *(*(arg3 - 4) + 4)
    int32_t eax_62
    
    if (var_14_1 s>= 0)
        eax_62.b = arg2
    
    if (var_14_1 s< 0 || eax_62.b - 1 u< 2)
        var_14_1 = arg1[0xf]
    
    **(arg3 - 4)
    *(*(arg3 - 4) + 4)
    void* eax_67
    eax_67.b = arg2
    char temp2 = eax_67.b
    eax_67.b -= 1
    
    if (temp2 == 1)
        void* eax_69 = *(arg3 - 4)
        *(eax_69 + 4) += var_14_1
    else
        char temp4_1 = eax_67.b
        eax_67.b -= 1
        
        if (temp4_1 == 1)
            void* eax_71 = *(arg3 - 4)
            *(eax_71 + 0xc) -= var_14_1
            *(*(arg3 - 4) + 0xc)
        else
            char temp5_1 = eax_67.b
            eax_67.b -= 1
            
            if (temp5_1 == 1)
                int32_t* eax_74 = *(arg3 - 4)
                *eax_74 += var_10_1
            else
                char temp7_1 = eax_67.b
                eax_67.b -= 1
                
                if (temp7_1 == 1)
                    void* eax_76 = *(arg3 - 4)
                    *(eax_76 + 8) -= var_10_1
                    *(*(arg3 - 4) + 8)
    
    *(arg1 + 0x52) = 1
    int32_t* var_3c_4 = &var_4
    int32_t (* var_40_4)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x7c))(var_14_1, var_10_1, ExceptionList, var_40_4, var_3c_4)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_42dfc2
    *(arg1 + 0x52) = 0
    return arg1
}
