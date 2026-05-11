// ============================================================
// 函数名称: sub_444fb5
// 虚拟地址: 0x444fb5
// WARP GUID: 8ffae37f-a0c6-5e94-822a-c2dcb2419b7f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419a38
// [被调用的父级函数]: sub_444f24
// ============================================================

int32_t __stdcallsub_444fb5(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    return sub_419a38(*(*(arg1 - 4) + 0x220))
}
