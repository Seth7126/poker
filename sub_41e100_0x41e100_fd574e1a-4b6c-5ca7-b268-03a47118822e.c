// ============================================================
// 函数名称: sub_41e100
// 虚拟地址: 0x41e100
// WARP GUID: fd574e1a-4b6c-5ca7-b268-03a47118822e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41dd80, sub_41e21c
// ============================================================

void* __convention("regparm")sub_41e100(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x20) + 0x18
    void* result = *(arg1 + 0x20) + 0x18
    
    if (*(result + 0x10) != 1 || *(result + 0x12) != 1)
        return 0
    
    result.b = 1
    return result
}
