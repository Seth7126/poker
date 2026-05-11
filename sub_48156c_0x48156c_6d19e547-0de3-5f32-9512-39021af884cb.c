// ============================================================
// 函数名称: sub_48156c
// 虚拟地址: 0x48156c
// WARP GUID: 6d19e547-0de3-5f32-9512-39021af884cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_46b1f4, sub_47c0f0, sub_403010
// [被调用的父级函数]: sub_484e24, sub_4f9424, sub_480534, sub_488509, sub_502b24
// ============================================================

int32_t __fastcallsub_48156c(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4, float arg5, char arg6, float arg7, float arg8, char arg9, int32_t arg10, int32_t arg11, int32_t arg12, int32_t arg13)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_30 = ebx
    int32_t esi
    int32_t var_34 = esi
    int32_t edi
    int32_t var_38 = edi
    int32_t ebx_1 = arg2
    int32_t esi_1 = arg3
    float var_24
    float var_20
    float var_1c
    float var_18
    
    if ((ebx_1 s< 0 || ebx_1 s> 0x27) && arg6 != 4)
        var_18 = 1f
        var_1c = 1f
    else
        arg3 = ebx_1 & 0x80000007
        
        if (arg3 s< 0)
            arg3 = ((arg3 - 1) | 0xfffffff8) + 1
        
        int32_t edx = ebx_1
        
        if (edx s< 0)
            edx += 7
        
        var_18 = 0.125f
        var_1c = 0.200000003f
        var_20 = fconvert.s(float.t(arg3) * fconvert.t(0.125f))
        var_24 = fconvert.s(float.t(edx s>> 3) * fconvert.t(0.200000003f))
        
        if (ebx_1 == 1)
            var_18 = fconvert.s(fconvert.t(4f) * fconvert.t(0.125f))
        else if (ebx_1 == 5)
            var_1c = fconvert.s(fconvert.t(2f) * fconvert.t(0.200000003f))
        
        ebx_1 = *(esi_1 + 0x8b4)
    
    float var_14
    
    var_14 = arg10 != 3 ? 1f : 0.400000006f
    
    arg3.b = data_5320b8
    arg3.b |= arg9
    
    if (arg3.b == 0)
        (*data_530034)(0xbe2)
    else
        (*data_53006c)(0xbe2)
    
    (*data_53006c)(0xb50)
    long double x87_r7_9 = fconvert.t(arg8)
    long double temp1 = fconvert.t(-8f)
    x87_r7_9 - temp1
    
    if (not(test_bit(
            ((x87_r7_9 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_9, temp1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp1 ? 1 : 0) << 0xe):1.b, 
            6)))
        long double x87_r7_10 = fconvert.t(arg8)
        long double temp2_1 = fconvert.t(-7f)
        x87_r7_10 - temp2_1
        
        if (not(test_bit(
                ((x87_r7_10 < temp2_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_10, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp2_1 ? 1 : 0) << 0xe):1.b, 
                6)))
            (*data_530334)(0x302, 0x303)
        else
            (*data_530334)(1, 1)
            arg8 = 0f
    else
        var_14 = arg7
    
    long double x87_r7_11 = fconvert.t(arg5)
    long double temp3 = fconvert.t(1f)
    x87_r7_11 - temp3
    float eax_10
    eax_10.w = (x87_r7_11 < temp3 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_11, temp3) ? 1 : 0) << 0xa
        | (x87_r7_11 == temp3 ? 1 : 0) << 0xe
    
    if (test_bit(eax_10:1.b, 0))
        var_14 = fconvert.s(fconvert.t(var_14) * fconvert.t(arg5))
    
    (*data_530810)()
    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, fconvert.s(fconvert.t(1f) * fconvert.t(var_14)))
    float var_c = 0f
    int32_t var_10 = 0x3b23d70a
    
    if (arg6 == 0 && arg10 == 1)
        var_c = fconvert.s(fconvert.t(0f) + fconvert.t(0.00249999994f))
    
    if (arg10 == 2)
        var_c = fconvert.s(fconvert.t(var_c) - fconvert.t(0.00249999994f))
    
    long double x87_r7_20 = data_482248
    long double temp4 = fconvert.t(arg7)
    x87_r7_20 - temp4
    
    if (not(test_bit(
            ((x87_r7_20 < temp4 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_20, temp4) ? 1 : 0) << 0xa
                | (x87_r7_20 == temp4 ? 1 : 0) << 0xe):1.b, 
            0)))
        var_c = 0f
    
    (*data_5306a4)(fconvert.d(data_482260 - fconvert.t(var_c)), 
        fconvert.d(data_482254 + fconvert.t(var_c)), 0, 0xbff80000)
    sub_47c0f0(esi_1)
    
    if (neg.d(arg13) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_5306a4)(fconvert.d(float.t(arg1) / fconvert.t(637f)), 
        fconvert.d(float.t(neg.d(arg13)) / fconvert.t(637f)), 0, 0)
    int32_t var_80 = 0
    int32_t var_84 = 0
    
    if (neg.d(arg11) == 0x80000000)
        sub_403010()
        noreturn
    
    double var_8c = fconvert.d(float.t(neg.d(arg11)) * fconvert.t(0.5f) / fconvert.t(637f))
    double var_94 = fconvert.d(float.t(arg12) * fconvert.t(0.5f) / fconvert.t(637f))
    (*data_5306a4)(var_94, var_8c, var_84, var_80)
    
    if (arg6 == 4)
        long double x87_r7_35 = fconvert.t(arg8)
        long double temp8_1 = fconvert.t(2f)
        x87_r7_35 - temp8_1
        
        if (test_bit(
                ((x87_r7_35 < temp8_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_35, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_35 == temp8_1 ? 1 : 0) << 0xe):1.b, 
                6))
            (*data_5306a4)(0, 0, 0, 0, 0x9999999a, 0xbfb99999)
        
        (*data_5306b4)(*(esi_1 + 0xa68), 0x3f800000, 0, 0)
        (*data_5306b4)(*(esi_1 + 0xa6c), 0, 0x3f800000, 0)
        (*data_5306b4)(*(esi_1 + 0xa70), 0, 0, 0x3f800000)
    
    long double x87_r7_36 = fconvert.t(arg8)
    long double temp7 = fconvert.t(-8f)
    x87_r7_36 - temp7
    
    if (not(test_bit(
            ((x87_r7_36 < temp7 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_36, temp7) ? 1 : 0) << 0xa
                | (x87_r7_36 == temp7 ? 1 : 0) << 0xe):1.b, 
            6)))
        if (arg9 != 0 || ebx_1 s< 0)
            (*data_53006c)(0xde1)
        
        if (arg9 == 0 && ebx_1 s> 0)
            if (ebx_1 s< 0)
                sub_403008()
                noreturn
            
            (*data_53036c)(0xde1, ebx_1)
        
        if (ebx_1 == 0xffffffff)
            (*data_530518)(0, 0, 0, fconvert.s(data_482274 * fconvert.t(var_14)))
        
        if (ebx_1 == 0xfffffffe)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                fconvert.s(data_482280 * fconvert.t(var_14) - data_48228c))
        
        if (ebx_1 == 0xfffffffb)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                fconvert.s(data_482274 * fconvert.t(var_14)))
        
        if (ebx_1 == 0xfffffffd)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                fconvert.s(data_482298 * fconvert.t(var_14)))
        
        if (ebx_1 == 0xfffffffc)
            (*data_530518)(0, 0, 0x3f000000, fconvert.s(data_4822a4 * fconvert.t(var_14)))
        
        if (arg9 != 0)
            (*data_530518)(arg8, 0, 0, fconvert.s(fconvert.t(1f) * fconvert.t(var_14)))
    else
        (*data_53006c)(0xbe2)
        (*data_530034)(0xde1)
        
        if (arg9 == 0 && ebx_1 s> 0)
            if (ebx_1 s< 0)
                sub_403008()
                noreturn
            
            (*data_53036c)(0xde1, ebx_1)
        
        (*data_530518)(var_14, var_14, var_14, 0x3f800000)
        (*data_530334)(0x300, 0x301)
        (*data_530034)(0xbe2)
    
    long double x87_r7_50
    long double temp9_1
    
    if (arg6 != 4)
        x87_r7_50 = fconvert.t(var_18)
        temp9_1 = fconvert.t(1f)
        x87_r7_50 - temp9_1
    
    double* esp_1
    
    if (arg6 != 4 && (test_bit(
            ((x87_r7_50 < temp9_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_50, temp9_1) ? 1 : 0) << 0xa
                | (x87_r7_50 == temp9_1 ? 1 : 0) << 0xe):1.b, 
            0) || (arg9 == 0 && ebx_1 s< 0)))
        int32_t var_c4
        
        if (ebx_1 == 0xffffffff && arg11 s< 0x50)
            float var_98_19 = var_20
            float var_9c_15 = var_24
            float var_a0_12 = var_18
            float var_a4_12 = var_1c
            int32_t var_a8_2 = arg13
            int32_t var_ac_2 = arg12
            int32_t var_b0_1 = arg11
            int32_t var_b4_1 = 0xffffffdc
            int32_t var_bc_1 = 0
            char var_c0_1 = 1
            var_c4 = 0
            esp_1 = &var_c4
            ebp_1 = sub_46b1f4(var_c4, var_c0_1, var_bc_1, arg5, var_b4_1)
        else if (ebx_1 == 0xffffffff)
            float var_98_20 = var_20
            float var_9c_16 = var_24
            float var_a0_13 = var_18
            float var_a4_13 = var_1c
            int32_t var_a8_3 = arg13
            int32_t var_ac_3 = arg12
            int32_t var_b0_2 = arg11
            int32_t var_b4_2 = 0xfffffff1
            int32_t var_bc_2 = 0
            char var_c0_2 = 1
            var_c4 = 0
            esp_1 = &var_c4
            ebp_1 = sub_46b1f4(var_c4, var_c0_2, var_bc_2, arg5, var_b4_2)
        else if (ebx_1 == 0xfffffffb)
            float var_98_21 = var_20
            float var_9c_17 = var_24
            float var_a0_14 = var_18
            float var_a4_14 = var_1c
            int32_t var_a8_4 = arg13
            int32_t var_ac_4 = arg12
            int32_t var_b0_3 = arg11
            int32_t var_b4_3 = 0xfffffff4
            int32_t var_bc_3 = 0
            char var_c0_3 = 0
            var_c4 = 0
            esp_1 = &var_c4
            ebp_1 = sub_46b1f4(var_c4, var_c0_3, var_bc_3, arg5, var_b4_3)
        else if (ebx_1 != 0xfffffffc)
            float var_98_23 = var_20
            float var_9c_19 = var_24
            float var_a0_16 = var_18
            float var_a4_16 = var_1c
            int32_t var_a8_6 = arg13
            int32_t var_ac_6 = arg12
            int32_t var_b0_5 = arg11
            int32_t var_b4_5 = 0xc
            int32_t var_bc_5 = 0
            char var_c0_5 = 1
            var_c4 = 0
            esp_1 = &var_c4
            ebp_1 = sub_46b1f4(var_c4, var_c0_5, var_bc_5, arg5, var_b4_5)
        else
            float var_98_22 = var_20
            float var_9c_18 = var_24
            float var_a0_15 = var_18
            float var_a4_15 = var_1c
            int32_t var_a8_5 = arg13
            int32_t var_ac_5 = arg12
            int32_t var_b0_4 = arg11
            int32_t var_b4_4 = 2
            int32_t var_bc_4 = 0
            char var_c0_4 = 1
            var_c4 = 0
            esp_1 = &var_c4
            ebp_1 = sub_46b1f4(var_c4, var_c0_4, var_bc_4, arg5, var_b4_4)
    else if (arg6 == 4)
        (*data_52ffd4)(7)
        (*data_5307f8)(var_20, var_24)
        
        if (neg.d(arg11) == 0x80000000)
            sub_403010()
            noreturn
        
        if (neg.d(arg12) == 0x80000000)
            sub_403010()
            noreturn
        
        (*data_530368)(fconvert.s(float.t(neg.d(arg12)) / fconvert.t(639f) / fconvert.t(2f)), 
            fconvert.s(float.t(neg.d(arg11)) / fconvert.t(639f) / fconvert.t(2f)), 0)
        (*data_5307f8)(fconvert.s(fconvert.t(var_20) + fconvert.t(var_18)), var_24)
        
        if (neg.d(arg11) == 0x80000000)
            sub_403010()
            noreturn
        
        (*data_530368)(fconvert.s(float.t(arg12) / fconvert.t(639f) / fconvert.t(2f)), 
            fconvert.s(float.t(neg.d(arg11)) / fconvert.t(639f) / fconvert.t(2f)), 0)
        (*data_5307f8)(fconvert.s(fconvert.t(var_20) + fconvert.t(var_18)), 
            fconvert.s(fconvert.t(var_1c) / fconvert.t(2f) + fconvert.t(var_24)))
        (*data_530368)(fconvert.s(float.t(arg12) / fconvert.t(639f) / fconvert.t(2f)), 
            fconvert.s(float.t(arg11) / fconvert.t(639f) / fconvert.t(2f)), 0)
        (*data_5307f8)(var_20, fconvert.s(fconvert.t(var_1c) / fconvert.t(2f) + fconvert.t(var_24)))
        
        if (neg.d(arg12) == 0x80000000)
            sub_403010()
            noreturn
        
        (*data_530368)(fconvert.s(float.t(neg.d(arg12)) / fconvert.t(639f) / fconvert.t(2f)), 
            fconvert.s(float.t(arg11) / fconvert.t(639f) / fconvert.t(2f)), 0)
        (*data_530a08)()
        (*data_5306b4)(0x43340000, 0x3f800000, 0, 0)
        (*data_52ffd4)(7)
        (*data_5307f8)(var_20, fconvert.s(fconvert.t(var_24) + fconvert.t(var_1c)))
        
        if (neg.d(arg11) == 0x80000000)
            sub_403010()
            noreturn
        
        if (neg.d(arg12) == 0x80000000)
            sub_403010()
            noreturn
        
        (*data_530368)(fconvert.s(float.t(neg.d(arg12)) / fconvert.t(639f) / fconvert.t(2f)), 
            fconvert.s(float.t(neg.d(arg11)) / fconvert.t(639f) / fconvert.t(2f)), 0)
        (*data_5307f8)(fconvert.s(fconvert.t(var_20) + fconvert.t(var_18)), 
            fconvert.s(fconvert.t(var_24) + fconvert.t(var_1c)))
        
        if (neg.d(arg11) == 0x80000000)
            sub_403010()
            noreturn
        
        (*data_530368)(fconvert.s(float.t(arg12) / fconvert.t(639f) / fconvert.t(2f)), 
            fconvert.s(float.t(neg.d(arg11)) / fconvert.t(639f) / fconvert.t(2f)), 0)
        (*data_5307f8)(fconvert.s(fconvert.t(var_20) + fconvert.t(var_18)), 
            fconvert.s(fconvert.t(var_1c) / fconvert.t(2f) + fconvert.t(var_24)))
        (*data_530368)(fconvert.s(float.t(arg12) / fconvert.t(639f) / fconvert.t(2f)), 
            fconvert.s(float.t(arg11) / fconvert.t(639f) / fconvert.t(2f)), 0)
        (*data_5307f8)(var_20, fconvert.s(fconvert.t(var_1c) / fconvert.t(2f) + fconvert.t(var_24)))
        
        if (neg.d(arg12) == 0x80000000)
            sub_403010()
            noreturn
        
        (*data_530368)(fconvert.s(float.t(neg.d(arg12)) / fconvert.t(639f) / fconvert.t(2f)), 
            fconvert.s(float.t(arg11) / fconvert.t(639f) / fconvert.t(2f)), 0)
        esp_1 = &var_94
        (*data_530a08)()
    else
        long double x87_r7_51 = fconvert.t(var_18)
        long double temp11_1 = fconvert.t(1f)
        x87_r7_51 - temp11_1
        
        if (not(test_bit(
                ((x87_r7_51 < temp11_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_51, temp11_1) ? 1 : 0) << 0xa
                    | (x87_r7_51 == temp11_1 ? 1 : 0) << 0xe):1.b, 
                0)))
            (*data_52ffd4)(7)
            (*data_5307f8)(0, 0)
            
            if (neg.d(arg11) == 0x80000000)
                sub_403010()
                noreturn
            
            if (neg.d(arg12) == 0x80000000)
                sub_403010()
                noreturn
            
            (*data_530368)(fconvert.s(float.t(neg.d(arg12)) / fconvert.t(639f) / fconvert.t(2f)), 
                fconvert.s(float.t(neg.d(arg11)) / fconvert.t(639f) / fconvert.t(2f)), 0)
            (*data_5307f8)(arg4, 0)
            
            if (neg.d(arg11) == 0x80000000)
                sub_403010()
                noreturn
            
            (*data_530368)(fconvert.s(float.t(arg12) / fconvert.t(639f) / fconvert.t(2f)), 
                fconvert.s(float.t(neg.d(arg11)) / fconvert.t(639f) / fconvert.t(2f)), 0)
            (*data_5307f8)(arg4, 0x3f800000)
            (*data_530368)(fconvert.s(float.t(arg12) / fconvert.t(639f) / fconvert.t(2f)), 
                fconvert.s(float.t(arg11) / fconvert.t(639f) / fconvert.t(2f)), 0)
            (*data_5307f8)(0, 0x3f800000)
            
            if (neg.d(arg12) == 0x80000000)
                sub_403010()
                noreturn
            
            (*data_530368)(fconvert.s(float.t(neg.d(arg12)) / fconvert.t(639f) / fconvert.t(2f)), 
                fconvert.s(float.t(arg11) / fconvert.t(639f) / fconvert.t(2f)), 0)
            esp_1 = &var_94
            (*data_530a08)()
        else
            (*data_52ffd4)(7)
            (*data_5307f8)(var_20, fconvert.s(fconvert.t(var_24) - fconvert.t(var_1c)))
            
            if (neg.d(arg11) == 0x80000000)
                sub_403010()
                noreturn
            
            if (neg.d(arg12) == 0x80000000)
                sub_403010()
                noreturn
            
            (*data_530368)(fconvert.s(float.t(neg.d(arg12)) / fconvert.t(639f) / fconvert.t(2f)), 
                fconvert.s(float.t(neg.d(arg11)) / fconvert.t(639f) / fconvert.t(2f)), 0)
            (*data_5307f8)(fconvert.s(fconvert.t(var_20) + fconvert.t(var_18)), 
                fconvert.s(fconvert.t(var_24) - fconvert.t(var_1c)))
            
            if (neg.d(arg11) == 0x80000000)
                sub_403010()
                noreturn
            
            (*data_530368)(fconvert.s(float.t(arg12) / fconvert.t(639f) / fconvert.t(2f)), 
                fconvert.s(float.t(neg.d(arg11)) / fconvert.t(639f) / fconvert.t(2f)), 0)
            (*data_5307f8)(fconvert.s(fconvert.t(var_20) + fconvert.t(var_18)), var_24)
            (*data_530368)(fconvert.s(float.t(arg12) / fconvert.t(639f) / fconvert.t(2f)), 
                fconvert.s(float.t(arg11) / fconvert.t(639f) / fconvert.t(2f)), 0)
            (*data_5307f8)(var_20, var_24)
            
            if (neg.d(arg12) == 0x80000000)
                sub_403010()
                noreturn
            
            (*data_530368)(fconvert.s(float.t(neg.d(arg12)) / fconvert.t(639f) / fconvert.t(2f)), 
                fconvert.s(float.t(arg11) / fconvert.t(639f) / fconvert.t(2f)), 0)
            esp_1 = &var_94
            (*data_530a08)()
    
    if (*(esi_1 + 0xcf4) == 0)
        *(esp_1 - 4) = 0xb50
        (*data_530034)()
    
    *(esp_1 - 4) = 0xbe2
    void* esp_4 = esp_1 - 4
    int32_t result = (*data_53006c)()
    
    if (*(esi_1 + 0xce9) == 0)
        *(esp_4 - 4) = 0xde1
        result = (*data_530034)()
    
    *esp_4
    *(esp_4 + 4)
    *(esp_4 + 8)
    *ebp_1
    return result
}
