// ============================================================
// 函数名称: sub_4cb9a0
// 虚拟地址: 0x4cb9a0
// WARP GUID: e1524996-dc84-53f2-80f3-d116ad184837
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_420b10, sub_4cb8fc, sub_403010
// [被调用的父级函数]: sub_4c02cc, sub_4bdac0
// ============================================================

long double __convention("regparm")sub_4cb9a0(int16_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int16_t var_c = arg2.w
    int16_t var_c = arg2.w
    int32_t ebx
    ebx.b = arg1.b
    float var_10
    
    if (ebx.b s<= 0 || ebx.b s>= 0x1e || ebx.b s<= 0 || ebx.b s>= 0x1e)
        var_10 = 0f
    else
        if (add_overflow(arg3, 0xffffffff))
            sub_403010()
            noreturn
        
        float var_10_1
        
        if (arg3 - 1 s<= 5)
            int32_t eax_19
            int32_t edx_7
            eax_19, edx_7 = sub_4cb8fc(sx.d(var_c.b), arg2)
            bool o_8 = unimplemented  {imul ebx, eax, 0x3}
            
            if (o_8)
                sub_403010()
                noreturn
            
            int32_t eax_21
            int32_t edx_8
            eax_21, edx_8 = sub_4cb8fc(sx.d(arg1.b), edx_7)
            bool o_9 = unimplemented  {imul eax, eax, 0x27}
            
            if (o_9)
                sub_403010()
                noreturn
            
            edx_8.b = arg1:1.b
            edx_8.b = edx_8.b == var_c:1.b
            bool o_10 = unimplemented  {imul edx, edx, 0x3}
            
            if (o_10)
                sub_403010()
                noreturn
            
            var_10_1 = fconvert.s(float.t(zx.d(
                *(eax_21 * 0x9c + &data_61c0d4 + eax_19 * 0xc + (edx_8 & 0x7f) * 6 + arg3 - 0xaa)))
                / fconvert.t(255f))
        else if (arg3 != 7)
            int32_t eax_11
            int32_t edx_4
            eax_11, edx_4 = sub_4cb8fc(sx.d(var_c.b), arg2)
            bool o_5 = unimplemented  {imul ebx, eax, 0x3}
            
            if (o_5)
                sub_403010()
                noreturn
            
            int32_t eax_13
            int32_t edx_5
            eax_13, edx_5 = sub_4cb8fc(sx.d(arg1.b), edx_4)
            bool o_6 = unimplemented  {imul eax, eax, 0x27}
            
            if (o_6)
                sub_403010()
                noreturn
            
            edx_5.b = arg1:1.b
            edx_5.b = edx_5.b == var_c:1.b
            bool o_7 = unimplemented  {imul edx, edx, 0x3}
            
            if (o_7)
                sub_403010()
                noreturn
            
            var_10_1 = fconvert.s(float.t(zx.d(
                *(eax_13 * 0x9c + &data_61c0d4 + eax_11 * 0xc + (edx_5 & 0x7f) * 6 - 0xa4)))
                / fconvert.t(255f) * data_4cbcbc)
        else
            int32_t eax_3
            int32_t edx
            eax_3, edx = sub_4cb8fc(sx.d(var_c.b), arg2)
            bool o_2 = unimplemented  {imul esi, eax, 0x3}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t eax_5
            int32_t edx_1
            eax_5, edx_1 = sub_4cb8fc(sx.d(ebx.b), edx)
            bool o_3 = unimplemented  {imul eax, eax, 0x27}
            
            if (o_3)
                sub_403010()
                noreturn
            
            edx_1.b = arg1:1.b
            edx_1.b = edx_1.b == var_c:1.b
            bool o_4 = unimplemented  {imul edx, edx, 0x3}
            
            if (o_4)
                sub_403010()
                noreturn
            
            var_10_1 = fconvert.s(
                float.t(zx.d(*(eax_5 * 0x9c + &data_61c0d4 + eax_3 * 0xc + (edx_1 & 0x7f) * 6 - 0xa4)))
                / fconvert.t(255f) * data_4cbcb0)
        
        int32_t i_1 = 1
        int32_t i
        
        do
            int32_t edx_3
            edx_3.b = arg1.b
            
            if (edx_3.b == 8)
                var_10_1 = fconvert.s(data_4cbcc8 * fconvert.t(var_10_1))
            else if (edx_3.b == 6)
                var_10_1 = fconvert.s(data_4cbcd4 * fconvert.t(var_10_1))
            else if (edx_3.b == 5)
                var_10_1 = fconvert.s(data_4cbce0 * fconvert.t(var_10_1))
            else if (edx_3.b == 4)
                var_10_1 = fconvert.s(data_4cbcec * fconvert.t(var_10_1))
            else if (edx_3.b == 9)
                var_10_1 = fconvert.s(data_4cbcf8 * fconvert.t(var_10_1))
            else if (edx_3.b - 0xa u< 2)
                var_10_1 = fconvert.s(data_4cbd04 * fconvert.t(var_10_1))
            else if (edx_3.b - 0xc u>= 2)
                char temp12_1 = (edx_3 - 1).b
                edx_3.b = (edx_3 - 1).b - 2
                
                if (temp12_1 u< 2)
                    var_10_1 = fconvert.s(data_4cbd1c * fconvert.t(var_10_1))
            else
                var_10_1 = fconvert.s(data_4cbd10 * fconvert.t(var_10_1))
            
            edx_3.b = var_c.b
            
            if (edx_3.b == 8)
                var_10_1 = fconvert.s(data_4cbcc8 * fconvert.t(var_10_1))
            else if (edx_3.b == 6)
                var_10_1 = fconvert.s(data_4cbcd4 * fconvert.t(var_10_1))
            else if (edx_3.b == 5)
                var_10_1 = fconvert.s(data_4cbce0 * fconvert.t(var_10_1))
            else if (edx_3.b == 4)
                var_10_1 = fconvert.s(data_4cbcec * fconvert.t(var_10_1))
            else if (edx_3.b == 9)
                var_10_1 = fconvert.s(data_4cbcf8 * fconvert.t(var_10_1))
            else if (edx_3.b - 0xa u< 2)
                var_10_1 = fconvert.s(data_4cbd04 * fconvert.t(var_10_1))
            else if (edx_3.b - 0xc u>= 2)
                char temp15_1 = (edx_3 - 1).b
                edx_3.b = (edx_3 - 1).b - 2
                
                if (temp15_1 u< 2)
                    var_10_1 = fconvert.s(data_4cbd1c * fconvert.t(var_10_1))
            else
                var_10_1 = fconvert.s(data_4cbd10 * fconvert.t(var_10_1))
            
            i = i_1
            i_1 -= 1
        while (i != 1)
        var_10 = fconvert.s(sub_420b10(var_10_1, 1f))
    
    return fconvert.t(var_10)
}
