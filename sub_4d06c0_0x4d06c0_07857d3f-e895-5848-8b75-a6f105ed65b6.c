// ============================================================
// 函数名称: sub_4d06c0
// 虚拟地址: 0x4d06c0
// WARP GUID: 07857d3f-e895-5848-8b75-a6f105ed65b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ee44c, sub_4ca100, sub_403010
// [被调用的父级函数]: sub_4fc834
// ============================================================

int32_t* __convention("regparm")sub_4d06c0(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t eax = arg1 * 0x2e9c
    int32_t eax = arg1 * 0x2e9c
    bool o = unimplemented  {imul eax, ebx, 0x2e9c}
    
    if (o)
        sub_403010()
        noreturn
    
    float var_44
    __builtin_memcpy(&var_44, &(&data_532f3c)[eax * 2], 0x18)
    int32_t edx_1 = *data_5300d0
    
    if (add_overflow(edx_1, neg.d(arg1)))
        sub_403010()
        noreturn
    
    bool o_2 = unimplemented  {imul edx, edx, 0xf}
    
    if (o_2)
        sub_403010()
        noreturn
    
    float var_3c
    float var_3c_1 = fconvert.s(fconvert.t(var_3c) + fconvert.t(40f) + float.t((edx_1 - arg1) * 0xf))
    var_44 = fconvert.s((fconvert.t(var_44) + fconvert.t(40f)) * data_4d0a54)
    var_44 = fconvert.s(fconvert.t(var_44) - fconvert.t(90f))
    float var_40
    float var_40_1 = fconvert.s(fconvert.t(var_40) - fconvert.t(175f))
    
    if (arg1 s<= *data_5300d0)
        var_44 = fconvert.s(fconvert.t(var_44) - fconvert.t(60f))
        var_40_1 = fconvert.s(fconvert.t(var_40_1) - fconvert.t(10f))
        
        if (arg1 == 1 && *((eax << 3) + &data_5259d8) s> 0x42)
            var_44 = fconvert.s(fconvert.t(var_44) + fconvert.t(55f))
    
    int32_t var_c = 0xcd
    int32_t var_10 = 0xffffff6a
    int32_t esi_1
    
    if (arg1 == 1 || arg1 - 9 u< 2)
    label_4d07eb:
        esi_1 = 0xfffffd7c
        
        if (add_overflow(0xfffffd7e, 0xfffffffe))
            sub_403010()
            noreturn
    else
        bool o_3 = unimplemented  {imul eax, ebx, 0x2e9c}
        
        if (o_3)
            sub_403010()
            noreturn
        
        if (*(arg1 * 0x174e0 + &data_532ec8) s<= 1)
            goto label_4d07eb
        
        int32_t eax_6 = arg1 * 0x2e9c
        bool o_4 = unimplemented  {imul eax, ebx, 0x2e9c}
        
        if (o_4)
            sub_403010()
            noreturn
        
        *((eax_6 << 3) + &data_532ec8)
        int32_t eax_7 = *((eax_6 << 3) + &data_532ec8) * 2
        bool o_5 = unimplemented  {imul eax, dword [eax*8+0x532ec8], 0x2}
        
        if (o_5)
            sub_403010()
            noreturn
        
        esi_1 = 0xfffffd7e - eax_7
        
        if (add_overflow(0xfffffd7e, neg.d(eax_7)))
            sub_403010()
            noreturn
    
    if (sub_4ca100() == 0 && arg1 s>= 2 && arg1 s<= *data_5300d0)
        if (add_overflow(arg1, 0xffffffff))
            sub_403010()
            noreturn
        
        long double x87_r7_17 = float.t(arg1 - 1) / float.t(*data_5300d0)
        long double x87_r6_3 = data_4d0a74
        x87_r6_3 - x87_r7_17
        void* eax_12
        eax_12.w = (x87_r6_3 < x87_r7_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_3, x87_r7_17) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_17 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_12:1.b, 6)) && not(test_bit(eax_12:1.b, 0)))
            var_44 = fconvert.s(fconvert.t(var_44) + fconvert.t(20f))
        
        long double x87_r7_21 = float.t(arg1) / float.t(*data_5300d0)
        long double x87_r6_5 = data_4d0a84
        x87_r6_5 - x87_r7_21
        int32_t* eax_13
        eax_13.w = (x87_r6_5 < x87_r7_21 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_5, x87_r7_21) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_21 ? 1 : 0) << 0xe
        
        if (test_bit(eax_13:1.b, 6) || test_bit(eax_13:1.b, 0))
            var_40_1 = fconvert.s(fconvert.t(var_40_1)
                - (float.t(arg1) / float.t(*data_5300d0) - data_4d0a84) / data_4d0a90 * fconvert.t(55f)
                - fconvert.t(20f))
    
    if (arg2 != 0)
        var_3c_1 = fconvert.s(fconvert.t(var_3c_1) + fconvert.t(100f))
    
    int32_t var_2c = 0x3fd70a3d
    int32_t var_28 = 0xc0066666
    int32_t var_24 = 0
    sub_4ee44c()
    (*data_5301d4)(0, 0x3df5c28f, 0)
    (*data_5306b4)(0xc25c0000, 0x3f800000, 0, 0)
    (*data_5301d4)(0, 0x4019999a, 0x3e4ccccd)
    (*data_5301d4)(0xbdcccccd, 0xbf333333, 0x3ca3d70a)
    
    if (neg.d(var_10) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_5301d4)(
        fconvert.s(float.t(var_c) / fconvert.t(100f) - data_4d0ab0 + data_4d0abc
            + float.t(0) / fconvert.t(200f)), 
        fconvert.s(float.t(neg.d(var_10)) / fconvert.t(100f) + data_4d0aa4), 
        fconvert.s(fconvert.t(-9f) - float.t(esi_1) / fconvert.t(100f)))
    (*data_5301d4)(var_2c, var_28, var_24)
    int32_t* result = (*data_5301d4)(fconvert.s(fconvert.t(var_44) / fconvert.t(502f)), 
        fconvert.s(fconvert.t(var_40_1) / fconvert.t(502f)), 
        fconvert.s(fconvert.t(var_3c_1) / fconvert.t(502f)))
    
    if (arg1 s>= 2)
        result = data_5300d0
        
        if (arg1 s<= *result)
            long double x87_r7_48 = fconvert.t(var_44)
            long double temp10_1 = fconvert.t(400f)
            x87_r7_48 - temp10_1
            result.w = (x87_r7_48 < temp10_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_48, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_48 == temp10_1 ? 1 : 0) << 0xe
            
            if (test_bit(result:1.b, 0))
                return (*data_5301d4)(
                    fconvert.s((fconvert.t(400f) - fconvert.t(var_44)) * data_4d0abc
                        / fconvert.t(497f)), 
                    fconvert.s(fneg(fconvert.t(400f) - fconvert.t(var_44)) * data_4d0ad4
                    / fconvert.t(497f)), 0)
    
    return result
}
