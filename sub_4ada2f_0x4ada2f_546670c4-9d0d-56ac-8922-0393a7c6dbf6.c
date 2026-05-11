// ============================================================
// 函数名称: sub_4ada2f
// 虚拟地址: 0x4ada2f
// WARP GUID: 546670c4-9d0d-56ac-8922-0393a7c6dbf6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e1c
// [被调用的父级函数]: sub_4ad8c0
// ============================================================

int32_t*sub_4ada2f(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403e1c(&arg1[-6], 3)
    sub_403df8(&arg1[-2])
    *arg1
    return &arg1[-2]
}
