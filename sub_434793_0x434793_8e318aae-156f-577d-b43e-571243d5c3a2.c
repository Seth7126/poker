// ============================================================
// 函数名称: sub_434793
// 虚拟地址: 0x434793
// WARP GUID: 8e318aae-156f-577d-b43e-571243d5c3a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419a38, sub_4030d0
// [被调用的父级函数]: sub_434670
// ============================================================

int32_tsub_434793(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_419a38(arg1[-1])
    fsbase->NtTib.ExceptionList = arg3
    int32_t result = sub_4030d0(arg1[-1])
    *arg1
    return result
}
