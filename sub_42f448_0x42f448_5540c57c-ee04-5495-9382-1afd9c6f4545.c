// ============================================================
// 函数名称: sub_42f448
// 虚拟地址: 0x42f448
// WARP GUID: 5540c57c-ee04-5495-9382-1afd9c6f4545
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetBkColor, SetTextColor, CallWindowProcA, SendMessageA
// [内部子函数调用]: sub_42b378, sub_42c754, sub_4190f0, sub_41842c, sub_42c938, sub_4190b4
// [被调用的父级函数]: sub_444874, sub_42462c
// ============================================================

int32_t __convention("regparm")sub_42f448(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x14c) == 0)
    if (*(arg1 + 0x14c) == 0)
        return sub_42c938(arg1, arg2)
    
    if (*arg2 == 0x7b && *(arg1 + 0x24) != 0)
        arg2[1]
        sub_42c754(*(arg1 + 0x24), arg2[2])
        arg2[3] = 0
    
    uint32_t Msg = *arg2
    
    if (Msg - 0x132 u< 7)
        LPARAM ebp_1 = arg2[2]
        arg2[3] = SendMessageA(ebp_1, Msg + 0xbc00, arg2[1], ebp_1)
    else if (Msg - 0xbd32 u< 7)
        COLORREF color = sub_41842c(*(*(arg1 + 0x58) + 0x18))
        SetTextColor(arg2[1], color)
        COLORREF color_1 = sub_41842c(sub_4190b4(*(arg1 + 0x130)))
        SetBkColor(arg2[1], color_1)
        arg2[3] = sub_4190f0(*(arg1 + 0x130))
    else
        arg2[3] = CallWindowProcA(*(arg1 + 0x13c), *(arg1 + 0x14c), Msg, arg2[1], arg2[2])
    
    int32_t result = *arg2
    
    if (result != 0xc)
        return result
    
    return sub_42b378(arg2[1], result, arg1, arg2[2])
}
