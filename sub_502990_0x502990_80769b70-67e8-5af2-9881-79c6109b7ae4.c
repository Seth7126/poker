// ============================================================
// 函数名称: sub_502990
// 虚拟地址: 0x502990
// WARP GUID: 80769b70-67e8-5af2-9881-79c6109b7ae4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d38, sub_402b4c, sub_402d20, sub_403010
// [被调用的父级函数]: sub_502898
// ============================================================

int32_t __convention("regparm")sub_502990(int32_t* arg1)
{
    // 第一条实际指令: *arg1 = 0x43be0000
    *arg1 = 0x43be0000
    bool o = unimplemented  {imul eax, edi, 0x3}
    
    if (o)
        sub_403010()
        noreturn
    
    arg1[1] = fconvert.s(float.t(0x708))
    arg1[0x12]
    bool o_1 = unimplemented  {imul eax, dword [ebx+0x48], 0x15e}
    
    if (o_1)
        sub_403010()
        noreturn
    
    arg1[2] = fconvert.s(float.t(arg1[0x12] * 0x15e) / fconvert.t(2f) + fconvert.t(-2000f))
    arg1[0xa] = fconvert.s((sub_402d38() - data_502b04) * float.t(0x258))
    arg1[0xb] = 0xc4bb8000
    arg1[0xc] = fconvert.s((sub_402d38() - fconvert.t(0.5f)) * fconvert.t(500f) * fconvert.t(0f))
    arg1[0xd] = fconvert.s((sub_402d38() - fconvert.t(0.5f)) * float.t(0x12c))
    arg1[0xe] = fconvert.s((sub_402d38() - fconvert.t(0.5f)) * float.t(0x12c))
    arg1[0xf] = fconvert.s((sub_402d38() - fconvert.t(0.5f)) * float.t(0x12c))
    int32_t eax_1 = sub_402d20(3)
    
    if (add_overflow(eax_1, 1))
        sub_403010()
        noreturn
    
    bool o_3 = unimplemented  {imul eax, eax, 0x10}
    
    if (o_3)
        sub_403010()
        noreturn
    
    void* eax_4 = data_530910 + (eax_1 + 1) * 0x80
    int32_t eax_5
    int32_t edx_1
    eax_5, edx_1 = sub_402b4c(sub_402d38() * fconvert.t(5f))
    bool o_4 = unimplemented  {adc edx, 0x0}
    
    if (o_4)
        sub_403010()
        noreturn
    
    arg1[0x10] = *(eax_4 + ((eax_5 + 1) << 2) - 0x84)
    long double st0_6 = sub_402d38()
    long double temp5 = fconvert.t(0.5f)
    st0_6 - temp5
    int32_t eax_7
    eax_7.w = (st0_6 < temp5 ? 1 : 0) << 8 | (is_unordered.t(st0_6, temp5) ? 1 : 0) << 0xa
        | (st0_6 == temp5 ? 1 : 0) << 0xe
    eax_7.b = not(test_bit(eax_7:1.b, 6)) && not(test_bit(eax_7:1.b, 0))
    arg1[6].b = eax_7.b
    arg1[7] = fconvert.s(sub_402d38())
    arg1[9] = fconvert.s(sub_402d38())
    arg1[0x13] = sub_402b4c(sub_402d38() * fconvert.t(10f))
    arg1[0x11].b = 0
    char var_5
    int32_t result
    result.b = var_5
    return result
}
