// ============================================================
// 函数名称: sub_498818
// 虚拟地址: 0x498818
// WARP GUID: 956a5d19-bbf6-5a93-9ed4-afae05725e7c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403898, sub_4030d0, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_498818(int32_t* arg1 @ ebp, void* const arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: *(arg1[-1] + 0x110) = 0
    *(arg1[-1] + 0x110) = 0
    *(arg1[-1] + 0x111) = 1
    sub_403898(__return_addr)
    sub_4030d0(*(arg1[-1] + 0x10c))
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    int32_t result = sub_403e1c(&arg1[-3], 2)
    *arg1
    return result
}
