// ============================================================
// 函数名称: sub_4288d8
// 虚拟地址: 0x4288d8
// WARP GUID: e2af548b-e29b-5b6c-b5ad-c619c58dba65
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowLongA, SetPropA, GetWindowLongA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42eac0
// ============================================================

int32_t __stdcallsub_4288d8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    *(data_52e740 + 0x14c) = arg1
    SetWindowLongA(arg1, 0xfffffffc, *(data_52e740 + 0x15c))
    
    if ((GetWindowLongA(arg1, 0xfffffff0) & 0x40000000) != 0 && GetWindowLongA(arg1, 0xfffffff4) == 0)
        SetWindowLongA(arg1, 0xfffffff4, arg1)
    
    SetPropA(arg1, zx.d(data_53175e), data_52e740)
    SetPropA(arg1, zx.d(data_53175c), data_52e740)
    int32_t eax_16 = data_52e740
    data_52e740 = 0
    return (*(eax_16 + 0x15c))(arg1, arg2, arg3, arg4)
}
