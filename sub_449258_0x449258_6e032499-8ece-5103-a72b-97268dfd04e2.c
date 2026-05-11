// ============================================================
// 函数名称: sub_449258
// 虚拟地址: 0x449258
// WARP GUID: 6e032499-8ece-5103-a72b-97268dfd04e2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4103c8, sub_410504, sub_402754
// [被调用的父级函数]: sub_448668
// ============================================================

LRESULT __stdcallsub_449258(void* arg1 @ eax, int32_t arg2)
{
    // 第一条实际指令: int32_t lParam
    int32_t lParam
    
    if (*(arg1 + 0x94) != 0)
        sub_410504(*(arg1 + 0x98))
        int32_t* eax_1 = sub_402754(8)
        *eax_1 = lParam
        eax_1[1] = arg2
        return sub_4103c8(*(arg1 + 0x98), eax_1)
    
    LRESULT hWnd = *(arg1 + 0x24)
    
    if (hWnd == 0)
        return hWnd
    
    return SendMessageA(hWnd, 0xb020, 0, &lParam)
}
