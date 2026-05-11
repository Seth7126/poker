// ============================================================
// 函数名称: sub_41ac33
// 虚拟地址: 0x41ac33
// WARP GUID: 89ba2a93-5a7e-56f6-afec-1a136e3282c6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40276c
// [被调用的父级函数]: sub_41aa68
// ============================================================

int32_tsub_41ac33(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    *(arg1[-0x10] + 8)
    sub_40276c(arg1[-0xb])
    fsbase->NtTib.ExceptionList = arg3
    arg1[-5]
    int32_t result = sub_40276c(arg1[-4])
    *arg1
    return result
}
