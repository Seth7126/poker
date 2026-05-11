// ============================================================
// 函数名称: sub_4038c8
// 虚拟地址: 0x4038c8
// WARP GUID: 49ab79df-598b-511a-a58c-1ce221b327c0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4aab30, sub_416990, sub_49574c, sub_490ef8, sub_41d214, sub_4956c0, sub_453acc, sub_49611c, sub_40ffac, sub_4449fc, sub_413f0c, sub_495e20, sub_40231c, sub_44c2b0, sub_4267c4, sub_40fb5c, sub_42a29c, sub_495c64, sub_4a7e8d, sub_495888, sub_42a30f, sub_495f94, sub_495877, sub_4957d4, sub_402194
// ============================================================

int32_t __stdcallsub_4038c8(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg1
    return (arg2 + 5)()
}
