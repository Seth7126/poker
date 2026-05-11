// ============================================================
// 函数名称: sub_41995c
// 虚拟地址: 0x41995c
// WARP GUID: 83d10e14-9d24-57fc-9fe6-715ac1c1a179
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTextExtentPoint32A
// [内部子函数调用]: sub_40423c, sub_419c14, sub_404078
// [被调用的父级函数]: sub_4199a0, sub_4199bc
// ============================================================

BOOL __convention("regparm")sub_41995c(int32_t arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: void* edi = arg2
    void* edi = arg2
    arg2.b = 3
    sub_419c14(arg1, arg2.b)
    *arg3 = 0
    arg3[1] = 0
    int32_t c = sub_404078(edi)
    uint8_t* lpString = sub_40423c(edi)
    return GetTextExtentPoint32A(*(arg1 + 4), lpString, c, arg3)
}
