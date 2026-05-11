// ============================================================
// 函数名称: sub_418d68
// 虚拟地址: 0x418d68
// WARP GUID: 0d96022b-c518-555a-8afd-f48ca9695997
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_418dd8, sub_418eb4, sub_418ee4
// ============================================================

int32_t __convention("regparm")sub_418d68(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: __builtin_memcpy(arg2, *(arg1 + 0x10) + 0x10, 0x10)
    __builtin_memcpy(arg2, *(arg1 + 0x10) + 0x10, 0x10)
    *arg2 = 0
    return 0
}
