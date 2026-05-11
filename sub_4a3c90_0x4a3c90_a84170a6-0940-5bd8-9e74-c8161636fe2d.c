// ============================================================
// 函数名称: sub_4a3c90
// 虚拟地址: 0x4a3c90
// WARP GUID: a84170a6-0940-5bd8-9e74-c8161636fe2d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c
// [被调用的父级函数]: sub_4a90cc
// ============================================================

int32_t __convention("regparm")sub_4a3c90(void* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = sub_403e4c(arg1 + 0x18, arg2)
    int32_t result = sub_403e4c(arg1 + 0x18, arg2)
    *(arg1 + 0x20) = arg3
    return result
}
