// ============================================================
// 函数名称: sub_455a4c
// 虚拟地址: 0x455a4c
// WARP GUID: 04e3f4f7-3a96-5e98-acae-578821c3aed3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_455e84
// ============================================================

int32_t __convention("regparm")sub_455a4c(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[7] s> 0xffdc || arg1[6] s> 0xffdc)
    if (arg1[7] s> 0xffdc || arg1[6] s> 0xffdc)
        void* eax = *arg1
        *(eax + 0x14) = 0x28
        *(eax + 0x18) = 0xffdc
        (**arg1)()
    
    if (arg1[0x34] != 8)
        void* eax_2 = *arg1
        *(eax_2 + 0x14) = 0xd
        *(eax_2 + 0x18) = arg1[0x34]
        (**arg1)()
    
    if (arg1[8] s> 0xa)
        void* eax_4 = *arg1
        *(eax_4 + 0x14) = 0x18
        *(eax_4 + 0x18) = arg1[8]
        *(eax_4 + 0x1c) = 0xa
        (**arg1)()
    
    *(arg1 + 0x126) = 1
    *(arg1 + 0x12a) = 1
    int32_t i = 0
    void* esi = arg1[0x35]
    
    while (i s< arg1[8])
        int32_t eax_6 = *(esi + 8)
        
        if (eax_6 s<= 0 || eax_6 s> 4 || *(esi + 0xc) s<= 0 || *(esi + 0xc) s> 4)
            *(*arg1 + 0x14) = 0x10
            (**arg1)()
        
        int32_t eax_8
        
        if (*(arg1 + 0x126) s<= *(esi + 8))
            eax_8 = *(esi + 8)
        else
            eax_8 = *(arg1 + 0x126)
        
        *(arg1 + 0x126) = eax_8
        int32_t ecx_2
        
        if (*(arg1 + 0x12a) s<= *(esi + 0xc))
            ecx_2 = *(esi + 0xc)
        else
            ecx_2 = *(arg1 + 0x12a)
        
        *(arg1 + 0x12a) = ecx_2
        i += 1
        esi += 0x54
    
    *(arg1 + 0x12e) = 8
    int32_t i_1 = 0
    void* esi_1 = arg1[0x35]
    
    while (i_1 s< arg1[8])
        *(esi_1 + 0x24) = 8
        int32_t ecx_4 = *(arg1 + 0x126) << 3
        i_1 += 1
        *(esi_1 + 0x1c) = divs.dp.d(sx.q(arg1[6] * *(esi_1 + 8) + ecx_4 - 1), ecx_4)
        int32_t ecx_6 = *(arg1 + 0x12a) << 3
        *(esi_1 + 0x20) = divs.dp.d(sx.q(arg1[7] * *(esi_1 + 0xc) + ecx_6 - 1), ecx_6)
        int32_t ecx_7 = *(arg1 + 0x126)
        *(esi_1 + 0x28) = divs.dp.d(sx.q(arg1[6] * *(esi_1 + 8) + ecx_7 - 1), ecx_7)
        int32_t ecx_8 = *(arg1 + 0x12a)
        *(esi_1 + 0x2c) = divs.dp.d(sx.q(arg1[7] * *(esi_1 + 0xc) + ecx_8 - 1), ecx_8)
        *(esi_1 + 0x30) = 1
        *(esi_1 + 0x4c) = 0
        esi_1 += 0x54
    
    int32_t ecx_10 = *(arg1 + 0x12a) << 3
    int32_t result = divs.dp.d(sx.q(ecx_10 + arg1[7] - 1), ecx_10)
    *(arg1 + 0x132) = result
    
    if (*(arg1 + 0x13a) s< arg1[8] || arg1[0x36] != 0)
        result = *(arg1 + 0x1a6)
        *(result + 0x10) = 1
    else
        *(*(arg1 + 0x1a6) + 0x10) = 0
    
    return result
}
