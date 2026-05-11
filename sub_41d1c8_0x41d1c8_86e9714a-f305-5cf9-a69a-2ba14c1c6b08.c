// ============================================================
// 函数名称: sub_41d1c8
// 虚拟地址: 0x41d1c8
// WARP GUID: 86e9714a-f305-5cf9-a69a-2ba14c1c6b08
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41d214, sub_41f1b0
// ============================================================

void __convention("regparm")sub_41d1c8(void* arg1)
{
    // 第一条实际指令: if ((*(arg1 + 0x28) & 3) == 0 || *(arg1 + 0x40) != 0)
    if ((*(arg1 + 0x28) & 3) == 0 || *(arg1 + 0x40) != 0)
        return 
    
    int16_t edx = *(arg1 + 0x26)
    
    if (edx == 0x10)
        *(arg1 + 0x40) = 0xf800
        *(arg1 + 0x44) = 0x7e0
        *(arg1 + 0x48) = 0x1f
    else if (edx == 0x20)
        *(arg1 + 0x40) = 0xff0000
        *(arg1 + 0x44) = 0xff00
        *(arg1 + 0x48) = 0xff
}
