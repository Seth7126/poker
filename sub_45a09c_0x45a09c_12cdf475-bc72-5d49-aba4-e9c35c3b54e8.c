// ============================================================
// 函数名称: sub_45a09c
// 虚拟地址: 0x45a09c
// WARP GUID: 12cdf475-bc72-5d49-aba4-e9c35c3b54e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_459ca4, sub_459c78, sub_459ccc
// [被调用的父级函数]: sub_45a2fc
// ============================================================

int32_t __fastcallsub_45a09c(int32_t arg1, void* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t i
    int32_t i
    
    for (i = arg1; i s< arg4; i += 1)
        void* eax_3
        
        if (i * 2 s> arg4)
            eax_3 = sub_459ca4(arg2, i)
        else
            eax_3 = sub_459c78(arg2, i)
        
        if (eax_3 == 0)
            break
        
        int32_t* ebx_3 = (i << 5) + arg2
        ebx_3[1] = *(eax_3 + 4)
        ebx_3[3] = *(eax_3 + 0xc)
        ebx_3[5] = *(eax_3 + 0x14)
        *ebx_3 = *eax_3
        ebx_3[2] = *(eax_3 + 8)
        ebx_3[4] = *(eax_3 + 0x10)
        int32_t edx_8 = (*(eax_3 + 0xc) - *(eax_3 + 8)) * 0xc
        int32_t ecx_9 = (*(eax_3 + 0x14) - *(eax_3 + 0x10)) * 0x10
        int32_t ecx_10 = 1
        
        if (edx_8 s< ecx_9)
            edx_8 = ecx_9
            ecx_10 = 2
        
        if (edx_8 s< (*(eax_3 + 4) - *eax_3) << 3)
            ecx_10 = 0
        
        if (ecx_10 u< 1)
            int32_t edx_10 = *(eax_3 + 4) + *eax_3
            int32_t edx_11 = edx_10 s>> 1
            bool c_1 = unimplemented  {sar edx, 0x1}
            
            if (edx_10 s>> 1 s< 0)
                edx_11 = adc.d(edx_11, 0, c_1)
            
            *(eax_3 + 4) = edx_11
            *ebx_3 = edx_11 + 1
        else if (ecx_10 == 1)
            int32_t edx_14 = *(eax_3 + 0xc) + *(eax_3 + 8)
            int32_t edx_15 = edx_14 s>> 1
            bool c_2 = unimplemented  {sar edx, 0x1}
            
            if (edx_14 s>> 1 s< 0)
                edx_15 = adc.d(edx_15, 0, c_2)
            
            *(eax_3 + 0xc) = edx_15
            ebx_3[2] = edx_15 + 1
        else if (ecx_10 == 2)
            int32_t edx_18 = *(eax_3 + 0x14) + *(eax_3 + 0x10)
            int32_t edx_19 = edx_18 s>> 1
            bool c_3 = unimplemented  {sar edx, 0x1}
            
            if (edx_18 s>> 1 s< 0)
                edx_19 = adc.d(edx_19, 0, c_3)
            
            *(eax_3 + 0x14) = edx_19
            ebx_3[4] = edx_19 + 1
        
        sub_459ccc(arg3, eax_3)
        sub_459ccc(arg3, ebx_3)
    
    return i
}
