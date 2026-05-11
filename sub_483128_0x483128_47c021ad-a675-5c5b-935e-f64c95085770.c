// ============================================================
// 函数名称: sub_483128
// 虚拟地址: 0x483128
// WARP GUID: 47c021ad-a675-5c5b-935e-f64c95085770
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_404054, sub_40422c, sub_402c90, sub_483950, sub_4054f4, sub_40423c, sub_483f98, sub_40401c, sub_403df8, sub_40287c, sub_402bdc, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_47d208, sub_4dd1e0, sub_48341c, sub_4dd1d7
// ============================================================

void** __convention("regparm")sub_483128(void* arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3, float arg4, int32_t arg5, char arg6, char arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_178 = ebx
    int32_t esi
    int32_t var_17c = esi
    int32_t edi
    int32_t var_180 = edi
    int32_t var_174 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
    void* arg_14
    sub_40422c(arg_14)
    void* arg_8
    sub_40422c(arg_8)
    int32_t* var_184 = &var_4
    int32_t (* var_188)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp0 = *(arg1 + 0xab4)
    *(arg1 + 0xab4) += 1
    
    if (add_overflow(temp0, 1))
        sub_403010()
        noreturn
    
    sub_483950(arg1, *(arg1 + 0xab4))
    int32_t eax_3 = *(arg1 + 0xab4)
    
    if (add_overflow(eax_3, 1))
        sub_403010()
        noreturn
    
    int32_t var_190 = eax_3 + 1
    sub_4054f4()
    bool o_2 = unimplemented  {imul eax, eax, 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    char* ebx_1 = *(arg1 + 0xab0) + *(arg1 + 0xab4) * 0x81c0
    
    if (arg_8 != 0)
        *(ebx_1 + 0x81a2) = 0
    
    *ebx_1 = 1
    ebx_1[1] = 0
    *(ebx_1 + 0x8130) = 0
    
    if (arg2 + 0x8000 u> 0xffff)
        sub_403008()
        noreturn
    
    *(ebx_1 + 2) = (arg2 + 0x8000).w - 0x8000
    
    if (&var_8[0x1000] u> 0xffff)
        sub_403008()
        noreturn
    
    *(ebx_1 + 4) = (&var_8[0x1000]).w - 0x8000
    
    if (arg9 + 0x8000 u> 0xffff)
        sub_403008()
        noreturn
    
    *(ebx_1 + 6) = (arg9 + 0x8000).w - 0x8000
    
    if (arg8 + 0x8000 u> 0xffff)
        sub_403008()
        noreturn
    
    *(ebx_1 + 8) = (arg8 + 0x8000).w - 0x8000
    __builtin_memcpy(&ebx_1[0xc], arg1 + 0x1078, 0x10)
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    *(ebx_1 + 0x8132) = 0
    *(ebx_1 + 0x8134) = 0
    *(ebx_1 + 0x8136) = 0
    ebx_1[0x8138] = 0
    int16_t eax_16
    eax_16.b = arg7
    ebx_1[0x8139] = eax_16.b
    *(ebx_1 + 0x813a) = 0xffff
    char var_108[0x100]
    sub_404054(&var_108, arg_14, 0xff)
    sub_402bdc(&ebx_1[0x813c], &var_108, 0x64)
    ebx_1[0x81a4] = arg6
    
    if (arg5 + 0x8000 u> 0xffff)
        sub_403008()
        noreturn
    
    *(ebx_1 + 0x81a6) = (arg5 + 0x8000).w - 0x8000
    ebx_1[0x81a5] = 0
    
    if (ebx_1[0x813c] != 0)
        int32_t ecx_2
        ecx_2.b = ebx_1[0x813c]
        sub_402c90(&ebx_1[0x813c], 0x4833f4, ecx_2 + 1)
        
        if (ecx_2 != 0xffffffff)
            char var_170
            sub_40287c(1, 1, &ebx_1[0x813c], &var_170)
            esp = &ExceptionList
            int32_t ecx_4
            ecx_4.b = var_170
            int32_t ecx_6 = sub_402c90(&var_170, 0x4833f8, ecx_4 + 1)
            
            if (ecx_4 != 0xffffffff)
                int32_t eax_26
                int32_t edx_5
                eax_26, edx_5 = sub_402b4c((fconvert.t(arg4) - fconvert.t(1f)) * fconvert.t(20f))
                
                if (eax_26 s>> 0x1f != edx_5)
                    sub_403008()
                    noreturn
                
                sub_40401c(ecx_6, &ebx_1[0x813c])
                char* eax_30 = sub_40423c(var_174)
                long double x87_r0
                sub_483f98(arg1, 1, nullptr, x87_r0, fconvert.s(data_483404 * fconvert.t(arg4)), 1f, 
                    4.48415509e-44f, sx.d(*(ebx_1 + 6)), eax_30, eax_26)
                esp = &var_8
    
    *(arg1 + 0xab4)
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4833e9
    sub_403df8(&var_174)
    sub_403df8(&arg_8)
    void** result = &arg_14
    sub_403df8(result)
    return result
}
