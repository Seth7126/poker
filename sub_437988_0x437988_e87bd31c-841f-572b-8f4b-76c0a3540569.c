// ============================================================
// 函数名称: sub_437988
// 虚拟地址: 0x437988
// WARP GUID: e87bd31c-841f-572b-8f4b-76c0a3540569
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_GetBkColor, ImageList_SetIconSize
// [内部子函数调用]: sub_437154, sub_4372f4, sub_403248, sub_437968, sub_410b1c, sub_43754c, sub_43722c, sub_437290, sub_437540, sub_43715c, sub_437b70, sub_436fc4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_437988(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return sub_4372f4(arg1)
    
    int32_t ecx
    
    if (sub_403248(arg2, &data_436f20) == 0)
        return sub_410b1c(ecx, arg2)
    sub_437540()
    *(arg1 + 0x35) = *(arg2 + 0x35)
    *(arg1 + 0x37) = *(arg2 + 0x37)
    sub_437b70(arg1, arg2[0xd].b)
    *(arg1 + 0x36) = *(arg2 + 0x36)
    sub_43722c(arg1, sub_437290(arg2))
    
    if (sub_437154(arg1) != 0)
        ImageList_SetIconSize(sub_437290(arg1), arg1[0xa], arg1[9])
    else
        sub_43715c(arg1)
    
    sub_43754c(arg1, sub_436fc4(ImageList_GetBkColor(sub_437290(arg2))))
    arg1[0xf] = arg2[0xf]
    return sub_437968(arg1, arg2)
}
