// ============================================================
// 函数名称: sub_42a30f
// 虚拟地址: 0x42a30f
// WARP GUID: 396e6bfa-29ac-5a1c-931b-af8f66568808
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_42a4d8, sub_419a38, sub_4038c8, sub_410524, sub_4199dc
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_42a30f(void* arg1 @ ebp, void* const arg2, void arg3, int32_t, int32_t)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    arg2 = &data_42a32c
    return sub_419a38(*(arg1 - 0x10))
}
