// ============================================================
// 函数名称: sub_4aa79a
// 虚拟地址: 0x4aa79a
// WARP GUID: 95264a7b-98fd-5c6c-ae4a-a361b5a79b8e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e1c
// [被调用的父级函数]: sub_4aa582
// ============================================================

int32_tsub_4aa79a(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403e1c(&arg1[-3], 2)
    *arg1
    return arg1[-1]
}
