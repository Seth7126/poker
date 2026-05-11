// ============================================================
// 函数名称: sub_424cac
// 虚拟地址: 0x424cac
// WARP GUID: fc597d67-5f00-5b01-8723-3b7c61c96a3c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateWindowExA, SendMessageA
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_424cac(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*(data_530a80 + 8) == 0 || *data_530a60 == 2 || (*(arg2 + 5) & 8) == 0)
    if (*(data_530a80 + 8) == 0 || *data_530a60 == 2 || (*(arg2 + 5) & 8) == 0)
        HWND eax_23 = CreateWindowExA(arg2[2], &arg2[0x13], sub_424d79+3, arg2[1], arg2[3], arg2[4], 
            arg2[5], arg2[6], arg2[7], nullptr, data_5314dc, arg2[8])
        *(arg1 + 0x14c) = eax_23
    else
        HWND hWnd = CreateWindowExA(arg2[2], &arg2[0x13], sub_424d79+3, arg2[1] & 0xfffff7ff, arg2[3], 
            arg2[4], arg2[5], arg2[6], arg2[7], nullptr, data_5314dc, arg2[8])
        *(arg1 + 0x14c) = hWnd
        
        if (hWnd != 0)
            SendMessageA(hWnd, 0xcf, 1, 0)
    
    return SendMessageA(*(arg1 + 0x14c), 0xc, 0, *arg2)
}
