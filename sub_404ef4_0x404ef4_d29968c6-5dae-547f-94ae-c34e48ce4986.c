// ============================================================
// 函数名称: sub_404ef4
// 虚拟地址: 0x404ef4
// WARP GUID: d29968c6-5dae-547f-94ae-c34e48ce4986
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404cec, sub_404c2c
// [被调用的父级函数]: sub_404f44
// ============================================================

int32_t __convention("regparm")sub_404ef4(int16_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result_1 = arg3
    int32_t result_1 = arg3
    result_1 = 0
    sub_404c2c(*(arg2 + 8), &result_1)
    sub_404cec(arg1)
    *arg1 = 0x100
    int32_t result = result_1
    *(arg1 + 8) = result
    return result
}
