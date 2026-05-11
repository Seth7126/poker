// ============================================================
// 函数名称: sub_412800
// 虚拟地址: 0x412800
// WARP GUID: 230e8a09-1a88-50a9-80fd-53a0511704d4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402784
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412800(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = sub_402784(arg1 + 0xc, arg2 << 3)
    int32_t result = sub_402784(arg1 + 0xc, arg2 << 3)
    *(arg1 + 0x14) = arg2
    return result
}
