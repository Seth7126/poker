// ============================================================
// 函数名称: sub_4cbdd2
// 虚拟地址: 0x4cbdd2
// WARP GUID: b51e2fb2-027e-5a22-95c3-5e1da86db65a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403898, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4cbdd2(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: sub_403898(__return_addr)
    sub_403898(__return_addr)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403df8(&arg1[-0x55])
    sub_403df8(&arg1[-1])
    *arg1
    return 0
}
