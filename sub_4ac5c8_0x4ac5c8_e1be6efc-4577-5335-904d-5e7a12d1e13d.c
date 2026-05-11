// ============================================================
// 函数名称: sub_4ac5c8
// 虚拟地址: 0x4ac5c8
// WARP GUID: e1be6efc-4577-5335-904d-5e7a12d1e13d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403844, sub_403898, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void*sub_4ac5c8(int32_t* arg1 @ ebp, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: (*(*arg1[-1] + 0x5c))()
    (*(*arg1[-1] + 0x5c))()
    sub_403844()
    sub_403898(arg2)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg2
    sub_403df8(&arg1[-2])
    *arg1
    return &arg1[-2]
}
