// ============================================================
// 函数名称: sub_4014bc
// 虚拟地址: 0x4014bc
// WARP GUID: cd741e14-5c84-5f3d-9b86-842876c9133d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4014d4, sub_4016b4, sub_401880, sub_401910, sub_401548
// ============================================================

void __convention("regparm")sub_4014bc(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edx_1 = arg1[1]
    int32_t* edx_1 = arg1[1]
    void* ecx = *arg1
    *edx_1 = ecx
    *(ecx + 4) = edx_1
    *arg1 = data_531454
    data_531454 = arg1
}
