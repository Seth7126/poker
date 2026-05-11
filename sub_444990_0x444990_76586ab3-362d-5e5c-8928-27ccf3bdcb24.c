// ============================================================
// 函数名称: sub_444990
// 虚拟地址: 0x444990
// WARP GUID: 76586ab3-362d-5e5c-8928-27ccf3bdcb24
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4448d8, sub_42e5e4
// [被调用的父级函数]: sub_42e5f8
// ============================================================

int32_t __convention("regparm")sub_444990(int32_t* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: if (arg3 != 0 && sub_42e5e4(arg2, arg1[0x83]) != 0)
    if (arg3 != 0 && sub_42e5e4(arg2, arg1[0x83]) != 0)
        arg1[0x83] = *(arg2 + 0x24)
    
    char result = sub_42e5e4(arg2, arg1[0x82])
    
    if (result == 0)
        return result
    
    return sub_4448d8(arg1, nullptr)
}
