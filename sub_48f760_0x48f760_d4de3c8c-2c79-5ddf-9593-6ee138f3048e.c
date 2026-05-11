// ============================================================
// 函数名称: sub_48f760
// 虚拟地址: 0x48f760
// WARP GUID: d4de3c8c-2c79-5ddf-9593-6ee138f3048e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mmioStringToFOURCCA
// [内部子函数调用]: sub_402d00, sub_4128c0, sub_48f738, sub_4128a4, sub_403010
// [被调用的父级函数]: sub_48f6a4, sub_48f5f8
// ============================================================

int32_t* __convention("regparm")sub_48f760(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void* edx = 0x24
    void* edx = 0x24
    sub_402d00(arg2, 0x24, 0)
    char var_9 = 0
    *arg2 = arg1
    int32_t* ebx_1 = *arg2
    int32_t eax_1
    
    if (ebx_1 != 0)
        eax_1, edx = sub_4128c0(ebx_1)
    
    int32_t* i
    int32_t __saved_ebp
    
    if (ebx_1 != 0 && eax_1 != 0)
        (*(**arg2 + 0xc))()
        (*(**arg2 + 4))()
        uint32_t eax_5
        void* edx_2
        eax_5, edx_2 = mmioStringToFOURCCA("RIFF", 0)
        int32_t var_14
        
        if (eax_5 == var_14)
            int32_t eax_7
            void* edx_3
            eax_7, edx_3 = sub_4128c0(*arg2)
            
            if (add_overflow(eax_7, 0xfffffff8))
                sub_403010()
                noreturn
            
            int32_t var_10
            
            if (eax_7 - 8 == var_10)
                (*(**arg2 + 4))()
                uint32_t eax_10
                void* edx_4
                eax_10, edx_4 = mmioStringToFOURCCA("WAVE", 0)
                
                if (eax_10 == var_14)
                    void* edx_7
                    
                    do
                        (*(**arg2 + 4))()
                        uint32_t eax_12
                        int32_t ecx_8
                        eax_12, ecx_8 = mmioStringToFOURCCA("fmt ", 0)
                        
                        if (eax_12 != var_14)
                            uint32_t eax_16
                            eax_16, ecx_8 = mmioStringToFOURCCA("fact", 0)
                            
                            if (eax_16 != var_14)
                                uint32_t eax_18
                                eax_18, ecx_8 = mmioStringToFOURCCA("data", 0)
                                
                                if (eax_18 == var_14)
                                    arg2[2] = var_10
                                    i, edx_7 = sub_4128a4(*arg2)
                                    arg2[1] = i
                                    break
                            else if (arg2[3] == 0 && *(arg2 + 0x11) == 2)
                                (*(**arg2 + 4))()
                                
                                if (add_overflow(var_10, 0xfffffffc))
                                    sub_403010()
                                    noreturn
                        else if (*(arg2 + 0x11) == 0)
                            int32_t ebx_7 = var_10
                            
                            if (ebx_7 s> 0x12)
                                ebx_7 = 0x12
                            
                            (*(**arg2 + 4))()
                            
                            if (add_overflow(var_10, neg.d(ebx_7)))
                                sub_403010()
                                noreturn
                        
                        ecx_8.w = 1
                        (*(**arg2 + 0xc))()
                        i, edx_7 = sub_4128a4(*arg2)
                    while (i != 0x800)
                    
                    i.w = *(arg2 + 0x11)
                    int16_t temp4_1 = i.w
                    i.w -= 1
                    
                    if (temp4_1 u>= 1)
                        if (temp4_1 == 1)
                            arg2[3] =
                                divs.dp.d(sx.q(arg2[2]), divu.dp.d(0:(*(arg2 + 0x19)), *(arg2 + 0x15)))
                            var_9 = 1
                            arg2[4].b = 0
                        else
                            int16_t temp7_1 = i.w
                            i.w -= 1
                            
                            if (temp7_1 == 1)
                                int32_t* var_24_6 = &__saved_ebp
                                i.b = 9
                                sub_48f738(i.b, edx_7)
                            else
                                int32_t* var_24_7 = &__saved_ebp
                                i.b = 5
                                sub_48f738(i.b, edx_7)
                else
                    int32_t* var_24_4 = &__saved_ebp
                    eax_10.b = 4
                    sub_48f738(eax_10.b, edx_4)
            else
                int32_t* var_24_3 = &__saved_ebp
                int32_t eax_8
                eax_8.b = 5
                sub_48f738(eax_8.b, edx_3)
        else
            int32_t* var_24_2 = &__saved_ebp
            eax_5.b = 3
            sub_48f738(eax_5.b, edx_2)
    else
        int32_t* var_24_1 = &__saved_ebp
        eax_1.b = 1
        sub_48f738(eax_1.b, edx)
    i.b = var_9
    return i
}
