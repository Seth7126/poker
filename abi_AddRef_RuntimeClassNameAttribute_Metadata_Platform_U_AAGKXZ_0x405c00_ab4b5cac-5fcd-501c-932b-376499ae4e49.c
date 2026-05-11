// ============================================================
// 函数名称: ?__abi_AddRef@RuntimeClassNameAttribute@Metadata@Platform@@U$AAGKXZ
// 虚拟地址: 0x405c00
// WARP GUID: ab4b5cac-5fcd-501c-932b-376499ae4e49
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InterlockedIncrement
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42877e, sub_401183
// ============================================================

int32_t __stdcall?__abi_AddRef@RuntimeClassNameAttribute@Metadata@Platform@@U$AAGKXZ(int32_t arg1)
{
    // 第一条实际指令: return InterlockedIncrement(arg1 + 4)
    return InterlockedIncrement(arg1 + 4)
}
