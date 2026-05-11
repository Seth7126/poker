// ============================================================
// 函数名称: sub_462080
// 虚拟地址: 0x462080
// WARP GUID: c959bfa1-954e-588b-b6f7-5c6b61e7a671
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_462320
// ============================================================

int32_t __convention("regparm")sub_462080(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = arg1[0x29]
    int32_t edx = arg1[0x29]
    int32_t result
    
    if (edx == 0)
        if (arg1[0xd] s> 4)
            void* eax_3 = *arg1
            *(eax_3 + 0x14) = 0x18
            *(eax_3 + 0x18) = arg1[0xd]
            *(eax_3 + 0x1c) = 4
            (**arg1)()
        
        *(arg1 + 0xe9) = arg1[0xd]
        int32_t i = 0
        void* edx_5 = arg1 + 0xed
        
        while (i s< arg1[0xd])
            int32_t ecx_8 = i * 0x15
            i += 1
            *edx_5 = (ecx_8 << 2) + arg1[0xf]
            edx_5 += 4
        
        result = 0
        *(arg1 + 0x131) = 0
        *(arg1 + 0x135) = 0x3f
        *(arg1 + 0x139) = 0
        *(arg1 + 0x13d) = 0
    else
        void* esi_1 = arg1 + 0xed
        int32_t* ecx_3 = *(*(arg1 + 0x141) + 0x20) * 0x24 + edx
        void* ecx_4 = &ecx_3[1]
        *(arg1 + 0xe9) = *ecx_3
        int32_t i_1 = 0
        
        while (i_1 s< *ecx_3)
            i_1 += 1
            *esi_1 = *ecx_4 * 0x54 + arg1[0xf]
            esi_1 += 4
            ecx_4 += 4
        
        *(arg1 + 0x131) = ecx_3[5]
        *(arg1 + 0x135) = ecx_3[6]
        result = ecx_3[7]
        *(arg1 + 0x139) = result
        *(arg1 + 0x13d) = ecx_3[8]
    
    return result
}
