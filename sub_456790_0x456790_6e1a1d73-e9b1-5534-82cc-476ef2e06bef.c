// ============================================================
// 函数名称: sub_456790
// 虚拟地址: 0x456790
// WARP GUID: 6e1a1d73-e9b1-5534-82cc-476ef2e06bef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_456504, sub_45c8d0, sub_45d134, sub_45c55c, sub_45cbd4, sub_4583c4, sub_45b4f4, sub_45addc, sub_458970, sub_459b60, sub_458dd0, sub_456474, sub_4566f4, sub_457900
// [被调用的父级函数]: sub_456b70
// ============================================================

int32_t __convention("regparm")sub_456790(int32_t* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x196)
    void* esi = *(arg1 + 0x196)
    sub_456504(arg1)
    sub_4566f4(arg1)
    int32_t eax_3 = arg1[0x1b] * arg1[0x1d]
    
    if (eax_3 != eax_3)
        *(*arg1 + 0x14) = 0x45
        (**arg1)()
    
    *(esi + 0xc) = 0
    *(esi + 0x10) = sub_456474(arg1)
    int32_t edx_2 = 0
    *(esi + 0x14) = 0
    int32_t ecx_2 = 0
    *(esi + 0x18) = 0
    
    if (arg1[0x14] == 0 || arg1[0xf] == 0)
        arg1[0x18] = 0
        edx_2 = 0
        arg1[0x19] = 0
        ecx_2 = 0
        arg1[0x1a] = 0
    
    if (arg1[0x14] != 0)
        if (arg1[0x10] != 0)
            *(*arg1 + 0x14) = 0x2e
            edx_2, ecx_2 = (**arg1)()
        
        if (arg1[0x1d] != 3)
            arg1[0x18] = 1
            ecx_2 = 0
            arg1[0x19] = 0
            arg1[0x1a] = 0
            edx_2 = 0
            arg1[0x21] = 0
        else if (arg1[0x21] != 0)
            arg1[0x19] = 1
        else if (arg1[0x16] == 0)
            arg1[0x18] = 1
        else
            arg1[0x1a] = 1
        
        if (arg1[0x18] != 0)
            ecx_2 = sub_459b60(arg1)
            edx_2 = *(arg1 + 0x1be)
            *(esi + 0x14) = edx_2
        
        if (arg1[0x1a] != 0 || arg1[0x19] != 0)
            ecx_2 = sub_45addc(arg1)
            edx_2 = *(arg1 + 0x1be)
            *(esi + 0x18) = edx_2
    
    if (arg1[0x10] == 0)
        if (*(esi + 0x10) == 0)
            sub_458dd0(arg1)
            sub_45d134(arg1)
        else
            sub_458970(arg1)
        
        edx_2 = arg1[0x1a]
        ecx_2 = sub_45c8d0(arg1, edx_2)
    
    sub_45cbd4(arg1, edx_2, ecx_2)
    
    if (arg1[0x37] != 0)
        *(*arg1 + 0x14) = 1
        (**arg1)()
    else if (arg1[0x36] == 0)
        sub_4583c4(arg1)
    else
        sub_457900(arg1)
    
    int32_t eax_19
    
    if (*(*(arg1 + 0x1a6) + 0x10) != 0 || arg1[0xf] != 0)
        eax_19 = 1
    else
        eax_19 = 0
    
    sub_45c55c(arg1, eax_19)
    
    if (arg1[0x10] == 0)
        sub_45b4f4(arg1, 0)
    
    (*(arg1[1] + 0x18))()
    int32_t result = (*(*(arg1 + 0x1a6) + 8))()
    
    if (arg1[2] != 0 && arg1[0xf] == 0 && *(*(arg1 + 0x1a6) + 0x10) != 0)
        int32_t edx_12
        
        if (arg1[0x36] == 0)
            edx_12 = arg1[8]
        else
            edx_12 = arg1[8] * 3 + 2
        
        void* eax_24 = arg1[2]
        *(eax_24 + 4) = 0
        *(eax_24 + 8) = *(arg1 + 0x132) * edx_12
        *(eax_24 + 0xc) = 0
        result = 3
        
        if (arg1[0x1a] == 0)
            result = 2
        
        *(arg1[2] + 0x10) = result
        *(esi + 0xc) += 1
    
    return result
}
