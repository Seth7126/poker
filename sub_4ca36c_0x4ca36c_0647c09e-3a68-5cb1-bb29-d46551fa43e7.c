// ============================================================
// 函数名称: sub_4ca36c
// 虚拟地址: 0x4ca36c
// WARP GUID: 0647c09e-3a68-5cb1-bb29-d46551fa43e7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4359b4, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_4d4f84
// ============================================================

int32_tsub_4ca36c()
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    int32_t var_20 = entry_ebx
    *data_530968
    POINT var_18
    int32_t ecx
    int32_t ecx_1 = sub_4359b4(ecx, &var_18)
    int32_t x = var_18.x
    void* edx_2 = *data_530304
    
    if (add_overflow(x, neg.d(*(edx_2 + 0x30))))
        sub_403010()
        noreturn
    
    int16_t eax_5 = sub_402b4c(float.t(x - *(edx_2 + 0x30)) / float.t(*(*data_530304 + 0x38))
        / fconvert.t(1.25f) * fconvert.t(80f))
    *data_530968
    sub_4359b4(ecx_1, &var_18)
    int32_t y = var_18.y
    void* edx_5 = *data_530304
    
    if (add_overflow(y, neg.d(*(edx_5 + 0x34))))
        sub_403010()
        noreturn
    
    int16_t eax_11 = sub_402b4c(float.t(y - *(edx_5 + 0x34)) / float.t(*(*data_530304 + 0x3c))
        / data_4ca768 * fconvert.t(60f))
    int32_t result = 0
    int32_t eax_13 = *data_5300d0
    int16_t temp4 = eax_13.w
    eax_13.w -= 2
    
    if (temp4 s>= 2)
        int16_t i_1 = (eax_13 + 1).w
        int32_t eax_14
        eax_14.w = 2
        int16_t i
        
        do
            int16_t var_e
            
            if (*data_5300d0 != 8)
                if (*data_5300d0 != 7)
                    if (*data_5300d0 != 6)
                        if (*data_5300d0 != 5)
                            if (*data_5300d0 != 4)
                                if (*data_5300d0 != 3)
                                    if (*data_5300d0 == 2 && eax_14.w == 2)
                                        entry_ebx.w = 0x22
                                        var_e = 9
                                else if (eax_14.w == 2)
                                    entry_ebx.w = 0x10
                                    var_e = 0xd
                                else if (eax_14.w == 3)
                                    entry_ebx.w = 0x33
                                    var_e = 0xe
                            else if (eax_14.w == 2)
                                entry_ebx.w = 0xe
                                var_e = 0xe
                            else if (eax_14.w == 3)
                                entry_ebx.w = 0x22
                                var_e = 9
                            else if (eax_14.w == 4)
                                entry_ebx.w = 0x34
                                var_e = 0xf
                        else if (eax_14.w == 2)
                            entry_ebx.w = 0xc
                            var_e = 0xf
                        else if (eax_14.w == 3)
                            entry_ebx.w = 0x1a
                            var_e = 0xa
                        else if (eax_14.w == 4)
                            entry_ebx.w = 0x29
                            var_e = 0xa
                        else if (eax_14.w == 5)
                            entry_ebx.w = 0x36
                            var_e = 0x10
                    else if (eax_14.w == 2)
                        entry_ebx.w = 0xc
                        var_e = 0xf
                    else if (eax_14.w == 3)
                        entry_ebx.w = 0x17
                        var_e = 0xa
                    else if (eax_14.w == 4)
                        entry_ebx.w = 0x22
                        var_e = 9
                    else if (eax_14.w == 5)
                        entry_ebx.w = 0x2c
                        var_e = 0xb
                    else if (eax_14.w == 6)
                        entry_ebx.w = 0x36
                        var_e = 0x10
                else
                    switch (eax_14.w)
                        case 2
                            entry_ebx.w = 0xc
                            var_e = 0xe
                        case 3
                            entry_ebx.w = 0x15
                            var_e = 0xa
                        case 4
                            entry_ebx.w = 0x1e
                            var_e = 9
                        case 5
                            entry_ebx.w = 0x26
                            var_e = 9
                        case 6
                            entry_ebx.w = 0x2e
                            var_e = 0xb
                        case 7
                            entry_ebx.w = 0x36
                            var_e = 0xf
            else
                switch (eax_14.w)
                    case 2
                        entry_ebx.w = 7
                        var_e = 0x11
                    case 3
                        entry_ebx.w = 0x11
                        var_e = 0xf
                    case 4
                        entry_ebx.w = 0x17
                        var_e = 0xe
                    case 5
                        entry_ebx.w = 0x1d
                        var_e = 0xe
                    case 6
                        entry_ebx.w = 0x26
                        var_e = 0xc
                    case 7
                        entry_ebx.w = 0x2f
                        var_e = 0xc
                    case 8
                        entry_ebx.w = 0x36
                        var_e = 0xd
            
            int32_t edx_13 = sx.d(entry_ebx.w)
            int32_t ecx_2 = sx.d(eax_5)
            
            if (add_overflow(edx_13, neg.d(ecx_2)))
                sub_403010()
                noreturn
            
            int32_t ecx_3 = sx.d(entry_ebx.w)
            int32_t esi_1 = sx.d(eax_5)
            
            if (add_overflow(ecx_3, neg.d(esi_1)))
                sub_403010()
                noreturn
            
            int32_t edx_15 = (edx_13 - ecx_2) * (ecx_3 - esi_1)
            bool o_4 = unimplemented  {imul edx, ecx}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t ecx_5 = sx.d(var_e)
            int32_t esi_2 = sx.d(eax_11)
            
            if (add_overflow(ecx_5, neg.d(esi_2)))
                sub_403010()
                noreturn
            
            int32_t esi_3 = sx.d(var_e)
            int32_t edi_1 = sx.d(eax_11)
            
            if (add_overflow(esi_3, neg.d(edi_1)))
                sub_403010()
                noreturn
            
            int32_t ecx_7 = (ecx_5 - esi_2) * (esi_3 - edi_1)
            bool o_7 = unimplemented  {imul ecx, esi}
            
            if (o_7)
                sub_403010()
                noreturn
            
            int32_t edx_16 = edx_15 + ecx_7
            
            if (add_overflow(edx_15, ecx_7))
                sub_403010()
                noreturn
            
            if (*data_5300d0 s<= 6)
                if (edx_16 s<= 0x28)
                    result = sx.d(eax_14.w)
            else if (edx_16 s<= 0x13)
                result = sx.d(eax_14.w)
            
            eax_14 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
