// ============================================================
// 函数名称: sub_41e034
// 虚拟地址: 0x41e034
// WARP GUID: 95981953-4b6d-5c05-83e8-d82c310c3013
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_41e034(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x20)
    void* result = *(arg1 + 0x20)
    
    if (*(result + 8) != 0 || *(result + 0x14) != 0)
        return 0
    
    result.b = 1
    return result
}
