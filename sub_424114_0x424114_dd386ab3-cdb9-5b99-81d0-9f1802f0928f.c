// ============================================================
// 函数名称: sub_424114
// 虚拟地址: 0x424114
// WARP GUID: dd386ab3-cdb9-5b99-81d0-9f1802f0928f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_424114(int32_t* arg1, LPARAM arg2)
{
    // 第一条实际指令: return SendMessageA(sub_4318d0(arg1), 0xb1, arg2, arg2)
    return SendMessageA(sub_4318d0(arg1), 0xb1, arg2, arg2)
}
