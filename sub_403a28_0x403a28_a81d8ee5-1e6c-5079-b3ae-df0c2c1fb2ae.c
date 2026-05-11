// ============================================================
// 函数名称: sub_403a28
// 虚拟地址: 0x403a28
// WARP GUID: a81d8ee5-1e6c-5079-b3ae-df0c2c1fb2ae
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403b30
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD**sub_403a28(void* arg1 @ ebp)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg1 - 0xc
    *(arg1 - 0xc) = fsbase->NtTib.ExceptionList
    *(arg1 - 8) = 0x40398c
    *(arg1 - 4) = arg1
    data_5314a8 = arg1 - 0xc
    return arg1 - 0xc
}
