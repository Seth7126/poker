// ============================================================
// 函数名称: sub_467070
// 虚拟地址: 0x467070
// WARP GUID: ca41331b-756b-5daa-920e-8ee14502eb23
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_467014, sub_403e4c
// [被调用的父级函数]: sub_4670a8
// ============================================================

int32_t __convention("regparm")sub_467070(void* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: sub_467014(arg1)
    sub_467014(arg1)
    *(arg1 + 4) = arg2
    return sub_403e4c(arg1 + 0x10, arg3)
}
