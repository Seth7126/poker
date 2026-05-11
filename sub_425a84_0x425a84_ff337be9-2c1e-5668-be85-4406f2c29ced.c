// ============================================================
// 函数名称: sub_425a84
// 虚拟地址: 0x425a84
// WARP GUID: ff337be9-2c1e-5668-be85-4406f2c29ced
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_425a84(int32_t* arg1)
{
    // 第一条实际指令: return SendMessageA(sub_4318d0(arg1), 0x184, 0, 0)
    return SendMessageA(sub_4318d0(arg1), 0x184, 0, 0)
}
