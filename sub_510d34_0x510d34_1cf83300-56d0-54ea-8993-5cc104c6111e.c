// ============================================================
// 函数名称: sub_510d34
// 虚拟地址: 0x510d34
// WARP GUID: 1cf83300-56d0-54ea-8993-5cc104c6111e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_403420, sub_4030d0
// [被调用的父级函数]: sub_51038c
// ============================================================

int32_t __convention("regparm")sub_510d34(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    sub_4030d0(arg1[0x6c7a])
    sub_4030d0(arg1[0x6c7c])
    sub_4030d0(arg1[0x6c7b])
    int32_t result
    
    if (arg1[0x15].b == 0)
        sub_4030d0(arg1[1])
        sub_4030d0(arg1[2])
        result = sub_4030d0(arg1[3])
    else
        result = sub_4030d0(arg1[1])
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
