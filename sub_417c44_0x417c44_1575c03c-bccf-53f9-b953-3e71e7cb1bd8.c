// ============================================================
// 函数名称: sub_417c44
// 虚拟地址: 0x417c44
// WARP GUID: 1575c03c-bccf-53f9-b953-3e71e7cb1bd8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41dd08, sub_41e3af, sub_41c014, sub_41ef18, sub_41d0c0, sub_41c260
// ============================================================

void __convention("regparm")sub_417c44(BOOL arg1)
{
    // 第一条实际指令: if (arg1 != 0 && arg1 != data_531654)
    if (arg1 != 0 && arg1 != data_531654)
        DeleteObject(arg1)
}
