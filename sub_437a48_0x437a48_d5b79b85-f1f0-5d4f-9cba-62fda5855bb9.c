// ============================================================
// 函数名称: sub_437a48
// 虚拟地址: 0x437a48
// WARP GUID: d5b79b85-f1f0-5d4f-9cba-62fda5855bb9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_GetBkColor, ImageList_SetIconSize
// [内部子函数调用]: sub_437154, sub_403248, sub_437968, sub_43754c, sub_43722c, sub_437290, sub_437540, sub_43715c, sub_437b70, sub_410c00, sub_436fc4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_437a48(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, &data_436f20) == 0)
    if (sub_403248(arg2, &data_436f20) == 0)
        sub_410c00(arg1, arg2)
        noreturn
    
    *(arg2 + 0x35) = *(arg1 + 0x35)
    *(arg2 + 0x37) = *(arg1 + 0x37)
    sub_437b70(arg2, arg1[0xd].b)
    *(arg2 + 0x36) = *(arg1 + 0x36)
    arg2[0xf] = arg1[0xf]
    sub_437540()
    sub_43722c(arg2, sub_437290(arg1))
    
    if (sub_437154(arg2) != 0)
        ImageList_SetIconSize(sub_437290(arg2), arg2[0xa], arg2[9])
    else
        sub_43715c(arg2)
    
    sub_43754c(arg2, sub_436fc4(ImageList_GetBkColor(sub_437290(arg1))))
    return sub_437968(arg2, arg1)
}
