// ============================================================
// 函数名称: sub_463c30
// 虚拟地址: 0x463c30
// WARP GUID: fced3510-0ecc-51a5-b901-7ff623cb5127
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_463b5c
// [被调用的父级函数]: sub_4642f8
// ============================================================

void* __fastcallsub_463c30(void* arg1, void* arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t edx_1 = *(arg2 + 0x1c) << 3
    int32_t edx_1 = *(arg2 + 0x1c) << 3
    int32_t temp0 = divs.dp.d(sx.q(*(arg3 + 0xdd)), *(arg2 + 8))
    int32_t ebx_1 = *(arg3 + 0xe1)
    int32_t temp0_1 = divs.dp.d(sx.q(ebx_1), *(arg2 + 0xc))
    int32_t eax_8 = temp0 * temp0_1
    int32_t edx_7 = eax_8 s>> 1
    bool c = unimplemented  {sar edx, 0x1}
    
    if (eax_8 s>> 1 s< 0)
        edx_7 = adc.d(edx_7, 0, c)
    
    sub_463b5c(*(arg3 + 0x18), ebx_1, arg1, edx_1 * temp0)
    int32_t var_10 = 0
    int32_t i = 0
    int32_t* var_38 = arg4
    
    while (*(arg2 + 0xc) s> i)
        char* var_34_1 = *var_38
        int32_t var_28_1 = 0
        int32_t var_2c_1 = 0
        
        if (0 u< edx_1)
            do
                int32_t ecx_3 = 0
                int32_t ebx_2 = 0
                
                if (0 s< temp0_1)
                    do
                        int32_t edx_11 = 0
                        char* eax_17 = *(arg1 + ((var_10 + ebx_2) << 2)) + var_2c_1
                        
                        if (0 s< temp0)
                            do
                                ecx_3 += zx.d(*eax_17)
                                eax_17 = &eax_17[1]
                                edx_11 += 1
                            while (edx_11 s< temp0)
                        
                        ebx_2 += 1
                    while (ebx_2 s< temp0_1)
                
                *var_34_1 = (divs.dp.d(sx.q(edx_7 + ecx_3), eax_8)).b
                var_34_1 = &var_34_1[1]
                var_28_1 += 1
                var_2c_1 += temp0
            while (var_28_1 u< edx_1)
        
        var_10 += temp0_1
        i += 1
        var_38 = &var_38[1]
    
    return arg2
}
