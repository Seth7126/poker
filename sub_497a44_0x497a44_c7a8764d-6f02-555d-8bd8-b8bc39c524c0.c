// ============================================================
// 函数名称: sub_497a44
// 虚拟地址: 0x497a44
// WARP GUID: c7a8764d-6f02-555d-8bd8-b8bc39c524c0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49611c, sub_402980, sub_4953dc, sub_4953e8, sub_497ac9, sub_496288, sub_403010
// [被调用的父级函数]: sub_497d17, sub_4979dc
// ============================================================

int32_t __thiscallsub_497a44(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t entry_ebx
    int32_t var_338 = entry_ebx
    int32_t eax
    int32_t var_8 = eax
    sub_4953dc(arg2)
    int32_t* eax_3 = sub_496288()
    int32_t* var_14 = eax_3
    
    if (add_overflow(eax_3, *arg1))
        sub_403010()
        noreturn
    
    if (eax_3 + *arg1 s> 0x7c)
        if (add_overflow(0x7c, neg.d(*arg1)))
            sub_403010()
            noreturn
        
        var_14 = 0x7c - *arg1
    
    void var_1a4
    void* ecx_1
    int32_t* ebp_1
    ecx_1, ebp_1 = sub_49611c(arg2, &var_1a4, var_14)
    
    if (*ebp_1[-2] s> 0)
        int32_t i_3 = *ebp_1[-2]
        
        if (i_3 s> 0)
            char* edx_4 = ebp_1[-1] + 1
            ecx_1 = &ebp_1[-0xcc]
            int32_t i
            
            do
                entry_ebx.b = *edx_4
                *ecx_1 = entry_ebx.b
                ecx_1 += 1
                edx_4 = &edx_4[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
    
    int32_t eax_9 = ebp_1[-4]
    
    if (eax_9 s> 0)
        return sub_497ac9(eax_9, ebp_1, var_338) __tailcall
    
    int32_t ebx_1 = *ebp_1[-2]
    int32_t i_6 = ebx_1 + ebp_1[-4]
    
    if (add_overflow(ebx_1, ebp_1[-4]))
        sub_403010()
        noreturn
    
    if (i_6 s< 0x7c)
        if (neg.d(i_6) == 0x80000000)
            sub_403010()
            noreturn
        
        ebp_1[-3] = neg.d(i_6)
        int32_t i_5 = i_6
        
        if (i_5 s> 0)
            char* edx_9 = &ebp_1[-0xcc]
            char* esi_5 = ebp_1[-1] + 1
            int32_t i_1
            
            do
                ecx_1.b = *edx_9
                *esi_5 = ecx_1.b
                esi_5 = &esi_5[1]
                edx_9 = &edx_9[1]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
    else
        sub_402980(&ebp_1[-0xcc], ebp_1[3], 0x7c)
        
        if (*ebp_1[3] != 0x3039 || *(ebp_1[3] + 0x78) != 0xd431)
            ebp_1[-3] = 2
        else
            ebp_1[-3] = 1
        
        int32_t i_7 = i_6
        i_6 -= 0x7c
        
        if (add_overflow(i_7, 0xffffff84))
            sub_403010()
            noreturn
        
        int32_t i_4 = i_6
        
        if (i_4 s> 0)
            int32_t ecx_3 = 1
            char* esi_3 = ebp_1[-1] + 1
            int32_t i_2
            
            do
                if (add_overflow(ecx_3, 0x7c))
                    sub_403010()
                    noreturn
                
                int32_t edx_8
                edx_8.b = *(ebp_1 + ecx_3 + 0x7c - 0x331)
                *esi_3 = edx_8.b
                ecx_3 += 1
                esi_3 = &esi_3[1]
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
    
    *ebp_1[-2] = i_6
    sub_4953e8(ebp_1[2])
    *ebp_1
    return ebp_1[-3]
}
