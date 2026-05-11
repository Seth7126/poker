// ============================================================
// 函数名称: sub_497ac9
// 虚拟地址: 0x497ac9
// WARP GUID: 6c2a215c-2320-52d7-ab29-815f40a852d2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4953e8, sub_402980, sub_403010
// [被调用的父级函数]: sub_497a44, sub_4979dc
// ============================================================

int32_t __stdcallsub_497ac9(int32_t arg1 @ eax, int32_t* arg2 @ ebp, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx = 1
    int32_t ecx = 1
    char* edx = &arg2[-0x68]
    int32_t i
    
    do
        int32_t ebx_2 = *arg2[-2]
        
        if (add_overflow(ebx_2, ecx))
            sub_403010()
            noreturn
        
        int32_t ebx_3
        ebx_3.b = *edx
        *(arg2 + ebx_2 + ecx - 0x331) = ebx_3.b
        ecx += 1
        edx = &edx[1]
        i = arg1
        arg1 -= 1
    while (i != 1)
    int32_t ebx_5 = *arg2[-2]
    int32_t i_5 = ebx_5 + arg2[-4]
    
    if (add_overflow(ebx_5, arg2[-4]))
        sub_403010()
        noreturn
    
    if (i_5 s< 0x7c)
        if (neg.d(i_5) == 0x80000000)
            sub_403010()
            noreturn
        
        arg2[-3] = neg.d(i_5)
        int32_t i_4 = i_5
        
        if (i_4 s> 0)
            void* edx_4 = &arg2[-0xcc]
            char* esi_5 = arg2[-1] + 1
            int32_t i_1
            
            do
                ecx.b = *edx_4
                *esi_5 = ecx.b
                esi_5 = &esi_5[1]
                edx_4 += 1
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
    else
        sub_402980(&arg2[-0xcc], arg2[3], 0x7c)
        
        if (*arg2[3] != 0x3039 || *(arg2[3] + 0x78) != 0xd431)
            arg2[-3] = 2
        else
            arg2[-3] = 1
        
        int32_t i_6 = i_5
        i_5 -= 0x7c
        
        if (add_overflow(i_6, 0xffffff84))
            sub_403010()
            noreturn
        
        int32_t i_3 = i_5
        
        if (i_3 s> 0)
            int32_t ecx_1 = 1
            char* esi_3 = arg2[-1] + 1
            int32_t i_2
            
            do
                if (add_overflow(ecx_1, 0x7c))
                    sub_403010()
                    noreturn
                
                int32_t edx_3
                edx_3.b = *(arg2 + ecx_1 + 0x7c - 0x331)
                *esi_3 = edx_3.b
                ecx_1 += 1
                esi_3 = &esi_3[1]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
    
    *arg2[-2] = i_5
    sub_4953e8(arg2[2])
    *arg2
    return arg2[-3]
}
