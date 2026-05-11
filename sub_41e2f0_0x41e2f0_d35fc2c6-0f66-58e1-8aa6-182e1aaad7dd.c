// ============================================================
// 函数名称: sub_41e2f0
// 虚拟地址: 0x41e2f0
// WARP GUID: d35fc2c6-0f66-58e1-8aa6-182e1aaad7dd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41e04c, sub_41ef18, sub_41ee98, sub_41f154, sub_41ee44, sub_41e3e0, sub_41f454, sub_41dfd0, sub_41e300, sub_41e08c, sub_41cf54
// ============================================================

void* __convention("regparm")sub_41e2f0(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x20)
    void* result = *(arg1 + 0x20)
    
    if (*(result + 8) == 0)
        *(result + 8) = *(result + 0x14)
    
    return result
}
