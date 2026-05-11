// ============================================================
// 函数名称: sub_483958
// 虚拟地址: 0x483958
// WARP GUID: a78aa357-e419-55b4-8a2d-3daea7496ffb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_40422c, sub_40423c, sub_483f98, sub_46fd7c, sub_402b4c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_47d208, sub_471144, sub_4dd1e0, sub_4dd1d7
// ============================================================

int32_t __convention("regparm")sub_483958(void* arg1, char arg2, int32_t arg3, long double arg4 @ st0, float arg5, int32_t arg6, void* arg7, void* arg8, char arg9, float arg10, int32_t arg11, int32_t arg12)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    var_8:3.b = arg2
    float esi_1 = arg10
    sub_40422c(arg8)
    sub_40422c(arg7)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg9 == 8)
        arg9 = 0
        var_8:3.b = 0
        esi_1 = 6.16571324e-44f
        arg5 = fconvert.s(data_483d3c * fconvert.t(arg5))
    
    char* eax_4 = sub_40423c(arg8)
    
    if (add_overflow(arg11, arg6))
        sub_403010()
        noreturn
    
    if (add_overflow(arg3, neg.d(arg6)))
        sub_403010()
        noreturn
    
    int32_t esi_2 = sub_483f98(arg1, var_8:3.b, arg3 - arg6, arg4, 0x3f800000, 0.0399999991f, esi_1, 
        arg11 + arg6, eax_4, arg12)
    
    if (arg9 == 8)
        int32_t eax_9 = *(arg1 + 0x8a8)
        bool o_2 = unimplemented  {imul edx, eax, 0x1038}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (esi_2 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        int32_t edi_2 = esi_2 * 0x23
        bool o_3 = unimplemented  {imul edi, esi, 0x23}
        
        if (o_3)
            sub_403010()
            noreturn
        
        int32_t edx_4 = sx.d(*(*(arg1 + 0xab0) + eax_9 * 0x81c0 + (edi_2 << 3) - 0xf6))
        
        if (add_overflow(edx_4, 0xfffffff1))
            sub_403010()
            noreturn
        
        if (edx_4 + 0x7ff1 u> 0xffff)
            sub_403008()
            noreturn
        
        bool o_5 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_5)
            sub_403010()
            noreturn
        
        if (esi_2 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        *(*(arg1 + 0xab0) + eax_9 * 0x81c0 + (edi_2 << 3) - 0xf6) = (edx_4 + 0x7ff1).w - 0x8000
        int32_t edi_3
        ebp_1, edi_3 = sub_46fd7c(arg1, arg8)
        int32_t eax_13
        int32_t edx_11
        eax_13, edx_11 = sub_402b4c(arg4 * fconvert.t(11.5f) * fconvert.t(ebp_1[2]) + fconvert.t(83f))
        
        if (eax_13 s>> 0x1f != edx_11)
            sub_403008()
            noreturn
        
        bool o_6 = unimplemented  {imul edx, edx, 0x1038}
        
        if (o_6)
            sub_403010()
            noreturn
        
        if (esi_2 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        *(*(arg1 + 0xab0) + *(arg1 + 0x8a8) * 0x81c0 + (edi_3 << 3) - 0x9c) = eax_13
        int32_t eax_16 = *(arg1 + 0x8a8)
        bool o_7 = unimplemented  {imul edx, eax, 0x1038}
        
        if (o_7)
            sub_403010()
            noreturn
        
        if (esi_2 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        if (*(*(arg1 + 0xab0) + eax_16 * 0x81c0 + (edi_3 << 3) - 0x9c) s<= 0x8c)
            bool o_8 = unimplemented  {imul eax, eax, 0x1038}
            
            if (o_8)
                sub_403010()
                noreturn
            
            if (esi_2 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            *(*(arg1 + 0xab0) + eax_16 * 0x81c0 + (edi_3 << 3) - 0x9c) = 0x8c
    
    bool o_9 = unimplemented  {imul edx, edx, 0x1038}
    
    if (o_9)
        sub_403010()
        noreturn
    
    if (esi_2 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t eax_19 = esi_2 * 0x23
    bool o_10 = unimplemented  {imul eax, esi, 0x23}
    
    if (o_10)
        sub_403010()
        noreturn
    
    int32_t ecx_7 = ebp_1[6] + 0x8000
    
    if (ecx_7 u> 0xffff)
        sub_403008()
        noreturn
    
    *(*(arg1 + 0xab0) + *(arg1 + 0x8a8) * 0x81c0 + (eax_19 << 3) - 0x80) = ecx_7.w - 0x8000
    bool o_11 = unimplemented  {imul edx, edx, 0x1038}
    
    if (o_11)
        sub_403010()
        noreturn
    
    if (esi_2 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t ecx_11 = ebp_1[5] + 0x8000
    
    if (ecx_11 u> 0xffff)
        sub_403008()
        noreturn
    
    *(*(arg1 + 0xab0) + *(arg1 + 0x8a8) * 0x81c0 + (eax_19 << 3) - 0x82) = ecx_11.w - 0x8000
    bool o_12 = unimplemented  {imul edx, edx, 0x1038}
    
    if (o_12)
        sub_403010()
        noreturn
    
    if (esi_2 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t ecx_15 = ebp_1[4] + 0x8000
    
    if (ecx_15 u> 0xffff)
        sub_403008()
        noreturn
    
    *(*(arg1 + 0xab0) + *(arg1 + 0x8a8) * 0x81c0 + (eax_19 << 3) - 0x86) = ecx_15.w - 0x8000
    bool o_13 = unimplemented  {imul edx, edx, 0x1038}
    
    if (o_13)
        sub_403010()
        noreturn
    
    if (esi_2 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    *(*(arg1 + 0xab0) + *(arg1 + 0x8a8) * 0x81c0 + (eax_19 << 3) - 0x74) = ebp_1[2]
    bool o_14 = unimplemented  {imul edx, edx, 0x1038}
    
    if (o_14)
        sub_403010()
        noreturn
    
    if (esi_2 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t ecx_19
    ecx_19.b = ebp_1[9].b
    *(*(arg1 + 0xab0) + *(arg1 + 0x8a8) * 0x81c0 + (eax_19 << 3) - 8) = ecx_19.b
    bool o_15 = unimplemented  {imul edx, edx, 0x1038}
    
    if (o_15)
        sub_403010()
        noreturn
    
    if (esi_2 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t ecx_22 = ebp_1[3] + 0x8000
    
    if (ecx_22 u> 0xffff)
        sub_403008()
        noreturn
    
    *(*(arg1 + 0xab0) + *(arg1 + 0x8a8) * 0x81c0 + (eax_19 << 3) - 0x84) = ecx_22.w - 0x8000
    
    if (ebp_1[9].b == 9)
        unimplemented  {fild st0, dword [ebp+0x18]}
        unimplemented  {fdiv st0, dword [0x483d50]}
        bool o_16 = unimplemented  {imul edx, edx, 0x1038}
        
        if (o_16)
            sub_403010()
            noreturn
        
        if (esi_2 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        *(*(arg1 + 0xab0) + *(arg1 + 0x8a8) * 0x81c0 + (eax_19 << 3) - 0x90) =
            fconvert.s(unimplemented  {fstp dword [edx+eax*8-0x90], st0})
        unimplemented  {fstp dword [edx+eax*8-0x90], st0}
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_483d31
    return sub_403e1c(&ebp_1[7], 2)
}
