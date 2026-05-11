// ============================================================
// 函数名称: sub_411f1e
// 虚拟地址: 0x411f1e
// WARP GUID: ab427bb6-6612-5f22-8eee-1d34ecf821f9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_4144e8
// [被调用的父级函数]: sub_411e98
// ============================================================

void*sub_411f1e(int32_t* arg1 @ ebp, int32_t arg2)
{
    // 第一条实际指令: arg1[-2]
    arg1[-2]
    sub_4144e8()
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403df8(&arg1[-3])
    *arg1
    return &arg1[-3]
}
