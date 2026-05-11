// ============================================================
// 函数名称: sub_402bc0
// 虚拟地址: 0x402bc0
// WARP GUID: 84413562-7cad-5222-9a73-194b0235307e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4807f4, sub_507e90, sub_4980b4, sub_51cc08, sub_511fd8, sub_484e24, sub_4d951f, sub_50d52c, sub_51300c, sub_4d9378, sub_529170, sub_5293a8, sub_514ef8, sub_50b624, sub_515de8, sub_50e4b0, sub_509ed4, sub_469b8c, sub_46f698, sub_46f000, sub_488509, sub_469ad8, sub_4d954c, sub_507d3f, sub_4fc834, sub_514468, sub_50e9c0
// ============================================================

int32_t __convention("regparm")sub_402bc0(int32_t arg1, char* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.b = *arg2
    int32_t count = (ecx + 1) & 3
    int32_t esi_1
    int32_t edi_1
    edi_1, esi_1 = __builtin_memcpy(arg1, arg2, (ecx + 1) u>> 2 << 2)
    __builtin_memcpy(edi_1, esi_1, count)
    return count
}
