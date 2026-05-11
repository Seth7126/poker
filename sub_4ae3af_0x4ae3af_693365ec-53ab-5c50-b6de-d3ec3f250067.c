// ============================================================
// 函数名称: sub_4ae3af
// 虚拟地址: 0x4ae3af
// WARP GUID: 693365ec-53ab-5c50-b6de-d3ec3f250067
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e4c, sub_403e1c
// [被调用的父级函数]: sub_4ae168
// ============================================================

void*sub_4ae3af(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: sub_403e4c(arg1[2], arg1[-4])
    sub_403e4c(arg1[2], arg1[-4])
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403e1c(&arg1[-0xc], 4)
    sub_403df8(&arg1[-4])
    *arg1
    return &arg1[-4]
}
