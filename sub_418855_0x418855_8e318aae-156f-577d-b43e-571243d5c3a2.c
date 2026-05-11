// ============================================================
// 函数名称: sub_418855
// 虚拟地址: 0x418855
// WARP GUID: 8e318aae-156f-577d-b43e-571243d5c3a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_418480
// [被调用的父级函数]: sub_4187b0
// ============================================================

int32_t __stdcallsub_418855(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    return sub_418480(*(arg1 - 4))
}
