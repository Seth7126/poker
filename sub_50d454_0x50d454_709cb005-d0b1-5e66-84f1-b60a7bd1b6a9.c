// ============================================================
// 函数名称: sub_50d454
// 虚拟地址: 0x50d454
// WARP GUID: 709cb005-d0b1-5e66-84f1-b60a7bd1b6a9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_51260b, sub_527454, sub_5127fc, sub_512690
// ============================================================

int32_t __convention("regparm")sub_50d454(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x3a84) == 0)
    if (*(arg1 + 0x3a84) == 0)
        return 0
    
    if (*(arg1 + 4) == 0)
        return 0
    
    uint32_t eax = GetTickCount()
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(*(arg1 + 4))
    int32_t var_c_1 = sbb.d(0, edx_1, eax u< eax_2)
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = sx.q(*(arg1 + 0x3a78))
    
    if (edx_3 != var_c_1)
        if (edx_3 s< var_c_1)
            *(arg1 + 4) = 0
            return 0
    else if (eax_5 u< eax - eax_2)
        *(arg1 + 4) = 0
        return 0
    
    int32_t result
    result.b = 1
    return result
}
