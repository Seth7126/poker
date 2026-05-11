// ============================================================
// 函数名称: sub_4ff3d8
// 虚拟地址: 0x4ff3d8
// WARP GUID: b50b092a-27d8-5cdf-b914-1204dd14e5da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ee6b0, sub_4ff360, sub_4f0c7c, sub_4f0e00, sub_4f0d94, sub_403010
// [被调用的父级函数]: sub_50003c
// ============================================================

voidsub_4ff3d8(void* arg1)
{
    // 第一条实际指令: void* edi = data_53014c
    void* edi = data_53014c
    
    if (*edi s<= 0)
        return 
    
    int32_t var_f8_1 = 0x3dcccccd
    int32_t var_fc_1 = 0
    float var_100 = 0f
    (*data_5301d4)(var_100, var_fc_1, var_f8_1)
    sub_4ff360()
    *(arg1 - 0x34) = fconvert.s(fconvert.t(*(data_53044c + 0x60)))
    *(arg1 - 0x38) = fconvert.s(fconvert.t(*(data_53044c + 0x68)))
    *(arg1 - 0x3c) = fconvert.s(fconvert.t(*(data_53044c + 0x70)))
    long double x87_r7_7 =
        (fconvert.t(10f) - fconvert.t(*(arg1 - 0x34))) * (fconvert.t(10f) - fconvert.t(*(arg1 - 0x34)))
        + (fconvert.t(10f) - fconvert.t(*(arg1 - 0x38)))
        * (fconvert.t(10f) - fconvert.t(*(arg1 - 0x38)))
    *(arg1 - 0x40) = fconvert.s(x87_r7_7 + (fconvert.t(20f) - fconvert.t(*(arg1 - 0x3c)))
        * (fconvert.t(20f) - fconvert.t(*(arg1 - 0x3c))))
    int32_t var_f8_2 = 0xbdcccccd
    int32_t var_fc_2 = 0
    var_100 = 0f
    (*data_5301d4)(var_100, var_fc_2, var_f8_2)
    sub_4ff360()
    *(arg1 - 0x34) = fconvert.s(fconvert.t(*(data_53044c + 0x60)))
    *(arg1 - 0x38) = fconvert.s(fconvert.t(*(data_53044c + 0x68)))
    *(arg1 - 0x3c) = fconvert.s(fconvert.t(*(data_53044c + 0x70)))
    long double x87_r7_15 =
        (fconvert.t(10f) - fconvert.t(*(arg1 - 0x34))) * (fconvert.t(10f) - fconvert.t(*(arg1 - 0x34)))
        + (fconvert.t(10f) - fconvert.t(*(arg1 - 0x38)))
        * (fconvert.t(10f) - fconvert.t(*(arg1 - 0x38)))
    *(arg1 - 0x44) = fconvert.s(x87_r7_15 + (fconvert.t(20f) - fconvert.t(*(arg1 - 0x3c)))
        * (fconvert.t(20f) - fconvert.t(*(arg1 - 0x3c))))
    *(arg1 - 0x45) = 0
    long double x87_r7_17 = fconvert.t(*(arg1 - 0x40))
    long double temp0_1 = fconvert.t(*(arg1 - 0x44))
    x87_r7_17 - temp0_1
    void* eax_33
    eax_33.w = (x87_r7_17 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_17, temp0_1) ? 1 : 0) << 0xa
        | (x87_r7_17 == temp0_1 ? 1 : 0) << 0xe
    
    if (test_bit(eax_33:1.b, 0))
        *(arg1 - 0x45) = 1
    
    if (*(arg1 - 0x45) != 0)
        if (*data_530954 == 1)
            (*data_530604)(0x404)
        
        if (*data_530954 == 0)
            (*data_530604)(0x405)
    
    void* eax_42 = data_53044c
    int32_t edx_1 = *(eax_42 + 0x60)
    int32_t var_38_1 = *(eax_42 + 0x64)
    void* eax_43 = data_53044c
    int32_t edx_3 = *(eax_43 + 0x68)
    int32_t var_40_1 = *(eax_43 + 0x6c)
    void* eax_44 = data_53044c
    int32_t edx_5 = *(eax_44 + 0x70)
    int32_t var_48_1 = *(eax_44 + 0x74)
    
    if (*(arg1 - 0x45) == 0 || *data_530364 != 2)
        if (*data_530954 == 1)
            (*data_530604)(0x405)
        
        if (*data_530954 == 0)
            (*data_530604)(0x404)
    
    (*data_53006c)(0xde1)
    int32_t var_f8_8 = 0x3f800000
    int32_t var_fc_3 = 0x3f800000
    var_100 = 1f
    (*data_530518)(0x3f800000, var_100, var_fc_3, var_f8_8)
    (*data_53006c)(0xbe2)
    (*data_52ffd4)(8)
    int32_t var_50_1
    
    if (*(*data_530304 + 0xdfa) == 0)
        var_50_1 = 0
    else if (sub_4ee6b0(*(arg1 + 0x10)) == 0 || *(arg1 + 0xc) s<= 1 || *data_530740 != 8)
        var_50_1 = 0
    else
        *(arg1 + 0x10)
        bool o_1 = unimplemented  {imul eax, dword [eax+0x10], 0x2345}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(arg1 + 0xc)
        bool o_2 = unimplemented  {imul edx, dword [edx+0xc], 0x35}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (*(data_5301b0 + *(arg1 + 0x10) * 0x8d14 + *(arg1 + 0xc) * 0xd4 - 0x8d8c) != 0)
            var_50_1 = 0
        else
            int32_t eax_72 = *data_530740
            
            if (add_overflow(eax_72, 2))
                sub_403010()
                noreturn
            
            var_50_1 = eax_72 + 2
    
    int32_t esi_1 = 0
    
    while (true)
        int32_t eax_117 = *edi
        void* ecx_6 = data_52ff2c
        int32_t edx_37 = eax_117 + *ecx_6
        
        if (add_overflow(eax_117, *ecx_6))
            sub_403010()
            noreturn
        
        if (add_overflow(edx_37, 1))
            sub_403010()
            noreturn
        
        if (add_overflow(edx_37 + 1, var_50_1))
            sub_403010()
            noreturn
        
        if (esi_1 s>= edx_37 + 1 + var_50_1)
            (*data_530a08)()
            (*data_53006c)(0xbe2)
            sub_4f0c7c(0xb44)
            break
        
        int32_t temp8_1 = esi_1
        esi_1 += 1
        
        if (add_overflow(temp8_1, 1))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_117, 1))
            sub_403010()
            noreturn
        
        data_52ff2c
        float var_10_1
        float var_c_1
        float var_8_1
        
        if (edx_37 + 1 s>= esi_1)
            int32_t edx_16 = *edi
            void* ecx_3 = data_52ff2c
            int32_t edx_17 = edx_16 + *ecx_3
            
            if (add_overflow(edx_16, *ecx_3))
                sub_403010()
                noreturn
            
            if (add_overflow(edx_17, 1))
                sub_403010()
                noreturn
            
            if (esi_1 == edx_17 + 1)
                bool o_15 = unimplemented  {imul eax, ebx, 0x3}
                
                if (o_15)
                    sub_403010()
                    noreturn
                
                var_8_1 = *(edi + 4)
                var_c_1 = *(edi + 8)
                var_10_1 = *(edi + 0xc)
            else if (eax_117 s< esi_1)
                int32_t edx_24 = esi_1 - eax_117
                
                if (add_overflow(esi_1, neg.d(eax_117)))
                    sub_403010()
                    noreturn
                
                int32_t ebx_7 = *data_52ff2c
                
                if (add_overflow(ebx_7, 1))
                    sub_403010()
                    noreturn
                
                if (add_overflow(ebx_7 + 1, neg.d(edx_24)))
                    sub_403010()
                    noreturn
                
                int32_t eax_96 = (ebx_7 + 1 - edx_24) * 3
                bool o_20 = unimplemented  {imul eax, ebx, 0x3}
                
                if (o_20)
                    sub_403010()
                    noreturn
                
                var_8_1 = *(data_52ff2c + (eax_96 << 2) - 8)
                var_c_1 = *(data_52ff2c + (eax_96 << 2) - 4)
                var_10_1 = *(data_52ff2c + (eax_96 << 2))
            else
                int32_t eax_95 = esi_1 * 3
                bool o_16 = unimplemented  {imul eax, ebx, 0x3}
                
                if (o_16)
                    sub_403010()
                    noreturn
                
                var_8_1 = *(edi + (eax_95 << 2) - 8)
                var_c_1 = *(edi + (eax_95 << 2) - 4)
                var_10_1 = *(edi + (eax_95 << 2))
        else
            int32_t ebx_2 = esi_1 - eax_117
            
            if (add_overflow(esi_1, neg.d(eax_117)))
                sub_403010()
                noreturn
            
            void* eax_74 = data_52ff2c
            int32_t ebx_3 = ebx_2 - *eax_74
            
            if (add_overflow(ebx_2, neg.d(*eax_74)))
                sub_403010()
                noreturn
            
            int32_t ebx_4 = ebx_3 - 1
            
            if (add_overflow(ebx_3, 0xffffffff))
                sub_403010()
                noreturn
            
            if (ebx_4 == 1 || ebx_4 == 6)
                (*data_530a08)()
                (*data_52ffd4)(8)
            
            if (ebx_4 - 3 u< 2 || ebx_4 - 8 u< 2)
                *(arg1 + 0x10)
                bool o_9 = unimplemented  {imul eax, dword [eax+0x10], 0x2345}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                *(arg1 + 0xc)
                bool o_10 = unimplemented  {imul edx, dword [edx+0xc], 0x35}
                
                if (o_10)
                    sub_403010()
                    noreturn
                
                var_10_1 = fconvert.s(
                    fconvert.t(*(data_5301b0 + *(arg1 + 0x10) * 0x8d14 + *(arg1 + 0xc) * 0xd4 - 0x8ddc))
                    / fconvert.t(502f))
            else
                var_10_1 = 0f
            
            if (ebx_4 == 3)
                ebx_4 = 2
            else if (ebx_4 == 4)
                ebx_4 = 1
            else if (ebx_4 == 5)
                ebx_4 = 1
            else if (ebx_4 - 6 u< 2)
                int32_t temp29_1 = ebx_4
                ebx_4 -= 3
                
                if (add_overflow(temp29_1, 0xfffffffd))
                    sub_403010()
                    noreturn
            else if (ebx_4 == 8)
                ebx_4 = 4
            else if (ebx_4 == 9)
                ebx_4 = 3
            else if (ebx_4 == 0xa)
                ebx_4 = 3
            
            int32_t eax_93 = ebx_4 * 3
            bool o_12 = unimplemented  {imul eax, ebx, 0x3}
            
            if (o_12)
                sub_403010()
                noreturn
            
            var_8_1 = *(data_530740 + (eax_93 << 2) - 8)
            var_c_1 = *(data_530740 + (eax_93 << 2) - 4)
        
        long double x87_r7_20 = fconvert.t(var_8_1)
        long double temp22_1 = fconvert.t(-10f)
        x87_r7_20 - temp22_1
        float eax_94
        eax_94.w = (x87_r7_20 < temp22_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_20, temp22_1) ? 1 : 0) << 0xa
            | (x87_r7_20 == temp22_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_94:1.b, 6)))
            if (sub_4ee6b0(*(arg1 + 0x10)) != 0 && *(*data_530304 + 0xdfa) != 0)
                var_c_1 = fconvert.s(data_4ffb14 * fconvert.t(var_c_1))
            
            float var_f8_12 = fconvert.s(fconvert.t(edx_1.q))
            float var_fc_4 = fconvert.s(fconvert.t(edx_3.q))
            var_100 = fconvert.s(fconvert.t(edx_5.q))
            void var_d0
            sub_4f0e00(data_53044c, &var_d0)
            int32_t ecx_4 = __builtin_memcpy(data_52ff58, &var_d0, 0x80)
            float var_2c_1 = fconvert.s(fneg(fconvert.t(edx_1.q)) + fconvert.t(40f))
            float var_30_1 = fconvert.s(fneg(fconvert.t(edx_3.q)) + fconvert.t(50f))
            float var_34_1 = fconvert.s(fneg(fconvert.t(edx_5.q)) + fconvert.t(50f))
            var_100 = var_34_1
            double var_e8[0x3]
            sub_4f0d94(ecx_4, &var_e8, data_52ff58, var_100, var_30_1, var_2c_1)
            int32_t ecx_5 = __builtin_memcpy(&data_7a7d6c, &var_e8, 0x18)
            float var_2c_2 = fconvert.s(fneg(fconvert.t(var_2c_1)) * fconvert.t(10f))
            float var_30_2 = fconvert.s(fneg(fconvert.t(var_30_1)) * fconvert.t(10f))
            var_100 = fconvert.s(fneg(fconvert.t(var_34_1)) * fconvert.t(10f))
            sub_4f0d94(ecx_5, &var_e8, data_52ff58, var_100, var_30_2, var_2c_2)
            __builtin_memcpy(&data_7a7d6c, &var_e8, 0x18)
            float var_20_1 = fconvert.s(fconvert.t(var_8_1) * fconvert.t(11f) + fconvert.t(data_7a7d6c))
            float var_24_1 = fconvert.s(fconvert.t(var_c_1) * fconvert.t(11f) + fconvert.t(data_7a7d74))
            float var_28_1 =
                fconvert.s(fconvert.t(var_10_1) * fconvert.t(11f) + fconvert.t(data_7a7d7c))
            
            if (sub_4ee6b0(*(arg1 + 0x10)) != 0 && *(arg1 + 0xc) s<= 1)
                *(arg1 + 0x10)
                bool o_21 = unimplemented  {imul eax, dword [eax+0x10], 0x2345}
                
                if (o_21)
                    sub_403010()
                    noreturn
                
                *(arg1 + 0xc)
                bool o_22 = unimplemented  {imul edx, dword [edx+0xc], 0x35}
                
                if (o_22)
                    sub_403010()
                    noreturn
                
                if (*(data_5301b0 + *(arg1 + 0x10) * 0x8d14 + *(arg1 + 0xc) * 0xd4 - 0x8d8c) == 0)
                    continue
            
            var_100 = var_8_1
            (*data_530368)(var_100, var_c_1, var_10_1)
            var_100 = var_20_1
            (*data_530368)(var_100, var_24_1, var_28_1)
}
