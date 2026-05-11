// ============================================================
// 函数名称: sub_4241e4
// 虚拟地址: 0x4241e4
// WARP GUID: 94c9667f-e33f-5f46-9e9a-c58481153722
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_4b4d28, sub_424720
// ============================================================

LRESULT __convention("regparm")sub_4241e4(int32_t* arg1)
{
    // 第一条实际指令: return SendMessageA(sub_4318d0(arg1), 0xb1, 0, 0xffffffff)
    return SendMessageA(sub_4318d0(arg1), 0xb1, 0, 0xffffffff)
}
