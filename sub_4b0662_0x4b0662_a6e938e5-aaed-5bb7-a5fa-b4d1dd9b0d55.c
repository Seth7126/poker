// ============================================================
// 函数名称: sub_4b0662
// 虚拟地址: 0x4b0662
// WARP GUID: a6e938e5-aaed-5bb7-a5fa-b4d1dd9b0d55
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e1c
// [被调用的父级函数]: sub_4b0427
// ============================================================

int32_tsub_4b0662(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: *(arg1[-1] + 0xf8) = 0
    *(arg1[-1] + 0xf8) = 0
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    int32_t result = sub_403e1c(&arg1[-4], 2)
    *arg1
    return result
}
