// ============================================================
// 函数名称: sub_414072
// 虚拟地址: 0x414072
// WARP GUID: c7987c37-f59d-562d-b585-16ebf7a6500f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_403844, sub_403898, sub_413c38, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_414072(int32_t* arg1 @ ebp, int32_t* arg2, int32_t arg3, int32_t arg4, void* const arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: if (sub_413c38(arg1) != 0)
    if (sub_413c38(arg1) != 0)
        sub_4030d0(arg1[-4])
    
    sub_403844()
    sub_403898(arg2)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg2
    *(arg1[-3] + 0x2c) = arg1[-8]
    *(arg1[-3] + 0x1c) = arg1[-9]
    fsbase->NtTib.ExceptionList = arg4
    sub_403e1c(&arg1[-6], 2)
    *arg1
    return arg1[-4]
}
