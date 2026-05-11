// ============================================================
// 函数名称: sub_46a1f8
// 虚拟地址: 0x46a1f8
// WARP GUID: 110ce1ad-b3a7-564f-8aa4-5e83191e1b38
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4702a8
// ============================================================

void __convention("regparm")sub_46a1f8(float arg1 @ eax)
{
    // 第一条实际指令: int32_t esi = arg1 i+ 0xce8
    int32_t esi = arg1 i+ 0xce8
    
    for (int32_t i = 0; i != 0xb; i += 1)
        if (*(esi + (i << 2) + 0x44) s> 0)
            uint32_t eax = GetTickCount()
            int32_t eax_2
            int32_t edx_1
            edx_1:eax_2 = sx.q(*(esi + (i << 2) + 0x70))
            int32_t var_c_1 = sbb.d(0, edx_1, eax u< eax_2)
            float var_8_1 = fconvert.s(float.t((eax - eax_2).q) / float.t(*(esi + (i << 2) + 0x9c)))
            long double x87_r7_3 = fconvert.t(var_8_1)
            long double temp1_1 = fconvert.t(1f)
            x87_r7_3 - temp1_1
            arg1.w = (x87_r7_3 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(arg1:1.b, 6)) && not(test_bit(arg1:1.b, 0)))
                var_8_1 = 1f
            
            long double x87_r7_4 = data_46a29c
            long double temp2_1 = fconvert.t(var_8_1)
            x87_r7_4 - temp2_1
            arg1.w = (x87_r7_4 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe
            
            if (test_bit(arg1:1.b, 0))
                *(esi + (i << 2) + 0x44) = 0
            else if (*(esi + (i << 2) + 0x44) != 1)
                *(esi + (i << 2) + 0x18) = fconvert.s(fconvert.t(1f) - fconvert.t(var_8_1))
            else
                *(esi + (i << 2) + 0x18) = var_8_1
}
