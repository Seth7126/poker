// ============================================================
// 函数名称: sub_423ef8
// 虚拟地址: 0x423ef8
// WARP GUID: aedbe393-3c0c-5196-8b1a-d38f36b52c03
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_423ef8(int32_t* arg1, WPARAM arg2)
{
    // 第一条实际指令: return SendMessageA(sub_4318d0(arg1), 0xc5, arg2, 0)
    return SendMessageA(sub_4318d0(arg1), 0xc5, arg2, 0)
}
