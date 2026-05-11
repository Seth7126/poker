// ============================================================
// 函数名称: sub_4cf404
// 虚拟地址: 0x4cf404
// WARP GUID: 46f71306-ac64-5174-b5f0-e69797521219
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b3c, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_4d41ec, sub_4f2e8c
// ============================================================

long double __convention("regparm")sub_4cf404(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t edx
    eax, edx = sub_402b4c(sub_402b3c(float.t(arg1) / fconvert.t(10f)) * fconvert.t(2000f))
    int32_t eax_1 = arg1 * 0xa115
    bool o = unimplemented  {imul eax, ebx, 0xa115}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t edx_1 = arg2 * 0x5a75
    bool o_1 = unimplemented  {imul edx, esi, 0x5a75}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t eax_2 = eax_1 + edx_1
    
    if (add_overflow(eax_1, edx_1))
        sub_403010()
        noreturn
    
    int32_t edx_2 = arg3 * 0x1433
    bool o_3 = unimplemented  {imul edx, edi, 0x1433}
    
    if (o_3)
        sub_403010()
        noreturn
    
    if (add_overflow(eax_2, edx_2))
        sub_403010()
        noreturn
    
    int32_t eax_4
    int32_t edx_3
    edx_3:eax_4 = sx.q(eax_2 + edx_2)
    bool o_5 = unimplemented  {adc edx, dword [esp+0x4]}
    
    if (o_5)
        sub_403010()
        noreturn
    
    int32_t eax_6
    int32_t edx_5
    eax_6, edx_5 = sub_402b4c(sub_402b3c(float.t(arg2) / fconvert.t(10f)) * fconvert.t(4000f))
    bool o_6 = unimplemented  {adc edx, dword [esp+0x4]}
    
    if (not(o_6))
        return fconvert.t(fconvert.s(float.t(mods.dp.d(sx.q(eax_6 + eax_4 + eax), 0x4d))
            / fconvert.t(77f)))
    
    sub_403010()
    noreturn
}
