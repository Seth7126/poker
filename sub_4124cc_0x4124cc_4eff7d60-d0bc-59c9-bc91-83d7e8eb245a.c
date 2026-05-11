// ============================================================
// 函数名称: sub_4124cc
// 虚拟地址: 0x4124cc
// WARP GUID: 4eff7d60-d0bc-59c9-bc91-83d7e8eb245a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_412474, sub_41276c
// ============================================================

int32_t* __convention("regparm")sub_4124cc(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* edx = *(arg1 + 0xc) + (arg2 << 3)
    int32_t* edx = *(arg1 + 0xc) + (arg2 << 3)
    int32_t* result = *(arg1 + 0xc) + (arg3 << 3)
    int32_t ecx = *edx
    *edx = *result
    *result = ecx
    int32_t ecx_1 = edx[1]
    edx[1] = result[1]
    result[1] = ecx_1
    return result
}
