// ============================================================
// 函数名称: sub_43331e
// 虚拟地址: 0x43331e
// WARP GUID: 693c010c-3310-5ee8-8eff-f3ca0eb51b69
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419a38
// [被调用的父级函数]: sub_43329c
// ============================================================

int32_t __stdcallsub_43331e(void* arg1 @ ebp, void* const arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    return sub_419a38(*(*(arg1 - 4) + 0x1f0))
}
