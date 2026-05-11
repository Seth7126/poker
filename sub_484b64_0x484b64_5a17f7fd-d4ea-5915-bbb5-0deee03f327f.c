// ============================================================
// 函数名称: sub_484b64
// 虚拟地址: 0x484b64
// WARP GUID: 5a17f7fd-d4ea-5915-bbb5-0deee03f327f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_403008
// [被调用的父级函数]: sub_484c8c
// ============================================================

uint32_t __convention("regparm")sub_484b64(uint32_t arg1, char arg2, uint32_t arg3)
{
    // 第一条实际指令: char* ebx = arg1
    char* ebx = arg1
    ebx[1] = arg2
    
    if (ebx[1] != 0 && *ebx == 0)
        arg1 = GetTickCount()
        
        if (arg1 s< 0)
            sub_403008()
            noreturn
        
        *(ebx + 8) = arg1
        *(ebx + 4) = 0x15e
        *(ebx + 0xc) = 1
    else if (ebx[1] == 0 && *ebx != 0)
        arg1 = GetTickCount()
        
        if (arg1 s< 0)
            sub_403008()
            noreturn
        
        *(ebx + 8) = arg1
        *(ebx + 4) = 0x15e
        *(ebx + 0xc) = 2
    
    if (*(ebx + 0xc) != 0)
        uint32_t eax = GetTickCount()
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(*(ebx + 8))
        int32_t var_8 = sbb.d(0, edx, eax u< eax_2)
        *(arg3 - 4) = fconvert.s(float.t((eax - eax_2).q) / float.t(*(ebx + 4)))
        long double x87_r7_3 = fconvert.t(*(arg3 - 4))
        long double temp1_1 = fconvert.t(1f)
        x87_r7_3 - temp1_1
        uint32_t eax_5
        eax_5.w = (x87_r7_3 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_5:1.b, 6)) && not(test_bit(eax_5:1.b, 0)))
            *(arg3 - 4) = 0x3f800000
        
        long double x87_r7_4 = fconvert.t(*(arg3 - 4))
        long double temp2_1 = fconvert.t(0f)
        x87_r7_4 - temp2_1
        uint32_t eax_7
        eax_7.w = (x87_r7_4 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_7:1.b, 0))
            *(arg3 - 4) = 0
        
        int32_t eax_9 = *(ebx + 0xc)
        
        if (eax_9 == 1)
            *(ebx + 0x10) = *(arg3 - 4)
        else if (eax_9 == 2)
            *(ebx + 0x10) = fconvert.s(fconvert.t(1f) - fconvert.t(*(arg3 - 4)))
        
        long double x87_r7_7 = data_484c80
        long double temp3_1 = fconvert.t(*(arg3 - 4))
        x87_r7_7 - temp3_1
        arg1.w = (x87_r7_7 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_7, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == temp3_1 ? 1 : 0) << 0xe
        
        if (test_bit(arg1:1.b, 0))
            *(ebx + 0xc) = 0
    
    arg1.b = ebx[1]
    *ebx = arg1.b
    return arg1
}
