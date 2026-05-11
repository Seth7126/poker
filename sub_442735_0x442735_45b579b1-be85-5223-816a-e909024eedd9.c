// ============================================================
// 函数名称: sub_442735
// 虚拟地址: 0x442735
// WARP GUID: 45b579b1-be85-5223-816a-e909024eedd9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4134b8, sub_4106bc, sub_4462ec, sub_415fc8, sub_40c9e0
// [被调用的父级函数]: 无
// ============================================================

long double __convention("regparm")sub_442735(char* arg1, char arg2, int32_t arg3, long double arg4 @ st0)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t* entry_ebx
    *(entry_ebx - 0x75) += arg2
    long double result = arg4 - fconvert.t(*(arg3 + &data_530a10))
    sub_40c9e0(*arg1)
    sub_415fc8(entry_ebx)
    sub_4106bc(*(data_5317dc + 0x70))
    sub_4134b8(entry_ebx, nullptr)
    
    if (entry_ebx[0x93] != 0)
        (*(*entry_ebx[0x93] + 0xc))()
    
    if (*(entry_ebx + 0x217) != 1)
        sub_4462ec()
    
    if (entry_ebx[0x87].b == 0)
        (*(*entry_ebx + 0xc4))()
    
    return result
}
