// ============================================================
// 函数名称: sub_51bd00
// 虚拟地址: 0x51bd00
// WARP GUID: 30badf63-5668-5dae-aeeb-4a951ad1b23f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517d68, sub_517724, sub_51b920, sub_517ad4, sub_403010
// [被调用的父级函数]: sub_4ee958
// ============================================================

int32_t __fastcallsub_51bd00(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, char arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: void var_956
    void var_956
    int16_t* esi_1
    int16_t* edi
    edi, esi_1 = __builtin_memcpy(&var_956, arg9, 0x318)
    *edi = *esi_1
    void var_63c
    int16_t* esi_4
    int16_t* edi_2
    edi_2, esi_4 = __builtin_memcpy(&var_63c, arg1, 0x318)
    *edi_2 = *esi_4
    void var_322
    int16_t* esi_7
    int16_t* edi_4
    edi_4, esi_7 = __builtin_memcpy(&var_322, arg2, 0x318)
    *edi_4 = *esi_7
    void var_c70
    int16_t* esi_10
    int16_t* edi_6
    edi_6, esi_10 = __builtin_memcpy(&var_c70, &var_956, 0x318)
    *edi_6 = *esi_10
    *(arg3 + 0x3d14) = arg8
    int16_t* esi_13
    int16_t* edi_9
    edi_9, esi_13 = __builtin_memcpy(arg3 + 0x4672, &var_63c, 0x318)
    *edi_9 = *esi_13
    void var_f8c
    sub_51b920(*data_52ffd0, arg8, &var_f8c)
    int16_t* esi_16
    int16_t* edi_12
    edi_12, esi_16 = __builtin_memcpy(arg3 + 0x4358, &var_f8c, 0x318)
    *edi_12 = *esi_16
    int16_t i_12
    *(arg3 + 0x42d6) = i_12
    int32_t i_8 = sx.d(i_12)
    
    if (i_8 s> 0)
        int32_t i_4 = i_8
        int32_t esi_18 = 1
        void var_320
        void* eax_3 = &var_320
        int32_t i
        
        do
            *(arg3 + (esi_18 << 2) + 0x403c) = *eax_3
            esi_18 += 1
            eax_3 += 4
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    sub_517724(arg3 + 0x4358)
    int16_t j_2
    int32_t i_9 = sx.d(j_2)
    void var_954
    
    if (i_9 s> 0)
        int32_t i_5 = i_9
        int32_t esi_19 = 1
        void* eax_5 = &var_954
        int32_t i_1
        
        do
            *eax_5 = esi_19.w
            esi_19 += 1
            eax_5 += 4
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    int32_t i_10 = sx.d(*(arg3 + 0x490a))
    
    if (i_10 s> 0)
        int32_t i_6 = i_10
        int32_t esi_20 = 1
        int32_t i_2
        
        do
            int32_t j_1 = sx.d(j_2)
            
            if (j_1 s> 0)
                int32_t edx_2 = 1
                void* eax_6 = &var_954
                int32_t j
                
                do
                    if (*(arg3 + (esi_20 << 2) + 0x4670) == *eax_6)
                        sub_517ad4(&var_956, edx_2)
                        break
                    
                    edx_2 += 1
                    eax_6 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            esi_20 += 1
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    int32_t i_11 = sx.d(*(arg3 + 0x45f0))
    
    if (i_11 s> 0)
        int32_t i_7 = i_11
        int32_t esi_21 = 1
        int32_t i_3
        
        do
            int32_t eax_8 = sx.d(*(arg3 + 0x45f0))
            
            if (add_overflow(eax_8, neg.d(esi_21)))
                sub_403010()
                noreturn
            
            int32_t eax_11 = sub_517d68(&var_956, (*(arg3 + ((eax_8 - esi_21) << 2) + 0x4358)).w)
            void var_95a
            *(&var_95a + (eax_11 << 2)) = 0
            void var_958
            eax_11.w = *(&var_958 + (eax_11 << 2))
            int32_t edx_5 = sx.d(*(arg3 + 0x45f0))
            
            if (add_overflow(edx_5, neg.d(esi_21)))
                sub_403010()
                noreturn
            
            *(arg3 + ((edx_5 - esi_21) << 2) + 0x435a) = eax_11.w
            esi_21 += 1
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
    
    *(arg3 + 0x3d18) = arg7
    *(arg3 + 0x3d1c) = arg6
    *(arg3 + 0x3d20) = arg4
    *(arg3 + 0x3d00) = 1
    *(arg3 + 0x3d0c) = 0
    *(arg3 + 0x3d01) = arg5
    int16_t* esi_23
    int16_t* edi_15
    edi_15, esi_23 = __builtin_memcpy(arg3 + 0x3d24, arg3 + 0x4358, 0x318)
    *edi_15 = *esi_23
    return arg5
}
