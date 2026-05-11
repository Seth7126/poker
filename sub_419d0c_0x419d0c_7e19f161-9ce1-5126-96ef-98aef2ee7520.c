// ============================================================
// 函数名称: sub_419d0c
// 虚拟地址: 0x419d0c
// WARP GUID: 7e19f161-9ce1-5126-96ef-98aef2ee7520
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetBkColor, UnrealizeObject, SelectObject, SetBkMode
// [内部子函数调用]: sub_4190f0, sub_41842c, sub_4190b4, sub_4191d0
// [被调用的父级函数]: sub_419c14
// ============================================================

int32_t __convention("regparm")sub_419d0c(void* arg1)
{
    // 第一条实际指令: UnrealizeObject(sub_4190f0(*(arg1 + 0x14)))
    UnrealizeObject(sub_4190f0(*(arg1 + 0x14)))
    HGDIOBJ h = sub_4190f0(*(arg1 + 0x14))
    SelectObject(*(arg1 + 4), h)
    
    if (sub_4191d0(*(arg1 + 0x14)) != 0)
        int32_t color_1 = not.d(sub_41842c(sub_4190b4(*(arg1 + 0x14))))
        SetBkColor(*(arg1 + 4), color_1)
        return SetBkMode(*(arg1 + 4), 1)
    
    COLORREF color = sub_41842c(sub_4190b4(*(arg1 + 0x14)))
    SetBkColor(*(arg1 + 4), color)
    return SetBkMode(*(arg1 + 4), 2)
}
