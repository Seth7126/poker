// ============================================================
// 函数名称: sub_484c8c
// 虚拟地址: 0x484c8c
// WARP GUID: 9624eaee-da4c-59bd-ba14-546db1b99e07
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_402c90, sub_484b64, sub_403010
// [被调用的父级函数]: sub_4702a8
// ============================================================

uint32_t __convention("regparm")sub_484c8c(void* arg1)
{
    // 第一条实际指令: uint32_t result = *(arg1 + 0xab4)
    uint32_t result = *(arg1 + 0xab4)
    
    if (result s> 0)
        uint32_t var_18_1 = result
        int32_t var_10_1 = 1
        uint32_t i
        
        do
            char var_11_1 = 0
            bool o_1 = unimplemented  {imul eax, eax, 0x1038}
            
            if (o_1)
                sub_403010()
                noreturn
            
            char* eax_3 = *(arg1 + 0xab0) + var_10_1 * 0x81c0 + 0x813c
            int32_t ecx_1
            ecx_1.b = *eax_3
            uint32_t ecx_3 = sub_402c90(eax_3, 0x484df8, ecx_1 + 1)
            
            if (ecx_1 != 0xffffffff)
                if (*(arg1 + 0x8a0) == var_10_1)
                label_484d1d:
                    bool o_3 = unimplemented  {imul eax, eax, 0x1038}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    if (*(*(arg1 + 0xab0) + var_10_1 * 0x81c0) != 0)
                        bool o_4 = unimplemented  {imul eax, eax, 0x1038}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        if (*(*(arg1 + 0xab0) + var_10_1 * 0x81c0 + 1) != 0)
                            var_11_1 = 1
                else
                    bool o_2 = unimplemented  {imul eax, eax, 0x1038}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_7
                    eax_7.b = *(*(arg1 + 0xab0) + var_10_1 * 0x81c0 + 0x8139)
                    
                    if (eax_7.b == 0)
                        goto label_484d1d
            
            bool o_5 = unimplemented  {imul eax, eax, 0x1038}
            
            if (o_5)
                sub_403010()
                noreturn
            
            void* esi_1 = *(arg1 + 0xab0) + var_10_1 * 0x81c0
            int32_t edx_10
            edx_10.b = var_11_1
            result = sub_484b64(esi_1 + 0x81a8, edx_10.b, ecx_3)
            int32_t __saved_ebp
            int32_t* ecx_4 = &__saved_ebp
            int32_t j_1 = sx.d(*(esi_1 + 0x8130))
            
            if (j_1 s> 0)
                int32_t ebx_1 = 1
                int32_t j
                
                do
                    char eax_15 = 0
                    
                    if (ebx_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    int32_t edx_11 = ebx_1 * 0x23
                    bool o_6 = unimplemented  {imul edx, ebx, 0x23}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    if (*(esi_1 + (edx_11 << 3) - 0xf1) != 0)
                        eax_15 = var_11_1
                    
                    if (ebx_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    result = sub_484b64(esi_1 + (edx_11 << 3) + 8, eax_15, ecx_4)
                    ecx_4 = &__saved_ebp
                    ebx_1 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            var_10_1 += 1
            i = var_18_1
            var_18_1 -= 1
        while (i != 1)
    
    return result
}
