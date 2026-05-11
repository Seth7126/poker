// ============================================================
// 函数名称: sub_4a8a8a
// 虚拟地址: 0x4a8a8a
// WARP GUID: e5d8211a-a027-5649-a16e-e9c7b811760a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e1c
// [被调用的父级函数]: sub_4a8988
// ============================================================

int32_t*sub_4a8a8a(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403e1c(&arg1[-5], 3)
    sub_403df8(&arg1[-1])
    *arg1
    return &arg1[-1]
}
