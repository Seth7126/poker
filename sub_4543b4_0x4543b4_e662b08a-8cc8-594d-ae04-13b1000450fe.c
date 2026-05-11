// ============================================================
// 函数名称: sub_4543b4
// 虚拟地址: 0x4543b4
// WARP GUID: e662b08a-8cc8-594d-ae04-13b1000450fe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45380c
// [被调用的父级函数]: sub_453ff8
// ============================================================

int32_tsub_4543b4(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    fsbase->NtTib.ExceptionList = arg3
    sub_45380c(&arg1[-0x9f])
    *arg1
    return arg1[-2]
}
