// ============================================================
// 函数名称: sub_4416f8
// 虚拟地址: 0x4416f8
// WARP GUID: e453fcde-75d3-589e-a781-bd72b2a619ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441dc4
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4416f8(void* const arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x24))
    if (arg2 == *(arg1 + 0x24))
        return 
    
    int32_t esi_1 = arg2
    
    if (esi_1 == 0)
        int32_t eax
        eax.b = *(arg1 + 0x18)
        arg2 = (*data_5302cc)(*((eax << 2) + &data_52e9c0))
    
    *(arg1 + 0x24) = arg2
    *(arg1 + 0x44) = 1
    sub_441dc4(*(arg1 + 4))
    
    if (esi_1 == 0)
        *(arg1 + 0x24) = 0
}
