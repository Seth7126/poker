// ============================================================
// 函数名称: sub_45bc80
// 虚拟地址: 0x45bc80
// WARP GUID: 63778a67-0f4f-5936-8c17-232a2df7fd35
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45b630
// ============================================================

int32_t __convention("regparm")sub_45bc80(void* arg1)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x19e)
    void* ebx = *(arg1 + 0x19e)
    int32_t result = 0
    
    if (*(arg1 + 0xd8) == 0 || *(arg1 + 0x9c) == 0)
        return 0
    
    if (*(ebx + 0x70) == 0)
        *(arg1 + 0x20)
        *(ebx + 0x70) = (**(arg1 + 4))(arg1, 0)
    
    void* esi_2 = *(ebx + 0x70)
    int32_t ebx_1 = 0
    void* var_10_1 = *(arg1 + 0xd4)
    
    while (true)
        if (ebx_1 s>= *(arg1 + 0x20))
            return result
        
        int16_t* eax_5 = *(var_10_1 + 0x4c)
        
        if (eax_5 == 0)
            return 0
        
        if (*eax_5 == 0 || eax_5[1] == 0 || eax_5[8] == 0 || eax_5[0x10] == 0 || eax_5[9] == 0
                || eax_5[2] == 0)
            return 0
        
        int32_t* eax_7 = *(arg1 + 0x9c) + (ebx_1 << 8)
        
        if (*eax_7 s< 0)
            break
        
        int32_t i = 1
        int32_t* edx_7 = esi_2 + 4
        void* eax_8 = &eax_7[1]
        
        do
            *edx_7 = *eax_8
            
            if (*eax_8 != 0)
                result = 1
            
            i += 1
            edx_7 = &edx_7[1]
            eax_8 += 4
        while (i s<= 5)
        
        esi_2 += 0x18
        ebx_1 += 1
        var_10_1 += 0x54
    
    return 0
}
