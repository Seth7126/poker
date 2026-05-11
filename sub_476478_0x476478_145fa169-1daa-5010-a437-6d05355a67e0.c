// ============================================================
// 函数名称: sub_476478
// 虚拟地址: 0x476478
// WARP GUID: 145fa169-1daa-5010-a437-6d05355a67e0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4762cc, sub_476478, sub_476120, sub_403010
// [被调用的父级函数]: sub_4766f8, sub_476478, sub_475990, sub_476830
// ============================================================

int32_t __convention("regparm")sub_476478(void* arg1, char arg2, int32_t* arg3)
{
    // 第一条实际指令: char var_a = arg3.b
    char var_a = arg3.b
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    void* ebx = *(arg1 + 0xab0) + *(arg1 + 0x9b8) * 0x81c0
    char var_11 = 0
    int32_t result = 1
    
    if (var_a == 0)
        arg3.b = 1
        int32_t edx_1
        edx_1.b = arg2
        int32_t result_1
        result_1, arg3 = sub_476478()
        result = result_1
    
    int32_t i_1 = sx.d(*(ebx + 0x8130))
    
    if (i_1 s> 0)
        int32_t result_2 = 1
        int32_t i
        
        do
            char ebx_1 = 0
            int32_t __saved_ebp
            
            if (arg2 == 0)
                if (var_a == 0)
                    char eax_8 = sub_476120(result_2, *(arg1 + 0x9b4), arg3)
                    arg3 = &__saved_ebp
                    
                    if (eax_8 != 0)
                        char eax_10 = sub_4762cc(result_2, result, arg3)
                        arg3 = &__saved_ebp
                        
                        if (eax_10 != 0)
                            ebx_1 = 1
                else
                    char eax_5 = sub_476120(result_2, result, arg3)
                    arg3 = &__saved_ebp
                    
                    if (eax_5 != 0)
                        ebx_1 = 1
            
            if (arg2 != 0)
                if (var_a == 0)
                    char eax_15 = sub_4762cc(result_2, *(arg1 + 0x9b4), arg3)
                    arg3 = &__saved_ebp
                    
                    if (eax_15 != 0)
                        char eax_17 = sub_476120(result_2, result, arg3)
                        arg3 = &__saved_ebp
                        
                        if (eax_17 != 0)
                            ebx_1 = 1
                else
                    char eax_12 = sub_4762cc(result_2, result, arg3)
                    arg3 = &__saved_ebp
                    
                    if (eax_12 != 0)
                        ebx_1 = 1
            
            if (ebx_1 != 0)
                result = result_2
                var_11 = 1
            
            result_2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (var_11 == 0 && var_a == 0 && *(arg1 + 0x9b4) == result)
        return 0
    
    return result
}
