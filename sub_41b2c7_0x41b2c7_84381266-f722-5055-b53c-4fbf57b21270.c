// ============================================================
// 函数名称: sub_41b2c7
// 虚拟地址: 0x41b2c7
// WARP GUID: 84381266-f722-5055-b53c-4fbf57b21270
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: sub_41b1ac
// ============================================================

int32_tsub_41b2c7(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_4030d0(arg1[-2])
    int32_t result
    result.b = *(arg1 - 1)
    *arg1
    return result
}
