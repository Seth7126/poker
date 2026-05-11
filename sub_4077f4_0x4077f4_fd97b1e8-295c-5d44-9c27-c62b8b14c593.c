// ============================================================
// 函数名称: sub_4077f4
// 虚拟地址: 0x4077f4
// WARP GUID: fd97b1e8-295c-5d44-9c27-c62b8b14c593
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41a0dc
// ============================================================

int32_t __convention("regparm")sub_4077f4(int32_t arg1, int32_t arg2) __pure
{
    // 第一条实际指令: return arg1 | (arg2 << 8 & 0xff000000)
    return arg1 | (arg2 << 8 & 0xff000000)
}
