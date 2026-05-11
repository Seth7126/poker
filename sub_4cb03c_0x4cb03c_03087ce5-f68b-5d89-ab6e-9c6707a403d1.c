// ============================================================
// 函数名称: sub_4cb03c
// 虚拟地址: 0x4cb03c
// WARP GUID: 03087ce5-f68b-5d89-ab6e-9c6707a403d1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4359b4, sub_4c2be8, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_4ca104, sub_4d4f84
// ============================================================

int32_t __convention("regparm")sub_4cb03c(char arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg1 == 0)
        *data_530968
        POINT var_18
        int32_t ecx
        int32_t ecx_1 = sub_4359b4(ecx, &var_18)
        int32_t x = var_18.x
        void* edx_3 = *data_530304
        
        if (add_overflow(x, neg.d(*(edx_3 + 0x30))))
            sub_403010()
            noreturn
        
        int16_t eax_7 = sub_402b4c(float.t(x - *(edx_3 + 0x30)) / float.t(*(*data_530304 + 0x38))
            / fconvert.t(1.25f) * fconvert.t(80f))
        *data_530968
        sub_4359b4(ecx_1, &var_18)
        int32_t y = var_18.y
        void* edx_6 = *data_530304
        
        if (add_overflow(y, neg.d(*(edx_6 + 0x34))))
            sub_403010()
            noreturn
        
        int16_t eax_13 = sub_402b4c(float.t(y - *(edx_6 + 0x34)) / float.t(*(*data_530304 + 0x3c))
            / data_4cb4fc * fconvert.t(60f))
        result = 0
        int16_t i_1 = (*data_5300d0).w
        
        if (i_1 s> 0)
            int32_t ebx
            ebx.w = 1
            int16_t i
            
            do
                if (sub_4c2be8(sx.d(ebx.w)) != 0)
                    int16_t var_10
                    int16_t var_e
                    
                    if (*data_5300d0 != 8)
                        if (*data_5300d0 != 7)
                            if (*data_5300d0 != 6)
                                if (*data_5300d0 != 5)
                                    if (*data_5300d0 != 4)
                                        if (*data_5300d0 != 3)
                                            if (*data_5300d0 == 2 && ebx.w == 2)
                                                var_e = 0x22
                                                var_10 = 0xb
                                        else if (ebx.w == 2)
                                            var_e = 0x10
                                            var_10 = 0x11
                                        else if (ebx.w == 3)
                                            var_e = 0x33
                                            var_10 = 0xd
                                    else if (ebx.w == 2)
                                        var_e = 0xd
                                        var_10 = 0x12
                                    else if (ebx.w == 3)
                                        var_e = 0x21
                                        var_10 = 0xe
                                    else if (ebx.w == 4)
                                        var_e = 0x36
                                        var_10 = 0xe
                                else if (ebx.w == 2)
                                    var_e = 0xa
                                    var_10 = 0x12
                                else if (ebx.w == 3)
                                    var_e = 0x1a
                                    var_10 = 0xf
                                else if (ebx.w == 4)
                                    var_e = 0x28
                                    var_10 = 0xd
                                else if (ebx.w == 5)
                                    var_e = 0x38
                                    var_10 = 0xe
                            else if (ebx.w == 2)
                                var_e = 0xa
                                var_10 = 0x13
                            else if (ebx.w == 3)
                                var_e = 0x16
                                var_10 = 0x10
                            else if (ebx.w == 4)
                                var_e = 0x20
                                var_10 = 0xe
                            else if (ebx.w == 5)
                                var_e = 0x2c
                                var_10 = 0xd
                            else if (ebx.w == 6)
                                var_e = 0x38
                                var_10 = 0xe
                        else
                            switch (ebx.w)
                                case 2
                                    var_e = 0xa
                                    var_10 = 0x13
                                case 3
                                    var_e = 0x14
                                    var_10 = 0x10
                                case 4
                                    var_e = 0x1c
                                    var_10 = 0xf
                                case 5
                                    var_e = 0x24
                                    var_10 = 0xe
                                case 6
                                    var_e = 0x2e
                                    var_10 = 0xe
                                case 7
                                    var_e = 0x38
                                    var_10 = 0xf
                    else
                        switch (ebx.w)
                            case 2
                                var_e = 0xa
                                var_10 = 0x13
                            case 3
                                var_e = 0x13
                                var_10 = 0x11
                            case 4
                                var_e = 0x19
                                var_10 = 0xf
                            case 5
                                var_e = 0x20
                                var_10 = 0xe
                            case 6
                                var_e = 0x28
                                var_10 = 0xe
                            case 7
                                var_e = 0x30
                                var_10 = 0xd
                            case 8
                                var_e = 0x38
                                var_10 = 0xe
                    
                    if (ebx.w == 1)
                        var_e = 0x14
                        var_10 = 0x27
                    
                    int32_t eax_23 = sx.d(var_e)
                    int32_t edx_7 = sx.d(eax_7)
                    
                    if (add_overflow(eax_23, neg.d(edx_7)))
                        sub_403010()
                        noreturn
                    
                    int32_t edx_8 = sx.d(var_e)
                    int32_t ecx_2 = sx.d(eax_7)
                    
                    if (add_overflow(edx_8, neg.d(ecx_2)))
                        sub_403010()
                        noreturn
                    
                    int32_t eax_25 = (eax_23 - edx_7) * (edx_8 - ecx_2)
                    bool o_5 = unimplemented  {imul edx}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_10 = sx.d(var_10)
                    int32_t ecx_3 = sx.d(eax_13)
                    
                    if (add_overflow(edx_10, neg.d(ecx_3)))
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_4 = sx.d(var_10)
                    int32_t edi_1 = sx.d(eax_13)
                    
                    if (add_overflow(ecx_4, neg.d(edi_1)))
                        sub_403010()
                        noreturn
                    
                    int32_t edx_12 = (edx_10 - ecx_3) * (ecx_4 - edi_1)
                    bool o_8 = unimplemented  {imul edx, ecx}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_26 = eax_25 + edx_12
                    
                    if (add_overflow(eax_25, edx_12))
                        sub_403010()
                        noreturn
                    
                    if (*data_5300d0 s> 6)
                        if (eax_26 s<= 0x15)
                            result = sx.d(ebx.w)
                        
                        if (eax_26 s<= 0x15)
                            result = sx.d(ebx.w)
                        else if (eax_26 s<= 0x50 && ebx.w == 1)
                            result = sx.d(ebx.w)
                    else if (eax_26 s<= 0x28)
                        result = sx.d(ebx.w)
                    else if (eax_26 s<= 0x50 && ebx.w == 1)
                        result = sx.d(ebx.w)
                
                ebx += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (result s> 0)
            *data_5306b0 = result
    else
        result = *data_5306b0
    
    if (*(*data_5301f4 + 0x111f9) != 0 && *(*data_5301f4 + 0x1002c) s> 0)
        return *(*data_5301f4 + 0x1002c)
    
    return result
}
