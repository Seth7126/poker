// ============================================================
// 函数名称: sub_416b42
// 虚拟地址: 0x416b42
// WARP GUID: 44f48ed8-cc06-588d-8264-4b6b04c8bebd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403898, sub_405b40
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_416b42(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: arg1[-1] = 0x8000ffff
    arg1[-1] = 0x8000ffff
    sub_403898(__return_addr)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_405b40(&arg1[3])
    *arg1
    return arg1[-1]
}
