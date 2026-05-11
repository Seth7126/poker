// ============================================================
// 函数名称: sub_4b8204
// 虚拟地址: 0x4b8204
// WARP GUID: 34c48106-82d8-551a-a93c-26c003650119
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d38, sub_4b72e4, sub_402b4c, sub_4b81cc, sub_403010
// [被调用的父级函数]: sub_4b86d0
// ============================================================

int32_t __fastcallsub_4b8204(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: char var_3c
    char var_3c
    int16_t* esi_1
    int16_t* edi
    edi, esi_1 = __builtin_memcpy(&var_3c, arg1, 0x10)
    *edi = *esi_1
    char var_2a
    int16_t* esi_4
    int16_t* edi_2
    edi_2, esi_4 = __builtin_memcpy(&var_2a, arg2, 0x10)
    *edi_2 = *esi_4
    int32_t eax
    eax.b = var_2a
    int32_t eax_1
    eax_1.b = var_3c
    long double var_50 =
        sub_4b81cc(255f, fconvert.s(float.t(eax_1)), fconvert.s(float.t(eax))) * fconvert.t(3f)
    char var_29
    int32_t eax_2
    eax_2.b = var_29
    char var_3b
    int32_t eax_3
    eax_3.b = var_3b
    long double x87_r7_7 =
        sub_4b81cc(255f, fconvert.s(float.t(eax_3)), fconvert.s(float.t(eax_2))) + var_50
    char var_28
    int32_t eax_4
    eax_4.b = var_28
    char var_3a
    int32_t eax_5
    eax_5.b = var_3a
    float var_8 =
        fconvert.s(sub_4b81cc(255f, fconvert.s(float.t(eax_5)), fconvert.s(float.t(eax_4))) + x87_r7_7)
    int16_t var_26
    
    if (var_26 s> 0xc8)
        var_26 = 0xc8
    
    int16_t var_38
    
    if (var_38 s> 0xc8)
        var_38 = 0xc8
    
    int16_t var_24
    
    if (var_24 s> 0xc8)
        var_24 = 0xc8
    
    int16_t var_36
    
    if (var_36 s> 0xc8)
        var_36 = 0xc8
    
    int16_t var_22
    
    if (var_22 s> 0xc8)
        var_22 = 0xc8
    
    int16_t var_34
    
    if (var_34 s> 0xc8)
        var_34 = 0xc8
    
    if (var_26 s<= 0)
        var_26 = 0
    
    if (var_38 s<= 0)
        var_38 = 0
    
    if (var_24 s<= 0)
        var_24 = 0
    
    if (var_36 s<= 0)
        var_36 = 0
    
    if (var_22 s<= 0)
        var_22 = 0
    
    if (var_34 s<= 0)
        var_34 = 0
    
    int16_t var_1e
    
    if (var_1e s>= 0xc8)
        var_1e = 0xc8
    
    int16_t var_30
    
    if (var_30 s>= 0xc8)
        var_30 = 0xc8
    
    if (var_1e s<= 0xff38)
        var_1e = 0xff38
    
    if (var_30 s<= 0xff38)
        var_30 = 0xff38
    
    int16_t var_1c
    
    if (var_1c s>= 0xc8)
        var_1c = 0xc8
    
    int16_t var_2e
    
    if (var_2e s>= 0xc8)
        var_2e = 0xc8
    
    if (var_1c s<= 0xff38)
        var_1c = 0xff38
    
    if (var_2e s<= 0xff38)
        var_2e = 0xff38
    
    float var_40_3 =
        fconvert.s(sub_4b81cc(200f, fconvert.s(float.t(var_38)), fconvert.s(float.t(var_26))))
    var_50 = sub_4b81cc(200f, fconvert.s(float.t(var_36)), fconvert.s(float.t(var_24)))
        + fconvert.t(var_40_3)
    float var_c =
        fconvert.s(sub_4b81cc(500f, fconvert.s(float.t(var_34)), fconvert.s(float.t(var_22))) + var_50)
    char var_20
    int32_t eax_6
    eax_6.b = var_20
    char var_32
    int32_t eax_7
    eax_7.b = var_32
    float var_10 = fconvert.s(sub_4b81cc(15f, fconvert.s(float.t(eax_7)), fconvert.s(float.t(eax_6))))
    char var_1f
    int32_t eax_8
    eax_8.b = var_1f
    char var_31
    int32_t eax_9
    eax_9.b = var_31
    float var_14 = fconvert.s(sub_4b81cc(255f, fconvert.s(float.t(eax_9)), fconvert.s(float.t(eax_8))))
    var_50 = sub_4b81cc(100f, fconvert.s(float.t(var_2e)), fconvert.s(float.t(var_1c))) / fconvert.t(2f)
    float var_18 =
        fconvert.s(sub_4b81cc(100f, fconvert.s(float.t(var_30)), fconvert.s(float.t(var_1e))) + var_50)
    int32_t eax_10
    int32_t edx
    eax_10, edx = sub_402b4c(fconvert.t(1000f) * fconvert.t(var_8) * fconvert.t(var_c)
        * fconvert.t(var_10) * fconvert.t(var_14) - fconvert.t(15000f))
    int32_t eax_11
    int32_t edx_1
    eax_11, edx_1 = sub_402b4c(fconvert.t(var_18) * fconvert.t(2000f) - fconvert.t(4000f))
    bool o = unimplemented  {adc edx, dword [esp+0x4]}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t eax_13
    int32_t edx_3
    eax_13, edx_3 = sub_402b4c(fconvert.t(2000f) * fconvert.t(var_10) - fconvert.t(2000f))
    int32_t eax_15
    int32_t edx_4
    edx_4:eax_15 = sx.q(eax_11 + eax_10)
    bool o_1 = unimplemented  {adc edx, dword [esp+0x4]}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t result = eax_15 + eax_13
    
    if (sub_4b72e4(*(*data_5301f4 + 0x10020)) != 1)
        if (sub_4b72e4(*(*data_5301f4 + 0x10020)) == 3)
            return sub_402b4c((sub_402d38() * data_4b86b8 + data_4b86c4) * float.t(result))
    else
        long double st0_10 = sub_402d38()
        long double temp9_1 = fconvert.t(0.25f)
        st0_10 - temp9_1
        
        if (test_bit(
                ((st0_10 < temp9_1 ? 1 : 0) << 8 | (is_unordered.t(st0_10, temp9_1) ? 1 : 0) << 0xa
                    | (st0_10 == temp9_1 ? 1 : 0) << 0xe):1.b, 
                0))
            int32_t result_1 = result
            result += 0xf
            
            if (add_overflow(result_1, 0xf))
                sub_403010()
                noreturn
        
        long double st0_11 = sub_402d38()
        long double temp10_1 = fconvert.t(0.25f)
        st0_11 - temp10_1
        
        if (test_bit(
                ((st0_11 < temp10_1 ? 1 : 0) << 8 | (is_unordered.t(st0_11, temp10_1) ? 1 : 0) << 0xa
                    | (st0_11 == temp10_1 ? 1 : 0) << 0xe):1.b, 
                0))
            int32_t result_2 = result
            result += 0x28
            
            if (add_overflow(result_2, 0x28))
                sub_403010()
                noreturn
        
        long double st0_12 = sub_402d38()
        long double x87_r6_4 = data_4b86a0
        x87_r6_4 - st0_12
        int16_t eax_21 = (x87_r6_4 < st0_12 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, st0_12) ? 1 : 0) << 0xa | (x87_r6_4 == st0_12 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_21:1.b, 6)) && not(test_bit(eax_21:1.b, 0)))
            int32_t result_3 = result
            result += 0x64
            
            if (add_overflow(result_3, 0x64))
                sub_403010()
                noreturn
        
        long double st0_13 = sub_402d38()
        long double x87_r6_5 = data_4b86a0
        x87_r6_5 - st0_13
        eax_21 = (x87_r6_5 < st0_13 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, st0_13) ? 1 : 0) << 0xa
            | (x87_r6_5 == st0_13 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_21:1.b, 6)) && not(test_bit(eax_21:1.b, 0)))
            int32_t result_4 = result
            result += 0x8c
            
            if (add_overflow(result_4, 0x8c))
                sub_403010()
                noreturn
        
        long double st0_14 = sub_402d38()
        long double x87_r6_6 = data_4b86ac
        x87_r6_6 - st0_14
        eax_21 = (x87_r6_6 < st0_14 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_6, st0_14) ? 1 : 0) << 0xa
            | (x87_r6_6 == st0_14 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_21:1.b, 6)) && not(test_bit(eax_21:1.b, 0)))
            int32_t result_5 = result
            result += 0x12c
            
            if (add_overflow(result_5, 0x12c))
                sub_403010()
                noreturn
        
        long double st0_15 = sub_402d38()
        long double x87_r6_7 = data_4b86ac
        x87_r6_7 - st0_15
        eax_21 = (x87_r6_7 < st0_15 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_7, st0_15) ? 1 : 0) << 0xa
            | (x87_r6_7 == st0_15 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_21:1.b, 6)) && not(test_bit(eax_21:1.b, 0)))
            int32_t result_6 = result
            result += 0x320
            
            if (add_overflow(result_6, 0x320))
                sub_403010()
                noreturn
    
    return result
}
