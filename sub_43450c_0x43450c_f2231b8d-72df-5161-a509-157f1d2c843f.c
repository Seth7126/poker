// ============================================================
// 函数名称: sub_43450c
// 虚拟地址: 0x43450c
// WARP GUID: f2231b8d-72df-5161-a509-157f1d2c843f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_418dd8, sub_41975c, sub_4197bc
// [被调用的父级函数]: sub_434594
// ============================================================

int32_t __convention("regparm")sub_43450c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: sub_418dd8(*(*(arg5 - 4) + 0x10))
    sub_418dd8(*(*(arg5 - 4) + 0x10))
    sub_4197bc(*(arg5 - 4), arg3, arg2)
    sub_41975c(*(arg5 - 4), arg1, arg2)
    sub_41975c(*(arg5 - 4), arg1, arg4)
    sub_418dd8(*(*(arg5 - 4) + 0x10))
    sub_41975c(*(arg5 - 4), arg3, arg4)
    return sub_41975c(*(arg5 - 4), arg3, arg2 - 1)
}
