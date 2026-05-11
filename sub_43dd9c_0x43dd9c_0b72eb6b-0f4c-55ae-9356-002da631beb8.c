// ============================================================
// 函数名称: sub_43dd9c
// 虚拟地址: 0x43dd9c
// WARP GUID: 0b72eb6b-0f4c-55ae-9356-002da631beb8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC
// [内部子函数调用]: sub_403df8, sub_4030d0
// [被调用的父级函数]: sub_43d934
// ============================================================

void*sub_43dd9c(int32_t* arg1 @ ebp, int32_t arg2, HWND arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_4030d0(arg1[-5])
    fsbase->NtTib.ExceptionList = arg3
    ReleaseDC(*(arg1[-1] + 0x10), arg1[-7])
    fsbase->NtTib.ExceptionList = arg5
    sub_403df8(&arg1[-0xc])
    *arg1
    return &arg1[-0xc]
}
