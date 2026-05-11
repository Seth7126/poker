// ============================================================
// 函数名称: sub_4b4738
// 虚拟地址: 0x4b4738
// WARP GUID: f3b511f7-a117-5311-8e65-8ea1602be340
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e1c
// [被调用的父级函数]: sub_4b44d0
// ============================================================

int32_tsub_4b4738(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    int32_t result = sub_403e1c(&arg1[-5], 4)
    *arg1
    return result
}
