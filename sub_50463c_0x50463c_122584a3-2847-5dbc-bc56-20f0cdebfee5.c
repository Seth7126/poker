// ============================================================
// 函数名称: sub_50463c
// 虚拟地址: 0x50463c
// WARP GUID: 122584a3-2847-5dbc-bc56-20f0cdebfee5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_506f9c
// ============================================================

int32_t __convention("regparm")sub_50463c(int32_t arg1)
{
    // 第一条实际指令: float ecx
    float ecx
    float var_8 = ecx
    bool o = unimplemented  {imul eax, ebx, 0x2345}
    
    if (o)
        sub_403010()
        noreturn
    
    void* edx_1 = data_5301b0 + arg1 * 0x8d14 - 0x8d14
    ecx.b = *(edx_1 + 0x8ccc)
    int32_t eax
    
    if (ecx.b != 0)
        long double x87_r7_1 = data_5047e4
        long double temp0_1 = fconvert.t(*(edx_1 + 0x8cd0))
        x87_r7_1 - temp0_1
        eax.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
    
    if (ecx.b == 0 || test_bit(eax:1.b, 6) || test_bit(eax:1.b, 0))
        if (ecx.b != 0)
            *(edx_1 + 0x8ccc) = 0
            __builtin_memcpy(edx_1 + 0x8980, edx_1 + 0x8998, 0x18)
        
        __builtin_memcpy(edx_1 + 0x8998, edx_1 + 0x8980, 0x18)
    else
        *(edx_1 + 0x8cd0) = fconvert.s(fconvert.t(data_7a7d8c) * fconvert.t(*(edx_1 + 0x8cf4))
            + fconvert.t(*(edx_1 + 0x8cd0)))
        long double x87_r7_5 = fconvert.t(*(edx_1 + 0x8cd0))
        long double temp1_1 = fconvert.t(1f)
        x87_r7_5 - temp1_1
        eax.w = (x87_r7_5 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax:1.b, 6)) && not(test_bit(eax:1.b, 0)))
            *(edx_1 + 0x8cd0) = 0x3f800000
        
        var_8 = fconvert.s(fconvert.t(1f) - fconvert.t(*(edx_1 + 0x8cd0)))
        *(edx_1 + 0x8998) = fconvert.s(fconvert.t(*(edx_1 + 0x8980)) * fconvert.t(var_8)
            + fconvert.t(*(edx_1 + 0x8cd8)) * fconvert.t(*(edx_1 + 0x8cd0)))
        *(edx_1 + 0x899c) = fconvert.s(fconvert.t(*(edx_1 + 0x8984)) * fconvert.t(var_8)
            + fconvert.t(*(edx_1 + 0x8cdc)) * fconvert.t(*(edx_1 + 0x8cd0)))
        *(edx_1 + 0x89a0) = fconvert.s(fconvert.t(*(edx_1 + 0x8988)) * fconvert.t(var_8)
            + fconvert.t(*(edx_1 + 0x8ce0)) * fconvert.t(*(edx_1 + 0x8cd0)))
        *(edx_1 + 0x89a4) = fconvert.s(fconvert.t(*(edx_1 + 0x898c)) * fconvert.t(var_8)
            + fconvert.t(*(edx_1 + 0x8ce4)) * fconvert.t(*(edx_1 + 0x8cd0)))
        *(edx_1 + 0x89a8) = fconvert.s(fconvert.t(*(edx_1 + 0x8990)) * fconvert.t(var_8)
            + fconvert.t(*(edx_1 + 0x8ce8)) * fconvert.t(*(edx_1 + 0x8cd0)))
        *(edx_1 + 0x89ac) = fconvert.s(fconvert.t(*(edx_1 + 0x8994)) * fconvert.t(var_8)
            + fconvert.t(*(edx_1 + 0x8cec)) * fconvert.t(*(edx_1 + 0x8cd0)))
    
    int32_t result = arg1 * 0x2345
    bool o_1 = unimplemented  {imul eax, ebx, 0x2345}
    
    if (o_1)
        sub_403010()
        noreturn
    
    __builtin_memcpy(data_5302e4 + (result << 2) - 0x394, data_5301b0 + (result << 2) - 0x394, 0x18)
    __builtin_memcpy(data_5302e4 + (result << 2) - 0x37c, data_5301b0 + (result << 2) - 0x37c, 0x18)
    return result
}
