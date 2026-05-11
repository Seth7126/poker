// ============================================================
// 函数名称: sub_43d100
// 虚拟地址: 0x43d100
// WARP GUID: 245494f4-d2d4-5786-ade9-4a16857e1acb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetMenuItemCount, GetMenuState
// [内部子函数调用]: sub_4093c8, sub_43d69c
// [被调用的父级函数]: sub_43d1a0
// ============================================================

uint32_t __convention("regparm")sub_43d100(HMENU arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax_1 = GetMenuItemCount(arg1)
    int32_t eax_1 = GetMenuItemCount(arg1)
    char* ebx = arg2 - 0x200
    uint32_t result = arg2 - 5
    uint32_t result_1 = result
    
    for (uint32_t uId = 0; uId s< eax_1; uId += 1)
        if (ebx u>= result_1)
            break
        
        sub_43d69c(uId, arg1, *(arg2 - 0x204), MF_BYPOSITION, result_1 - ebx, ebx)
        char* ebx_1 = sub_4093c8(ebx)
        result = GetMenuState(arg1, uId, MF_BYPOSITION)
        
        if ((result.b & 2) != 0)
            *ebx_1 = 0x24
            ebx_1 = &ebx_1[1]
            *ebx_1 = 0
        
        if ((result.b & 0x40) != 0)
            *ebx_1 = 0x40
            ebx_1 = &ebx_1[1]
            *ebx_1 = 0
        
        if ((result.b & 1) != 0)
            *ebx_1 = 0x23
            ebx_1 = &ebx_1[1]
            *ebx_1 = 0
        
        *ebx_1 = 0x3b
        ebx = &ebx_1[1]
        *ebx = 0
    
    return result
}
