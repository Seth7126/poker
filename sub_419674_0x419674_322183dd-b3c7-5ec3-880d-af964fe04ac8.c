// ============================================================
// 函数名称: sub_419674
// 虚拟地址: 0x419674
// WARP GUID: 322183dd-b3c7-5ec3-880d-af964fe04ac8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetBkColor, SetTextColor
// [内部子函数调用]: sub_40faac, sub_41842c, sub_419c14, sub_4190b4
// [被调用的父级函数]: sub_43ab7c, sub_43a2fc
// ============================================================

void __fastcallsub_419674(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: if (arg4 == 0 || (*(*arg4 + 0x1c))().b != 0)
    if (arg4 == 0 || (*(*arg4 + 0x1c))().b != 0)
        return 
    
    (*(*arg3 + 0x10))()
    sub_419c14(arg3, 1)
    COLORREF color = sub_41842c(sub_4190b4(arg3[5]))
    SetBkColor(arg3[1], color)
    COLORREF color_1 = sub_41842c(*(arg3[3] + 0x18))
    SetTextColor(arg3[1], color_1)
    void var_18
    sub_40faac((*(*arg4 + 0x2c))(&var_18, (*(*arg4 + 0x20))() + arg1) + arg2, arg1, arg2)
    (*(*arg4 + 0x14))()
    (*(*arg3 + 0xc))()
}
