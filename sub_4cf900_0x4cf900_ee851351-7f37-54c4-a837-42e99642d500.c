// ============================================================
// 函数名称: sub_4cf900
// 虚拟地址: 0x4cf900
// WARP GUID: ee851351-7f37-54c4-a837-42e99642d500
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_4d3e30, sub_4c1e14, sub_51ad40, sub_4ce534, sub_420ad0, sub_402b3c, sub_4cb8e8, sub_4c1dd8, sub_4cf878, sub_420b38, sub_403010
// [被调用的父级函数]: sub_506f9c
// ============================================================

int32_t __convention("regparm")sub_4cf900(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_10 = 0
    uint32_t eax = GetTickCount()
    int32_t var_2c = 0
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(arg1 + 0x1668))
    int32_t var_2c_2 = sbb.d(0, edx, eax u< eax_2)
    int32_t var_30_2 = eax - eax_2
    int32_t var_34 = 0
    int32_t var_38 = 0x12c
    int32_t eax_4
    int32_t edx_2
    eax_4, edx_2 = sub_420ad0()
    int32_t var_18 = edx_2
    float var_c = fconvert.s(float.t(eax_4.q) / fconvert.t(6000f))
    uint32_t eax_5
    int32_t ecx
    eax_5, ecx = GetTickCount()
    *(arg1 + 0x1668) = eax_5
    
    if (*(*data_530304 + 0xcf9) != 0)
        var_c = 100f
    
    *(*data_5301f4 + 0x21118) =
        fconvert.s(fconvert.t(var_c) * fconvert.t(150f) + fconvert.t(*(*data_5301f4 + 0x21118)))
    long double x87_r7_5 = fconvert.t(*(*data_5301f4 + 0x21118))
    long double temp1 = fconvert.t(360f)
    x87_r7_5 - temp1
    void* eax_13
    eax_13.w = (x87_r7_5 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp1) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp1 ? 1 : 0) << 0xe
    
    if (not(test_bit(eax_13:1.b, 6)) && not(test_bit(eax_13:1.b, 0)))
        *(*data_5301f4 + 0x21118) = 0
    
    char var_5 = 1
    int32_t i_2 = *data_5300d0
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t ebx = 1
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul eax, ebx, 0x41}
            
            if (o_1)
                sub_403010()
                noreturn
            
            void* esi = *data_5301f4 + ebx * 0x208 + 0x1fea0
            
            if (*(esi + 0xe) != 0)
                if (sub_4c1e14() == 0)
                    *(esi + 0x1d4) = fconvert.s((float.t(*(data_530598 + 0x18)) * fconvert.t(2.5f)
                        + fconvert.t(6f)) * fconvert.t(var_c) + fconvert.t(*(esi + 0x1d4)))
                else
                    *(esi + 0x1d4) = fconvert.s(sub_4c1dd8(ecx) * fconvert.t(var_c)
                        * (float.t(*(data_530598 + 0x18)) * fconvert.t(2.5f) + fconvert.t(6f))
                        + fconvert.t(*(esi + 0x1d4)))
                
                long double x87_r7_15 = fconvert.t(*(esi + 0x1d4))
                long double temp5_1 = fconvert.t(1f)
                x87_r7_15 - temp5_1
                void* eax_19
                eax_19.w = (x87_r7_15 < temp5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_15, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == temp5_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_19:1.b, 0)))
                    *(esi + 0xe) = 0
            
            ebx += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t ebx_1 = 0xffffffff
    
    while (true)
        int32_t eax_54 = *(arg1 + 0x10)
        
        if (add_overflow(eax_54, 0xfffffffe))
            sub_403010()
            noreturn
        
        if (ebx_1 s> eax_54 - 2)
            int32_t result
            result.b = 1
            return result
        
        int32_t temp3_1 = ebx_1
        ebx_1 += 1
        
        if (add_overflow(temp3_1, 1))
            sub_403010()
            noreturn
        
        bool o_3 = unimplemented  {imul eax, ebx, 0x2}
        
        if (o_3)
            sub_403010()
            noreturn
        
        if (*(arg1 + ebx_1 * 0x10 + 0x1a) != 6)
            int32_t var_2c_3 = 0x3ffe
            int32_t var_30_3 = 0xc7ae147a
            int32_t var_34_1 = 0xe147ae14
            long double st0_3 = sub_420b38(
                sub_402b3c(data_4cfe78 * fconvert.t(*(arg1 + ebx_1 * 0x10 + 0x20))) + data_4cfe84
                    + (fconvert.t(1f) - fconvert.t(*(arg1 + ebx_1 * 0x10 + 0x20))) * data_4cfe90, 
                -2.30215358e+20f)
            *(arg1 + ebx_1 * 0x10 + 0x20) = fconvert.s(
                st0_3 * fconvert.t(var_c) * fconvert.t(*(arg1 + ebx_1 * 0x10 + 0x1c))
                + fconvert.t(*(arg1 + ebx_1 * 0x10 + 0x20)))
        else
            *(arg1 + ebx_1 * 0x10 + 0x20) = fconvert.s(
                fconvert.t(var_c) * fconvert.t(*(arg1 + ebx_1 * 0x10 + 0x1c)) * fconvert.t(0.5f)
                + fconvert.t(*(arg1 + ebx_1 * 0x10 + 0x20)))
        
        bool o_4 = unimplemented  {imul eax, ebx, 0x2}
        
        if (o_4)
            sub_403010()
            noreturn
        
        long double x87_r7_28 = fconvert.t(*(arg1 + ebx_1 * 0x10 + 0x20))
        long double temp6_1 = fconvert.t(1f)
        x87_r7_28 - temp6_1
        int32_t eax_21
        eax_21.w = (x87_r7_28 < temp6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_28, temp6_1) ? 1 : 0) << 0xa
            | (x87_r7_28 == temp6_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_21:1.b, 0)))
            bool o_5 = unimplemented  {imul eax, ebx, 0x2}
            
            if (o_5)
                sub_403010()
                noreturn
            
            int32_t eax_22
            eax_22.b = *(arg1 + ebx_1 * 0x10 + 0x1a)
            eax_22.b -= 2
            char temp7_1 = eax_22.b
            eax_22.b -= 3
            
            if (temp7_1 u>= 3)
                bool o_18 = unimplemented  {imul eax, ebx, 0x2}
                
                if (o_18)
                    sub_403010()
                    noreturn
                
                int32_t eax_34
                eax_34.b = *(arg1 + ebx_1 * 0x10 + 0x1a)
                char temp8_1 = eax_34.b
                eax_34.b -= 1
                
                if (temp8_1 != 1)
                    eax_34.b -= 4
                    char temp9_1 = eax_34.b
                    eax_34.b -= 2
                    
                    if (temp9_1 u>= 2)
                        continue
                
                bool o_19 = unimplemented  {imul eax, ebx, 0x2}
                
                if (o_19)
                    sub_403010()
                    noreturn
                
                int32_t eax_35
                eax_35.b = *(arg1 + ebx_1 * 0x10 + 0x18)
                
                if (eax_35.b == 6)
                    int32_t edx_13
                    edx_13.b = eax_35.b
                    bool o_20 = unimplemented  {imul edx, edx, 0xd4f}
                    
                    if (o_20)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_1
                    ecx_1.b = *(arg1 + ebx_1 * 0x10 + 0x14)
                    bool o_21 = unimplemented  {imul ecx, ecx, 0x2e9c}
                    
                    if (o_21)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_16
                    edx_16.b = *(arg1 + ebx_1 * 0x10 + 0x16)
                    bool o_22 = unimplemented  {imul edx, edx, 0xa}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_18
                    edx_18.b = *(arg1 + ebx_1 * 0x10 + 0x19)
                    bool o_23 = unimplemented  {imul edx, edx, 0xd4f}
                    
                    if (o_23)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_5
                    ecx_5.b = *(arg1 + ebx_1 * 0x10 + 0x15)
                    bool o_24 = unimplemented  {imul ecx, ecx, 0x2e9c}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_21
                    edx_21.b = *(arg1 + ebx_1 * 0x10 + 0x17)
                    bool o_25 = unimplemented  {imul edx, edx, 0xa}
                    
                    if (o_25)
                        sub_403010()
                        noreturn
                    
                    *(ecx_5 * 0x174e0 + &data_532f70 + edx_18 * 0x353c + edx_21 * 0x50 - 0x174d8) = (
                        *(ecx_1 * 0x174e0 + &data_532f70 + edx_13 * 0x353c + edx_16 * 0x50 - 0x174d8)).w
                
                bool o_26 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_26)
                    sub_403010()
                    noreturn
                
                int32_t edx_24
                edx_24.b = *(arg1 + ebx_1 * 0x10 + 0x14)
                bool o_27 = unimplemented  {imul edx, edx, 0x2e9c}
                
                if (o_27)
                    sub_403010()
                    noreturn
                
                int32_t edx_27
                edx_27.b = *(arg1 + ebx_1 * 0x10 + 0x16)
                bool o_28 = unimplemented  {imul edx, edx, 0xa}
                
                if (o_28)
                    sub_403010()
                    noreturn
                
                *(edx_24 * 0x174e0 +
                    &data_532f70 + (eax_35 & 0x7f) * 0x353c + edx_27 * 0x50 - 0x174c8) = 2
                int32_t eax_39
                eax_39.b = *(arg1 + ebx_1 * 0x10 + 0x14)
                int32_t eax_40 = eax_39 * 0x2e9c
                bool o_29 = unimplemented  {imul eax, eax, 0x2e9c}
                
                if (o_29)
                    sub_403010()
                    noreturn
                
                int32_t temp20_1 = (&data_532f6c)[eax_40 * 2]
                (&data_532f6c)[eax_40 * 2] += 1
                
                if (add_overflow(temp20_1, 1))
                    sub_403010()
                    noreturn
                
                void* eax_41
                eax_41.b = *(arg1 + ebx_1 * 0x10 + 0x17)
                int32_t edx_28
                edx_28.b = *(arg1 + ebx_1 * 0x10 + 0x19)
                void* eax_42
                eax_42.b = *(arg1 + ebx_1 * 0x10 + 0x15)
                sub_4d3e30(1, edx_28.b, eax_42, eax_41)
                int32_t edx_29
                edx_29.b = *(arg1 + ebx_1 * 0x10 + 0x19)
                int32_t edx_30 = edx_29 * 0xd4f
                bool o_31 = unimplemented  {imul edx, edx, 0xd4f}
                
                if (o_31)
                    sub_403010()
                    noreturn
                
                int32_t eax_43
                eax_43.b = *(arg1 + ebx_1 * 0x10 + 0x15)
                int32_t eax_44 = eax_43 * 0x2e9c
                bool o_32 = unimplemented  {imul eax, eax, 0x2e9c}
                
                if (o_32)
                    sub_403010()
                    noreturn
                
                int32_t temp26_1 = *((eax_44 << 3) + &data_532f70 + (edx_30 << 2) - 0x1400c)
                *((eax_44 << 3) + &data_532f70 + (edx_30 << 2) - 0x1400c) -= 1
                
                if (add_overflow(temp26_1, 0xffffffff))
                    sub_403010()
                    noreturn
                
                int32_t edx_31
                edx_31.b = *(arg1 + ebx_1 * 0x10 + 0x19)
                bool o_34 = unimplemented  {imul edx, edx, 0xd4f}
                
                if (o_34)
                    sub_403010()
                    noreturn
                
                if (*((eax_44 << 3) + &data_532f70 + edx_31 * 0x353c - 0x1400c) == 0)
                    bool o_35 = unimplemented  {imul eax, ebx, 0x2}
                    
                    if (o_35)
                        sub_403010()
                        noreturn
                    
                    if (*(arg1 + ebx_1 * 0x10 + 0x1a) != 6)
                        if (sub_4cb8e8() == 0 || *(arg1 + ebx_1 * 0x10 + 0x19) == 6)
                            if (var_10 s<= 1)
                                int32_t var_2c_8 = 1
                                int32_t ecx_12
                                ecx_12.b = *(arg1 + ebx_1 * 0x10 + 0x15)
                                sub_51ad40(*data_5303b8, 0x14)
                            
                            int32_t temp29_1 = var_10
                            var_10 += 1
                            
                            if (add_overflow(temp29_1, 1))
                                sub_403010()
                                noreturn
                        else
                            if (var_10 s<= 1)
                                int32_t var_2c_7 = 1
                                int32_t ecx_11
                                ecx_11.b = *(arg1 + ebx_1 * 0x10 + 0x15)
                                sub_51ad40(*data_5303b8, 0x1e)
                            
                            int32_t temp30_1 = var_10
                            var_10 += 1
                            
                            if (add_overflow(temp30_1, 1))
                                sub_403010()
                                noreturn
                
                sub_4cf878(arg1, ebx_1)
                int32_t temp28_1 = ebx_1
                ebx_1 -= 1
                
                if (add_overflow(temp28_1, 0xffffffff))
                    break
                
                sub_4ce534(arg1, nullptr, 1)
            else
                bool o_6 = unimplemented  {imul eax, ebx, 0x2}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                if (*(arg1 + ebx_1 * 0x10 + 0x1a) != 2)
                    bool o_9 = unimplemented  {imul eax, ebx, 0x2}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    if (*(arg1 + ebx_1 * 0x10 + 0x1a) != 4)
                        bool o_16 = unimplemented  {imul eax, ebx, 0x2}
                        
                        if (o_16)
                            sub_403010()
                            noreturn
                        
                        if (*(arg1 + ebx_1 * 0x10 + 0x1a) == 3)
                            bool o_17 = unimplemented  {imul eax, ebx, 0x2}
                            
                            if (o_17)
                                sub_403010()
                                noreturn
                            
                            *(arg1 + ebx_1 * 0x10 + 0x20) = 0
                    else
                        bool o_10 = unimplemented  {imul eax, ebx, 0x2}
                        
                        if (o_10)
                            sub_403010()
                            noreturn
                        
                        bool o_11 = unimplemented  {imul eax, eax, 0xd4f}
                        
                        if (o_11)
                            sub_403010()
                            noreturn
                        
                        bool o_12 = unimplemented  {imul edx, ebx, 0x2}
                        
                        if (o_12)
                            sub_403010()
                            noreturn
                        
                        bool o_13 = unimplemented  {imul edx, edx, 0x2e9c}
                        
                        if (o_13)
                            sub_403010()
                            noreturn
                        
                        bool o_14 = unimplemented  {imul edx, ebx, 0x2}
                        
                        if (o_14)
                            sub_403010()
                            noreturn
                        
                        bool o_15 = unimplemented  {imul edx, edx, 0xa}
                        
                        if (o_15)
                            sub_403010()
                            noreturn
                        
                        *(zx.d(*(arg1 + ebx_1 * 0x10 + 0x14)) * 0x174e0 + &data_532f70
                            + zx.d(*(arg1 + ebx_1 * 0x10 + 0x18)) * 0x353c
                            + zx.d(*(arg1 + ebx_1 * 0x10 + 0x16)) * 0x50 - 0x174c8) = 1
                        sub_4cf878(arg1, ebx_1)
                else
                    bool o_7 = unimplemented  {imul eax, ebx, 0x2}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    *(arg1 + ebx_1 * 0x10 + 0x1a) = 3
                    bool o_8 = unimplemented  {imul eax, ebx, 0x2}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    *(arg1 + ebx_1 * 0x10 + 0x20) = 0
    
    sub_403010()
    noreturn
}
