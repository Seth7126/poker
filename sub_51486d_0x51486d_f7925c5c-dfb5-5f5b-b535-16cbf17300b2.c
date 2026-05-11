// ============================================================
// 函数名称: sub_51486d
// 虚拟地址: 0x51486d
// WARP GUID: f7925c5c-dfb5-5f5b-b535-16cbf17300b2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403898, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_51486d(int32_t* arg1 @ ebp, void* const arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: sub_403898(__return_addr)
    sub_403898(__return_addr)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403df8(&arg1[-0x63])
    *arg1
    return 0
}
