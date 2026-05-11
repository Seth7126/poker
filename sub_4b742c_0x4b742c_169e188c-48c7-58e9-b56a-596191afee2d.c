// ============================================================
// 函数名称: sub_4b742c
// 虚拟地址: 0x4b742c
// WARP GUID: 169e188c-48c7-58e9-b56a-596191afee2d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c39c8
// ============================================================

void* __convention("regparm")sub_4b742c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0xc3d20) != 0 && *(arg1 + 0xc3d24) == 4)
    if (*(arg1 + 0xc3d20) != 0 && *(arg1 + 0xc3d24) == 4)
        int32_t i_2 = *(arg1 + 0xc3ec0)
        
        if (add_overflow(i_2, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_2 - 1 s>= 0)
            int32_t i_1 = i_2
            int32_t ebx_1 = 0
            int32_t i
            
            do
                if (*(arg1 + (ebx_1 << 3) + 0xc3d2c) == arg2)
                    int32_t edx_1 = *(arg1 + (ebx_1 << 3) + 0xc3d28)
                    
                    if (edx_1 s>= 0x252a)
                        bool o_2 = unimplemented  {imul ecx, edx, 0x5}
                        
                        if (o_2)
                            sub_403010()
                            noreturn
                        
                        if (*(arg1 + 0x7ec + edx_1 * 0x14 + 0x12) != 0xfffe)
                            *(arg1 + 0x62280)
                            bool o_3 = unimplemented  {imul ecx, dword [ecx+0x61a94], 0x5}
                            
                            if (o_3)
                                sub_403010()
                                noreturn
                            
                            bool o_4 = unimplemented  {imul edx, edx, 0x5}
                            
                            if (o_4)
                                sub_403010()
                                noreturn
                            
                            __builtin_memcpy(arg1 + 0x7ec + edx_1 * 0x14, 
                                arg1 + 0x7ec + *(arg1 + 0x62280) * 0x14 - 0x14, 0x14)
                            int32_t temp4_1 = *(arg1 + 0x62280)
                            *(arg1 + 0x62280) -= 1
                            
                            if (add_overflow(temp4_1, 0xffffffff))
                                sub_403010()
                                noreturn
                
                ebx_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    char var_14
    arg1.b = var_14
    return arg1
}
