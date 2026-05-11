// ============================================================
// 函数名称: sub_4f2e8c
// 虚拟地址: 0x4f2e8c
// WARP GUID: 087b764f-bf4a-5444-a603-874014ed525e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ee788, sub_402d38, sub_4ca100, sub_4cf404, sub_402d20, sub_402b3c, sub_4f1070, sub_5096d8, sub_4f1e48, sub_403010, sub_40496c, sub_402b4c, sub_402b2c, sub_4c0924
// [被调用的父级函数]: sub_4ed7a0, sub_51f90c, sub_4ec41b, sub_4c9488, sub_51f880, sub_4ec43c, sub_4dc3b8, sub_4ec430
// ============================================================

int32_t __convention("regparm")sub_4f2e8c(char arg1)
{
    // 第一条实际指令: data_7a7d98 = 1
    data_7a7d98 = 1
    *(data_5301b0 + 0x3d7f4) = 7
    *(data_5301b0 + 0x3d7f8) = 0xc3960000
    int32_t eax_5 = *(*(*data_530304 + 0x6064) + 0x210)
    
    if (add_overflow(eax_5, 0xffffffce))
        sub_403010()
        noreturn
    
    int32_t eax_7 = (eax_5 - 0x32) * 2
    bool o_1 = unimplemented  {imul eax, eax, 0x2}
    
    if (o_1)
        sub_403010()
        noreturn
    
    if (add_overflow(eax_7, 0x113))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_7 + 0x113, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_7 + 0x112, 0x258))
        sub_403010()
        noreturn
    
    *(data_5301b0 + 0x3d7fc) = fconvert.s(float.t(eax_7 + 0x36a))
    *(data_5301b0 + 0x3d800) = 0x442c8000
    *(data_5301b0 + 0x46508) = 8
    *(data_5301b0 + 0x4650c) = 0xc5098000
    int32_t eax_18 = *(*(*data_530304 + 0x6064) + 0x210)
    
    if (add_overflow(eax_18, 0xffffffce))
        sub_403010()
        noreturn
    
    int32_t eax_20 = (eax_18 - 0x32) * 2
    bool o_6 = unimplemented  {imul eax, eax, 0x2}
    
    if (o_6)
        sub_403010()
        noreturn
    
    if (add_overflow(eax_20, 0x113))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_20 + 0x113, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_20 + 0x112, 0x12c))
        sub_403010()
        noreturn
    
    *(data_5301b0 + 0x46510) = fconvert.s(float.t(eax_20 + 0x23e))
    *(data_5301b0 + 0x46514) = 0xc4a3c000
    *(data_5301b0 + 0x4f21c) = 9
    *(data_5301b0 + 0x4f220) = 0x452f0000
    int32_t eax_31 = *(*(*data_530304 + 0x6064) + 0x210)
    
    if (add_overflow(eax_31, 0xffffffce))
        sub_403010()
        noreturn
    
    int32_t eax_33 = (eax_31 - 0x32) * 2
    bool o_11 = unimplemented  {imul eax, eax, 0x2}
    
    if (o_11)
        sub_403010()
        noreturn
    
    if (add_overflow(eax_33, 0x113))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_33 + 0x113, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_33 + 0x112, 0x12c))
        sub_403010()
        noreturn
    
    *(data_5301b0 + 0x4f224) = fconvert.s(float.t(eax_33 + 0x23e))
    *(data_5301b0 + 0x4f228) = 0xc4a3c000
    *data_5303a0 = 6
    int32_t i_18 = *data_5303a0
    
    if (add_overflow(i_18, 0xa))
        sub_403010()
        noreturn
    
    if (i_18 + 0xa s>= 0xb)
        int32_t i_12 = i_18
        int32_t var_c_1 = 0xb
        void* var_30_1 = data_5301b0 + 0x582c8
        int32_t i
        
        do
            __builtin_memcpy(var_30_1 + 0x897c, 
                "\x0b\x00\x00\x00\x00\x00\x02\x44\x00\x00\x48\x42\x00\x00\x16\xc4\x00\x00\xa0\xc2\x00\x00\x"
            "c0\xc0", 
                0x18)
            *(var_30_1 + 0x8994) = 0
            float var_1c_1 = 0f
            
            if (sub_4c0924() == 0 || var_c_1 != 0xb)
                if (arg1 != 0)
                    *(var_30_1 + 0x8978) = 0xa6
                
                for (int32_t j = 1; j != 0xa7; j += 1)
                    bool o_17 = unimplemented  {imul eax, esi, 0x35}
                    
                    if (o_17)
                        sub_403010()
                        noreturn
                    
                    if (arg1 != 0)
                        char eax_49 = sub_402b4c(sub_402d38() * fconvert.t(7f) + data_4f4538)
                        bool o_18 = unimplemented  {imul edx, esi, 0x35}
                        
                        if (o_18)
                            sub_403010()
                            noreturn
                        
                        *(var_30_1 + j * 0xd4 - 0xd4) = eax_49
                        bool o_19 = unimplemented  {imul eax, esi, 0x35}
                        
                        if (o_19)
                            sub_403010()
                            noreturn
                        
                        *(var_30_1 + j * 0xd4 - 0xd3) = 2
                    
                    float var_20_2 = fconvert.s((sub_402d38() - fconvert.t(0.5f)) * fconvert.t(6f))
                    long double st0_8 = sub_402d38()
                    long double temp23_1 = fconvert.t(0.5f)
                    st0_8 - temp23_1
                    int32_t eax_50
                    eax_50.w = (st0_8 < temp23_1 ? 1 : 0) << 8
                        | (is_unordered.t(st0_8, temp23_1) ? 1 : 0) << 0xa
                        | (st0_8 == temp23_1 ? 1 : 0) << 0xe
                    eax_50.b = test_bit(eax_50:1.b, 0)
                    *(var_30_1 + j * 0xd4 - 0xb8) = eax_50.b
                    *(var_30_1 + j * 0xd4 - 0xb4) = fconvert.s(sub_402d38())
                    *(var_30_1 + j * 0xd4 - 0xac) = fconvert.s(sub_402d38())
                    *(var_30_1 + j * 0xd4 - 0xb0) = fconvert.s(fconvert.t(var_20_2) / fconvert.t(2f))
                    var_1c_1 = fconvert.s(fconvert.t(var_1c_1) - fconvert.t(var_20_2) / fconvert.t(10f)
                        - fconvert.t(4f))
                    *(var_30_1 + j * 0xd4 - 0xcc) = 0
                    *(var_30_1 + j * 0xd4 - 0xd0) = 0
                    *(var_30_1 + j * 0xd4 - 0xc8) =
                        fconvert.s((fconvert.t(20f) - fconvert.t(var_1c_1)) * fconvert.t(0f))
                    *(var_30_1 + j * 0xd4 - 0xbc) =
                        fconvert.s(sub_402d38() - fconvert.t(0.5f) - fconvert.t(20f))
            else
                for (int32_t j_1 = 1; j_1 != 0xa7; j_1 += 1)
                    bool o_16 = unimplemented  {imul eax, esi, 0x35}
                    
                    if (o_16)
                        sub_403010()
                        noreturn
                    
                    float var_20_1 = fconvert.s((sub_402d38() - fconvert.t(0.5f)) * fconvert.t(6f))
                    long double st0_2 = sub_402d38()
                    long double temp22_1 = fconvert.t(0.5f)
                    st0_2 - temp22_1
                    int32_t eax_48
                    eax_48.w = (st0_2 < temp22_1 ? 1 : 0) << 8
                        | (is_unordered.t(st0_2, temp22_1) ? 1 : 0) << 0xa
                        | (st0_2 == temp22_1 ? 1 : 0) << 0xe
                    eax_48.b = test_bit(eax_48:1.b, 0)
                    *(var_30_1 + j_1 * 0xd4 - 0xb8) = eax_48.b
                    *(var_30_1 + j_1 * 0xd4 - 0xb4) = fconvert.s(sub_402d38())
                    *(var_30_1 + j_1 * 0xd4 - 0xac) = fconvert.s(sub_402d38())
                    *(var_30_1 + j_1 * 0xd4 - 0xb0) = fconvert.s(fconvert.t(var_20_1) / fconvert.t(2f))
                    var_1c_1 = fconvert.s(fconvert.t(var_1c_1) - fconvert.t(var_20_1) / fconvert.t(10f)
                        - fconvert.t(4f))
                    *(var_30_1 + j_1 * 0xd4 - 0xcc) = 0
                    *(var_30_1 + j_1 * 0xd4 - 0xd0) = 0
                    *(var_30_1 + j_1 * 0xd4 - 0xc8) =
                        fconvert.s((fconvert.t(20f) - fconvert.t(var_1c_1)) * fconvert.t(0f))
                    *(var_30_1 + j_1 * 0xd4 - 0xbc) =
                        fconvert.s(sub_402d38() - fconvert.t(0.5f) - fconvert.t(20f))
            
            var_c_1 += 1
            var_30_1 += 0x8d14
            i = i_12
            i_12 -= 1
        while (i != 1)
    
    int32_t i_19 = *data_5300d0
    
    if (i_19 s> 0)
        int32_t i_13 = i_19
        void* ebx_3 = data_5301b0
        void* esi_1 = data_5302e4
        int32_t i_1
        
        do
            int32_t ecx
            sub_4f1e48(ecx, 0, ebx_3, fconvert.s(float.t(*(ebx_3 + 0x8978))))
            ecx = sub_40496c(esi_1, ebx_3, 0x48ec68)
            esi_1 += 0x8d14
            ebx_3 += 0x8d14
            i_1 = i_13
            i_13 -= 1
        while (i_1 != 1)
    
    if (arg1 != 0 && sub_4c0924() == 0)
        *(data_5301b0 + 0x60c40) = 0
    
    *(data_5301b0 + 0x60c48) = 0x44390000
    int32_t eax_61 = *(*(*data_530304 + 0x6064) + 0x210)
    
    if (add_overflow(eax_61, 0xffffffce))
        sub_403010()
        noreturn
    
    int32_t eax_63 = (eax_61 - 0x32) * 2
    bool o_21 = unimplemented  {imul eax, eax, 0x2}
    
    if (o_21)
        sub_403010()
        noreturn
    
    if (add_overflow(eax_63, 0x113))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_63 + 0x113, 0xffffffff))
        sub_403010()
        noreturn
    
    *(data_5301b0 + 0x60c4c) = fconvert.s(float.t(eax_63 + 0x112))
    *(data_5301b0 + 0x60c50) = 0x43200000
    int32_t i_2 = 1
    void* ebx_5 = data_5301b0 + 0x582d8
    
    do
        *ebx_5 = 0x43340000
        *(ebx_5 + 8) = 0x41a00000
        bool o_24 = unimplemented  {imul eax, esi, 0x2}
        
        if (o_24)
            sub_403010()
            noreturn
        
        *(ebx_5 - 4) = fconvert.s(float.t(i_2 * 2))
        *(ebx_5 + 0x14) = 0
        *(ebx_5 + 0x10) = 0
        *(ebx_5 + 0x18) = 0
        *(ebx_5 + 0xc) = 0
        i_2 += 1
        ebx_5 += 0xd4
    while (i_2 != 0xa7)
    
    if (arg1 != 0)
        *(data_5301b0 + 0x84090) = 0
    
    *(data_5301b0 + 0x84098) = 0xc3200000
    int32_t eax_74 = *(*(*data_530304 + 0x6064) + 0x210)
    
    if (add_overflow(eax_74, 0xffffffce))
        sub_403010()
        noreturn
    
    int32_t eax_76 = (eax_74 - 0x32) * 2
    bool o_26 = unimplemented  {imul eax, eax, 0x2}
    
    if (o_26)
        sub_403010()
        noreturn
    
    if (add_overflow(eax_76, 0x113))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_76 + 0x113, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_76 + 0x112, 0))
        sub_403010()
        noreturn
    
    *(data_5301b0 + 0x8409c) = fconvert.s(float.t(eax_76 + 0x112))
    *(data_5301b0 + 0x840a0) = 0xc3eb0000
    int32_t eax_85 = *(*(*data_530304 + 0x605c) + 0x210)
    
    if (add_overflow(eax_85, 0xffffffce))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_85 - 0x32, 0xfffffffb))
        sub_403010()
        noreturn
    
    *(data_5301b0 + 0x840a8) = fconvert.s(float.t(eax_85 - 0x37))
    int32_t eax_93 = *(*(*data_530304 + 0x6060) + 0x210)
    
    if (add_overflow(eax_93, 0xffffffce))
        sub_403010()
        noreturn
    
    *(data_5301b0 + 0x840a4) =
        fconvert.s(fconvert.t(*(data_5301b0 + 0x840a4)) - fconvert.t(9f) + float.t(eax_93 - 0x32))
    void* eax_97
    eax_97.b = *(*data_5301f4 + 4)
    
    if (eax_97.b - 1 u< 2)
        *(data_5301b0 + 0x840a4) = 0xc2a00000
        *(data_5301b0 + 0x840a8) = 0xc0c00000
        *(data_5301b0 + 0x840ac) = 0
        *(data_5301b0 + 0x840a0) = 0xc4200000
        *(data_5301b0 + 0x84098) = 0x42a00000
    
    if (*(*data_5301f4 + 4) == 2)
        *(data_5301b0 + 0x84098) =
            fconvert.s(fconvert.t(*(data_5301b0 + 0x84098)) - fconvert.t(200f) - fconvert.t(40f))
        *(data_5301b0 + 0x840a0) = fconvert.s(fconvert.t(*(data_5301b0 + 0x840a0)) + fconvert.t(90f))
    
    int32_t i_3 = 1
    void* ebx_7 = data_5301b0 + 0x7b728
    
    do
        *ebx_7 = 0x43340000
        int32_t eax_110 = i_3 * 2
        bool o_33 = unimplemented  {imul eax, esi, 0x2}
        
        if (o_33)
            sub_403010()
            noreturn
        
        if (add_overflow(eax_110, 0xffffffc4))
            sub_403010()
            noreturn
        
        *(ebx_7 + 8) = fconvert.s(float.t(eax_110 - 0x3c))
        bool o_35 = unimplemented  {imul eax, esi, 0x2}
        
        if (o_35)
            sub_403010()
            noreturn
        
        *(ebx_7 - 4) = fconvert.s(float.t(i_3 * 2))
        *(ebx_7 + 0x14) = 0
        *(ebx_7 + 0x10) = 0
        *(ebx_7 + 0x18) = 0
        *(ebx_7 + 0xc) = 0
        i_3 += 1
        ebx_7 += 0xd4
    while (i_3 != 0xa7)
    
    if (arg1 != 0)
        *(data_5301b0 + 0x7b37c) = 0
    
    *(data_5301b0 + 0x7b384) = 0x43840000
    *(data_5301b0 + 0x7b388) = 0xc2fa0000
    *(data_5301b0 + 0x7b38c) = 0x430c0000
    *(data_5301b0 + 0x7b394) = 0xc0a00000
    *(data_5301b0 + 0x7b390) =
        fconvert.s(fconvert.t(*(data_5301b0 + 0x7b390)) - fconvert.t(9f) + fconvert.t(52f))
    int32_t eax_121 = *(data_5301b0 + 0x7b37c)
    
    if (add_overflow(eax_121, 0x14))
        sub_403010()
        noreturn
    
    if (eax_121 + 0x14 s> 0)
        int32_t i_14 = eax_121 + 0x14
        void* ebx_9 = data_5301b0 + 0x72a14
        int32_t i_4
        
        do
            *ebx_9 = 0
            *(ebx_9 + 8) = 0
            *(ebx_9 - 4) = 0x43960000
            *(ebx_9 - 8) = 0xc2480000
            ebx_9 += 0xd4
            i_4 = i_14
            i_14 -= 1
        while (i_4 != 1)
    
    bool o_37 = unimplemented  {imul eax, eax, 0x2345}
    
    if (o_37)
        sub_403010()
        noreturn
    
    void* ebx_10 = data_5301b0 + 0x60fdc
    *(ebx_10 + 0x8980) = 0x44098000
    
    if (add_overflow(*(*(*data_530304 + 0x605c) + 0x210), 0xffffffce))
        sub_403010()
        noreturn
    
    if (add_overflow(0, 0xaf))
        sub_403010()
        noreturn
    
    if (add_overflow(0xaf, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(0xae, 3))
        sub_403010()
        noreturn
    
    *(ebx_10 + 0x8984) = fconvert.s(float.t(0xb1))
    *(ebx_10 + 0x8988) = 0xc4430000
    *(ebx_10 + 0x8994) = 0xc2080000
    *(ebx_10 + 0x8988) = fconvert.s(fconvert.t(*(ebx_10 + 0x8988)) - fconvert.t(30f))
    *(ebx_10 + 0x8980) = fconvert.s(fconvert.t(*(ebx_10 + 0x8980)) - fconvert.t(780f))
    
    if (arg1 != 0)
        data_5300d0
        
        if (add_overflow(0, 0xa))
            sub_403010()
            noreturn
        
        if (add_overflow(0xa, 0x32))
            sub_403010()
            noreturn
        
        *(ebx_10 + 0x8978) = 0x3c
    
    data_5300d0
    
    if (add_overflow(0, 0xa))
        sub_403010()
        noreturn
    
    if (add_overflow(0xa, 0x32))
        sub_403010()
        noreturn
    
    int32_t i_15 = 0x3c
    int32_t esi_2 = 1
    int32_t i_5
    
    do
        int32_t edi_2 = esi_2 * 0x35
        bool o_46 = unimplemented  {imul edi, esi, 0x35}
        
        if (o_46)
            sub_403010()
            noreturn
        
        int32_t eax_130 = *(ebx_10 + (edi_2 << 2) - 0x84)
        int32_t eax_131 = *(ebx_10 + (edi_2 << 2) - 0x80)
        float var_8c[0x16]
        sub_4f1070(1, 1, &var_8c)
        __builtin_memcpy(ebx_10 + (edi_2 << 2) - 0xd0, &var_8c, 0x58)
        *(ebx_10 + (edi_2 << 2) - 0x84) = eax_130
        *(ebx_10 + (edi_2 << 2) - 0x80) = eax_131
        int32_t eax_134 = esi_2 * 3
        bool o_47 = unimplemented  {imul eax, esi, 0x3}
        
        if (o_47)
            sub_403010()
            noreturn
        
        if (add_overflow(eax_134, 0xffffff9c))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_134 - 0x64, 5))
            sub_403010()
            noreturn
        
        *(ebx_10 + (edi_2 << 2) - 0xc8) = fconvert.s(float.t(eax_134 - 0x5f))
        
        if (add_overflow(esi_2, 0xffffffff))
            sub_403010()
            noreturn
        
        bool o_51 = unimplemented  {imul eax, eax, 0x1}
        
        if (o_51)
            sub_403010()
            noreturn
        
        if (add_overflow(esi_2 - 1, 0xffffff9f))
            sub_403010()
            noreturn
        
        *(ebx_10 + (edi_2 << 2) - 0xc8) = fconvert.s(float.t(esi_2 - 0x62))
        
        if (data_7a7d98 == 0)
            *(ebx_10 + (edi_2 << 2) - 0xb8) = 0
            *(ebx_10 + (edi_2 << 2) - 0xb4) = 0
            *(ebx_10 + (edi_2 << 2) - 0xac) = 0
            *(ebx_10 + (edi_2 << 2) - 0xb0) = 0
        else
            long double st0_12 = sub_402d38()
            long double temp61_1 = fconvert.t(0.5f)
            st0_12 - temp61_1
            int32_t eax_140
            eax_140.w = (st0_12 < temp61_1 ? 1 : 0) << 8
                | (is_unordered.t(st0_12, temp61_1) ? 1 : 0) << 0xa
                | (st0_12 == temp61_1 ? 1 : 0) << 0xe
            eax_140.b = test_bit(eax_140:1.b, 0)
            *(ebx_10 + (edi_2 << 2) - 0xb8) = eax_140.b
            *(ebx_10 + (edi_2 << 2) - 0xb4) = fconvert.s(sub_402d38())
            *(ebx_10 + (edi_2 << 2) - 0xac) = fconvert.s(sub_402d38())
            
            if (*(ebx_10 + (edi_2 << 2) - 0xb8) == 0)
                *(ebx_10 + (edi_2 << 2) - 0xb0) =
                    fconvert.s((sub_402d38() * fconvert.t(2f) + data_4f4560) * data_4f4578)
            else
                *(ebx_10 + (edi_2 << 2) - 0xb0) =
                    fconvert.s((sub_402d38() * fconvert.t(2f) + data_4f4560) * data_4f456c)
        
        void* eax_142
        eax_142.b = *(*data_5301f4 + 4)
        char temp63_1 = eax_142.b
        eax_142.b -= 7
        
        if (temp63_1 == 7)
            if (esi_2 == 1)
                *(ebx_10 + 0x8980) = fconvert.s(fconvert.t(*(ebx_10 + 0x8980)) + fconvert.t(90f))
                *(ebx_10 + 0x8988) = fconvert.s(fconvert.t(*(ebx_10 + 0x8988)) + fconvert.t(100f))
                
                if (sub_4ca100().b != 0)
                    *(ebx_10 + 0x8988) = fconvert.s(fconvert.t(*(ebx_10 + 0x8988)) - fconvert.t(20f))
            
            *(ebx_10 + (edi_2 << 2) - 0xc8) = 0xc2c20000
            long double x87_r7_84 = fconvert.t(*(ebx_10 + (edi_2 << 2) - 0xb0))
            long double temp68_1 = fconvert.t(0f)
            x87_r7_84 - temp68_1
            eax_142.w = (x87_r7_84 < temp68_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_84, temp68_1) ? 1 : 0) << 0xa
                | (x87_r7_84 == temp68_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_142:1.b, 0) && data_7a7d98 != 0)
                if (*(ebx_10 + (edi_2 << 2) - 0xb8) == 0)
                    bool o_54 = unimplemented  {imul eax, esi, 0x35}
                    
                    if (o_54)
                        sub_403010()
                        noreturn
                    
                    *(ebx_10 + (edi_2 << 2) - 0xc8) = fconvert.s(fconvert.t(-97f)
                        - data_4f4598 * fconvert.t(*(ebx_10 + esi_2 * 0xd4 - 0xb0)))
                else
                    bool o_53 = unimplemented  {imul eax, esi, 0x35}
                    
                    if (o_53)
                        sub_403010()
                        noreturn
                    
                    *(ebx_10 + (edi_2 << 2) - 0xc8) = fconvert.s(fconvert.t(-97f)
                        - data_4f4588 * fconvert.t(*(ebx_10 + esi_2 * 0xd4 - 0xb0)))
            
            *(ebx_10 + (edi_2 << 2) - 0xc4) = 0
            *(ebx_10 + (edi_2 << 2) - 0xc0) = 0
            int32_t eax_145 = sub_402d20(4)
            
            if (add_overflow(eax_145, 0xfffffffe))
                sub_403010()
                noreturn
            
            *(ebx_10 + (edi_2 << 2) - 0xbc) = fconvert.s(float.t(eax_145 - 2))
            
            if (esi_2 == 1)
                *(ebx_10 + (edi_2 << 2) - 0xd0) = 0xc3bd0000
                int32_t eax_147 = sub_402d20(6)
                
                if (add_overflow(eax_147, 0xfffffffb))
                    sub_403010()
                    noreturn
                
                *(ebx_10 + (edi_2 << 2) - 0xcc) = fconvert.s(float.t(eax_147 - 5))
            else if (esi_2 == 2)
                *(ebx_10 + (edi_2 << 2) - 0xd0) = 0xc3380000
                int32_t eax_149 = sub_402d20(6)
                
                if (add_overflow(0xfffffffb, neg.d(eax_149)))
                    sub_403010()
                    noreturn
                
                *(ebx_10 + (edi_2 << 2) - 0xcc) = fconvert.s(float.t(0xfffffffb - eax_149))
            else if (esi_2 == 3)
                *(ebx_10 + (edi_2 << 2) - 0xd0) = 0x41200000
                int32_t eax_150 = sub_402d20(6)
                
                if (add_overflow(eax_150, 0xfffffffb))
                    sub_403010()
                    noreturn
                
                *(ebx_10 + (edi_2 << 2) - 0xcc) = fconvert.s(float.t(eax_150 - 5))
            else if (esi_2 == 4)
                *(ebx_10 + (edi_2 << 2) - 0xd0) = 0x434c0000
                int32_t eax_152 = sub_402d20(0xc)
                
                if (add_overflow(0xfffffffb, neg.d(eax_152)))
                    sub_403010()
                    noreturn
                
                *(ebx_10 + (edi_2 << 2) - 0xcc) = fconvert.s(float.t(0xfffffffb - eax_152))
            else if (esi_2 == 5)
                *(ebx_10 + (edi_2 << 2) - 0xd0) = 0x43c70000
                int32_t eax_153 = sub_402d20(0xc)
                
                if (add_overflow(0xfffffffb, neg.d(eax_153)))
                    sub_403010()
                    noreturn
                
                *(ebx_10 + (edi_2 << 2) - 0xcc) = fconvert.s(float.t(0xfffffffb - eax_153))
            
            *(ebx_10 + (edi_2 << 2) - 0xcc) = fconvert.s(fconvert.t(*(ebx_10 + (edi_2 << 2) - 0xcc))
                + fconvert.t(70f) + fconvert.t(70f))
            *(ebx_10 + (edi_2 << 2) - 0xd0) =
                fconvert.s(fconvert.t(*(ebx_10 + (edi_2 << 2) - 0xd0)) + fconvert.t(20f))
        
        *(ebx_10 + (edi_2 << 2) - 0xd0) =
            fconvert.s(fconvert.t(*(ebx_10 + (edi_2 << 2) - 0xd0)) - fconvert.t(120f))
        *(ebx_10 + (edi_2 << 2) - 0xcc) =
            fconvert.s(fconvert.t(*(ebx_10 + (edi_2 << 2) - 0xcc)) - fconvert.t(70f))
        void* eax_155
        eax_155.b = *(*data_5301f4 + 4)
        char temp65_1 = eax_155.b
        eax_155.b -= 2
        
        if (temp65_1 == 2)
            *(ebx_10 + (edi_2 << 2) - 0xc8) = 0xc2c20000
            *(ebx_10 + (edi_2 << 2) - 0xc4) = 0
            *(ebx_10 + (edi_2 << 2) - 0xc0) = 0
            int32_t eax_156 = sub_402d20(0x14)
            
            if (add_overflow(eax_156, 0xfffffff6))
                sub_403010()
                noreturn
            
            *(ebx_10 + (edi_2 << 2) - 0xbc) = fconvert.s(float.t(eax_156 - 0xa))
            
            if (esi_2 == 1)
                *(ebx_10 + (edi_2 << 2) - 0xd0) = 0xc39b0000
                int32_t eax_158 = sub_402d20(0x14)
                
                if (add_overflow(eax_158, 0xfffffff6))
                    sub_403010()
                    noreturn
                
                *(ebx_10 + (edi_2 << 2) - 0xcc) = fconvert.s(float.t(eax_158 - 0xa))
            else if (esi_2 == 2)
                *(ebx_10 + (edi_2 << 2) - 0xd0) = 0xc2a00000
                int32_t eax_160 = sub_402d20(0x14)
                
                if (add_overflow(0xfffffff6, neg.d(eax_160)))
                    sub_403010()
                    noreturn
                
                *(ebx_10 + (edi_2 << 2) - 0xcc) = fconvert.s(float.t(0xfffffff6 - eax_160))
            else if (esi_2 == 3)
                *(ebx_10 + (edi_2 << 2) - 0xd0) = 0x43160000
                int32_t eax_161 = sub_402d20(0x14)
                
                if (add_overflow(eax_161, 0xfffffff6))
                    sub_403010()
                    noreturn
                
                *(ebx_10 + (edi_2 << 2) - 0xcc) = fconvert.s(float.t(eax_161 - 0xa))
            else if (esi_2 == 4)
                *(ebx_10 + (edi_2 << 2) - 0xd0) = 0x43b90000
                int32_t eax_163 = sub_402d20(0x14)
                
                if (add_overflow(0xfffffff6, neg.d(eax_163)))
                    sub_403010()
                    noreturn
                
                *(ebx_10 + (edi_2 << 2) - 0xcc) = fconvert.s(float.t(0xfffffff6 - eax_163))
        
        esi_2 += 1
        i_5 = i_15
        i_15 -= 1
    while (i_5 != 1)
    
    if (arg1 != 0)
        *(ebx_10 + 0x8978) = 0
    
    __builtin_memcpy(data_5301b0 + 0x8cdac, data_5301b0 + 0x6995c, 0x18)
    __builtin_memcpy(data_5301b0 + 0x8cdc4, data_5301b0 + 0x69974, 0x18)
    int32_t i_17 = 0xa
    void* ebx_12 = data_5301b0 + 0x60fe0
    int32_t i_6
    
    do
        __builtin_memcpy(ebx_12 + 0x23450, ebx_12, 0x58)
        ebx_12 += 0xd4
        i_6 = i_17
        i_17 -= 1
    while (i_6 != 1)
    
    if (arg1 != 0)
        *(data_5301b0 + 0x8cda4) = 0
    
    *(data_5301b0 + 0x72670) = 0x44098000
    
    if (add_overflow(*(*(*data_530304 + 0x605c) + 0x210), 0xffffffce))
        sub_403010()
        noreturn
    
    if (add_overflow(0, 0xaf))
        sub_403010()
        noreturn
    
    if (add_overflow(0xaf, 0xffffffff))
        sub_403010()
        noreturn
    
    *(data_5301b0 + 0x72674) = fconvert.s(float.t(0xae))
    *(data_5301b0 + 0x72678) = 0xc3be0000
    
    if (arg1 != 0)
        *(data_5301b0 + 0x72668) = 0
    
    int32_t i_7 = 1
    void* ebx_14 = data_5301b0 + 0x69cf4
    
    do
        if (add_overflow(i_7, 0xffffffff))
            sub_403010()
            noreturn
        
        int32_t eax_179 = *(data_5301b0 + 0x72668)
        
        if (add_overflow(eax_179, 0xffffffff))
            sub_403010()
            noreturn
        
        float var_14_1 = fconvert.s(
            (float.t(i_7 - 1) / float.t(eax_179 - 1) - fconvert.t(0.5f)) * data_4f45ac / fconvert.t(2f)
            + data_4f45b8)
        
        if (i_7 == 1)
            var_14_1 = 1.01999998f
        
        long double x87_r7_122 =
            sub_402b3c(data_4f45ac * fconvert.t(var_14_1)) * fconvert.t(120f) * fconvert.t(0f)
        *ebx_14 = fconvert.s(sub_402d38() * fconvert.t(20f) + x87_r7_122 - fconvert.t(10f))
        long double x87_r7_132 =
            fneg(sub_402b2c(data_4f45ac * fconvert.t(var_14_1))) * fconvert.t(120f) * fconvert.t(0f)
        *(ebx_14 + 4) = fconvert.s(sub_402d38() * fconvert.t(20f) + x87_r7_132 - fconvert.t(10f))
        bool o_71 = unimplemented  {imul eax, esi, 0xa}
        
        if (o_71)
            sub_403010()
            noreturn
        
        *(ebx_14 + 8) =
            fconvert.s(float.t(i_7 * 0xa) / fconvert.t(10f) * fconvert.t(1f) + fconvert.t(-100f))
        *(ebx_14 + 0x14) = fconvert.s(sub_402d38() * fconvert.t(40f) + fconvert.t(180f)
            - fconvert.t(var_14_1) * fconvert.t(180f) - fconvert.t(20f))
        *(ebx_14 + 0x18) = 0
        long double st0_22 = sub_402d38()
        long double temp79_1 = fconvert.t(0.5f)
        st0_22 - temp79_1
        int32_t eax_181
        eax_181.w = (st0_22 < temp79_1 ? 1 : 0) << 8 | (is_unordered.t(st0_22, temp79_1) ? 1 : 0) << 0xa
            | (st0_22 == temp79_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_181:1.b, 0))
            *(ebx_14 + 0x18) = 1
        
        *(ebx_14 + 0x20) = fconvert.s(sub_402d38())
        *(ebx_14 + 0x1c) = fconvert.s(sub_402d38())
        *(ebx_14 + 0x24) = fconvert.s(sub_402d38())
        i_7 += 1
        ebx_14 += 0xd4
    while (i_7 != 0xb)
    
    if (arg1 != 0)
        *(data_5301b0 + 0x72668) = 0
    
    void* eax_184
    eax_184.b = *(*data_5301f4 + 4)
    char temp82 = eax_184.b
    eax_184.b -= 7
    
    if (temp82 == 7)
        if (arg1 != 0 && sub_4c0924() == 0)
            *(data_5301b0 + 0x60c40) = 0
        
        *(data_5301b0 + 0x60c48) = 0x42aa0000
        int32_t eax_191 = *(*(*data_530304 + 0x6064) + 0x210)
        
        if (add_overflow(eax_191, 0xffffffce))
            sub_403010()
            noreturn
        
        int32_t eax_193 = (eax_191 - 0x32) * 2
        bool o_73 = unimplemented  {imul eax, eax, 0x2}
        
        if (o_73)
            sub_403010()
            noreturn
        
        if (add_overflow(eax_193, 0x113))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_193 + 0x113, 0xffffffff))
            sub_403010()
            noreturn
        
        *(data_5301b0 + 0x60c4c) = fconvert.s(float.t(eax_193 + 0x112))
        *(data_5301b0 + 0x60c50) = 0xc3200000
        
        if (sub_4ca100() != 0)
            *(data_5301b0 + 0x60c5c) = 0xc2180000
            *(data_5301b0 + 0x60c50) =
                fconvert.s(fconvert.t(*(data_5301b0 + 0x60c50)) + fconvert.t(10f) - fconvert.t(60f))
            *(data_5301b0 + 0x60c48) = fconvert.s(fconvert.t(*(data_5301b0 + 0x60c48)) + fconvert.t(90f)
                - fconvert.t(60f) - fconvert.t(540f))
        
        int32_t i_8 = 1
        void* ebx_16 = data_5301b0 + 0x582e0
        
        do
            bool o_76 = unimplemented  {imul edx, dword [ebp-0x8], 0x3}
            
            if (o_76)
                sub_403010()
                noreturn
            
            *ebx_16 = fconvert.s(sub_4cf404(i_8, i_8 * 3, 0) * fconvert.t(4f) + fconvert.t(12f))
            bool o_77 = unimplemented  {imul edx, dword [ebp-0x8], 0x2}
            
            if (o_77)
                sub_403010()
                noreturn
            
            if (add_overflow(i_8, 0x4d))
                sub_403010()
                noreturn
            
            long double x87_r7_161 = sub_4cf404(i_8 + 0x4d, i_8 * 2, 0) * fconvert.t(2f)
            bool o_79 = unimplemented  {imul edx, dword [ebp-0x8], 0x2}
            
            if (o_79)
                sub_403010()
                noreturn
            
            *(ebx_16 - 0x14) =
                fconvert.s(sub_4cf404(i_8 + 0x4d, i_8 * 2, 0) * fconvert.t(2f) * x87_r7_161)
            bool o_80 = unimplemented  {imul edx, dword [ebp-0x8], 0x5}
            
            if (o_80)
                sub_403010()
                noreturn
            
            if (add_overflow(i_8, 0x21))
                sub_403010()
                noreturn
            
            long double x87_r7_166 = sub_4cf404(i_8 + 0x21, i_8 * 5, 0) * fconvert.t(2f)
            bool o_82 = unimplemented  {imul edx, dword [ebp-0x8], 0x5}
            
            if (o_82)
                sub_403010()
                noreturn
            
            *(ebx_16 - 0x10) =
                fconvert.s(sub_4cf404(i_8 + 0x21, i_8 * 5, 0) * fconvert.t(2f) * x87_r7_166)
            i_8 += 1
            ebx_16 += 0xd4
        while (i_8 != 0xa7)
    
    void* eax_210
    eax_210.b = *(*data_5301f4 + 4)
    eax_210.b -= 3
    char temp83 = eax_210.b
    eax_210.b -= 2
    
    if (temp83 u< 2)
        if (arg1 != 0)
            *(data_5301b0 + 0x60c40) = 0
        
        *(data_5301b0 + 0x60c48) = 0xc30a0000
        int32_t eax_216 = *(*(*data_530304 + 0x6064) + 0x210)
        
        if (add_overflow(eax_216, 0xffffffce))
            sub_403010()
            noreturn
        
        int32_t eax_218 = (eax_216 - 0x32) * 2
        bool o_84 = unimplemented  {imul eax, eax, 0x2}
        
        if (o_84)
            sub_403010()
            noreturn
        
        if (add_overflow(eax_218, 0x113))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_218 + 0x113, 0xffffffff))
            sub_403010()
            noreturn
        
        *(data_5301b0 + 0x60c4c) = fconvert.s(float.t(eax_218 + 0x112))
        *(data_5301b0 + 0x60c50) = 0xc2dc0000
        int32_t i_16 = 0xa6
        void* ebx_18 = data_5301b0 + 0x582e0
        int32_t i_9
        
        do
            *ebx_18 = 0x42180000
            ebx_18 += 0xd4
            i_9 = i_16
            i_16 -= 1
        while (i_9 != 1)
        *(data_5301b0 + 0x72670) = 0x43540000
        *(data_5301b0 + 0x72674) = 0x43890000
        *(data_5301b0 + 0x72678) = 0xc3700000
        *(data_5301b0 + 0x7267c) = 0xc2a00000
        *(data_5301b0 + 0x72680) = 0xc0c00000
        *(data_5301b0 + 0x72684) = 0
        int32_t i_10 = 1
        void* ebx_20 = data_5301b0 + 0x69cf4
        
        do
            sub_4ee788()
            int32_t eax_230 = sub_402d20(0x14)
            
            if (add_overflow(eax_230, 0xfffffff6))
                sub_403010()
                noreturn
            
            *ebx_20 = fconvert.s(float.t(eax_230 - 0xa))
            int32_t eax_232 = sub_402d20(0x14)
            
            if (add_overflow(eax_232, 0xfffffff6))
                sub_403010()
                noreturn
            
            *(ebx_20 + 4) = fconvert.s(float.t(eax_232 - 0xa))
            int32_t eax_234 = i_10 * 2
            bool o_89 = unimplemented  {imul eax, dword [ebp-0x8], 0x2}
            
            if (o_89)
                sub_403010()
                noreturn
            
            if (add_overflow(eax_234, 0xffffffff))
                sub_403010()
                noreturn
            
            *(ebx_20 + 8) = fconvert.s(float.t(eax_234 - 1))
            *(ebx_20 + 0xc) = 0
            *(ebx_20 + 0x10) = 0
            int32_t eax_236 = sub_402d20(0x14)
            
            if (add_overflow(eax_236, 5))
                sub_403010()
                noreturn
            
            *(ebx_20 + 0x14) = fconvert.s(float.t(eax_236 + 5))
            i_10 += 1
            ebx_20 += 0xd4
        while (i_10 != 0xa7)
    
    void* eax_239
    eax_239.b = *(*data_5301f4 + 4)
    eax_239.b -= 5
    char temp84 = eax_239.b
    eax_239.b -= 2
    
    if (temp84 u< 2)
        int32_t i_11 = 7
        void* ebx_22 = data_5301b0 + 0x34e78
        
        do
            *(ebx_22 + 0x898c) = 0xc2a00000
            *(ebx_22 + 0x8990) = 0xc0c00000
            *(ebx_22 + 0x8994) = 0
            
            for (int32_t j_2 = 1; j_2 != 0xa7; j_2 += 1)
                int32_t edx_16 = j_2 * 0x35
                bool o_92 = unimplemented  {imul edx, esi, 0x35}
                
                if (o_92)
                    sub_403010()
                    noreturn
                
                *(ebx_22 + (edx_16 << 2) - 0xd0) = 0
                *(ebx_22 + (edx_16 << 2) - 0xcc) = 0
                bool o_93 = unimplemented  {imul ecx, esi, 0x2}
                
                if (o_93)
                    sub_403010()
                    noreturn
                
                *(ebx_22 + (edx_16 << 2) - 0xc8) = fconvert.s(float.t(j_2 * 2))
                *(ebx_22 + (edx_16 << 2) - 0xc4) = 0x43340000
                *(ebx_22 + (edx_16 << 2) - 0xc0) = 0
                *(ebx_22 + (edx_16 << 2) - 0xbc) =
                    fconvert.s(data_4f45dc * fconvert.t(*(ebx_22 - 0x2c4e8)) - fconvert.t(30f))
            
            *(ebx_22 + 0x897c) = i_11
            *(ebx_22 + 0x8984) = 0x43890000
            i_11 += 1
            ebx_22 += 0x8d14
        while (i_11 != 0xb)
        
        *(data_5301b0 + 0x3d7f4) = 7
        *(data_5301b0 + 0x3d7f8) = 0xc1a00000
        *(data_5301b0 + 0x3d7fc) = 0x43890000
        *(data_5301b0 + 0x3d800) = 0xc3be0000
        *(data_5301b0 + 0x3d80c) = fconvert.s(fconvert.t(*(data_5301b0 + 0x3d80c)) + fconvert.t(55f))
        *(data_5301b0 + 0x46508) = 8
        *(data_5301b0 + 0x4650c) = 0x43340000
        *(data_5301b0 + 0x46510) = 0x43890000
        *(data_5301b0 + 0x46514) = 0xc4960000
        *(data_5301b0 + 0x4f21c) = 9
        *(data_5301b0 + 0x4f220) = 0x44430000
        *(data_5301b0 + 0x4f224) = 0x43890000
        *(data_5301b0 + 0x4f228) = 0xc49b0000
        *(data_5301b0 + 0x57f30) = 0xa
        *(data_5301b0 + 0x57f34) = 0x44898000
        *(data_5301b0 + 0x57f38) = 0x43890000
        *(data_5301b0 + 0x57f3c) = 0xc44d0000
    
    sub_5096d8()
    char var_6
    int32_t result
    result.b = var_6
    return result
}
