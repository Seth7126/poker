// ============================================================
// 函数名称: sub_518f60
// 虚拟地址: 0x518f60
// WARP GUID: a6cb3dfd-8aaf-5c61-bae7-81ffbbe155a3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d38, sub_403010, sub_402d20, sub_52ba68
// [被调用的父级函数]: sub_4c1b10
// ============================================================

int32_t __fastcallsub_518f60(char arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    
    if (*(data_530598 + 0x28) == 1 || *(*data_5301f4 + 0x111f9) != 0)
        entry_result = 0
    else
        float var_c_1 = fconvert.s(sub_402d38())
        int32_t eax_4 = *(data_530598 + 0x28)
        
        if (eax_4 != 2)
            data_530598
            
            if (eax_4 != 3)
                data_530598
                
                if (eax_4 == 4)
                    if (arg4 s>= 0x64)
                        long double x87_r7_14 = fconvert.t(var_c_1)
                        long double temp5_1 = fconvert.t(0f)
                        x87_r7_14 - temp5_1
                        eax_4.w = (x87_r7_14 < temp5_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_14, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_14 == temp5_1 ? 1 : 0) << 0xe
                        entry_result.b = not(test_bit(eax_4:1.b, 6)) && not(test_bit(eax_4:1.b, 0))
                    else if (arg4 s>= 0x5f)
                        long double x87_r7_15 = data_51933c
                        long double temp8_1 = fconvert.t(var_c_1)
                        x87_r7_15 - temp8_1
                        eax_4.w = (x87_r7_15 < temp8_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_15, temp8_1) ? 1 : 0) << 0xa
                            | (x87_r7_15 == temp8_1 ? 1 : 0) << 0xe
                        entry_result.b = test_bit(eax_4:1.b, 0)
                    else if (arg4 s>= 0x5a)
                        long double x87_r7_16 = data_519368
                        long double temp11_1 = fconvert.t(var_c_1)
                        x87_r7_16 - temp11_1
                        eax_4.w = (x87_r7_16 < temp11_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_16, temp11_1) ? 1 : 0) << 0xa
                            | (x87_r7_16 == temp11_1 ? 1 : 0) << 0xe
                        entry_result.b = test_bit(eax_4:1.b, 0)
                    else if (arg4 s>= 0x50)
                        long double x87_r7_17 = fconvert.t(var_c_1)
                        long double temp15_1 = fconvert.t(0.5f)
                        x87_r7_17 - temp15_1
                        eax_4.w = (x87_r7_17 < temp15_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_17, temp15_1) ? 1 : 0) << 0xa
                            | (x87_r7_17 == temp15_1 ? 1 : 0) << 0xe
                        entry_result.b = not(test_bit(eax_4:1.b, 6)) && not(test_bit(eax_4:1.b, 0))
                    else if (arg4 s< 0x3c)
                        long double x87_r7_19 = data_519308
                        long double temp19_1 = fconvert.t(var_c_1)
                        x87_r7_19 - temp19_1
                        eax_4.w = (x87_r7_19 < temp19_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_19, temp19_1) ? 1 : 0) << 0xa
                            | (x87_r7_19 == temp19_1 ? 1 : 0) << 0xe
                        entry_result.b = test_bit(eax_4:1.b, 0)
                    else
                        long double x87_r7_18 = data_519308
                        long double temp20_1 = fconvert.t(var_c_1)
                        x87_r7_18 - temp20_1
                        eax_4.w = (x87_r7_18 < temp20_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_18, temp20_1) ? 1 : 0) << 0xa
                            | (x87_r7_18 == temp20_1 ? 1 : 0) << 0xe
                        entry_result.b = test_bit(eax_4:1.b, 0)
                    
                    if (*(*data_530304 + 0xce0) != 0)
                        entry_result.b = 1
            else if (arg4 s>= 0x64)
                long double x87_r7_8 = data_51933c
                long double temp3_1 = fconvert.t(var_c_1)
                x87_r7_8 - temp3_1
                eax_4.w = (x87_r7_8 < temp3_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_8, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp3_1 ? 1 : 0) << 0xe
                entry_result.b = test_bit(eax_4:1.b, 0)
            else if (arg4 s>= 0x5f)
                long double x87_r7_9 = data_519348
                long double temp6_1 = fconvert.t(var_c_1)
                x87_r7_9 - temp6_1
                eax_4.w = (x87_r7_9 < temp6_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_9, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp6_1 ? 1 : 0) << 0xe
                entry_result.b = test_bit(eax_4:1.b, 0)
            else if (arg4 s>= 0x5a)
                long double x87_r7_10 = data_519354
                long double temp9_1 = fconvert.t(var_c_1)
                x87_r7_10 - temp9_1
                eax_4.w = (x87_r7_10 < temp9_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_10, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp9_1 ? 1 : 0) << 0xe
                entry_result.b = test_bit(eax_4:1.b, 0)
            else if (arg4 s>= 0x50)
                long double x87_r7_11 = fconvert.t(var_c_1)
                long double temp12_1 = fconvert.t(0.75f)
                x87_r7_11 - temp12_1
                eax_4.w = (x87_r7_11 < temp12_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_11, temp12_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == temp12_1 ? 1 : 0) << 0xe
                entry_result.b = not(test_bit(eax_4:1.b, 6)) && not(test_bit(eax_4:1.b, 0))
            else if (arg4 s< 0x3c)
                long double x87_r7_13 = data_519320
                long double temp16_1 = fconvert.t(var_c_1)
                x87_r7_13 - temp16_1
                eax_4.w = (x87_r7_13 < temp16_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_13, temp16_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == temp16_1 ? 1 : 0) << 0xe
                entry_result.b = test_bit(eax_4:1.b, 0)
            else
                long double x87_r7_12 = data_519314
                long double temp17_1 = fconvert.t(var_c_1)
                x87_r7_12 - temp17_1
                eax_4.w = (x87_r7_12 < temp17_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_12, temp17_1) ? 1 : 0) << 0xa
                    | (x87_r7_12 == temp17_1 ? 1 : 0) << 0xe
                entry_result.b = test_bit(eax_4:1.b, 0)
        else if (arg4 s>= 0x64)
            long double x87_r7_2 = fconvert.t(var_c_1)
            long double temp2_1 = fconvert.t(0.5f)
            x87_r7_2 - temp2_1
            eax_4.w = (x87_r7_2 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe
            entry_result.b = not(test_bit(eax_4:1.b, 6)) && not(test_bit(eax_4:1.b, 0))
        else if (arg4 s>= 0x5f)
            long double x87_r7_3 = data_519308
            long double temp4_1 = fconvert.t(var_c_1)
            x87_r7_3 - temp4_1
            eax_4.w = (x87_r7_3 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe
            entry_result.b = test_bit(eax_4:1.b, 0)
        else if (arg4 s>= 0x5a)
            long double x87_r7_4 = data_519314
            long double temp7_1 = fconvert.t(var_c_1)
            x87_r7_4 - temp7_1
            eax_4.w = (x87_r7_4 < temp7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_4, temp7_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp7_1 ? 1 : 0) << 0xe
            entry_result.b = test_bit(eax_4:1.b, 0)
        else if (arg4 s>= 0x50)
            long double x87_r7_5 = data_519320
            long double temp10_1 = fconvert.t(var_c_1)
            x87_r7_5 - temp10_1
            eax_4.w = (x87_r7_5 < temp10_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_5, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp10_1 ? 1 : 0) << 0xe
            entry_result.b = test_bit(eax_4:1.b, 0)
        else if (arg4 s< 0x3c)
            long double x87_r7_7 = fconvert.t(var_c_1)
            long double temp13_1 = fconvert.t(1f)
            x87_r7_7 - temp13_1
            eax_4.w = (x87_r7_7 < temp13_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_7, temp13_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp13_1 ? 1 : 0) << 0xe
            entry_result.b = not(test_bit(eax_4:1.b, 6)) && not(test_bit(eax_4:1.b, 0))
        else
            long double x87_r7_6 = data_51932c
            long double temp14_1 = fconvert.t(var_c_1)
            x87_r7_6 - temp14_1
            eax_4.w = (x87_r7_6 < temp14_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_6, temp14_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp14_1 ? 1 : 0) << 0xe
            entry_result.b = test_bit(eax_4:1.b, 0)
    
    if (arg2 == 1)
        entry_result = 0
    
    void* eax_8
    eax_8.b = *(*data_5301f4 + 4)
    
    if (eax_8.b == 0)
    label_5191ac:
        int32_t eax_11 = *(*data_5301f4 + 0xfffc)
        
        if (eax_11 == *(arg3 + (*(*data_5301f4 + 0x10020) << 2) + 0xac0))
            entry_result = 0
        
        *(arg3 + (*(*data_5301f4 + 0x10020) << 2) + 0xac0) = eax_11
    else
        eax_8.b -= 3
        char temp1_1 = eax_8.b
        eax_8.b -= 3
        
        if (temp1_1 u< 3)
            goto label_5191ac
    
    if (entry_result.b != 0 && *(*data_530304 + 0xcf9) == 0)
        if (arg1 == 1)
            int32_t var_1c_1 = 0
            sub_52ba68("Canasta", arg2, 1, arg3)
        else if (arg1 == 3)
            int32_t var_1c_2 = 0
            sub_52ba68("IchGewinn", arg2, arg6, arg3)
        else if (arg1 != 2)
            if (arg1 == 0 && arg6 != 0)
                int32_t esi_1 = 0
                
                if (arg5 != 0 && arg5 != arg6)
                    int32_t esi_3 = arg5 - arg6
                    
                    if (add_overflow(arg5, neg.d(arg6)))
                        sub_403010()
                        noreturn
                    
                    if (esi_3 s<= 0)
                        esi_1 = esi_3 - 1
                        
                        if (add_overflow(esi_3, 0xffffffff))
                            sub_403010()
                            noreturn
                    else
                        esi_1 = esi_3 + 1
                        
                        if (add_overflow(esi_3, 1))
                            sub_403010()
                            noreturn
                
                int32_t eax_18 = sub_402d20(esi_1)
                int32_t eax_19 = eax_18 + arg6
                
                if (add_overflow(eax_18, arg6))
                    sub_403010()
                    noreturn
                
                if (eax_19 == 0)
                    eax_19 = arg6
                
                if (add_overflow(eax_19, 0x1e))
                    sub_403010()
                    noreturn
                
                int32_t var_1c_5 = 0
                sub_52ba68("Emotion", arg2, eax_19 + 0x1e, esi_1)
        else if (arg6 u< 2)
            int32_t var_1c_3 = 0
            sub_52ba68("KontraReDu", arg2, 0x22, arg3)
        else if (arg6 == 2)
            int32_t var_1c_4 = 0
            sub_52ba68("KontraReIhr", arg2, 0x23, arg3)
    
    return entry_result
}
