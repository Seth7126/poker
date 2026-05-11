// ============================================================
// 函数名称: sub_4ee6dc
// 虚拟地址: 0x4ee6dc
// WARP GUID: a8811852-711d-51e8-b666-f88c16b2f0d5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4f9658, sub_5047f4, sub_50003c
// ============================================================

int32_t __convention("regparm")sub_4ee6dc(int32_t arg1)
{
    // 第一条实际指令: if (arg1 s> 0x1a)
    if (arg1 s> 0x1a)
        arg1 = 0x1a
    
    return *(data_530208 + (arg1 << 2))
}
