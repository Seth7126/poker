// ============================================================
// 函数名称: sub_4924c0
// 虚拟地址: 0x4924c0
// WARP GUID: 7fac4315-e130-5956-ae7e-78298af25ed2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PtInRect
// [内部子函数调用]: sub_40fa94, sub_491e20
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4924c0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x290) == 0)
    if (*(arg1 + 0x290) == 0)
        return 
    
    int32_t pt
    sub_40fa94(sx.d(*(arg2 + 8)), sx.d(*(arg2 + 0xa)), &pt)
    int32_t var_10
    int32_t var_18_1 = var_10
    BOOL eax_2 = PtInRect(arg1 + 0x294, pt)
    int32_t eax_3 = neg.d(eax_2)
    int32_t ebx
    ebx.b = *(arg1 + 0x291)
    
    if (neg.d(sbb.d(eax_3, eax_3, eax_2 != 0)).b == ebx.b)
        return 
    
    ebx.b ^= 1
    *(arg1 + 0x291) = ebx.b
    sub_491e20(arg1, *(arg1 + 0x292), *(arg1 + 0x294))
}
