// ============================================================
// 函数名称: sub_4375ac
// 虚拟地址: 0x4375ac
// WARP GUID: 2e5ce421-ee22-5e2c-9531-df1a5cabb8a8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetBkColor, SetTextColor, BitBlt, ImageList_DrawEx
// [内部子函数调用]: sub_437154, sub_41e04c, sub_41ee98, sub_4190bc, sub_436fa4, sub_41dae0, sub_437584, sub_437290, sub_40faac, sub_419720, sub_419b40
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_4375ac(int32_t* arg1, int32_t arg2, int32_t* arg3 @ eax, char arg4, enum IMAGE_LIST_DRAW_STYLE arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t i = arg2
    int32_t i = arg2
    char result = sub_437154(arg3)
    
    if (result == 0)
        return result
    
    if (arg4 != 0)
        arg3[0xf]
        COLORREF rgbFg = sub_436fa4()
        sub_437584(arg3)
        COLORREF rgbBk = sub_436fa4()
        HDC hdcDst = sub_419b40(arg1)
        return ImageList_DrawEx(sub_437290(arg3), i, hdcDst, arg7, arg6, 0, 0, rgbBk, rgbFg, arg5)
    
    if (arg3[0x12] == 0)
        arg2.b = 1
        int32_t* eax_10 = sub_41dae0(sub_41799a+0xe2, arg2)
        arg3[0x12] = eax_10
        sub_41ee98(eax_10, 1)
        arg3[0xa]
        (*(*eax_10 + 0x40))()
        arg3[9]
        (*(*eax_10 + 0x34))()
    
    sub_4190bc(*(sub_41e04c(arg3[0x12]) + 0x14))
    void var_2c
    sub_40faac(arg3[0xa], 0, 0, &var_2c, arg3[9])
    sub_419720(sub_41e04c(arg3[0x12]), &var_2c)
    HDC hdcDst_1 = sub_419b40(sub_41e04c(arg3[0x12]))
    ImageList_DrawEx(sub_437290(arg3), i, hdcDst_1, 0, 0, 0, 0, 0xff000000, 0, ILD_NORMAL)
    void var_1c
    sub_40faac(arg7 + arg3[0xa], arg6, arg7, &var_1c, arg6 + arg3[9])
    HDC hdcSrc = sub_419b40(sub_41e04c(arg3[0x12]))
    sub_4190bc(arg1[5])
    HDC hdc = sub_419b40(arg1)
    SetTextColor(hdc, 0xffffff)
    SetBkColor(hdc, 0)
    BitBlt(hdc, arg7 + 1, arg6 + 1, arg3[0xa], arg3[9], hdcSrc, 0, 0, 0xe20746)
    sub_4190bc(arg1[5])
    HDC hdc_1 = sub_419b40(arg1)
    SetTextColor(hdc_1, 0xffffff)
    SetBkColor(hdc_1, 0)
    return BitBlt(hdc_1, arg7, arg6, arg3[0xa], arg3[9], hdcSrc, 0, 0, 0xe20746)
}
