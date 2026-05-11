// ============================================================
// 函数名称: sub_4b7504
// 虚拟地址: 0x4b7504
// WARP GUID: ac557726-a5fb-55ef-8e87-bae1725e7f37
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c39c8
// ============================================================

void* __convention("regparm")sub_4b7504(void* arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: if (*(arg1 + 0xc3d20) != 0)
    if (*(arg1 + 0xc3d20) != 0)
        int32_t i_2 = *(arg1 + 0x7e8)
        
        if (add_overflow(i_2, *(arg1 + 0x62280)))
            sub_403010()
            noreturn
        
        if (i_2 + *(arg1 + 0x62280) s< 0x4e20)
            int32_t var_18_1 = 0
            
            if (add_overflow(i_2, 0xffffffff))
                sub_403010()
                noreturn
            
            if (i_2 - 1 s>= 0)
                int32_t i_1 = i_2
                int32_t ebx_4 = 0
                int32_t i
                
                do
                    if (*(arg1 + 0xc3d24) != 1)
                    label_4b757f:
                        
                        if (*(arg1 + 0xc3d24) == 2)
                            bool o_4 = unimplemented  {imul ecx, ebx, 0x5}
                            
                            if (o_4)
                                sub_403010()
                                noreturn
                            
                            if (*(arg1 + ebx_4 * 0x14 + 0x14) != 1 || arg2 != 0)
                                goto label_4b759d
                            
                            goto label_4b75ce
                        
                    label_4b759d:
                        
                        if (*(arg1 + 0xc3d24) == 3)
                            bool o_5 = unimplemented  {imul ecx, ebx, 0x5}
                            
                            if (o_5)
                                sub_403010()
                                noreturn
                            
                            if (*(arg1 + ebx_4 * 0x14 + 0x14) == 1)
                                bool o_6 = unimplemented  {imul ecx, ebx, 0x5}
                                
                                if (o_6)
                                    sub_403010()
                                    noreturn
                                
                                if (arg2 == sx.d(*(arg1 + ebx_4 * 0x14 + 0x14)))
                                    goto label_4b75ce
                    else
                        bool o_3 = unimplemented  {imul ecx, ebx, 0x5}
                        
                        if (o_3)
                            sub_403010()
                            noreturn
                        
                        if (arg2 != sx.d(*(arg1 + ebx_4 * 0x14 + 0x14)))
                            goto label_4b757f
                        
                    label_4b75ce:
                        int32_t ecx_7 = *(arg1 + 0x62280)
                        
                        if (add_overflow(ecx_7, var_18_1))
                            sub_403010()
                            noreturn
                        
                        bool o_8 = unimplemented  {imul ecx, ecx, 0x5}
                        
                        if (o_8)
                            sub_403010()
                            noreturn
                        
                        bool o_9 = unimplemented  {imul ebp, ebx, 0x5}
                        
                        if (o_9)
                            sub_403010()
                            noreturn
                        
                        __builtin_memcpy(arg1 + 0x7ec + (ecx_7 + var_18_1) * 0x14, 
                            arg1 + ebx_4 * 0x14 + 4, 0x14)
                        int32_t temp8_1 = var_18_1
                        var_18_1 += 1
                        
                        if (add_overflow(temp8_1, 1))
                            sub_403010()
                            noreturn
                    
                    ebx_4 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            int32_t temp3_1 = *(arg1 + 0x62280)
            *(arg1 + 0x62280) += var_18_1
            
            if (add_overflow(temp3_1, var_18_1))
                sub_403010()
                noreturn
            
            if (arg3 != 0)
                *(arg1 + 0x7e8) = 0
    
    char var_1b
    arg1.b = var_1b
    return arg1
}
