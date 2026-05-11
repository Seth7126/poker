// ============================================================
// 函数名称: sub_419592
// 虚拟地址: 0x419592
// WARP GUID: f6364af6-4bcb-597b-93ee-3a6abebf2ed8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419a38, sub_41e04c
// [被调用的父级函数]: sub_41932c
// ============================================================

int32_tsub_419592(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_419a38(sub_41e04c(arg1[-2]))
    (*(*arg1[-1] + 0xc))()
    fsbase->NtTib.ExceptionList = arg3
    int32_t result = sub_419a38(arg1[-1])
    *arg1
    return result
}
