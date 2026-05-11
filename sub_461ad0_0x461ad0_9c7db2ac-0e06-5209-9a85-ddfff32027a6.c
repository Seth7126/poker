// ============================================================
// 函数名称: sub_461ad0
// 虚拟地址: 0x461ad0
// WARP GUID: 9c7db2ac-0e06-5209-9a85-ddfff32027a6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_462540
// ============================================================

int32_t __convention("regparm")sub_461ad0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[7] u<= 0 || arg1[6] u<= 0 || arg1[0xd] s<= 0 || arg1[8] s<= 0)
    if (arg1[7] u<= 0 || arg1[6] u<= 0 || arg1[0xd] s<= 0 || arg1[8] s<= 0)
        *(*arg1 + 0x14) = 0x1f
        (**arg1)()
    
    if (arg1[7] s> 0xffdc || arg1[6] s> 0xffdc)
        void* eax_2 = *arg1
        *(eax_2 + 0x14) = 0x28
        *(eax_2 + 0x18) = 0xffdc
        (**arg1)()
    
    int32_t eax_5 = arg1[6] * arg1[8]
    
    if (eax_5 != eax_5)
        *(*arg1 + 0x14) = 0x45
        (**arg1)()
    
    if (arg1[0xc] != 8)
        void* eax_7 = *arg1
        *(eax_7 + 0x14) = 0xd
        *(eax_7 + 0x18) = arg1[0xc]
        (**arg1)()
    
    if (arg1[0xd] s> 0xa)
        void* eax_9 = *arg1
        *(eax_9 + 0x14) = 0x18
        *(eax_9 + 0x18) = arg1[0xd]
        *(eax_9 + 0x1c) = 0xa
        (**arg1)()
    
    *(arg1 + 0xdd) = 1
    *(arg1 + 0xe1) = 1
    int32_t i = 0
    void* esi = arg1[0xf]
    
    while (i s< arg1[0xd])
        int32_t eax_11 = *(esi + 8)
        
        if (eax_11 s<= 0 || eax_11 s> 4 || *(esi + 0xc) s<= 0 || *(esi + 0xc) s> 4)
            *(*arg1 + 0x14) = 0x10
            (**arg1)()
        
        int32_t eax_13
        
        if (*(arg1 + 0xdd) s<= *(esi + 8))
            eax_13 = *(esi + 8)
        else
            eax_13 = *(arg1 + 0xdd)
        
        *(arg1 + 0xdd) = eax_13
        int32_t ecx_3
        
        if (*(arg1 + 0xe1) s<= *(esi + 0xc))
            ecx_3 = *(esi + 0xc)
        else
            ecx_3 = *(arg1 + 0xe1)
        
        *(arg1 + 0xe1) = ecx_3
        i += 1
        esi += 0x54
    
    int32_t i_1 = 0
    void* esi_1 = arg1[0xf]
    
    while (i_1 s< arg1[0xd])
        *(esi_1 + 4) = i_1
        i_1 += 1
        *(esi_1 + 0x24) = 8
        int32_t ecx_5 = *(arg1 + 0xdd) << 3
        *(esi_1 + 0x1c) = divs.dp.d(sx.q(arg1[6] * *(esi_1 + 8) + ecx_5 - 1), ecx_5)
        int32_t ecx_7 = *(arg1 + 0xe1) << 3
        *(esi_1 + 0x20) = divs.dp.d(sx.q(arg1[7] * *(esi_1 + 0xc) + ecx_7 - 1), ecx_7)
        int32_t ecx_8 = *(arg1 + 0xdd)
        *(esi_1 + 0x28) = divs.dp.d(sx.q(arg1[6] * *(esi_1 + 8) + ecx_8 - 1), ecx_8)
        int32_t ecx_9 = *(arg1 + 0xe1)
        *(esi_1 + 0x2c) = divs.dp.d(sx.q(arg1[7] * *(esi_1 + 0xc) + ecx_9 - 1), ecx_9)
        *(esi_1 + 0x30) = 1
        esi_1 += 0x54
    
    int32_t ecx_11 = *(arg1 + 0xe1) << 3
    int32_t result = divs.dp.d(sx.q(ecx_11 + arg1[7] - 1), ecx_11)
    *(arg1 + 0xe5) = result
    return result
}
