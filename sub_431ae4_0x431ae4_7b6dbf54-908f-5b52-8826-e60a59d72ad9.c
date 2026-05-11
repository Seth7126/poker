// ============================================================
// 函数名称: sub_431ae4
// 虚拟地址: 0x431ae4
// WARP GUID: 7b6dbf54-908f-5b52-8826-e60a59d72ad9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_431a88
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_431ae4(void* arg1, int16_t arg2)
{
    // 第一条实际指令: if ((*(arg1 + 0x44) & 8) == 0)
    if ((*(arg1 + 0x44) & 8) == 0)
        sub_431a88(arg1, arg2)
        return 
    
    *(arg1 + 0x170) = sx.d(arg2)
}
