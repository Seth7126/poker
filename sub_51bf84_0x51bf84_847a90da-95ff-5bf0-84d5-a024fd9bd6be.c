// ============================================================
// 函数名称: sub_51bf84
// 虚拟地址: 0x51bf84
// WARP GUID: 847a90da-95ff-5bf0-84d5-a024fd9bd6be
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_51b7b4, sub_51b788, sub_403010
// [被调用的父级函数]: sub_4f9658, sub_50003c, sub_5042ec
// ============================================================

float* __fastcallsub_51bf84(char arg1, int32_t arg2, void* arg3 @ eax, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: char var_d = arg1
    char var_d = arg1
    float var_14 = 104f
    float var_18 = 104f
    
    if (*(*data_5301f4 + 4) == 4)
        var_14 = fconvert.s(data_51c6dc * fconvert.t(104f))
        var_18 = var_14
        
        if (*(data_530598 + 0xc) == 1)
            var_14 = fconvert.s(data_51c6e8 * fconvert.t(var_14))
        
        if (*(data_530598 + 0xc) == 2)
            var_14 = fconvert.s(data_51c6dc * fconvert.t(var_14))
    
    *arg4 = 0x43160000
    arg4[1] = 0x43880000
    arg4[2] = 0xc4430000
    arg4[3] = 0xc29e0000
    arg4[4] = 0xc0c00000
    arg4[5] = 0
    
    if (*(arg3 + 0x3d01) != 0)
        var_d = 0
    
    int32_t var_20 = 0
    int32_t var_24
    
    var_24 = arg2 s> 0x14 ? 0x15 : 1
    
    float var_30_1
    int32_t eax_48
    
    do
        float var_38
        
        if (arg2 s> 0x14)
            if (var_20 == 0)
                var_38 = fconvert.s(data_51c6fc * fconvert.t(var_18))
                arg4[2] = 0xc4480000
                *arg4 = 0xc3520000
                
                if (*(*data_5301f4 + 4) == 4)
                    *arg4 = 0xc3610000
                    var_38 = fconvert.s(data_51c708 * fconvert.t(var_14))
            else if (var_20 == 1)
                var_38 = fconvert.s(fconvert.t(var_18) * fconvert.t(14f))
                arg4[2] = 0xc4834000
                *arg4 = 0xc2c80000
                
                if (*(*data_5301f4 + 4) == 4)
                    arg4[2] = 0xc47f0000
                    var_38 = fconvert.s(data_51c718 * fconvert.t(var_18))
            else if (var_20 != 2)
                var_38 = fconvert.s(fconvert.t(var_18) * fconvert.t(1000f))
                arg4[2] = 0xc4c1c000
                *arg4 = 0x43820000
                
                if (*(*data_5301f4 + 4) == 4)
                    arg4[2] = 0xc4b68000
                    *arg4 = 0x437a0000
            else
                var_38 = fconvert.s(fconvert.t(var_18) * fconvert.t(11f))
                arg4[2] = 0xc4a28000
                *arg4 = 0x42b40000
                
                if (*(*data_5301f4 + 4) == 4)
                    arg4[2] = 0xc49b0000
                    var_38 = fconvert.s(fconvert.t(var_18) * fconvert.t(14f))
                    *arg4 = 0x42480000
        else if (var_20 == 0)
            var_38 = fconvert.s(fconvert.t(var_18) * fconvert.t(18.5f))
            arg4[2] = 0xc4098000
            *arg4 = 0x42200000
            
            if (*(*data_5301f4 + 4) == 4)
                arg4[2] = 0xc40e8000
                *arg4 = 0xc32f0000
        else if (var_20 == 1)
            var_38 = fconvert.s(fconvert.t(var_18) * fconvert.t(1000f))
            arg4[2] = 0xc3988000
            *arg4 = 0x43c30000
            
            if (*(*data_5301f4 + 4) == 4)
                arg4[2] = 0xc3ac8000
                *arg4 = 0x43c30000
        
        int32_t var_28_1 = 0
        float var_34_1 = 0f
        var_30_1 = 0f
        float var_40_1 = 0f
        int32_t esi_1 = var_24
        
        if (arg2 s>= esi_1)
            int32_t i_1 = arg2 - esi_1 + 1
            int32_t __saved_ebp
            void* ebx_1 = &(&__saved_ebp)[esi_1] - 0x156
            int32_t i
            
            do
                eax_48 = esi_1 * 0x41
                bool o_1 = unimplemented  {imul eax, esi, 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                int32_t edx_1 = sx.d(*(arg3 + (eax_48 << 2)))
                int32_t temp3_1 = var_28_1
                var_28_1 += edx_1
                
                if (add_overflow(temp3_1, edx_1))
                    sub_403010()
                    noreturn
                
                void* edx_2
                edx_2.b = *(arg3 + 0x3d00)
                edx_2.b &= var_d
                
                if (edx_2.b != 0 && esi_1 == *(arg3 + 0x3d14))
                    int32_t edx_5 = sx.d(*(arg3 + 0x490a))
                    int32_t temp7_1 = var_28_1
                    var_28_1 += edx_5
                    
                    if (add_overflow(temp7_1, edx_5))
                        sub_403010()
                        noreturn
                
                var_30_1 = var_34_1
                int32_t edx_8 = esi_1 - var_24
                
                if (add_overflow(esi_1, neg.d(var_24)))
                    sub_403010()
                    noreturn
                
                if (add_overflow(edx_8, 1))
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + 4) == 4)
                    char var_45_1 = 0
                    float var_4c_1 = 0f
                    *ebx_1 = 0
                    int32_t j_1 = sx.d(*(*data_52ffd0 + (eax_48 << 2)))
                    float var_50
                    
                    if (j_1 s> 0)
                        int32_t var_44_1 = 1
                        int32_t j
                        
                        do
                            bool o_6 = unimplemented  {imul eax, esi, 0x41}
                            
                            if (o_6)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_52 =
                                sx.d(*(*data_52ffd0 + esi_1 * 0x104 + (var_44_1 << 2) - 0x102))
                            
                            if (eax_52 s> 0)
                                bool o_7 = unimplemented  {imul ecx, eax, 0x35}
                                
                                if (o_7)
                                    sub_403010()
                                    noreturn
                                
                                if (*(data_5301b0 + eax_52 * 0xd4 + 0x60f64) != 0)
                                    bool o_8 = unimplemented  {imul ecx, eax, 0x35}
                                    
                                    if (o_8)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t edi_5 = *(*data_5301f4 + 0x10020)
                                    
                                    if (neg.d(edi_5) == 0x80000000)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(data_5301b0 + eax_52 * 0xd4 + 0x60fac) == neg.d(edi_5))
                                        var_45_1 = 1
                                        var_4c_1 = fconvert.s(fconvert.t(var_4c_1) + fconvert.t(1f))
                                        int32_t ecx_6 = sx.d(*ebx_1)
                                        
                                        if (add_overflow(ecx_6, 1))
                                            sub_403010()
                                            noreturn
                                        
                                        *ebx_1 = ecx_6.w + 1
                                        bool o_11 = unimplemented  {imul eax, eax, 0x35}
                                        
                                        if (o_11)
                                            sub_403010()
                                            noreturn
                                        
                                        var_50 = *(data_5301b0 + eax_52 * 0xd4 + 0x60f68)
                            
                            var_44_1 += 1
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    if (var_45_1 != 0)
                        bool o_12 = unimplemented  {imul eax, esi, 0x41}
                        
                        if (o_12)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_55
                        eax_55.w = *(arg3 + esi_1 * 0x104)
                        
                        if (eax_55.w s< 7)
                        label_51c408:
                            var_45_1 = 0
                            bool o_15 = unimplemented  {imul edx, esi, 0x41}
                            
                            if (o_15)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_56 = sx.d(eax_55.w)
                            int32_t edx_19 = sx.d(*ebx_1)
                            
                            if (add_overflow(eax_56, neg.d(edx_19)))
                                sub_403010()
                                noreturn
                            
                            if (eax_56 - edx_19 s>= 7)
                                *(*data_52ffd0 + esi_1 + 0x498c) = 1
                            else
                                var_40_1 = fconvert.s(fconvert.t(var_4c_1) * fconvert.t(var_50)
                                    + fconvert.t(var_40_1))
                        else
                            bool o_13 = unimplemented  {imul edx, esi, 0x41}
                            
                            if (o_13)
                                sub_403010()
                                noreturn
                            
                            int32_t edx_16 = sx.d(eax_55.w)
                            int32_t ecx_9 = sx.d(*ebx_1)
                            
                            if (add_overflow(edx_16, neg.d(ecx_9)))
                                sub_403010()
                                noreturn
                            
                            if (edx_16 - ecx_9 s>= 7)
                                goto label_51c408
                    
                    int32_t eax_60 = esi_1 * 0x41
                    bool o_17 = unimplemented  {imul eax, esi, 0x41}
                    
                    if (o_17)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_52ffd0 + (eax_60 << 2)) s< 7 || var_45_1 != 0)
                        int32_t eax_63 = esi_1 * 0x41
                        bool o_19 = unimplemented  {imul eax, esi, 0x41}
                        
                        if (o_19)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_52ffd0 + (eax_63 << 2)) s>= 7 && var_45_1 != 0)
                            int32_t eax_64 = sx.d(*(arg3 + (eax_63 << 2)))
                            int32_t edx_26 = sx.d(*ebx_1)
                            
                            if (add_overflow(eax_64, neg.d(edx_26)))
                                sub_403010()
                                noreturn
                            
                            if (eax_64 - edx_26 s< 7)
                                bool o_21 = unimplemented  {imul eax, esi, 0x41}
                                
                                if (o_21)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_67 = sx.d(*(*data_52ffd0 + esi_1 * 0x104))
                                
                                if (add_overflow(eax_67, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                int32_t edx_29 = sx.d(*ebx_1)
                                
                                if (add_overflow(eax_67 - 1, neg.d(edx_29)))
                                    sub_403010()
                                    noreturn
                                
                                var_40_1 = fconvert.s(fconvert.t(var_40_1) + fconvert.t(var_4c_1)
                                    + (fconvert.t(1f) - fconvert.t(var_50))
                                    * float.t(eax_67 - 1 - edx_29))
                    else
                        int32_t eax_61 = sx.d(*(arg3 + (eax_60 << 2)))
                        
                        if (add_overflow(eax_61, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        var_40_1 = fconvert.s(float.t(eax_61 - 1) + fconvert.t(var_40_1))
                    
                    if (*(*data_52ffd0 + 0x3d00) != 0 && esi_1 == *(*data_52ffd0 + 0x3d14))
                        if (sub_51b7b4(*data_52ffd0).b == 0)
                            if (sub_51b788(*data_52ffd0) == 0)
                                bool o_29 = unimplemented  {imul eax, esi, 0x41}
                                
                                if (o_29)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*data_52ffd0 + esi_1 * 0x104) s>= 7)
                                    if (arg5 == 0)
                                        var_40_1 = fconvert.s(fconvert.t(var_40_1)
                                            + fconvert.t(*(*data_52ffd0 + 0x3d0c)))
                                    
                                    if (arg5 == 2)
                                        var_40_1 = fconvert.s(fconvert.t(var_40_1) + fconvert.t(1f))
                            else
                                var_40_1 = fconvert.s(
                                    float.t(*(arg3 + 0x490a)) * fconvert.t(*(*data_52ffd0 + 0x3d0c))
                                    + fconvert.t(var_40_1))
                        else
                            if (arg5 == 0)
                                int32_t eax_75 = sx.d(*(arg3 + 0x45f0))
                                int32_t edx_31 = sx.d(*(arg3 + 0x490a))
                                int32_t eax_76 = eax_75 + edx_31
                                
                                if (add_overflow(eax_75, edx_31))
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_76, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                var_40_1 = fconvert.s(
                                    float.t(eax_76 - 1) * fconvert.t(*(*data_52ffd0 + 0x3d0c))
                                    + fconvert.t(var_40_1))
                            
                            if (arg5 == 2)
                                int32_t eax_80 = sx.d(*(arg3 + 0x45f0))
                                int32_t edx_33 = sx.d(*(arg3 + 0x490a))
                                int32_t eax_81 = eax_80 + edx_33
                                
                                if (add_overflow(eax_80, edx_33))
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_81, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                bool o_28 = unimplemented  {imul eax, eax, 0x1}
                                
                                if (o_28)
                                    sub_403010()
                                    noreturn
                                
                                var_40_1 = fconvert.s(float.t(eax_81 - 1) + fconvert.t(var_40_1))
                
                var_34_1 = fconvert.s(
                    (float.t(var_28_1) - fconvert.t(var_40_1)) * fconvert.t(var_14) * data_51c72c
                    + float.t(edx_8 + 1) * fconvert.t(var_14) * data_51c738)
                long double x87_r7_52 = fconvert.t(var_34_1)
                long double temp8_1 = fconvert.t(var_38)
                x87_r7_52 - temp8_1
                eax_48.w = (x87_r7_52 < temp8_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_52, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_52 == temp8_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_48:1.b, 0)))
                    var_24 = esi_1
                    int32_t temp10_1 = var_20
                    var_20 += 1
                    
                    if (not(add_overflow(temp10_1, 1)))
                        break
                    
                    sub_403010()
                    noreturn
                
                esi_1 += 1
                ebx_1 += 4
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        long double x87_r7_53 = fconvert.t(var_34_1)
        long double temp2_1 = fconvert.t(var_38)
        x87_r7_53 - temp2_1
        eax_48.w = (x87_r7_53 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_53, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_53 == temp2_1 ? 1 : 0) << 0xe
    while (not(test_bit(eax_48:1.b, 0)))
    float* result = arg4
    *result = fconvert.s(fconvert.t(*arg4) + fconvert.t(var_30_1))
    return result
}
