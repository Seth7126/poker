// ============================================================
// 函数名称: sub_426752
// 虚拟地址: 0x426752
// WARP GUID: c4b121f9-6045-5fb7-96e6-4ca17c32a6af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_426610
// [被调用的父级函数]: sub_4266b8
// ============================================================

int32_t __stdcallsub_426752(void* arg1 @ ebp, int32_t arg2, int32_t arg3, void* const arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    fsbase->NtTib.ExceptionList = arg3
    return sub_426610(*(arg1 - 4))
}
