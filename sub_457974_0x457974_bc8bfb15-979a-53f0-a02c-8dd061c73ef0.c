// ============================================================
// 函数名称: sub_457974
// 虚拟地址: 0x457974
// WARP GUID: bc8bfb15-979a-53f0-a02c-8dd061c73ef0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_457a94
// [被调用的父级函数]: sub_4583c4
// ============================================================

int32_t __convention("regparm")sub_457974(int32_t* arg1)
{
    // 第一条实际指令: void* ebp = *(arg1 + 0x1ae)
    void* ebp = *(arg1 + 0x1ae)
    
    if (*(arg1 + 0x182) != 0 || *(arg1 + 0x186) != 0x3f || *(arg1 + 0x18a) != 0 || *(arg1 + 0x18e) != 0)
        *(*arg1 + 0x14) = 0x76
        (*(*arg1 + 4))()
    
    int32_t i = 0
    void* var_14 = ebp + 0x14
    void* var_18 = arg1 + 0x13e
    
    while (i s< *(arg1 + 0x13a))
        void* eax_3 = *var_18
        int32_t esi_1 = *(eax_3 + 0x14)
        int32_t edi_1 = *(eax_3 + 0x18)
        
        if (esi_1 s< 0 || esi_1 s>= 4 || arg1[esi_1 + 0x2c] == 0)
            void* eax_4 = *arg1
            *(eax_4 + 0x14) = 0x31
            *(eax_4 + 0x18) = esi_1
            (**arg1)(i, var_18, var_14)
        
        if (edi_1 s< 0 || edi_1 s>= 4 || arg1[edi_1 + 0x30] == 0)
            void* eax_6 = *arg1
            *(eax_6 + 0x14) = 0x31
            *(eax_6 + 0x18) = edi_1
            (**arg1)(i, var_18, var_14)
        
        sub_457a94(arg1, arg1[esi_1 + 0x2c], ebp + (esi_1 << 2) + 0x28)
        sub_457a94(arg1, arg1[edi_1 + 0x30], ebp + (edi_1 << 2) + 0x38)
        *var_14 = 0
        i += 1
        var_14 += 4
        var_18 += 4
    
    *(ebp + 0xc) = 0
    *(ebp + 8) = 0
    *(ebp + 0x10) = 0
    *(ebp + 0x24) = arg1[0x44]
    return 0
}
