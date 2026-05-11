// ============================================================
// 函数名称: sub_42abf0
// 虚拟地址: 0x42abf0
// WARP GUID: 0a752f47-4d1d-52ae-87d2-e9e9c8a39fe9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_415df8, sub_4030d0
// [被调用的父级函数]: sub_42ad4c
// ============================================================

int32_t __convention("regparm")sub_42abf0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    
    if (arg2 == 0)
        sub_4030d0(arg1[0x17])
        arg1[0x17] = 0
        arg1[0x10] &= 0xffff7fff
        return 0
    
    arg1[0x10] |= 0x8000
    
    if (arg1[0x17] == 0)
        ebx.w = 0xffde
        int32_t eax_3
        int32_t edx
        eax_3, edx = sub_4032ac(arg1)
        edx.b = 1
        arg1[0x17] = (*(eax_3 + 0x14))()
    
    (*(*arg1[0x17] + 0xc))()
    void* eax_6 = arg1[0x17]
    *(eax_6 + 0xc) = arg1
    *(eax_6 + 8) = sub_42d3b4
    int32_t ecx_3
    ecx_3.b = (*(arg2 + 0x20) & 1) != 0
    ebx.w = 0xfff0
    sub_4032ac(arg1, arg2, ecx_3)
    return sub_415df8(arg2, arg1)
}
