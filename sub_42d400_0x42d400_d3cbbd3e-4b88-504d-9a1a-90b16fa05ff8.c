// ============================================================
// 函数名称: sub_42d400
// 虚拟地址: 0x42d400
// WARP GUID: d3cbbd3e-4b88-504d-9a1a-90b16fa05ff8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_42d400(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x5c)
    int32_t* esi = *(arg1 + 0x5c)
    
    if (esi != 0 && (*(*esi + 0x28))().b != 0)
        return 0
    
    arg1.b = 1
    return arg1
}
