// ============================================================
// 函数名称: sub_4653ac
// 虚拟地址: 0x4653ac
// WARP GUID: c9acdcba-76fa-507b-8b19-87e01a224e0a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_464ca4, sub_464d1c
// [被调用的父级函数]: sub_464a00
// ============================================================

int32_t* __convention("regparm")sub_4653ac(void* arg1)
{
    // 第一条实际指令: uint32_t ebx = *(arg1 + 0x161)
    uint32_t ebx = *(arg1 + 0x161)
    *(ebx + 0x10) = **(arg1 + 0x14)
    *(ebx + 0x14) = *(*(arg1 + 0x14) + 4)
    sub_464d1c(ebx)
    sub_464ca4(ebx)
    int32_t* result = *(arg1 + 0x14)
    *result = *(ebx + 0x10)
    result[1] = *(ebx + 0x14)
    return result
}
