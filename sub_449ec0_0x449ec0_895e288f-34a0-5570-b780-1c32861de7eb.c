// ============================================================
// 函数名称: sub_449ec0
// 虚拟地址: 0x449ec0
// WARP GUID: 895e288f-34a0-5570-b780-1c32861de7eb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_449e84, sub_449d24, sub_447e60
// [被调用的父级函数]: sub_4490e8, sub_4480dd, sub_449d44, sub_449cec, sub_4499c8, sub_447d4c, sub_44a0a0
// ============================================================

void __convention("regparm")sub_449ec0(BOOL arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x50) == 0)
    if (*(arg1 + 0x50) == 0)
        return 
    
    sub_449e84(arg1)
    *(arg1 + 0x50) = 0
    *(arg1 + 0x48) = 0
    sub_447e60()
    sub_449d24(arg1)
}
