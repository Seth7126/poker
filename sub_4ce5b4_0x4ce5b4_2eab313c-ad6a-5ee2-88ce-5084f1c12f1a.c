// ============================================================
// 函数名称: sub_4ce5b4
// 虚拟地址: 0x4ce5b4
// WARP GUID: 2eab313c-ad6a-5ee2-88ce-5084f1c12f1a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4d5ba0, sub_4ceed4, sub_4d5bdc, sub_4746a0, sub_408e1c, sub_4cc200, sub_403010, sub_4d5b64, sub_4ce88a, sub_403df8, sub_403e1c, sub_4d5b1c
// [被调用的父级函数]: sub_527454, sub_507e90, sub_507d3f
// ============================================================

int32_t* __convention("regparm")sub_4ce5b4(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1e4 = ebx
    int32_t esi
    int32_t var_1e8 = esi
    int32_t edi
    int32_t var_1ec = edi
    int32_t var_1e0
    __builtin_memset(&var_1e0, 0, 0x20)
    int32_t var_c0 = 0
    int32_t* var_1f0 = &var_4
    int32_t (* var_1f4)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* const eax
    
    if (*(arg1 + 0x10) s<= 0 || *(*data_5301f4 + 4) != 7 || *(arg1 + 0xc) != 0)
        eax.b = 1
    else
        eax = nullptr
    
    char var_5 = eax.b
    char eax_2 = 0
    
    if (var_5 != 0)
        int32_t i = 1
        void* edx_1 = &data_54a44c
        
        do
            if ((i s>= 9 || i s<= *data_5300d0) && *edx_1 s> 0)
                var_5 = 0
                eax_2 = 1
                break
            
            i += 1
            edx_1 += 0x174e0
        while (i != 0xb)
    
    if (eax_2 == 0)
        if (*(arg1 + 0xc) == 0 && (var_5 != 0 || *(*data_5301f4 + 0xffec) == 2)
                && *(*data_5301f4 + 4) == 7 && *(arg1 + 0x1660) s> 0 && *(arg1 + 0x10) s< 0x50)
            char var_5_1 = 0
            
            while (true)
                *(arg1 + 0x1660)
                int32_t eax_7 = *(arg1 + 0x1660) * 5
                bool o_1 = unimplemented  {imul eax, dword [edi+0x1660], 0x5}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                int32_t edx_2 = *(arg1 + (eax_7 << 1) + 0x83a)
                int32_t var_c_1 = *(arg1 + (eax_7 << 1) + 0x83e)
                int32_t edx_3
                edx_3.w = *(arg1 + (eax_7 << 1) + 0x842)
                int16_t var_8_1 = edx_3.w
                int32_t temp3_1 = *(arg1 + 0x1660)
                *(arg1 + 0x1660) -= 1
                
                if (add_overflow(temp3_1, 0xffffffff))
                    sub_403010()
                    noreturn
                
                char var_1c0[0x100]
                
                if (var_8_1:1.b != 0)
                    int32_t eax_11 = (sub_4d5bdc(sx.d(var_c_1.w)) & 0x7f) * 0xd4f
                    bool o_3 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    bool o_4 = unimplemented  {imul edx, edx, 0x2e9c}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    int32_t ebx_1 = *(sx.d(edx_2.w) * 0x174e0 + &data_532f70 + (eax_11 << 2) - 0x14010)
                    int32_t i_1 = ebx_1 - 1
                    
                    if (add_overflow(ebx_1, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    while (i_1 s>= 0)
                        if (i_1 s>= 0x3e8)
                            break
                        
                        int32_t eax_15 = (sub_4d5bdc(sx.d(var_c_1.w)) & 0x7f) * 0xd4f
                        bool o_7 = unimplemented  {imul eax, eax, 0xd4f}
                        
                        if (o_7)
                            sub_403010()
                            noreturn
                        
                        bool o_8 = unimplemented  {imul edx, edx, 0x2e9c}
                        
                        if (o_8)
                            sub_403010()
                            noreturn
                        
                        bool o_9 = unimplemented  {imul edx, ebx, 0xa}
                        
                        if (o_9)
                            sub_403010()
                            noreturn
                        
                        if (*(sx.d(edx_2.w) * 0x174e0 +
                                &data_532f70 + (eax_15 << 2) + i_1 * 0x50 - 0x174c8) == 1)
                            break
                        
                        int32_t i_15 = i_1
                        i_1 -= 1
                        
                        if (add_overflow(i_15, 0xffffffff))
                            sub_403010()
                            noreturn
                    
                    if (i_1 s< 0 || i_1 s>= 0x3e8)
                        sub_408e1c(sub_4d5b1c(sub_4d5bdc(sx.d(var_c_1.w))), &var_c0)
                        *(esp_1 - 4) = var_c0
                        void* var_1c4
                        sub_408e1c(i_1, &var_1c4)
                        sub_404054(&var_1c0, var_1c4, 0xff)
                        *(esp_1 - 8) = &var_1c0
                        *(esp_1 - 0xc) = 0x4ceecc
                        int32_t var_1c8
                        sub_408e1c(sx.d(edx_2.w), &var_1c8)
                        sub_4746a0(var_1c8, 0x17, *data_530304)
                    
                    int32_t esi_1 = sx.d(var_c_1.w)
                    int32_t eax_29 = (sub_4d5bdc(esi_1) & 0x7f) * 0xd4f
                    bool o_10 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_10)
                        sub_403010()
                        noreturn
                    
                    bool o_11 = unimplemented  {imul edx, edx, 0x2e9c}
                    
                    if (o_11)
                        sub_403010()
                        noreturn
                    
                    bool o_12 = unimplemented  {imul edx, ebx, 0xa}
                    
                    if (o_12)
                        sub_403010()
                        noreturn
                    
                    *(esp_1 - 4) = esi_1
                    *(esp_1 - 8) = arg1
                    void var_6c
                    __builtin_memcpy(&var_6c, 
                        sx.d(edx_2.w) * 0x174e0 + &data_532f70 + (eax_29 << 2) + i_1 * 0x50 - 0x174e0, 
                        0x50)
                    int32_t edi_2 = *(esp_1 - 8)
                    *(esp_1 - 4) = *(esp_1 - 4)
                    *(esp_1 - 8) = edi_2
                    return sub_4ce88a(&var_4) __tailcall
                
                if (var_8_1.b == 0)
                    int32_t i_3 = sx.d(var_c_1.w)
                    int32_t ebx_2 = 0
                    
                    do
                        int32_t i_10 = 0xf
                        int32_t i_2
                        
                        do
                            if (i_3 s>= sub_4d5ba0(ebx_2.b))
                                *(esp_1 - 4) = sub_4d5ba0(ebx_2.b)
                                *(esp_1 - 8) = 1
                                *(esp_1 - 0xc) = 4
                                *(esp_1 - 0x10) = 1
                                esp_1 -= 0x10
                                sub_4ceed4(arg1, sx.d(edx_2.w), sx.d(edx_2:2.w))
                                int32_t eax_38 = sub_4d5ba0(ebx_2.b)
                                int32_t i_11 = i_3
                                i_3 -= eax_38
                                
                                if (add_overflow(i_11, neg.d(eax_38)))
                                    sub_403010()
                                    noreturn
                            
                            i_2 = i_10
                            i_10 -= 1
                        while (i_2 != 1)
                        ebx_2 += 1
                    while (ebx_2.b != 5)
                    
                    do
                        ebx = 0
                        
                        do
                            if (i_3 s>= sub_4d5ba0(ebx.b))
                                *(esp_1 - 4) = sub_4d5ba0(ebx.b)
                                *(esp_1 - 8) = 1
                                *(esp_1 - 0xc) = 4
                                *(esp_1 - 0x10) = 1
                                esp_1 -= 0x10
                                sub_4ceed4(arg1, sx.d(edx_2.w), sx.d(edx_2:2.w))
                                int32_t eax_45 = sub_4d5ba0(ebx.b)
                                int32_t i_14 = i_3
                                i_3 -= eax_45
                                
                                if (add_overflow(i_14, neg.d(eax_45)))
                                    sub_403010()
                                    noreturn
                            
                            ebx += 1
                        while (ebx.b != 5)
                    while (i_3 != 0)
                else if (var_8_1.b != 2)
                    int32_t i_4 = sx.d(var_c_1.w)
                    ebx.b = 4
                    
                    while (i_4 s> 0)
                        if (ebx.b == 5)
                            break
                        
                        if (i_4 s>= sub_4d5ba0(ebx.b) && sub_4cc200(sx.d(edx_2.w), ebx.b) s> 0)
                            *(esp_1 - 4) = sub_4d5ba0(ebx.b)
                            *(esp_1 - 8) = 1
                            *(esp_1 - 0xc) = 4
                            *(esp_1 - 0x10) = 1
                            esp_1 -= 0x10
                            sub_4ceed4(arg1, sx.d(edx_2.w), sx.d(edx_2:2.w))
                            int32_t eax_93 = sub_4d5ba0(ebx.b)
                            int32_t i_12 = i_4
                            i_4 -= eax_93
                            
                            if (not(add_overflow(i_12, neg.d(eax_93))))
                                continue
                            
                            sub_403010()
                            noreturn
                        
                        int32_t eax_95 = sub_4d5b1c(ebx.b)
                        
                        if (add_overflow(eax_95, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        ebx = sub_4d5b64(eax_95 - 1)
                    
                    if (ebx.b == 5)
                        int32_t var_1d8
                        sub_408e1c(sx.d(edx_2:2.w), &var_1d8)
                        *(esp_1 - 4) = var_1d8
                        void* var_1dc
                        sub_408e1c(sx.d(var_c_1.w), &var_1dc)
                        sub_404054(&var_1c0, var_1dc, 0xff)
                        *(esp_1 - 8) = &var_1c0
                        *(esp_1 - 0xc) = 0x4ceecc
                        sub_408e1c(sx.d(edx_2.w), &var_1e0)
                        sub_4746a0(var_1e0, 0x19, *data_530304)
                else
                    int32_t i_6 = sx.d(var_c_1.w)
                    ebx = 0
                    
                    do
                        if (i_6 s>= sub_4d5ba0(ebx.b) && sub_4cc200(sx.d(edx_2.w), ebx.b) s> 0)
                            int32_t i_18 =
                                divs.dp.d(sx.q(sub_4cc200(sx.d(edx_2.w), ebx.b)), sx.d(var_c_1:2.w))
                            
                            if (i_18 s> 0)
                                int32_t i_8 = i_18
                                int32_t i_5
                                
                                do
                                    if (i_6 s>= sub_4d5ba0(ebx.b))
                                        *(esp_1 - 4) = sub_4d5ba0(ebx.b)
                                        *(esp_1 - 8) = 1
                                        *(esp_1 - 0xc) = 4
                                        *(esp_1 - 0x10) = 1
                                        esp_1 -= 0x10
                                        sub_4ceed4(arg1, sx.d(edx_2.w), sx.d(edx_2:2.w))
                                        int32_t eax_60 = sub_4d5ba0(ebx.b)
                                        int32_t i_13 = i_6
                                        i_6 -= eax_60
                                        
                                        if (add_overflow(i_13, neg.d(eax_60)))
                                            sub_403010()
                                            noreturn
                                    
                                    i_5 = i_8
                                    i_8 -= 1
                                while (i_5 != 1)
                        
                        int32_t eax_62 = sub_4d5b1c(ebx.b)
                        
                        if (add_overflow(eax_62, 1))
                            sub_403010()
                            noreturn
                        
                        ebx = sub_4d5b64(eax_62 + 1)
                    while (ebx.b u< 4)
                    
                    ebx.b = 4
                    
                    while (i_6 s> 0)
                        if (ebx.b == 5)
                            break
                        
                        if (i_6 s>= sub_4d5ba0(ebx.b) && sub_4cc200(sx.d(edx_2.w), ebx.b) s> 0)
                            *(esp_1 - 4) = sub_4d5ba0(ebx.b)
                            *(esp_1 - 8) = 1
                            *(esp_1 - 0xc) = 4
                            *(esp_1 - 0x10) = 1
                            esp_1 -= 0x10
                            sub_4ceed4(arg1, sx.d(edx_2.w), sx.d(edx_2:2.w))
                            int32_t eax_73 = sub_4d5ba0(ebx.b)
                            int32_t i_16 = i_6
                            i_6 -= eax_73
                            
                            if (not(add_overflow(i_16, neg.d(eax_73))))
                                continue
                            
                            sub_403010()
                            noreturn
                        
                        int32_t eax_75 = sub_4d5b1c(ebx.b)
                        
                        if (add_overflow(eax_75, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        ebx = sub_4d5b64(eax_75 - 1)
                    
                    if (ebx.b == 5)
                        int32_t var_1cc
                        sub_408e1c(sx.d(edx_2:2.w), &var_1cc)
                        *(esp_1 - 4) = var_1cc
                        void* var_1d0
                        sub_408e1c(sx.d(var_c_1.w), &var_1d0)
                        sub_404054(&var_1c0, var_1d0, 0xff)
                        *(esp_1 - 8) = &var_1c0
                        *(esp_1 - 0xc) = 0x4ceecc
                        int32_t var_1d4
                        sub_408e1c(sx.d(edx_2.w), &var_1d4)
                        sub_4746a0(var_1d4, 0x18, *data_530304)
                
                int32_t eax_105 = *(arg1 + 0x1660)
                
                if (eax_105 s<= 0)
                    break
                
                bool o_21 = unimplemented  {imul eax, eax, 0x5}
                
                if (o_21)
                    sub_403010()
                    noreturn
                
                if (*(arg1 + eax_105 * 0xa + 0x843) == 0)
                    break
                
                if (*(arg1 + 0x10) s>= 0x82)
                    break
                
                if (*(arg1 + 0x10) s>= 0x50)
                    *(arg1 + 0x1660)
                    bool o_22 = unimplemented  {imul eax, dword [edi+0x1660], 0x5}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_107
                    eax_107.w = *(arg1 + *(arg1 + 0x1660) * 0xa + 0x83c)
                    
                    if (eax_107.w != edx_2:2.w)
                        break
        
        float var_18_1
        __builtin_strncpy(&var_18_1, "333?", 4)
        int32_t eax_109 = *(data_530598 + 0x18)
        
        if (eax_109 s<= 4)
            var_18_1 = 0.800000012f
        
        data_530598
        
        if (eax_109 == 5)
            var_18_1 = 0.620000005f
        
        data_530598
        
        if (eax_109 == 6)
            var_18_1 = 0.5f
        
        if (*(*data_530304 + 0xce0) != 0 && *(data_530598 + 0x18) == 6)
            var_18_1 = 0.0500000007f
        
        int32_t i_17 = *data_5300d0
        
        if (i_17 s> 0)
            int32_t i_9 = i_17
            int32_t esi_4 = 1
            int32_t i_7
            
            do
                bool o_23 = unimplemented  {imul eax, esi, 0x41}
                
                if (o_23)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + esi_4 * 0x208 + 0x1feae) != 0)
                    bool o_24 = unimplemented  {imul eax, esi, 0x41}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    long double x87_r7_1 = fconvert.t(*(*data_5301f4 + esi_4 * 0x208 + 0x20074))
                    long double temp6_1 = fconvert.t(var_18_1)
                    x87_r7_1 - temp6_1
                    int32_t eax_115
                    eax_115.w = (x87_r7_1 < temp6_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp6_1 ? 1 : 0) << 0xe
                    char var_5_2
                    
                    if (not(test_bit(eax_115:1.b, 0)) || *(*data_530304 + 0xcf9) != 0)
                        int32_t edx_47 = esi_4 * 0x41
                        bool o_25 = unimplemented  {imul edx, esi, 0x41}
                        
                        if (o_25)
                            sub_403010()
                            noreturn
                        
                        long double x87_r7_2 = fconvert.t(*(*data_5301f4 + (edx_47 << 3) + 0x20074))
                        long double temp9_1 = fconvert.t(1f)
                        x87_r7_2 - temp9_1
                        int32_t eax_119
                        eax_119.w = (x87_r7_2 < temp9_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, temp9_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == temp9_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_119:1.b, 0) && *(*data_5301f4 + (edx_47 << 3) + 0x1fea2) == 8)
                            var_5_2 = 0
                    else
                        var_5_2 = 0
                
                esi_4 += 1
                i_7 = i_9
                i_9 -= 1
            while (i_7 != 1)
    
    *(arg1 + 0xc) = 0
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_4ceec1
    sub_403e1c(&var_1e0, 8)
    int32_t* result = &var_c0
    sub_403df8(result)
    return result
}
