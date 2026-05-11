// ============================================================
// 函数名称: sub_4350cc
// 虚拟地址: 0x4350cc
// WARP GUID: 637cc80e-5cd0-541e-9eab-3d2c194725c4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDCEx
// [内部子函数调用]: sub_4351dc, sub_435a38, sub_4318d0
// [被调用的父级函数]: sub_43550c
// ============================================================

int32_t __convention("regparm")sub_4350cc(HGDIOBJ arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_14 = *arg3
    int32_t var_14 = *arg3
    int32_t var_10 = arg3[1]
    *(arg1 + 0x60) = arg2
    HWND eax_1
    int32_t ecx
    eax_1, ecx = sub_4318d0(*(arg1 + 0x14))
    data_531750
    sub_435a38(ecx, eax_1)
    HWND hWnd = sub_4318d0(*(arg1 + 0x14))
    *(arg1 + 0x5c) = hWnd
    enum GET_DCX_FLAGS flags = DCX_CACHE | DCX_CLIPSIBLINGS | DCX_LOCKWINDOWUPDATE
    *(arg1 + 0x58) = GetDCEx(hWnd, nullptr, flags)
    *(arg1 + 0x50) = var_14
    *(arg1 + 0x54) = var_10
    return sub_4351dc(arg1)
}
