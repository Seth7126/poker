// ============================================================
// 函数名称: sub_52b2f0
// 虚拟地址: 0x52b2f0
// WARP GUID: bd8200df-e91f-549e-801e-c9e52c3ff37d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4040c4, sub_404078, sub_404138, sub_408e1c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4b9e84, sub_4bdac0, sub_4b8c38, sub_4c27e4
// ============================================================

int32_t __convention("regparm")sub_52b2f0(int32_t arg1, int32_t arg2, int32_t arg3, char** arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t var_14 = 0
    char* var_10 = nullptr
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax = arg1 * 0x64
    bool o = unimplemented  {imul eax, ecx, 0x64}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t var_8 = 0
    int32_t var_c = 0
    
    if (arg2 s> 0)
        var_8 = divs.dp.d(sx.q(eax), arg2)
    
    int32_t eax_5 = var_8 * arg2
    bool o_1 = unimplemented  {imul esi}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t ecx_2 = eax - eax_5
    
    if (add_overflow(eax, neg.d(eax_5)))
        sub_403010()
        noreturn
    
    int32_t i_1 = arg3
    
    if (i_1 s> 0)
        int32_t i
        
        do
            bool o_3 = unimplemented  {imul edx, ecx, 0xa}
            
            if (o_3)
                sub_403010()
                noreturn
            
            ecx_2 *= 0xa
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (arg2 s> 0)
        var_c = divs.dp.d(sx.q(ecx_2), arg2)
    
    sub_408e1c(var_c, &var_10)
    
    while (arg3 s> sub_404078(var_10))
        sub_4040c4(&var_10, U"0", var_10)
    
    sub_408e1c(var_8, &var_14)
    int32_t var_2c = var_14
    void* const var_30 = &data_52b3fc
    char* var_34 = var_10
    void* const var_38 = &data_52b408
    sub_404138(arg4, 4)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_52b3df
    return sub_403e1c(&var_14, 2)
}
