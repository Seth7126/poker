// ============================================================
// 函数名称: sub_41a0c8
// 虚拟地址: 0x41a0c8
// WARP GUID: fdbc6963-45ce-5af3-8c2e-1fec8c3c99d8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41e1b4, sub_41ac98, sub_41e6c8, sub_41a720, sub_41a7f9
// ============================================================

int32_t __convention("regparm")sub_41a0c8(int32_t arg1, int32_t arg2, int32_t arg3) __pure
{
    // 第一条实际指令: int32_t eax_2 = (arg1 * arg2 + arg3 - 1) & not.d(arg3 - 1)
    int32_t eax_2 = (arg1 * arg2 + arg3 - 1) & not.d(arg3 - 1)
    
    if (eax_2 s< 0)
        eax_2 += 7
    
    return eax_2 s>> 3
}
