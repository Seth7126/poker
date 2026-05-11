// ============================================================
// 函数名称: sub_41a8b3
// 虚拟地址: 0x41a8b3
// WARP GUID: 3b2964f3-ddf5-54a2-90da-96c7f8900cfb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41a7f9
// ============================================================

int32_tsub_41a8b3(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    int32_t result = ReleaseDC(nullptr, arg1[-4])
    *arg1
    return result
}
