// ============================================================
// 函数名称: sub_4241c8
// 虚拟地址: 0x4241c8
// WARP GUID: 0af2b799-25f8-5382-a990-58c65e900838
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowTextA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_4241c8(int32_t* arg1)
{
    // 第一条实际指令: return SetWindowTextA(sub_4318d0(arg1), 0x4241e0)
    return SetWindowTextA(sub_4318d0(arg1), 0x4241e0)
}
