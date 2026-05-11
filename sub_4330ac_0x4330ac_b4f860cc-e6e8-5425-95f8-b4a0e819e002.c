// ============================================================
// 函数名称: sub_4330ac
// 虚拟地址: 0x4330ac
// WARP GUID: b4f860cc-e6e8-5425-95f8-b4a0e819e002
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_DragEnter
// [内部子函数调用]: sub_437154, sub_433110, sub_432ee0
// [被调用的父级函数]: sub_43304c
// ============================================================

int32_t __fastcallsub_4330ac(int32_t arg1, HWND arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: if (sub_437154(arg3) == 0 || arg2 == *(arg3 + 0x64))
    if (sub_437154(arg3) == 0 || arg2 == *(arg3 + 0x64))
        return 0
    
    sub_433110(arg3)
    *(arg3 + 0x64) = arg2
    int32_t x
    sub_432ee0(arg4, arg1, arg2, &x)
    int32_t y
    return neg.d(sbb.d(arg2, arg2, ImageList_DragEnter(*(arg3 + 0x64), x, y) != 0))
}
