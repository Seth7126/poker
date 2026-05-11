// ============================================================
// 函数名称: sub_430fbc
// 虚拟地址: 0x430fbc
// WARP GUID: 092937f7-0e93-5485-9077-a932904b2d66
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_431a10
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_430fbc(void* arg1, void* arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (*(ebx + 0x160) == 0)
        return 
    
    if (*(arg2 + 4) == 0)
        arg2.b = *(*(ebx + 0x24) + 0x138)
        sub_431a10(ebx, arg2.b)
    else
        arg1.b = *(arg2 + 8) != 0
        sub_431a10(ebx, arg1.b)
    
    *(ebx + 0x160) = 1
}
