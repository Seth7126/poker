// ============================================================
// 函数名称: sub_4f1070
// 虚拟地址: 0x4f1070
// WARP GUID: ab989886-40ef-536d-9503-83b7f5bae06f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b3c, sub_402d38, sub_402b2c, sub_403010
// [被调用的父级函数]: sub_4f2e8c, sub_503538
// ============================================================

void* const __convention("regparm")sub_4f1070(int32_t arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: __builtin_memcpy(arg3, data_5301b0 + 0x60fe0, 0x58)
    __builtin_memcpy(arg3, data_5301b0 + 0x60fe0, 0x58)
    
    if (add_overflow(arg1, 0xffffffff))
        sub_403010()
        noreturn
    
    float var_c = fconvert.s(
        (float.t(arg1 - 1) / fconvert.t(-1f) - fconvert.t(0.5f)) * data_4f1408 / fconvert.t(2f)
        + data_4f1418)
    
    if (arg1 == 1)
        var_c = 1.01999998f
    
    long double x87_r7_9 = sub_402b3c(data_4f1408 * fconvert.t(var_c)) * fconvert.t(12f)
    *arg3 = fconvert.s(sub_402d38() * fconvert.t(40f) + x87_r7_9 - fconvert.t(20f))
    long double x87_r7_18 = fneg(sub_402b2c(data_4f1408 * fconvert.t(var_c))) * fconvert.t(12f)
    arg3[1] = fconvert.s(sub_402d38() * fconvert.t(40f) + x87_r7_18 - fconvert.t(20f) - fconvert.t(60f)
        + fconvert.t(100f))
    void* eax_4
    eax_4.b = *(*data_5301f4 + 4)
    char temp1 = eax_4.b
    eax_4.b -= 1
    
    if (temp1 != 1)
        eax_4.b -= 4
        char temp2_1 = eax_4.b
        eax_4.b -= 2
        
        if (temp2_1 u>= 2)
            int32_t eax_5 = arg1 * 0xa
            bool o_1 = unimplemented  {imul eax, esi, 0xa}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (add_overflow(0xffffff9c, neg.d(eax_5)))
                sub_403010()
                noreturn
            
            if (add_overflow(0xffffff9c - eax_5, 0xffffffec))
                sub_403010()
                noreturn
            
            arg3[2] = fconvert.s(float.t(0xffffff9c - eax_5 - 0x14))
    
    arg3[3] = 0
    arg3[4] = 0
    arg3[5] = fconvert.s(sub_402d38() * fconvert.t(100f) + fconvert.t(180f)
        - fconvert.t(var_c) * fconvert.t(180f) + fconvert.t(180f) - fconvert.t(70f))
    
    if (arg2 s> 1)
        bool o_4 = unimplemented  {imul eax, edi, 0x168}
        
        if (o_4)
            sub_403010()
            noreturn
        
        arg3[5] = fconvert.s(fconvert.t(arg3[5]) - float.t(arg2 * 0x168))
    
    arg3[6].b = 0
    long double st0_5 = sub_402d38()
    long double temp3 = fconvert.t(0.5f)
    st0_5 - temp3
    int32_t eax_6
    eax_6.w = (st0_5 < temp3 ? 1 : 0) << 8 | (is_unordered.t(st0_5, temp3) ? 1 : 0) << 0xa
        | (st0_5 == temp3 ? 1 : 0) << 0xe
    
    if (test_bit(eax_6:1.b, 0))
        arg3[6].b = 1
    
    arg3[8] = fconvert.s(sub_402d38())
    arg3[7] = fconvert.s(sub_402d38())
    arg3[9] = fconvert.s(sub_402d38())
    void* eax_8
    eax_8.b = *(*data_5301f4 + 4)
    eax_8.b -= 5
    char temp4 = eax_8.b
    eax_8.b -= 2
    
    if (temp4 u< 2)
        arg3[2] = fconvert.s(float.t(*(data_5300b8 + 0x298)) * fconvert.t(0.5f) + fconvert.t(-97f))
        
        if (arg1 == 1)
            arg3[1] = fconvert.s(fconvert.t(arg3[1]) - fconvert.t(10f))
        else if (arg1 == 2)
            arg3[1] = fconvert.s(fconvert.t(arg3[1]) - fconvert.t(90f))
            *arg3 = fconvert.s(fconvert.t(*arg3) - fconvert.t(140f))
        else if (arg1 == 4)
            arg3[1] = fconvert.s(fconvert.t(arg3[1]) - fconvert.t(90f))
            *arg3 = fconvert.s(fconvert.t(*arg3) + fconvert.t(140f))
        else if (arg1 == 3)
            arg3[1] = fconvert.s(fconvert.t(arg3[1]) - fconvert.t(160f))
            *arg3 = fconvert.s(fconvert.t(*arg3) + fconvert.t(0f))
        
        arg3[5] = fconvert.s(sub_402d38() * fconvert.t(90f) + fconvert.t(180f)
            - fconvert.t(var_c) * fconvert.t(180f) - fconvert.t(45f) + fconvert.t(180f)
            - fconvert.t(70f))
        
        if (arg2 s> 1)
            bool o_5 = unimplemented  {imul eax, edi, 0x168}
            
            if (o_5)
                sub_403010()
                noreturn
            
            arg3[5] = fconvert.s(fconvert.t(arg3[5]) - float.t(arg2 * 0x168))
        
        arg3[8] = 0
        arg3[7] = 0
        arg3[9] = 0
    
    void* const result
    result.b = *(*data_5301f4 + 4)
    char temp6 = result.b
    result.b -= 1
    
    if (temp6 == 1)
        arg3[2] = fconvert.s(float.t(*(data_5300b8 + 0x298)) * fconvert.t(0.5f) + fconvert.t(-97f))
        
        if (arg1 == 1)
            arg3[1] = fconvert.s(fconvert.t(arg3[1]) - fconvert.t(10f))
        else if (arg1 == 2)
            arg3[1] = fconvert.s(fconvert.t(arg3[1]) - fconvert.t(100f))
            *arg3 = fconvert.s(fconvert.t(*arg3) - fconvert.t(120f))
        else if (arg1 == 3)
            arg3[1] = fconvert.s(fconvert.t(arg3[1]) - fconvert.t(100f))
            *arg3 = fconvert.s(fconvert.t(*arg3) + fconvert.t(120f))
        
        arg3[5] = fconvert.s(sub_402d38() * fconvert.t(90f) + fconvert.t(180f)
            - fconvert.t(var_c) * fconvert.t(180f) - fconvert.t(45f) + fconvert.t(180f)
            - fconvert.t(70f))
        
        if (arg2 s> 1)
            bool o_6 = unimplemented  {imul eax, edi, 0x168}
            
            if (o_6)
                sub_403010()
                noreturn
            
            arg3[5] = fconvert.s(fconvert.t(arg3[5]) - float.t(arg2 * 0x168))
        
        arg3[8] = 0
        arg3[7] = 0
        result = nullptr
        arg3[9] = 0
    
    return result
}
