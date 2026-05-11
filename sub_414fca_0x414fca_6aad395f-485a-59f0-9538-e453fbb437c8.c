// ============================================================
// 函数名称: sub_414fca
// 虚拟地址: 0x414fca
// WARP GUID: 6aad395f-485a-59f0-9538-e453fbb437c8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4132fc, sub_403e1c, sub_40ca2c
// [被调用的父级函数]: sub_414da8
// ============================================================

int32_tsub_414fca(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: sub_4132fc()
    sub_4132fc()
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    fsbase->NtTib.ExceptionList = arg3
    sub_40ca2c(data_531618)
    fsbase->NtTib.ExceptionList = arg5
    sub_403e1c(&arg1[-0xb], 6)
    *arg1
    return arg1[-3]
}
