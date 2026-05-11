// ============================================================
// 函数名称: sub_52c4bc
// 虚拟地址: 0x52c4bc
// WARP GUID: b9bdb33b-1b72-5064-ac82-5d3cb1db8cb7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_502b8c
// ============================================================

void __convention("regparm")sub_52c4bc(char* arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: char var_e0
    char var_e0
    __builtin_memcpy(&var_e0, arg2, 0xd4)
    char var_df
    int32_t var_94
    
    if (arg3 == 0)
        int32_t temp0_1 = *(arg1 + 0x8978)
        *(arg1 + 0x8978) += 1
        
        if (add_overflow(temp0_1, 1))
            sub_403010()
            noreturn
        
        *(arg1 + 0x8978)
        bool o_21 = unimplemented  {imul edx, dword [eax+0x8978], 0x35}
        
        if (o_21)
            sub_403010()
            noreturn
        
        arg1[*(arg1 + 0x8978) * 0xd4 - 0xd4] = var_e0
        *(arg1 + 0x8978)
        bool o_22 = unimplemented  {imul edx, dword [eax+0x8978], 0x35}
        
        if (o_22)
            sub_403010()
            noreturn
        
        arg1[*(arg1 + 0x8978) * 0xd4 - 0xd3] = var_df
        *(arg1 + 0x8978)
        bool o_23 = unimplemented  {imul edx, dword [eax+0x8978], 0x35}
        
        if (o_23)
            sub_403010()
            noreturn
        
        *(arg1 + *(arg1 + 0x8978) * 0xd4 - 0x88) = var_94
        return 
    
    int32_t i_1 = *(arg1 + 0x8978)
    
    if (i_1 s> 0)
        arg2 = 1
        int32_t i
        
        do
            int32_t esi_1 = *(arg1 + 0x8978)
            
            if (add_overflow(esi_1, 1))
                sub_403010()
                noreturn
            
            if (add_overflow(esi_1 + 1, neg.d(arg2)))
                sub_403010()
                noreturn
            
            bool o_3 = unimplemented  {imul ebx, ebx, 0x35}
            
            if (o_3)
                sub_403010()
                noreturn
            
            int32_t ebx_4
            ebx_4.b = arg1[(esi_1 + 1 - arg2) * 0xd4 - 0xd4]
            
            if (add_overflow(esi_1, 2))
                sub_403010()
                noreturn
            
            if (add_overflow(esi_1 + 2, neg.d(arg2)))
                sub_403010()
                noreturn
            
            bool o_6 = unimplemented  {imul esi, esi, 0x35}
            
            if (o_6)
                sub_403010()
                noreturn
            
            arg1[(esi_1 + 2 - arg2) * 0xd4 - 0xd4] = ebx_4.b
            int32_t esi_5 = *(arg1 + 0x8978)
            
            if (add_overflow(esi_5, 1))
                sub_403010()
                noreturn
            
            if (add_overflow(esi_5 + 1, neg.d(arg2)))
                sub_403010()
                noreturn
            
            bool o_9 = unimplemented  {imul ebx, ebx, 0x35}
            
            if (o_9)
                sub_403010()
                noreturn
            
            int32_t ebx_8
            ebx_8.b = arg1[(esi_5 + 1 - arg2) * 0xd4 - 0xd3]
            
            if (add_overflow(esi_5, 2))
                sub_403010()
                noreturn
            
            if (add_overflow(esi_5 + 2, neg.d(arg2)))
                sub_403010()
                noreturn
            
            bool o_12 = unimplemented  {imul esi, esi, 0x35}
            
            if (o_12)
                sub_403010()
                noreturn
            
            arg1[(esi_5 + 2 - arg2) * 0xd4 - 0xd3] = ebx_8.b
            int32_t ebx_9 = *(arg1 + 0x8978)
            
            if (add_overflow(ebx_9, 1))
                sub_403010()
                noreturn
            
            if (add_overflow(ebx_9 + 1, neg.d(arg2)))
                sub_403010()
                noreturn
            
            bool o_15 = unimplemented  {imul esi, esi, 0x35}
            
            if (o_15)
                sub_403010()
                noreturn
            
            if (add_overflow(ebx_9, 2))
                sub_403010()
                noreturn
            
            if (add_overflow(ebx_9 + 2, neg.d(arg2)))
                sub_403010()
                noreturn
            
            bool o_18 = unimplemented  {imul ebx, ebx, 0x35}
            
            if (o_18)
                sub_403010()
                noreturn
            
            *(arg1 + (ebx_9 + 2 - arg2) * 0xd4 - 0x88) = *(arg1 + (ebx_9 + 1 - arg2) * 0xd4 - 0x88)
            arg2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t temp2_1 = *(arg1 + 0x8978)
    *(arg1 + 0x8978) += 1
    
    if (add_overflow(temp2_1, 1))
        sub_403010()
        noreturn
    
    arg2.b = var_e0
    *arg1 = arg2.b
    arg2.b = var_df
    arg1[1] = arg2.b
    *(arg1 + 0x4c) = var_94
}
