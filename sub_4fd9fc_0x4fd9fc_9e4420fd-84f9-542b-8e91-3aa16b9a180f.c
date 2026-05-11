// ============================================================
// 函数名称: sub_4fd9fc
// 虚拟地址: 0x4fd9fc
// WARP GUID: 9e4420fd-84f9-542b-8e91-3aa16b9a180f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4fe478, sub_4fef20
// ============================================================

long doublesub_4fd9fc(float arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (*data_530364 == 3)
        *(arg2 - 4) = fconvert.s(float.t(*(data_530598 + 0x390)) / fconvert.t(99f))
        *(arg2 - 0x10) = fconvert.s(fconvert.t(*(arg2 - 4)) * fconvert.t(*(arg2 - 8)) * fconvert.t(arg1)
            + fconvert.t(*(arg2 - 4)) * fconvert.t(*(arg2 - 0xc))
            * (fconvert.t(1f) - fconvert.t(arg1)))
        
        if (*(arg2 + 0x10) == 1)
            *(arg2 - 0x10) = fconvert.s((fconvert.t(1f) - fconvert.t(arg1))
                * (fconvert.t(1f) - fconvert.t(arg1)) * fconvert.t(*(arg2 - 4)) * fconvert.t(0.5f))
        else if (*(arg2 + 0x10) s>= 1 && *(arg2 + 0x10) s<= *data_5300d0)
            if (*(*data_5301f4 + 0xfff0) s> 7)
                *(arg2 - 0x10) = fconvert.s((fconvert.t(1f) - fconvert.t(arg1))
                    * fconvert.t(*(arg2 - 4)) * data_4fdba0)
            else
                *(arg2 - 0x10) = fconvert.s(fconvert.t(arg1) * fconvert.t(*(arg2 - 4)) * data_4fdba0)
        
        if (*(arg2 - 0x11) != 0)
            *(arg2 - 0x10) = fconvert.s(fconvert.t(*(arg2 - 0x10)) * fconvert.t(2f) - fconvert.t(1f))
        
        long double x87_r7_22 = fconvert.t(*(arg2 - 0x10))
        long double temp1_1 = fconvert.t(0f)
        x87_r7_22 - temp1_1
        void* eax_23
        eax_23.w = (x87_r7_22 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_22, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_22 == temp1_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_23:1.b, 0))
            *(arg2 - 0x10) = 0
        
        if (data_7a7d98 == 0 || *(arg2 + 0x10) != 0xc)
            (*data_530518)(0x3f70a3d7, 0x3f70a3d7, 0x3f70a3d7, *(arg2 - 0x10))
        else
            (*data_530518)(0x3f570a3d, 0x3f570a3d, 0x3f570a3d, 
                fconvert.s(data_4fdbb4 * fconvert.t(*(arg2 - 0x10))))
    
    return fconvert.t(*(arg2 - 0x10))
}
