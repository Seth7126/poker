// ============================================================
// 函数名称: sub_4d0204
// 虚拟地址: 0x4d0204
// WARP GUID: 0481232f-1519-5707-991e-60ef5a1f4b1d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc140, sub_4ca100, sub_403010, sub_4ee44c, sub_4c0924
// [被调用的父级函数]: sub_4fc834
// ============================================================

int32_t __convention("regparm")sub_4d0204(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t eax = arg1 * 0x2e9c
    int32_t eax = arg1 * 0x2e9c
    bool o = unimplemented  {imul eax, ebx, 0x2e9c}
    
    if (o)
        sub_403010()
        noreturn
    
    float var_44
    __builtin_memcpy(&var_44, &(&data_532f3c)[eax * 2], 0x18)
    var_44 = fconvert.s(fconvert.t(var_44) - fconvert.t(90f))
    float var_40
    float var_40_1 = fconvert.s(fconvert.t(var_40) - fconvert.t(175f))
    
    if (arg1 s<= *data_5300d0)
        var_44 = fconvert.s(fconvert.t(var_44) - fconvert.t(60f))
        var_40_1 = fconvert.s(fconvert.t(var_40_1) - fconvert.t(10f))
        
        if (arg1 == 1 && *((eax << 3) + &data_5259d8) s> 0x42)
            var_44 = fconvert.s(fconvert.t(var_44) + fconvert.t(55f))
    
    int32_t var_10 = 0xcd
    int32_t edi = 0xffffff6a
    int32_t esi_1 = 0xfffffd7e
    int32_t esi_2
    
    if (arg1 == 1 || arg1 - 9 u< 2)
        esi_2 = 0xfffffd7c
        
        if (add_overflow(0xfffffd7e, 0xfffffffe))
            sub_403010()
            noreturn
    else if (sub_4c0924() == 0)
        esi_2 = 0xfffffd7a
        
        if (add_overflow(0xfffffd7e, 0xfffffffc))
            sub_403010()
            noreturn
    else
        if (*data_5302d0 s>= 3)
            if (sub_4ca100() != 0)
                if (*data_5300d0 != 8)
                    *data_5300d0
                else
                    if (arg1 == 4)
                        esi_1 = 0xfffffd7b
                        
                        if (add_overflow(0xfffffd7e, 0xfffffffd))
                            sub_403010()
                            noreturn
                        
                        edi = 0xffffff5e
                        
                        if (add_overflow(0xffffff6a, 0xfffffff4))
                            sub_403010()
                            noreturn
                    
                    if (arg1 == 5)
                        int32_t temp14_1 = esi_1
                        esi_1 -= 4
                        
                        if (add_overflow(temp14_1, 0xfffffffc))
                            sub_403010()
                            noreturn
            else if (*data_5300d0 != 8)
                if (*data_5300d0 == 7 && arg1 == 4)
                    int32_t temp16_1 = var_10
                    var_10 -= 4
                    
                    if (add_overflow(temp16_1, 0xfffffffc))
                        sub_403010()
                        noreturn
            else if (arg1 == 5)
                esi_1 = 0xfffffd78
                
                if (add_overflow(0xfffffd7e, 0xfffffffa))
                    sub_403010()
                    noreturn
        
        esi_2 = esi_1 - 8
        
        if (add_overflow(esi_1, 0xfffffff8))
            sub_403010()
            noreturn
    
    if (arg1 s<= *data_5300d0)
        int32_t eax_14 = *data_5300d0
        
        if (add_overflow(eax_14, 0xffffffff))
            sub_403010()
            noreturn
        
        if (arg1 s>= eax_14 - 1)
            void* edx
            edx.b = 4
            
            if (sub_4cc140(arg1, edx.b, 0xffffffff) s>= 1)
                char eax_19 = sub_4ca100()
                int32_t eax_22
                
                if (eax_19 != 0 && arg1 == *data_5300d0)
                    eax_22 = sub_4cc140(arg1, 4, 0xffffffff)
                
                if (eax_19 == 0 || arg1 != *data_5300d0 || eax_22 != 2)
                    int32_t temp10_1 = edi
                    edi += 8
                    
                    if (add_overflow(temp10_1, 8))
                        sub_403010()
                        noreturn
                else
                    int32_t temp17_1 = edi
                    edi += 0x1e
                    
                    if (add_overflow(temp17_1, 0x1e))
                        sub_403010()
                        noreturn
    
    if (sub_4ca100() == 0 && arg1 s>= 2 && arg1 s<= *data_5300d0)
        if (add_overflow(arg1, 0xffffffff))
            sub_403010()
            noreturn
        
        long double x87_r7_11 = float.t(arg1 - 1) / float.t(*data_5300d0)
        long double x87_r6_2 = data_4d0650
        x87_r6_2 - x87_r7_11
        void* eax_27
        eax_27.w = (x87_r6_2 < x87_r7_11 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_11) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_11 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_27:1.b, 6)) && not(test_bit(eax_27:1.b, 0)))
            var_44 = fconvert.s(fconvert.t(var_44) + fconvert.t(20f))
        
        long double x87_r7_15 = float.t(arg1) / float.t(*data_5300d0)
        long double x87_r6_4 = data_4d0660
        x87_r6_4 - x87_r7_15
        int32_t* eax_28
        eax_28.w = (x87_r6_4 < x87_r7_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, x87_r7_15) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_15 ? 1 : 0) << 0xe
        
        if (test_bit(eax_28:1.b, 6) || test_bit(eax_28:1.b, 0))
            var_40_1 = fconvert.s(fconvert.t(var_40_1)
                - (float.t(arg1) / float.t(*data_5300d0) - data_4d0660) / data_4d066c * fconvert.t(55f)
                - fconvert.t(20f))
    
    float var_3c
    
    if (arg2 != 0)
        var_3c = fconvert.s(fconvert.t(var_3c) + fconvert.t(100f))
    
    int32_t var_c = 0
    int32_t var_2c = 0x3fd70a3d
    int32_t var_28 = 0xc0066666
    float var_24 = 0f
    sub_4ee44c()
    float var_5c = 0f
    (*data_5301d4)(0, 0x3df5c28f, var_5c)
    var_5c = 0f
    (*data_5306b4)(0xc25c0000, 0x3f800000, 0, var_5c)
    var_5c = 0.200000003f
    (*data_5301d4)(0, 0x4019999a, var_5c)
    var_5c = 0.0199999996f
    (*data_5301d4)(0xbdcccccd, 0xbf333333, var_5c)
    var_5c = fconvert.s(fconvert.t(-9f) - float.t(esi_2) / fconvert.t(100f))
    
    if (neg.d(edi) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_5301d4)(
        fconvert.s(float.t(var_10) / fconvert.t(100f) - data_4d068c + data_4d0698
            + float.t(var_c) / fconvert.t(200f)), 
        fconvert.s(float.t(neg.d(edi)) / fconvert.t(100f) + data_4d0680))
    var_5c = var_24
    (*data_5301d4)(var_2c, var_28, var_5c)
    var_5c = fconvert.s(fconvert.t(var_3c) / fconvert.t(502f))
    (*data_5301d4)(fconvert.s(fconvert.t(var_44) / fconvert.t(502f)), 
        fconvert.s(fconvert.t(var_40_1) / fconvert.t(502f)), var_5c)
    
    if (arg1 s>= 2 && arg1 s<= *data_5300d0)
        long double x87_r7_42 = fconvert.t(var_44)
        long double temp13_1 = fconvert.t(400f)
        x87_r7_42 - temp13_1
        int32_t* eax_44
        eax_44.w = (x87_r7_42 < temp13_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_42, temp13_1) ? 1 : 0) << 0xa
            | (x87_r7_42 == temp13_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_44:1.b, 0))
            var_5c = 0f
            (*data_5301d4)(
                fconvert.s((fconvert.t(400f) - fconvert.t(var_44)) * data_4d0698 / fconvert.t(497f)), 
                fconvert.s(fneg(fconvert.t(400f) - fconvert.t(var_44)) * data_4d06b0
                    / fconvert.t(497f)), 
                var_5c)
    
    var_5c = 1f
    return (*data_5306b4)(0xc2340000, 0, 0, var_5c)
}
