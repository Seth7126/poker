// ============================================================
// 函数名称: sub_4573a4
// 虚拟地址: 0x4573a4
// WARP GUID: cf257854-cff4-5c23-86cf-246ce1820005
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_457cac, sub_456e4c
// [被调用的父级函数]: sub_456ba8
// ============================================================

int32_t __convention("regparm")sub_4573a4(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x1ae)
    void* eax = *(arg1 + 0x1ae)
    int16_t edx = (1 << (*(arg1 + 0x18e)).b).w
    
    if (*(arg1 + 0x110) != 0 && *(eax + 0x28) == 0 && sub_456e4c(arg1) == 0)
        return 0
    
    void* var_14_1 = arg1
    int32_t* eax_5 = *(arg1 + 0x14)
    int32_t var_28 = *eax_5
    int32_t ecx_1 = eax_5[1]
    int32_t eax_6 = *(arg1 + 0x192)
    int32_t edx_3 = *(eax + 8)
    int32_t eax_8 = *(eax + 0xc)
    void* var_10_1 = eax + 0x10
    int32_t i = 0
    int32_t* esi_1 = arg2
    
    while (i s< *(arg1 + 0x156))
        int16_t* ecx_5 = *esi_1
        
        if (eax_8 s< 1)
            if (sub_457cac(eax_8, edx_3, &var_28, 1) == 0)
                return 0
            
            int32_t var_1c
            edx_3 = var_1c
            int32_t var_18
            eax_8 = var_18
        
        eax_8 -= 1
        
        if ((edx_3 s>> eax_8.b & 1) != 0)
            int32_t edi_2
            edi_2.w = edx
            *ecx_5 |= edi_2.w
        
        i += 1
        esi_1 = &esi_1[1]
    
    int32_t* ecx_10 = *(arg1 + 0x14)
    *ecx_10 = var_28
    ecx_10[1] = ecx_1
    *(arg1 + 0x192) = eax_6
    *(eax + 8) = edx_3
    *(eax + 0xc) = eax_8
    *(eax + 0x28) -= 1
    return 1
}
