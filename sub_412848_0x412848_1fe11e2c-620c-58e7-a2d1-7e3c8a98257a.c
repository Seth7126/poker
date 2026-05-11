// ============================================================
// 函数名称: sub_412848
// 虚拟地址: 0x412848
// WARP GUID: 1fe11e2c-620c-58e7-a2d1-7e3c8a98257a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408aa0
// [被调用的父级函数]: sub_412860
// ============================================================

int32_t __convention("regparm")sub_412848(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: return sub_408aa0(*(*(arg1 + 0xc) + (arg2 << 3)), *(*(arg1 + 0xc) + (arg3 << 3)))
    return sub_408aa0(*(*(arg1 + 0xc) + (arg2 << 3)), *(*(arg1 + 0xc) + (arg3 << 3)))
}
