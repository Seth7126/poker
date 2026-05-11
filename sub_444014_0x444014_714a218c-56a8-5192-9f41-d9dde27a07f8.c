// ============================================================
// 函数名称: sub_444014
// 虚拟地址: 0x444014
// WARP GUID: 714a218c-56a8-5192-9f41-d9dde27a07f8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_430ed0, sub_419a60
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_444014(int32_t* arg1)
{
    // 第一条实际指令: sub_430ed0(arg1)
    sub_430ed0(arg1)
    void* result = arg1[0x88]
    
    if (result == 0)
        return result
    
    arg1[0x16]
    return sub_419a60(result)
}
