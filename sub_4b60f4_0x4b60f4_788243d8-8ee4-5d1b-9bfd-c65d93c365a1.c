// ============================================================
// 函数名称: sub_4b60f4
// 虚拟地址: 0x4b60f4
// WARP GUID: 788243d8-8ee4-5d1b-9bfd-c65d93c365a1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404754
// [被调用的父级函数]: sub_4b5e24
// ============================================================

void*sub_4b60f4(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_404754(&arg1[-0x14], 0x40da88)
    *arg1
    return &arg1[-0x14]
}
