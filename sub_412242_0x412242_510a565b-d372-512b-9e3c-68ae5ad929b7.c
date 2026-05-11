// ============================================================
// 函数名称: sub_412242
// 虚拟地址: 0x412242
// WARP GUID: 510a565b-d372-512b-9e3c-68ae5ad929b7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8
// [被调用的父级函数]: sub_4121a4
// ============================================================

int32_t* __stdcallsub_412242(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403df8(arg1 - 8)
    return arg1 - 8
}
