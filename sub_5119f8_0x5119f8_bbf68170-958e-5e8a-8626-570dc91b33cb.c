// ============================================================
// 函数名称: sub_5119f8
// 虚拟地址: 0x5119f8
// WARP GUID: bbf68170-958e-5e8a-8626-570dc91b33cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_40422c, sub_402bdc, sub_403df8, sub_403010
// [被调用的父级函数]: sub_514468, sub_514ef8
// ============================================================

void** __convention("regparm")sub_5119f8(int32_t arg1, void* arg2, int32_t arg3)
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
    void* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_11c = &var_4
    int32_t (* var_120)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + (arg3 << 2) + 0x244) - 1 u>= 2)
        *(arg1 + (arg3 << 2) + 0x244) = 0
    
    bool o = unimplemented  {imul eax, esi, 0xe9}
    
    if (o)
        sub_403010()
        noreturn
    
    void* eax_5 = arg1 + arg3 * 0x3a4 - 0x50
    
    for (int32_t i = 0; i != 5; i += 1)
        if (add_overflow(5, neg.d(i)))
            sub_403010()
            noreturn
        
        bool o_2 = unimplemented  {imul eax, eax, 0x41}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (add_overflow(5, neg.d(i)))
            sub_403010()
            noreturn
        
        bool o_4 = unimplemented  {imul edx, edi, 0x41}
        
        if (o_4)
            sub_403010()
            noreturn
        
        arg3.b = 0x40
        sub_402bdc(eax_5 + (5 - i) * 0x41 + 0x2b, eax_5 + (5 - i) * 0x41 - 0x16, arg3.b)
        *(eax_5 + ((5 - i) << 2) + 0x1b4) = *(eax_5 + ((5 - i) << 2) + 0x1b0)
    
    if (*(eax_5 + 0x1cc) s< 5)
        int32_t temp4_1 = *(eax_5 + 0x1cc)
        *(eax_5 + 0x1cc) += 1
        
        if (add_overflow(temp4_1, 1))
            sub_403010()
            noreturn
    
    *(eax_5 + 0x1b4) = 0x64
    char var_10c[0x104]
    sub_404054(&var_10c, var_8, 0xff)
    sub_402bdc(eax_5 + 0x2b, &var_10c, 0x40)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_11c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_511b00
    void** result = &var_8
    sub_403df8(result)
    return result
}
