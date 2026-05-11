// ============================================================
// 函数名称: sub_4b5de4
// 虚拟地址: 0x4b5de4
// WARP GUID: f8e664e7-118a-57e6-b9ce-083a38e3916d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404500, sub_403e1c, sub_405b40
// [被调用的父级函数]: 无
// ============================================================

void*sub_4b5de4(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403e1c(&arg1[-8], 3)
    sub_404500(&arg1[-4], 3)
    sub_405b40(&arg1[-1])
    *arg1
    return &arg1[-1]
}
