// ============================================================
// 函数名称: sub_4095cc
// 虚拟地址: 0x4095cc
// WARP GUID: 26de69c3-a3e3-57a9-8519-693da6ca2cc8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4093dc, sub_4095ac, sub_4093b0
// [被调用的父级函数]: sub_42ec9c, sub_4aba0c, sub_411937, sub_42c938, sub_4aba4c, sub_4ab4f8, sub_4ab9cc
// ============================================================

void* __convention("regparm")sub_4095cc(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0
    
    int32_t esi_1 = sub_4093b0(arg1) + 1
    void* result = sub_4095ac(esi_1)
    sub_4093dc(result, arg1, esi_1)
    return result
}
