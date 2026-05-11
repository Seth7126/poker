// ============================================================
// 函数名称: sub_437264
// 虚拟地址: 0x437264
// WARP GUID: a0584354-501f-50e8-90e5-471953fc82cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4372f4, sub_43722c
// [被调用的父级函数]: sub_4380b8
// ============================================================

int32_t __convention("regparm")sub_437264(int32_t* arg1, HIMAGELIST arg2)
{
    // 第一条实际指令: int32_t result = sub_4372f4(arg1)
    int32_t result = sub_4372f4(arg1)
    
    if (arg2 == 0)
        return result
    
    sub_43722c(arg1, arg2)
    arg1[0xc] = arg2
    int32_t* ebx
    ebx.w = 0xfff0
    return sub_4032ac(arg1)
}
