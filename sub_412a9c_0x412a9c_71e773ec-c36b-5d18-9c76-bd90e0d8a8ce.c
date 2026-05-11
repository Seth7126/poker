// ============================================================
// 函数名称: sub_412a9c
// 虚拟地址: 0x412a9c
// WARP GUID: 71e773ec-c36b-5d18-9c76-bd90e0d8a8ce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408fc4
// [被调用的父级函数]: 无
// ============================================================

uint32_t __convention("regparm")sub_412a9c(void* arg1, int32_t arg2, int16_t arg3)
{
    // 第一条实际指令: return sub_408fc4(*(arg1 + 4), arg2, zx.d(arg3))
    return sub_408fc4(*(arg1 + 4), arg2, zx.d(arg3))
}
