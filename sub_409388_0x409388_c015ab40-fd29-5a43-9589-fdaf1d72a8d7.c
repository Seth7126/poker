// ============================================================
// 函数名称: sub_409388
// 虚拟地址: 0x409388
// WARP GUID: c015ab40-fd29-5a43-9589-fdaf1d72a8d7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCurrentDirectoryA
// [内部子函数调用]: sub_403ee0
// [被调用的父级函数]: sub_47d208
// ============================================================

char** __convention("regparm")sub_409388(char** arg1)
{
    // 第一条实际指令: uint8_t buffer[0x104]
    uint8_t buffer[0x104]
    sub_403ee0(arg1, &buffer, GetCurrentDirectoryA(0x104, &buffer))
    return arg1
}
