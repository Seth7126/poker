// ============================================================
// 函数名称: sub_435a60
// 虚拟地址: 0x435a60
// WARP GUID: 98e18e16-5851-57b5-99dd-1b490cb006e6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA, SystemParametersInfoA
// [内部子函数调用]: sub_435a10, sub_4359e0, sub_4359c4
// [被调用的父级函数]: sub_4358ec, sub_4307fc, sub_448668
// ============================================================

void __convention("regparm")sub_435a60(BOOL arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 u< 1)
    if (arg2 u< 1)
        LRESULT ecx_1
        int32_t edx_2
        ecx_1, edx_2 = sub_4359c4(arg1)
        
        if (*(arg1 + 0xd) != 0)
            sub_4359e0(arg1)
            return 
        
        sub_435a10(arg1, edx_2, ecx_1)
    else if (arg2 == 0x68 && *(arg1 + 0x20) != 0)
        if (*(arg1 + 0xd) == 0)
            *(arg1 + 0x10) = SendMessageA(*(arg1 + 0x18), *(arg1 + 0x14), 0, 0)
        else
            SystemParametersInfoA(SPI_GETWHEELSCROLLLINES, 0, arg1 + 0x10, 0)
}
