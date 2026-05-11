// ============================================================
// 函数名称: sub_4b498a
// 虚拟地址: 0x4b498a
// WARP GUID: d4fa42dd-df25-56a7-bc95-a4cdd8b86166
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4092cc, sub_447664, sub_40423c, sub_402824, sub_409104, sub_408a34, sub_403e1c, sub_409524, sub_425aa0, sub_404188, sub_403fb0, sub_402860, sub_4090b4, sub_431bcc, sub_409128, sub_403df8, sub_409ae0, sub_404754, sub_404688
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4b498a(char* arg1, int32_t arg2, int32_t arg3, void* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    void* const __return_addr_1 = __return_addr
    __return_addr = arg4 + 2
    *__return_addr_1 += __return_addr_1.b
    int32_t entry_ebx
    int32_t var_a = entry_ebx + 2
    int32_t var_d = arg2 + 1
    *__return_addr_1 += __return_addr_1.b
    *__return_addr_1 += __return_addr_1.b
    void* var_11 = arg4 + 5
    int32_t var_15 = arg6 - 3
    *(arg4 - 0x6f) += (arg2 + 1).b
    int32_t eflags
    __return_addr_1.b = __in_al_dx((arg2 + 1).w, eflags)
    int32_t var_196 = entry_ebx + 1
    int32_t var_19a = arg5 - 1
    *(arg4 - 0x176) = 0
    *(arg4 - 0x16a) = 0
    *(arg4 - 0x166) = 0
    *(arg4 - 6) = 0
    *(arg4 + 2) = __return_addr_1
    sub_404688(arg4 - 0x162, sub_407ca8+0x14)
    void* var_19e = arg4 + 6
    int32_t (* var_1a2)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    *(arg4 - 8) = 0
    
    if (sub_431bcc(*(arg4 + 2)) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList_1
        int32_t var_19e_1 = 0x4b4ca7
        sub_403df8(arg4 - 0x176)
        sub_403e1c(arg4 - 0x16a, 2)
        sub_404754(arg4 - 0x162, sub_407ca8+0x14)
        sub_403df8(arg4 - 6)
        return arg4 - 6
    
    int32_t eax_3 = 0
    void* edx_1 = &data_52fe34
    
    do
        bool c_1 = eax_3.b u< 7
        
        if (eax_3.b == 7 || c_1)
            c_1 = test_bit(*(*(arg4 + 2) + 0x240), eax_3 & 0x7f)
        
        if (c_1)
            void* ecx_2
            ecx_2.w = *edx_1
            *(arg4 - 8) |= ecx_2.w
        
        eax_3 += 1
        edx_1 += 2
    while (eax_3.b != 6)
    
    sub_402824(sub_402860(*(*(arg4 + 2) + 0x238)))
    sub_425aa0(*(arg4 + 2))
    *(arg4 - 2) = 0
    void* eax_9
    eax_9.w = *(*data_530a18 + 0x38)
    *(arg4 - 0xa) = eax_9.w
    void* var_1aa = arg4 + 6
    int32_t (* var_1ae)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* i_1
    
    for (void* i = sub_40423c(*(*(arg4 + 2) + 0x23c)); i != 0; i = i_1)
        int16_t edx_2
        edx_2.b = 0x3b
        void* i_2
        int32_t ecx_3
        i_2, ecx_3 = sub_409524(i, edx_2.b)
        i_1 = i_2
        
        if (i_1 != 0)
            *i_1 = 0
        
        sub_403fb0(ecx_3, i)
        enum WIN32_ERROR eax_16
        eax_16, edx_2 = sub_4090b4(*(arg4 - 0x166), zx.d(*(arg4 - 8)), arg4 - 0x162)
        
        if (eax_16 == NO_ERROR)
            enum WIN32_ERROR j
            
            do
                if ((*(*(arg4 + 2) + 0x240) & 0x40) != 0 || (zx.d(*(arg4 - 8)) & *(arg4 - 0x15a)) != 0)
                    char temp0_1 = *(arg4 - 0x15a) & 0x10
                    
                    if (temp0_1 == 0)
                        sub_4092cc(*(arg4 - 0x156), arg4 - 0x176)
                        sub_408a34(*(arg4 - 0x176), arg4 - 6)
                        *(*(arg4 + 2) + 0x258)
                        sub_404188(*(arg4 - 6), ".exe")
                        
                        if (temp0_1 == 0)
                            *(*(arg4 + 2) + 0x250)
                        else
                            sub_404188(*(arg4 - 6), ".com")
                            
                            if (temp0_1 == 0)
                                *(*(arg4 + 2) + 0x250)
                            else
                                sub_404188(*(arg4 - 6), ".bat")
                                
                                if (temp0_1 == 0)
                                    *(*(arg4 + 2) + 0x250)
                                else
                                    sub_404188(*(arg4 - 6), sub_4b4cf3+5)
                                    
                                    if (temp0_1 == 0)
                                        *(*(arg4 + 2) + 0x250)
                        
                        *(arg4 - 0x156)
                        *(arg4 - 2) = (*(**(*(arg4 + 2) + 0x1f0) + 0x38))()
                    else
                        *(arg4 - 0x172) = *(arg4 - 0x156)
                        *(arg4 - 0x16e) = 0xb
                        sub_409ae0(0, arg4 - 0x172, "[%s]", arg4 - 0x16a)
                        *(arg4 - 0x16a)
                        *(arg4 - 2) = (*(**(*(arg4 + 2) + 0x1f0) + 0x34))()
                        
                        if (*(*(arg4 + 2) + 0x26c) != 0)
                            *(*(arg4 + 2) + 0x254)
                            *(arg4 - 2)
                            (*(**(*(arg4 + 2) + 0x1f0) + 0x24))()
                
                if (*(arg4 - 2) == 0x64)
                    sub_447664(*data_530a18, 0xfff5)
                
                j = sub_409104(arg4 - 0x162)
            while (j == NO_ERROR)
            sub_409128(arg4 - 0x162)
        
        if (i_1 != 0)
            *i_1 = 0x3b
            i_1 += 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* (* var_1aa_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4b4c53
    struct _EXCEPTION_REGISTRATION_RECORD* edx_11
    edx_11.w = *(arg4 - 0xa)
    return sub_447664(*data_530a18, edx_11.w)
}
