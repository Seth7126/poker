// ============================================================
// 函数名称: sub_51a748
// 虚拟地址: 0x51a748
// WARP GUID: 9ddfa24d-1e08-551c-8e30-27a5ba9dac7a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403898, sub_403e1c, sub_51aaa0
// [被调用的父级函数]: sub_51a68f
// ============================================================

int32_tsub_51a748(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: sub_403898(__return_addr)
    sub_403898(__return_addr)
    int32_t edx
    edx.b = 1
    sub_51aaa0(*data_5303b8, edx)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    int32_t result = sub_403e1c(&arg1[-9], 8)
    *arg1
    return result
}
