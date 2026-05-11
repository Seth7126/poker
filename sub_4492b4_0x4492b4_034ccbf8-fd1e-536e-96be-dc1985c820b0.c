// ============================================================
// 函数名称: sub_4492b4
// 虚拟地址: 0x4492b4
// WARP GUID: 034ccbf8-fd1e-536e-96be-dc1985c820b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_410524, sub_40276c, sub_410414
// [被调用的父级函数]: sub_4480dd, sub_448668
// ============================================================

LRESULT __stdcallsub_4492b4(void* arg1 @ eax, int32_t arg2)
{
    // 第一条实际指令: LRESULT hWnd
    LRESULT hWnd
    int32_t lParam
    
    if (*(arg1 + 0x94) != 0)
        hWnd = *(arg1 + 0x98)
        int32_t edi_2 = *(hWnd + 8) - 1
        
        if (edi_2 s>= 0)
            int32_t i_1 = edi_2 + 1
            int32_t esi_1 = 0
            int32_t i
            
            do
                hWnd = sub_410524(*(arg1 + 0x98), esi_1)
                
                if (*hWnd == lParam && arg2 == *(hWnd + 4))
                    sub_40276c(hWnd)
                    return sub_410414(*(arg1 + 0x98), esi_1)
                
                esi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    else
        hWnd = *(arg1 + 0x24)
        
        if (hWnd != 0)
            return SendMessageA(hWnd, 0xb020, 1, &lParam)
    return hWnd
}
