// ============================================================
// 函数名称: sub_423d50
// 虚拟地址: 0x423d50
// WARP GUID: e57a4df4-5d24-54e8-9c8f-13463a2969b2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ad4c
// [被调用的父级函数]: 无
// ============================================================

void* const __convention("regparm")sub_423d50(int32_t* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: void* const result = sub_42ad4c(arg1, arg2, arg3)
    void* const result = sub_42ad4c(arg1, arg2, arg3)
    
    if (arg3 == 1 && arg2 == arg1[0x4a])
        result = nullptr
        arg1[0x4a] = 0
    
    return result
}
