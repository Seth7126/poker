// ============================================================
// 函数名称: sub_511198
// 虚拟地址: 0x511198
// WARP GUID: 8abe3683-8f72-5719-ae0c-b3c1c70500b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_420bf0, sub_403010
// [被调用的父级函数]: sub_507d3f, sub_507e90, sub_50b624
// ============================================================

long double __convention("regparm")sub_511198(void* arg1)
{
    // 第一条实际指令: float var_8 = 0f
    float var_8 = 0f
    
    if (*(arg1 + 0x1b4) != 0)
        if (*(arg1 + 0x1e0) == 0)
        label_5111d8:
            int32_t var_18_1 = 0
            int32_t var_1c_1 = 0
            int32_t eax_4 = *(arg1 + 0x1c0)
            
            if (add_overflow(eax_4, *(arg1 + 0x1c4)))
                sub_403010()
                noreturn
            
            int32_t eax_6
            int32_t edx_1
            edx_1:eax_6 = sx.q(eax_4 + *(arg1 + 0x1c4))
            uint32_t eax_7 = GetTickCount()
            int32_t var_c_1 = sbb.d(edx_1, 0, eax_6 u< eax_7)
            var_8 = fconvert.s(sub_420bf0(float.t((eax_6 - eax_7).q) / float.t(*(arg1 + 0x1c4)), 0f))
        else if (*(*data_5301f4 + 0x200a8) == 0 && *(*data_5301f4 + 0x10020) != 1)
            goto label_5111d8
    
    return fconvert.t(var_8)
}
