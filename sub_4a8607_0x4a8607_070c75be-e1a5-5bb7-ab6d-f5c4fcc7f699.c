// ============================================================
// 函数名称: sub_4a8607
// 虚拟地址: 0x4a8607
// WARP GUID: 070c75be-e1a5-5bb7-ab6d-f5c4fcc7f699
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_40cc98
// [被调用的父级函数]: sub_4a84a7
// ============================================================

void*sub_4a8607(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_40cc98(&arg1[-3])
    fsbase->NtTib.ExceptionList = arg3
    sub_403df8(&arg1[-5])
    *arg1
    return &arg1[-5]
}
