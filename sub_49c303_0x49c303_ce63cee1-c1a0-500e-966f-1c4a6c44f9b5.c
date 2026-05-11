// ============================================================
// 函数名称: sub_49c303
// 虚拟地址: 0x49c303
// WARP GUID: ce63cee1-c1a0-500e-966f-1c4a6c44f9b5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405500, sub_403898, sub_4030d0, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_49c303(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: sub_4030d0(arg1[-1])
    sub_4030d0(arg1[-1])
    arg1[-1] = 0
    sub_403898(__return_addr)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403e1c(&arg1[-4], 2)
    sub_405500(&arg1[-2], 0x49c228)
    *arg1
    return arg1[-1]
}
