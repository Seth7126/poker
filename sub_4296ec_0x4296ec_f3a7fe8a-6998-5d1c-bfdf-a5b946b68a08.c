// ============================================================
// 函数名称: sub_4296ec
// 虚拟地址: 0x4296ec
// WARP GUID: f3a7fe8a-6998-5d1c-bfdf-a5b946b68a08
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_429794, sub_429f30, sub_4297e4
// ============================================================

LRESULT __fastcallsub_4296ec(int32_t arg1, int32_t arg2, HWND arg3 @ eax, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return 0
    
    int32_t lParam = *arg4
    int32_t var_18_1 = arg4[1]
    int32_t var_10_1 = arg5
    int32_t var_14_1 = arg1
    int32_t ecx_3
    ecx_3.b = data_531780 == 2
    char var_c_1 = ecx_3.b
    return SendMessageA(arg3, 0xb02f, arg2 & 0x7f, &lParam)
}
