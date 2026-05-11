// ============================================================
// 函数名称: sub_46b394
// 虚拟地址: 0x46b394
// WARP GUID: 2a1d2dc1-47f4-5293-bb53-664b4cd16f20
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_46ba74
// ============================================================

void __convention("regparm")sub_46b394(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t* edx_2 = *(arg2 + 0x14) - 0x38
    int32_t* edx_2 = *(arg2 + 0x14) - 0x38
    
    if (arg1 == 0)
        __builtin_memcpy(*(arg2 + 0x14) - 0x14, *(*(arg2 + 0x14) - 4) + 0x1078, 0x10)
        __builtin_memcpy(*(arg2 + 0x14) - 0x24, *(*(arg2 + 0x14) - 4) + 0x1088, 0x10)
        
        if (*(*(arg2 + 0x14) - 0x25) == 0)
            *(arg2 - 0xc) = fconvert.s((fconvert.t(*(arg2 - 8)) * fconvert.t(0.5f)
                + fconvert.t(*(arg2 - 4))) / fconvert.t(1.5f) * data_46b99c + data_46b9a8)
            *(arg2 - 0x10) = fconvert.s(fconvert.t(1f) - fconvert.t(*(arg2 - 0xc)))
        else
            *(arg2 - 0xc) = fconvert.s((fconvert.t(*(arg2 - 8)) * fconvert.t(0.5f)
                + fconvert.t(*(arg2 - 4))) / fconvert.t(1.5f))
            *(arg2 - 0x10) = fconvert.s(fconvert.t(1f) - fconvert.t(*(arg2 - 0xc)))
        
        edx_2[3] = fconvert.s(fconvert.t(*(*(arg2 + 0x14) - 8)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x18)) * fconvert.t(*(arg2 - 0x10)))
        *edx_2 = fconvert.s(fconvert.t(*(*(arg2 + 0x14) - 0x14)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x24)) * fconvert.t(*(arg2 - 0x10)))
        edx_2[1] = fconvert.s(fconvert.t(*(*(arg2 + 0x14) - 0x10)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x20)) * fconvert.t(*(arg2 - 0x10)))
        edx_2[2] = fconvert.s(fconvert.t(*(*(arg2 + 0x14) - 0xc)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x1c)) * fconvert.t(*(arg2 - 0x10)))
        
        if (*(*(arg2 + 0x14) + 0x14) == 0x69)
            (*data_530518)(*edx_2, edx_2[1], edx_2[2], 
                fconvert.s(fconvert.t(edx_2[3]) * fconvert.t(*(*(arg2 + 0x14) + 0xc)) * data_46b9b4))
        else if (*(*(arg2 + 0x14) + 0x14) == 0x35)
            (*data_530518)(*edx_2, edx_2[1], edx_2[2], 
                fconvert.s(fconvert.t(edx_2[3]) * fconvert.t(*(*(arg2 + 0x14) + 0xc)) * data_46b9c0))
        else if (*(*(arg2 + 0x14) + 0x14) s> 0x3c)
            (*data_530518)(*edx_2, edx_2[1], edx_2[2], 
                fconvert.s(fconvert.t(edx_2[3]) * fconvert.t(*(*(arg2 + 0x14) + 0xc))))
        else
            (*data_530518)(*edx_2, edx_2[1], edx_2[2], 
                fconvert.s(fconvert.t(edx_2[3]) * fconvert.t(*(*(arg2 + 0x14) + 0xc)) * data_46b9cc))
    else if (arg1 == 1)
        *(arg2 - 0xc) = *(arg2 - 4)
        *(arg2 - 0x10) = fconvert.s(fconvert.t(1f) - fconvert.t(*(arg2 - 0xc)))
        *(arg2 - 0x14) = fconvert.s(((fconvert.t(*(arg2 - 4)) * fconvert.t(1.5f) + fconvert.t(0.5f)
            - data_46b99c * fconvert.t(*(arg2 - 8))) / data_46b9d8 - data_46b9e4) * data_46b9f0)
        long double x87_r7_47 = data_46b9fc
        long double temp0_1 = fconvert.t(*(arg2 - 0x14))
        x87_r7_47 - temp0_1
        void* eax_71
        eax_71.w = (x87_r7_47 < temp0_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_47, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_47 == temp0_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_71:1.b, 6)) && not(test_bit(eax_71:1.b, 0)))
            *(arg2 - 0x14) =
                fconvert.s(fneg(data_46ba08 + fconvert.t(*(arg2 - 0x14))) * data_46ba14 - data_46ba08)
        
        long double x87_r7_53 = data_46ba20
        long double temp1_1 = fconvert.t(*(arg2 - 0x14))
        x87_r7_53 - temp1_1
        void* eax_74
        eax_74.w = (x87_r7_53 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_53, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_53 == temp1_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_74:1.b, 0))
            *(arg2 - 0x14) = fconvert.s((fconvert.t(*(arg2 - 0x14)) - data_46ba20) * fconvert.t(3f)
                + fconvert.t(*(arg2 - 0x14)))
        
        edx_2[3] = fconvert.s((fconvert.t(*(*(arg2 + 0x14) - 8)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x18)) * fconvert.t(*(arg2 - 0x10))) * fconvert.t(1.5f))
        long double x87_r7_65 = fconvert.t(*(*(arg2 + 0x14) - 0x14)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x24)) * fconvert.t(*(arg2 - 0x10))
            + fconvert.t(*(arg2 - 0x14))
        *edx_2 = fconvert.s(x87_r7_65 * fconvert.t(1.5f))
        long double x87_r7_70 = fconvert.t(*(*(arg2 + 0x14) - 0x10)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x20)) * fconvert.t(*(arg2 - 0x10))
            + fconvert.t(*(arg2 - 0x14))
        edx_2[1] = fconvert.s(x87_r7_70 * fconvert.t(1.5f))
        long double x87_r7_75 = fconvert.t(*(*(arg2 + 0x14) - 0xc)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x1c)) * fconvert.t(*(arg2 - 0x10))
            + fconvert.t(*(arg2 - 0x14))
        edx_2[2] = fconvert.s(x87_r7_75 * fconvert.t(1.5f))
        long double x87_r7_77 = data_46ba30
        long double temp2_1 = fconvert.t(*(arg2 - 0x14))
        x87_r7_77 - temp2_1
        void* eax_105
        eax_105.w = (x87_r7_77 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_77, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_77 == temp2_1 ? 1 : 0) << 0xe
        void* eax_106
        
        if (not(test_bit(eax_105:1.b, 0)))
            long double x87_r7_78 = fconvert.t(*(arg2 - 0x14))
            long double temp3_1 = fconvert.t(-0.5f)
            x87_r7_78 - temp3_1
            eax_106.w = (x87_r7_78 < temp3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_78, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_78 == temp3_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_105:1.b, 0)) && not(test_bit(eax_106:1.b, 0)))
            (*data_530518)(*edx_2, edx_2[1], edx_2[2], 
                fconvert.s(data_46ba40 * fconvert.t(*(*(arg2 + 0x14) + 0xc))))
        else
            (*data_530518)(*edx_2, edx_2[1], edx_2[2], *(*(arg2 + 0x14) + 0xc))
    else if (arg1 == 2)
        (*data_530518)(0, 0, 0, *(*(arg2 + 0x14) + 0xc))
    else if (arg1 == 3)
        *(arg2 - 0xc) = 0
        *(arg2 - 0x10) = 0
        edx_2[3] = fconvert.s((fconvert.t(1f) - fconvert.t(*(arg2 - 4))) * data_46ba4c + data_46ba58
            + (fconvert.t(*(arg2 + 0x10)) + fconvert.t(*(arg2 - 0x18))) * data_46ba64)
        *edx_2 = fconvert.s(fconvert.t(*(*(arg2 + 0x14) - 0x14)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x24)) * fconvert.t(*(arg2 - 0x10)))
        edx_2[1] = fconvert.s(fconvert.t(*(*(arg2 + 0x14) - 0x10)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x20)) * fconvert.t(*(arg2 - 0x10)))
        edx_2[2] = fconvert.s(fconvert.t(*(*(arg2 + 0x14) - 0xc)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x1c)) * fconvert.t(*(arg2 - 0x10)))
        (*data_530518)(*edx_2, edx_2[1], edx_2[2], 
            fconvert.s(fconvert.t(edx_2[3]) * fconvert.t(*(*(arg2 + 0x14) + 0xc))))
    else if (arg1 == 4)
        *(arg2 - 0x10) = 0
        *(arg2 - 0xc) = 0
        *edx_2 = fconvert.s(fconvert.t(*(*(arg2 + 0x14) - 0x14)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x24)) * fconvert.t(*(arg2 - 0x10)))
        edx_2[1] = fconvert.s(fconvert.t(*(*(arg2 + 0x14) - 0x10)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x20)) * fconvert.t(*(arg2 - 0x10)))
        edx_2[2] = fconvert.s(fconvert.t(*(*(arg2 + 0x14) - 0xc)) * fconvert.t(*(arg2 - 0xc))
            + fconvert.t(*(*(arg2 + 0x14) - 0x1c)) * fconvert.t(*(arg2 - 0x10)))
        edx_2[3] = fconvert.s(fconvert.t(*(*(arg2 + 0x14) - 8)) * fconvert.t(0f))
        (*data_530518)(*edx_2, edx_2[1], edx_2[2], 
            fconvert.s(fconvert.t(edx_2[3]) * fconvert.t(*(*(arg2 + 0x14) + 0xc))))
}
