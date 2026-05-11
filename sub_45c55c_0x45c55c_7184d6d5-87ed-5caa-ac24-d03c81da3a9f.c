// ============================================================
// 函数名称: sub_45c55c
// 虚拟地址: 0x45c55c
// WARP GUID: 7184d6d5-87ed-5caa-ac24-d03c81da3a9f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_460254
// [被调用的父级函数]: sub_456790
// ============================================================

int32_t __convention("regparm")sub_45c55c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t (__convention("regparm")** eax_1)(void* arg1) = (**(arg1 + 4))()
    int32_t (__convention("regparm")** eax_1)(void* arg1) = (**(arg1 + 4))()
    *(arg1 + 0x19e) = eax_1
    *eax_1 = sub_45b620
    eax_1[2] = sub_45b630
    eax_1[0x1c] = 0
    int32_t result
    
    if (arg2 == 0)
        int32_t eax_10 = (*(*(arg1 + 4) + 4))()
        int32_t i = 0
        void* edx_7 = &eax_1[8]
        
        do
            int32_t i_1 = i
            i += 1
            *edx_7 = (i_1 << 7) + eax_10
            edx_7 += 4
        while (i s< 0xa)
        
        eax_1[1] = sub_45b8bc
        eax_1[3] = sub_45b66c
        result = 0
        eax_1[4] = 0
    else
        int32_t var_1c_1 = 0
        void* ebx_1 = *(arg1 + 0xd4)
        void* var_14_1 = &eax_1[0x12]
        
        while (true)
            result = *(arg1 + 0x20)
            
            if (result s<= var_1c_1)
                break
            
            int32_t var_18_1 = *(ebx_1 + 0xc)
            
            if (*(arg1 + 0xd8) != 0)
                var_18_1 *= 3
            
            int32_t eax_4 = sub_460254(*(ebx_1 + 0x1c), *(ebx_1 + 8))
            *var_14_1 =
                (*(*(arg1 + 4) + 0x14))(var_18_1, sub_460254(*(ebx_1 + 0x20), *(ebx_1 + 0xc)), eax_4)
            var_14_1 += 4
            var_1c_1 += 1
            ebx_1 += 0x54
        
        eax_1[1] = sub_45b8c0
        eax_1[3] = sub_45bab0
        eax_1[4] = &eax_1[0x12]
    
    return result
}
