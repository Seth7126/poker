// ============================================================
// 函数名称: setsockopt
// 虚拟地址: 0x493c5c
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_49682c
// ============================================================

int32_t __thiscallsetsockopt(int32_t arg1, SOCKET arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: return setsockopt(arg1, arg2, arg3, arg4, arg5, arg6) __tailcall
    return setsockopt(arg1, arg2, arg3, arg4, arg5, arg6) __tailcall
}
