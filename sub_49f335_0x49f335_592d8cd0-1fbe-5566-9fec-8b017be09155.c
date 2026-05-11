// ============================================================
// 函数名称: sub_49f335
// 虚拟地址: 0x49f335
// WARP GUID: 592d8cd0-1fbe-5566-9fec-8b017be09155
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e1c
// [被调用的父级函数]: sub_49f268
// ============================================================

int32_t*sub_49f335(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403e1c(&arg1[-5], 2)
    sub_403df8(&arg1[-1])
    *arg1
    return &arg1[-1]
}
