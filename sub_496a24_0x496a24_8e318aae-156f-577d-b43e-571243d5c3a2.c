// ============================================================
// 函数名称: sub_496a24
// 虚拟地址: 0x496a24
// WARP GUID: 8e318aae-156f-577d-b43e-571243d5c3a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4953e8
// [被调用的父级函数]: sub_49692d
// ============================================================

int32_t __stdcallsub_496a24(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    return sub_4953e8(*(arg1 - 4))
}
