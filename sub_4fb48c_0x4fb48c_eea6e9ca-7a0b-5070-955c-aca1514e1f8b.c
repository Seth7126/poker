// ============================================================
// 函数名称: sub_4fb48c
// 虚拟地址: 0x4fb48c
// WARP GUID: eea6e9ca-7a0b-5070-955c-aca1514e1f8b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ca100, sub_4ee7d8, sub_4ee44c, sub_4fb450, sub_403010
// [被调用的父级函数]: sub_4fc834, sub_4f8b60, sub_4fc3f8
// ============================================================

void* __convention("regparm")sub_4fb48c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: sub_4ee44c()
    sub_4ee44c()
    int32_t var_44 = 0xc0266666
    float var_48 = -0.405000001f
    (*data_5301d4)(0xbf991687, var_48, var_44)
    
    if (*data_530364 == 3)
        int32_t var_44_1 = 0
        var_48 = 0f
        (*data_5306b4)(0xc28c0000, 0x3f800000, var_48, var_44_1)
        sub_4fb450()
        *(data_53044c + 8) = fconvert.d(fneg(fconvert.t(*(data_53044c + 8))))
        *(data_53044c + 0x28) = fconvert.d(fneg(fconvert.t(*(data_53044c + 0x28))))
        *(data_53044c + 0x48) = fconvert.d(fneg(fconvert.t(*(data_53044c + 0x48))))
        (*data_5306a0)(data_53044c)
    
    int32_t var_44_3 = 0
    var_48 = 0.119999997f
    (*data_5301d4)(0, var_48, var_44_3)
    int32_t var_44_4 = 0
    var_48 = 0f
    (*data_5306b4)(0x420c0000, 0x3f800000, var_48, var_44_4)
    
    if (*data_530364 == 3)
        int32_t var_44_5 = 0xbca3d70a
        var_48 = 1.10500002f
        (*data_5301d4)(0xbc03126f, var_48, var_44_5)
        int32_t var_44_6 = 0
        var_48 = -0.100000001f
        (*data_5301d4)(0, var_48, var_44_6)
        int32_t var_44_7 = 0x3ca3d70a
        var_48 = 0f
        (*data_5301d4)(0x3c03126f, var_48, var_44_7)
    
    int32_t eax_25 = arg1 * 0x2345
    bool o = unimplemented  {imul eax, ebx, 0x2345}
    
    if (o)
        sub_403010()
        noreturn
    
    float var_30
    __builtin_memcpy(&var_30, data_5301b0 + (eax_25 << 2) - 0x394, 0x18)
    
    if (*(data_5301b0 + (eax_25 << 2) - 0x48) != 0)
        __builtin_memcpy(&var_30, data_5301b0 + (eax_25 << 2) - 0x37c, 0x18)
    
    float var_28
    float var_44_10 = fconvert.s(fconvert.t(var_28) / fconvert.t(502f))
    float var_2c
    var_48 = fconvert.s(fneg(fconvert.t(var_2c)) / fconvert.t(502f))
    (*data_5301d4)(fconvert.s(fconvert.t(var_30) / fconvert.t(502f)), var_48, var_44_10)
    int32_t var_44_11 = 0
    var_48 = 0f
    float var_24
    (*data_5306b4)(fconvert.s(fconvert.t(var_24) - fconvert.t(10f)), 0x3f800000, var_48, var_44_11)
    float var_1c
    
    if (arg2 == 0x4d)
        int32_t var_44_12 = 0x3f800000
        var_48 = 0f
        (*data_5306b4)(fconvert.s(data_4fb800 * fconvert.t(var_1c) + fconvert.t(-30f)), 0, var_48, 
            var_44_12)
        int32_t var_44_13 = 0
        var_48 = 0f
        
        if (neg.d(arg1) == 0x80000000)
            sub_403010()
            noreturn
        
        (*data_5301d4)(fconvert.s(float.t(neg.d(arg1)) / float.t(*data_5300d0) * fconvert.t(0.5f)
            + data_4fb814))
    else if (arg1 != 1 && sub_4ca100() != 0)
        int32_t var_44_14 = 0x3f800000
        var_48 = 0f
        (*data_5306b4)(fconvert.s(data_4fb820 * fconvert.t(var_1c)), 0, var_48, var_44_14)
    float var_c = 105f
    float var_8 = 0f
    float var_10 = 0f
    float var_14 = 0f
    float var_18 = 0f
    
    if (arg1 s> 1)
        var_10 = 2f
        var_c = 115f
        
        if (sub_4ee7d8() == 0)
            var_8 = 40f
            
            if (sub_4ca100() == 0)
                var_8 = fconvert.s(fconvert.t(var_8) + fconvert.t(25f))
        else
            var_8 = 75f
    
    float var_44_15 = fconvert.s(fconvert.t(var_10) / fconvert.t(502f))
    var_48 =
        fconvert.s(fneg(fconvert.t(var_18) / fconvert.t(2f) + fconvert.t(var_c)) / fconvert.t(502f))
    (*data_5301d4)(
        fconvert.s((fconvert.t(var_14) / fconvert.t(2f) + fconvert.t(var_8)) / fconvert.t(502f)), 
        var_48, var_44_15)
    int32_t var_44_16 = 0
    var_48 = 0f
    (*data_5306b4)(0x42b40000, 0x3f800000, var_48, var_44_16)
    
    if (arg1 != 1)
        int32_t var_44_18 = 0
        var_48 = 1f
        (*data_5306b4)(0xc1a00000, 0, var_48, var_44_18)
    else
        int32_t var_44_17 = 0
        var_48 = 1f
        (*data_5306b4)(0xc2700000, 0, var_48, var_44_17)
    
    int32_t var_44_19 = 0xbe983ce5
    var_48 = -0.109546162f
    (*data_5301d4)(0xbe404cec, var_48, var_44_19)
    void* result = data_530364
    *result
    return result
}
