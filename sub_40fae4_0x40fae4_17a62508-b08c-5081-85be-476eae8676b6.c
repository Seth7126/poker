// ============================================================
// 函数名称: sub_40fae4
// 虚拟地址: 0x40fae4
// WARP GUID: 17a62508-b08c-5081-85be-476eae8676b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40fc2c
// ============================================================

void* __convention("regparm")sub_40fae4(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 - 0x38)
    void* result = *(arg1 - 0x38)
    
    if (result == 0)
        return result
    
    return *(result + 2)
}
