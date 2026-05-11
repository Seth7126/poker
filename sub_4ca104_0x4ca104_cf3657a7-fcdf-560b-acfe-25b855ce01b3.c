// ============================================================
// 函数名称: sub_4ca104
// 虚拟地址: 0x4ca104
// WARP GUID: cf3657a7-fcdf-560b-acfe-25b855ce01b3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ca100, sub_4c2ca0, sub_4c4bec, sub_4ca778, sub_4ca2a8, sub_4cb03c, sub_403010
// [被调用的父级函数]: sub_4f9658, sub_50003c
// ============================================================

long double __convention("regparm")sub_4ca104(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: float var_c
    float var_c
    int32_t ebx
    
    if (sub_4ca100() == 0)
        ebx = sub_4ca778(1)
        var_c = fconvert.s(sub_4ca2a8(arg1))
    else
        ebx = sub_4cb03c(1)
        var_c = fconvert.s(sub_4ca2a8(arg1))
    
    float var_8 = 0f
    
    if (ebx s> 0)
        long double x87_r7_2 = fconvert.t(var_c)
        long double temp0_1 = fconvert.t(0f)
        x87_r7_2 - temp0_1
        int16_t eax_5 = (x87_r7_2 < temp0_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_2, temp0_1) ? 1 : 0) << 0xa | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_5:1.b, 6)) && not(test_bit(eax_5:1.b, 0))
                && (sub_4c4bec(ebx) != 0 || ebx == 1))
            void* eax_8 = data_5302c8
            *eax_8
            bool o_1 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(*(*data_530304 + 0xab0) + *eax_8 * 0x81c0 + 1) == 0 && sub_4c2ca0() s> 1
                    && *data_530144 != 2)
                if (ebx != arg1)
                label_4ca1d3:
                    
                    if (arg1 == 0xc)
                        bool o_3 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_3)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_5301f4 + ebx * 0x208 + arg2 + 0x20095) != 0)
                            var_8 = fconvert.s(sub_4ca2a8(ebx))
                else
                    bool o_2 = unimplemented  {imul eax, ebx, 0x41}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + ebx * 0x208 + arg2 + 0x20093) == 0)
                        goto label_4ca1d3
                    
                    var_8 = fconvert.s(sub_4ca2a8(ebx))
    
    return fconvert.t(var_8)
}
