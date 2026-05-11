// ============================================================
// 函数名称: sub_432fec
// 虚拟地址: 0x432fec
// WARP GUID: 5f5527c6-02b7-56d2-b5e2-8584c0aff027
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_BeginDrag
// [内部子函数调用]: sub_437290, sub_437154
// [被调用的父级函数]: sub_43304c
// ============================================================

BOOL __fastcallsub_432fec(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: if (sub_437154(arg3) == 0)
    if (sub_437154(arg3) == 0)
        return 0
    
    arg3[0x1c] = arg2
    arg3[0x1a] = arg1
    arg3[0x1b] = arg4
    ImageList_BeginDrag(sub_437290(arg3), arg2, arg1, arg4)
    BOOL result
    result.b = 1
    *(arg3 + 0x62) = 1
    return result
}
