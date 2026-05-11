// ============================================================
// 函数名称: sub_401d74
// 虚拟地址: 0x401d74
// WARP GUID: 91c3b83c-8671-5e7c-a7da-d7ccdf6a3751
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401c64
// [被调用的父级函数]: sub_401f88
// ============================================================

int32_t __convention("regparm")sub_401d74(int32_t arg1)
{
    // 第一条实际指令: int32_t edx_2 = *(arg1 - 4)
    int32_t edx_2 = *(arg1 - 4)
    
    if ((edx_2 & 0x80000002) != 0x80000002)
        data_531434 = 4
    
    int32_t result = edx_2 & 0x7ffffffc
    char* eax = arg1 - result
    
    if (((edx_2 ^ *eax) & 0xfffffffe) != 0)
        data_531434 = 5
    
    if ((*eax & 1) == 0)
        return result
    
    int32_t esi_1 = *(eax - 4)
    int32_t* eax_1 = eax - esi_1
    
    if (esi_1 != eax_1[2])
        data_531434 = 6
    
    sub_401c64(eax_1)
    return result + esi_1
}
