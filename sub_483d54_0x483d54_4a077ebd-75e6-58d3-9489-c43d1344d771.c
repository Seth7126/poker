// ============================================================
// 函数名称: sub_483d54
// 虚拟地址: 0x483d54
// WARP GUID: 4a077ebd-75e6-58d3-9489-c43d1344d771
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_47ab08, sub_40422c, sub_402c90, sub_403df8, sub_403010
// [被调用的父级函数]: sub_483f98, sub_47d208, sub_4dd1e0, sub_4dd1d7
// ============================================================

void** __convention("regparm")sub_483d54(void* arg1, char arg2, int32_t arg3, char arg4, int32_t arg5, int32_t arg6, int32_t arg7)
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
    void* arg_4
    sub_40422c(arg_4)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    void* eax_3 = *(arg1 + 0xab0) + *(arg1 + 0x8a8) * 0x81c0
    int16_t temp1 = *(eax_3 + 0x8130)
    *(eax_3 + 0x8130) += 1
    
    if (add_overflow(temp1, 1))
        sub_403010()
        noreturn
    
    int32_t edx
    edx.w = *(eax_3 + 0x8130)
    int32_t var_c = sx.d(edx.w)
    
    if (sx.d(edx.w) - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_2 = unimplemented  {imul edx, edx, 0x23}
    
    if (o_2)
        sub_403010()
        noreturn
    
    int32_t edx_4
    edx_4.b = arg2
    *(eax_3 + sx.d(edx.w) * 0x118 - 0xf8) = edx_4.b
    
    if (arg3 + 0x8000 u> 0xffff)
        sub_403008()
        noreturn
    
    *(eax_3 + sx.d(edx.w) * 0x118 - 0xf6) = (arg3 + 0x8000).w - 0x8000
    
    if (arg7 + 0x8000 u> 0xffff)
        sub_403008()
        noreturn
    
    *(eax_3 + sx.d(edx.w) * 0x118 - 0xf4) = (arg7 + 0x8000).w - 0x8000
    *(eax_3 + sx.d(edx.w) * 0x118 - 0xf1) = 1
    *(eax_3 + sx.d(edx.w) * 0x118 - 0xf2) = 1
    long double x87_r0
    char* ebx_2 = sub_47ab08(arg1, *(arg1 + 0x8a8), sx.d(*(eax_3 + 0x8130)), x87_r0, arg_4)
    *(ebx_2 + 0x56) = 0
    *(ebx_2 + 0xe4) = 0
    *(ebx_2 + 0xe0) = 0
    ebx_2[0xe2] = 0
    *(ebx_2 + 0xec) = 0
    ebx_2[0xda] = 0
    *(ebx_2 + 0x88) = 0
    *(ebx_2 + 0x72) = 0
    *(ebx_2 + 0x74) = 0
    *(ebx_2 + 0x76) = 0
    *(ebx_2 + 0x78) = 0
    *(ebx_2 + 0x68) = 0x3d4ccccd
    *(ebx_2 + 0x64) = 0
    ebx_2[0x71] = 0
    *(ebx_2 + 0xee) = 0
    ebx_2[0xf0] = arg4
    *(ebx_2 + 0x84) = 0x3f800000
    
    if (*ebx_2 == 0xa)
        if (arg4 == 0xc)
            *(ebx_2 + 0x5c) = 0x16
            *(ebx_2 + 0x60) = 0x16
            int32_t eax_7 = *(arg1 + 0x8c4) + 0x8000
            
            if (eax_7 u> 0xffff)
                sub_403008()
                noreturn
            
            *(ebx_2 + 0xee) = eax_7.w - 0x8000
            *(ebx_2 + 0x68) = 0x3c23d70a
        else if (arg4 != 7)
            int32_t ecx_2
            ecx_2.b = ebx_2[8]
            sub_402c90(&ebx_2[8], 0x483f8c, ecx_2 + 1)
            
            if (ecx_2 == 0xffffffff || arg4 == 2)
                *(ebx_2 + 0x5c) = arg6
                *(ebx_2 + 0x60) = arg5
                *(ebx_2 + 0x68) = 0x3c23d70a
                *(ebx_2 + 0xee) = 0xffff
            else
                *(ebx_2 + 0x5c) = 0x22
                *(ebx_2 + 0x60) = 0x22
                *(ebx_2 + 0x68) = 0x3ba3d70a
        else
            *(ebx_2 + 0x5c) = arg6
            *(ebx_2 + 0x60) = arg5
            *(ebx_2 + 0x68) = 0x38d1b717
    
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_483f81
    void** result = &arg_4
    sub_403df8(result)
    return result
}
