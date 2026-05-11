// ============================================================
// 函数名称: sub_4755b0
// 虚拟地址: 0x4755b0
// WARP GUID: 2f8a01dd-091c-51cd-ada7-19a81f025ceb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_47ab08, sub_40422c, sub_404078, sub_4836b0, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4741fc
// ============================================================

int32_t __convention("regparm")sub_4755b0(void* arg1, void* arg2, void* arg3)
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
    void* var_c = arg3
    void* ebx_1 = arg1
    sub_40422c(arg2)
    sub_40422c(var_c)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp0 = divs.dp.d(sx.q(sub_404078(arg2)), 0x2f)
    bool o = unimplemented  {imul ecx, ecx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t edx_2 = temp0 * 0x16
    bool o_1 = unimplemented  {imul edx, eax, 0x16}
    
    if (o_1)
        sub_403010()
        noreturn
    
    if (add_overflow(edx_2, 0x8c))
        sub_403010()
        noreturn
    
    if (edx_2 + 0x808c u> 0xffff)
        sub_403008()
        noreturn
    
    *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9d0) * 0x81c0 + 8) = (edx_2 + 0x808c).w - 0x8000
    int32_t ecx_2 = temp0 * 0xb
    bool o_3 = unimplemented  {imul ecx, eax, 0xb}
    
    if (o_3)
        sub_403010()
        noreturn
    
    if (add_overflow(0xe6, neg.d(ecx_2)))
        sub_403010()
        noreturn
    
    if (0xe6 - ecx_2 + 0x8000 u> 0xffff)
        sub_403008()
        noreturn
    
    bool o_5 = unimplemented  {imul ecx, ecx, 0x1038}
    
    if (o_5)
        sub_403010()
        noreturn
    
    *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9d0) * 0x81c0 + 4) = (0xe6 - ecx_2 + 0x8000).w - 0x8000
    bool o_6 = unimplemented  {imul ecx, ecx, 0x1038}
    
    if (o_6)
        sub_403010()
        noreturn
    
    int32_t esi_7 = *(ebx_1 + 0x9d4) - 1
    
    if (esi_7 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_7 = unimplemented  {imul esi, esi, 0x23}
    
    if (o_7)
        sub_403010()
        noreturn
    
    if (add_overflow(edx_2, 0x5f))
        sub_403010()
        noreturn
    
    if (edx_2 + 0x805f u> 0xffff)
        sub_403008()
        noreturn
    
    *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9d0) * 0x81c0 + (esi_7 + 1) * 0x118 - 0xf4) =
        (edx_2 + 0x805f).w - 0x8000
    long double x87_r0
    
    if (var_c != 0)
        ebx_1 = sub_47ab08(ebx_1, *(ebx_1 + 0x9d0), 1, x87_r0, var_c)
    
    void* ebx_2 = sub_47ab08(ebx_1, *(ebx_1 + 0x9d0), *(ebx_1 + 0x9d8), x87_r0, arg2)
    sub_4836b0(ebx_2, *(ebx_2 + 0x9d0))
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_475753
    return sub_403e1c(&var_c, 2)
}
