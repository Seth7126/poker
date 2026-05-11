// ============================================================
// 函数名称: sub_4d0ae4
// 虚拟地址: 0x4d0ae4
// WARP GUID: 53e4b152-1011-53ee-a7d0-b5b0b741f8dd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cb8e8, sub_4ee44c, sub_420b38, sub_4f0c7c, sub_403010
// [被调用的父级函数]: sub_4d1324, sub_4d2a58
// ============================================================

void*sub_4d0ae4(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    void* esi = data_5301d4
    *(arg1 - 4) = 0xcd
    *(arg1 - 8) = 0xffffff6a
    *(arg1 - 0xc) = 0xfffffd7d
    *(arg1 - 0x10) = 0
    *(arg1 - 0x14) = 0x3fd70a3d
    *(arg1 - 0x18) = 0xc0066666
    *(arg1 - 0x1c) = 0
    *(arg1 - 0x20) = 0x3ca3d70a
    __builtin_strncpy(arg1 - 0x24, "33S@", 4)
    *(arg1 - 0x28) = 0xc0680000
    *(arg1 - 0x2c) = 0
    *(arg1 - 0x30) = 3
    sub_4ee44c()
    int32_t var_14 = 0
    int32_t var_18 = 0x3df5c28f
    int32_t var_1c = 0
    (*esi)(0, 0x3df5c28f, 0)
    int32_t var_14_1 = 0
    int32_t var_18_1 = 0
    int32_t var_1c_1 = 0x3f800000
    int32_t var_20 = 0xc25c0000
    (*data_5306b4)()
    int32_t var_14_2 = 0x3e4ccccd
    int32_t var_18_2 = 0x4019999a
    int32_t var_1c_2 = 0
    (*esi)(0, 0x4019999a, 0x3e4ccccd)
    int32_t var_14_3 = 0
    int32_t var_18_3 = 0xbf333333
    int32_t var_1c_3 = 0xbdcccccd
    (*esi)(0xbdcccccd, 0xbf333333, 0)
    int32_t eax_19 = *(arg1 - 8)
    
    if (neg.d(eax_19) == 0x80000000)
        sub_403010()
        noreturn
    
    (*esi)(
        fconvert.s(float.t(*(arg1 - 4)) / fconvert.t(100f) - data_4d1244 + data_4d1250
            + float.t(*(arg1 - 0x10)) / fconvert.t(200f)), 
        fconvert.s(float.t(neg.d(eax_19)) / fconvert.t(100f) + data_4d1238), 
        fconvert.s(fconvert.t(-9f) - float.t(*(arg1 - 0xc)) / fconvert.t(100f)))
    (*esi)(*(arg1 - 0x14), *(arg1 - 0x18), *(arg1 - 0x2c))
    *(arg1 - 0x18) = *(arg1 - 0x28)
    *(arg1 - 0x14) = *(arg1 - 0x24)
    
    if (*data_530364 != 3)
        (*esi)(fconvert.s(fconvert.t(*(arg1 - 0x48)) / fconvert.t(502f)), 
            fconvert.s(fconvert.t(*(arg1 - 0x44)) / fconvert.t(502f)), 
            fconvert.s(fconvert.t(*(arg1 - 0x40)) / fconvert.t(502f)))
        int32_t var_14_12 = 0x3f800000
        int32_t var_18_12 = 0
        int32_t var_1c_12 = 0
        int32_t var_20_5 = *(arg1 - 0x34)
        (*data_5306b4)()
        int32_t var_14_13 = 0
        int32_t var_18_13 = 0
        int32_t var_1c_13 = 0x3f800000
        int32_t var_20_6 = *(arg1 - 0x3c)
        (*data_5306b4)()
        int32_t var_14_14 = 0
        int32_t var_18_14 = 0x3f800000
        int32_t var_1c_14 = 0
        int32_t var_20_7 = *(arg1 - 0x38)
        (*data_5306b4)()
        
        if (*(arg1 + 0xc) != 0 && *data_530364 == 0)
            if (*(arg1 - 0x74) != 1)
                int32_t var_14_16 = 0x3f800000
                int32_t var_18_16 = 0
                int32_t var_1c_16 = 0
                int32_t var_20_9 = 0xc1f00000
                (*data_5306b4)()
            else
                int32_t var_14_15 = 0x3f800000
                int32_t var_18_15 = 0
                int32_t var_1c_15 = 0
                int32_t var_20_8 = 0xc1200000
                (*data_5306b4)()
    else
        int32_t var_14_6 = 0
        int32_t var_18_6 = 0
        int32_t var_1c_6 = 0x3f800000
        int32_t var_20_1 = 0xc3340000
        (*data_5306b4)()
        (*esi)(fconvert.s(fconvert.t(*(arg1 - 0x48)) / fconvert.t(502f)), 
            fconvert.s(fneg(fconvert.t(*(arg1 - 0x44))) / fconvert.t(502f)), 
            fconvert.s(fconvert.t(*(arg1 - 0x40)) / fconvert.t(502f) + fconvert.t(*(arg1 - 0x84))))
        int32_t var_14_8 = 0x3f800000
        int32_t var_18_8 = 0
        int32_t var_1c_8 = 0
        float var_20_2 = fconvert.s(fneg(fconvert.t(*(arg1 - 0x34))))
        (*data_5306b4)()
        int32_t var_14_9 = 0
        int32_t var_18_9 = 0
        int32_t var_1c_9 = 0x3f800000
        float var_20_3 = fconvert.s(fneg(fconvert.t(*(arg1 - 0x3c))))
        (*data_5306b4)()
        int32_t var_14_10 = 0
        int32_t var_18_10 = 0x3f800000
        int32_t var_1c_10 = 0
        float var_20_4 = fconvert.s(fneg(fconvert.t(*(arg1 - 0x38))))
        (*data_5306b4)()
    
    if (*(arg1 - 0x85) == 2)
        int32_t var_14_17 = 0x203
        (*data_53051c)(0x203)
        int32_t var_14_18 = 0xde1
        (*data_53006c)(0xde1)
        int32_t var_14_19 = 0xbe2
        return (*data_53006c)(0xbe2)
    
    if (*(arg1 - 0x85) == 1)
        int32_t var_14_20 = 0xbe2
        (*data_53006c)(0xbe2)
        int32_t var_14_21 = 0xb50
        (*data_53006c)(0xb50)
        int32_t var_14_22 = 0xde1
        (*data_53006c)(0xde1)
        int32_t var_14_23 = 0x3f800000
        int32_t var_18_17 = 0x3f800000
        int32_t var_1c_17 = 0x3f800000
        int32_t var_20_10 = 0x3f800000
        return (*data_530518)()
    
    if (*(arg1 - 0x85) != 3)
        int32_t var_14_27 = 0xbe2
        (*data_53006c)(0xbe2)
        
        if (sub_4cb8e8() == 0)
            *(arg1 - 0x90) =
                fconvert.s(fconvert.t(1f) - (fconvert.t(1f) - fconvert.t(*(arg1 - 0x6c))) * data_4d127c)
        else
            *(arg1 - 0x90) = *(arg1 - 0x6c)
        
        if (*(*data_530304 + 0xcec) != 0 || *(arg1 - 0x70) == 6)
            *(arg1 - 0x90) = fconvert.s(data_4d12d0 * fconvert.t(*(arg1 - 0x90)))
        else if (sub_4cb8e8() == 0)
            *(arg1 - 0x90) = fconvert.s(data_4d12d0 * fconvert.t(*(arg1 - 0x90)))
        else
            if (*(arg1 - 0x74) != 9)
                int32_t edx_4 = *(arg1 - 0x74)
                
                if (edx_4 s<= *data_5300d0 && edx_4 s> 1)
                    bool o_1 = unimplemented  {imul eax, edx, 0x2345}
                    
                    if (o_1)
                        sub_403010()
                        noreturn
                    
                    long double x87_r7_58 = fconvert.t(*(data_5301b0 + edx_4 * 0x8d14 - 0x394))
                    long double temp5_1 = fconvert.t(600f)
                    x87_r7_58 - temp5_1
                    int32_t eax_111
                    eax_111.w = (x87_r7_58 < temp5_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_58, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_58 == temp5_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_111:1.b, 6) || test_bit(eax_111:1.b, 0))
                        *(arg1 - 0x74)
                        bool o_2 = unimplemented  {imul eax, dword [ebx+0xc], 0x2345}
                        
                        if (o_2)
                            sub_403010()
                            noreturn
                        
                        *(arg1 - 0x90) = fconvert.s((
                            fconvert.t(*(data_5301b0 + *(arg1 - 0x74) * 0x8d14 - 0x394))
                            / fconvert.t(600f) * data_4d12b4 + data_4d12c0) * fconvert.t(*(arg1 - 0x90)))
            else
                *(arg1 - 0x90) = fconvert.s(data_4d12a4 * fconvert.t(*(arg1 - 0x90)))
            
            *(arg1 - 0x90) = fconvert.s(fconvert.t(*(arg1 - 0x90)) * fconvert.t(2f))
        
        int32_t var_14_28 = 0x3fff
        int32_t var_18_21 = 0x80000000
        int32_t var_1c_20 = 0
        *(arg1 - 0x90) = fconvert.s(sub_420b38(
            (fconvert.t(14f) / float.t(*(data_530598 + 0x3bc)) + data_4d128c)
                * fconvert.t(*(arg1 - 0x90)), 
            0f))
        void* eax_122
        
        if (*(arg1 - 0x68) == 0)
            long double x87_r7_73 = data_4d12dc
            long double temp4_1 = fconvert.t(*(arg1 - 0x94))
            x87_r7_73 - temp4_1
            eax_122.w = (x87_r7_73 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_73, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_73 == temp4_1 ? 1 : 0) << 0xe
        
        if (*(arg1 - 0x68) != 0 || test_bit(eax_122:1.b, 6) || test_bit(eax_122:1.b, 0))
            int32_t var_14_31 = *(arg1 - 0x90)
            int32_t var_18_24 = *(arg1 - 0x90)
            int32_t var_1c_22 = *(arg1 - 0x90)
            int32_t var_20_13 = *(arg1 - 0x90)
            (*data_530518)()
        else
            int32_t var_14_29 = 0x303
            int32_t var_18_22 = 0x302
            (*data_530334)(0x302, 0x303)
            sub_4f0c7c(0xbe2)
            int32_t var_14_30 = *(arg1 - 0x94)
            int32_t var_18_23 = *(arg1 - 0x90)
            int32_t var_1c_21 = *(arg1 - 0x90)
            int32_t var_20_12 = *(arg1 - 0x90)
            (*data_530518)()
    else
        *(arg1 - 0x8c) = fconvert.s(fconvert.t(1f)
            - fconvert.t(*(arg1 - 0x40)) / float.t(*(data_530598 + 0x394)) / data_4d1264)
        long double x87_r7_35 = fconvert.t(*(arg1 - 0x8c))
        long double temp1_1 = fconvert.t(0f)
        x87_r7_35 - temp1_1
        void* eax_76
        eax_76.w = (x87_r7_35 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_35, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_35 == temp1_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_76:1.b, 0))
            *(arg1 - 0x8c) = 0
        
        long double x87_r7_36 = fconvert.t(*(arg1 - 0x8c))
        long double temp2_1 = fconvert.t(1f)
        x87_r7_36 - temp2_1
        void* eax_78
        eax_78.w = (x87_r7_36 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_36, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_36 == temp2_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_78:1.b, 6)) && not(test_bit(eax_78:1.b, 0)))
            *(arg1 - 0x8c) = 0x3f800000
        
        *(arg1 - 0x8c) =
            fconvert.s(float.t(*(data_530598 + 0x390)) * fconvert.t(*(arg1 - 0x8c)) / fconvert.t(99f))
        sub_4f0c7c(0xbe2)
        int32_t var_14_24 = 0x303
        int32_t var_18_18 = 0x302
        (*data_530334)(0x302, 0x303)
        
        if (sub_4cb8e8() == 0)
            *(arg1 - 0x90) =
                fconvert.s(fconvert.t(1f) - (fconvert.t(1f) - fconvert.t(*(arg1 - 0x6c))) * data_4d127c)
        else
            *(arg1 - 0x90) = *(arg1 - 0x6c)
        
        int32_t var_14_25 = 0x3fff
        int32_t var_18_19 = 0x80000000
        int32_t var_1c_18 = 0
        *(arg1 - 0x90) = fconvert.s(sub_420b38(
            (fconvert.t(14f) / float.t(*(data_530598 + 0x3bc)) + data_4d128c)
                * fconvert.t(*(arg1 - 0x90)), 
            0f))
        float var_14_26 = fconvert.s(fconvert.t(*(arg1 - 0x8c)) * fconvert.t(*(arg1 - 0x94)))
        int32_t var_18_20 = *(arg1 - 0x90)
        int32_t var_1c_19 = *(arg1 - 0x90)
        int32_t var_20_11 = *(arg1 - 0x90)
        (*data_530518)()
        long double x87_r7_51 = data_4d1298
        long double temp3_1 = fconvert.t(*(arg1 - 0x8c))
        x87_r7_51 - temp3_1
        void* eax_98
        eax_98.w = (x87_r7_51 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_51, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_51 == temp3_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_98:1.b, 6)) && not(test_bit(eax_98:1.b, 0)))
            *(arg1 - 0x95) = 1
    
    sub_4f0c7c(0xb50)
    return sub_4f0c7c(0xde1)
}
