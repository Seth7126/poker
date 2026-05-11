// ============================================================
// 函数名称: sub_40fdd0
// 虚拟地址: 0x40fdd0
// WARP GUID: 80278db6-ca41-5e53-9376-09615514d842
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8
// [被调用的父级函数]: sub_40fcf8
// ============================================================

int32_t*sub_40fdd0(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403df8(&arg1[-1])
    *arg1
    return &arg1[-1]
}
