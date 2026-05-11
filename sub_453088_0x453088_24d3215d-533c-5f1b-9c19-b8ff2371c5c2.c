// ============================================================
// 函数名称: sub_453088
// 虚拟地址: 0x453088
// WARP GUID: 24d3215d-533c-5f1b-9c19-b8ff2371c5c2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: wglDeleteContext
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_472ccc, sub_471144, sub_47326c, sub_473684
// ============================================================

void __convention("regparm")sub_453088(BOOL arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        wglDeleteContext(arg1)
}
