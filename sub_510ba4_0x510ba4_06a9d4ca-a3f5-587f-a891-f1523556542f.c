// ============================================================
// 函数名称: sub_510ba4
// 虚拟地址: 0x510ba4
// WARP GUID: 06a9d4ca-a3f5-587f-a891-f1523556542f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_4040c4, sub_404078, sub_51038c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4ec728, sub_4e649b
// ============================================================

void** __convention("regparm")sub_510ba4(int32_t* arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    char* var_14 = nullptr
    void* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_30 = &var_4
    int32_t (* var_34)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_3c = var_8
    sub_4040c4(&var_14, arg1[0xd], "?ACTION=GET_IP")
    sub_51038c(arg1, var_14, 4, esi, edi, arg3, 0)
    int32_t* ebx_1
    ebx_1.b = 1
    int32_t eax_7 = sub_404078(*arg3)
    int32_t eax_10
    
    if (eax_7 s>= 4)
        eax_10 = sub_404078(*arg3)
    
    if (eax_7 s< 4 || eax_10 s> 0x20)
        ebx_1 = nullptr
    else
        int32_t edi_1 = 0
        int32_t var_10_1 = 0
        int32_t i_1 = sub_404078(*arg3)
        
        if (i_1 s> 0)
            int32_t eax_14 = 1
            int32_t i
            
            do
                if (*(*arg3 + eax_14 - 1) != 0x2e)
                    int32_t edx_5
                    edx_5.b = *(*arg3 + eax_14 - 1)
                    edx_5.b -= 0x30
                    char temp0_1 = edx_5.b
                    edx_5.b -= 0xa
                    
                    if (temp0_1 u>= 0xa)
                        int32_t edx_7
                        edx_7.b = *(*arg3 + eax_14 - 1)
                        edx_7.b -= 0x41
                        char temp2_1 = edx_7.b
                        edx_7.b -= 0x1a
                        char temp4_1
                        
                        if (temp2_1 u>= 0x1a)
                            int32_t edx_9
                            edx_9.b = *(*arg3 + eax_14 - 1)
                            edx_9.b -= 0x61
                            temp4_1 = edx_9.b
                            edx_9.b -= 0x1a
                        
                        if (temp2_1 u< 0x1a || temp4_1 u< 0x1a)
                            ebx_1 = nullptr
                    else
                        int32_t temp3_1 = var_10_1
                        var_10_1 += 1
                        
                        if (add_overflow(temp3_1, 1))
                            sub_403010()
                            noreturn
                else
                    int32_t temp1_1 = edi_1
                    edi_1 += 1
                    
                    if (add_overflow(temp1_1, 1))
                        sub_403010()
                        noreturn
                
                eax_14 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (edi_1 s< 3 || edi_1 s> 0x10)
            ebx_1 = nullptr
        
        if (var_10_1 s< 3 || var_10_1 s> 0x14)
            ebx_1 = nullptr
    
    if (ebx_1.b == 0)
        sub_403df8(arg3)
    
    fsbase->NtTib.ExceptionList = var_14
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_510d14
    sub_403df8(&var_14)
    void** result = &var_8
    sub_403df8(result)
    return result
}
