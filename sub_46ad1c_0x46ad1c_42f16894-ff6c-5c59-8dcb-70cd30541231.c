// ============================================================
// 函数名称: sub_46ad1c
// 虚拟地址: 0x46ad1c
// WARP GUID: 42f16894-ff6c-5c59-8dcb-70cd30541231
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b4c, sub_403df8, sub_40422c, sub_403010
// [被调用的父级函数]: sub_4dd1e0, sub_4dd1d7
// ============================================================

void** __convention("regparm")sub_46ad1c(void* arg1, int32_t arg2, int32_t arg3, char arg4, float arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    void* arg_c
    sub_40422c(arg_c)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul eax, esi, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    void* eax_2 = *(arg1 + 0xab0) + arg2 * 0x81c0
    *(eax_2 + 0x81a6) = arg3.w
    
    if (arg_c != 0)
        *(eax_2 + 0x81a2) = 0
        *(eax_2 + 0xa4) = arg5
        float eax_3
        eax_3.b = arg4
        *(eax_2 + 0x81a4) = eax_3.b
        int32_t eax_4 = sub_402b4c((fconvert.t(arg5) - fconvert.t(1f)) * fconvert.t(12f))
        int32_t eax_5
        int32_t edx_1
        eax_5, edx_1 = sub_402b4c(float.t(eax_4) * fconvert.t(1.5f))
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(*(eax_2 + 0x24))
        bool o_1 = unimplemented  {adc edx, dword [esp+0x4]}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(eax_2 + 0x24) = eax_7.w + eax_5.w
        int32_t edx_4 = sx.d(*(eax_2 + 0x8130))
        
        if (edx_4 s>= 2)
            int32_t i_1 = edx_4 - 1
            int32_t eax_9 = 2
            int32_t i
            
            do
                int32_t ecx = eax_9 * 0x23
                bool o_2 = unimplemented  {imul ecx, eax, 0x23}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                int32_t esi_2 = sx.d(*(eax_2 + (ecx << 3) - 0xf4))
                
                if (add_overflow(esi_2, eax_4))
                    sub_403010()
                    noreturn
                
                *(eax_2 + (ecx << 3) - 0xf4) = esi_2.w + eax_4.w
                eax_9 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_46ae1b
    void** result = &arg_c
    sub_403df8(result)
    return result
}
