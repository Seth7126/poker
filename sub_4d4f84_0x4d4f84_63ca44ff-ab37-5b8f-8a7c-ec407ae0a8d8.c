// ============================================================
// 函数名称: sub_4d4f84
// 虚拟地址: 0x4d4f84
// WARP GUID: 63ca44ff-ab37-5b8f-8a7c-ec407ae0a8d8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_47a1c0, sub_403e4c, sub_4ca778, sub_4d5b64, sub_402bdc, sub_403010, sub_4cac30, sub_4ca100, sub_4ca218, sub_404080, sub_4ca36c, sub_4d0148, sub_4d00b8, sub_4d2a58, sub_4c094c, sub_4cff1c, sub_409bbc, sub_403df8, sub_4cb03c, sub_507d4c, sub_4c0924, sub_4d5b1c
// [被调用的父级函数]: sub_4dad04, sub_4f8b60
// ============================================================

char** __convention("regparm")sub_4d4f84(char arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t entry_ebx
    int32_t var_16c = entry_ebx
    int32_t esi
    int32_t var_170 = esi
    int32_t edi
    int32_t var_174 = edi
    void* var_168 = nullptr
    char* var_64 = nullptr
    int32_t* var_178 = &var_4
    int32_t (* var_17c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_4c0924() == 0 || *(*data_5301f4 + 0xffec) == 2 || *data_5302d0 s< 1)
        int32_t var_30_1 = 0
    else
        int32_t var_30 = 0x3f800000
    
    if (*(*data_5301f4 + 4) == 7)
        int32_t var_14_1
        int32_t var_10_1
        
        if (sub_4ca100() == 0)
            var_10_1 = sub_4ca36c()
            var_14_1 = sub_4ca778(0)
        else
            var_10_1 = sub_4cac30()
            var_14_1 = sub_4cb03c(0)
        
        int32_t i_5 = *data_5300d0
        
        if (i_5 s> 0)
            int32_t i_3 = i_5
            int32_t var_c_1 = 1
            int32_t i
            
            do
                int80_t var_18c
                
                if (var_c_1 == var_10_1 || (*(*data_5301f4 + 0x111f9) != 0 &&
                        (*(*data_5301f4 + 0x1002c) == var_c_1 || *(*data_5301f4 + 0x10030) == var_c_1)))
                    var_18c:8.d = 1
                    
                    if (add_overflow(var_c_1, 0xa))
                        sub_403010()
                        noreturn
                    
                    sub_47a1c0(*(data_530208 + ((var_c_1 + 0xa) << 2)), *data_530a74, *data_530304)
                else
                    var_18c:8.d = 0
                    
                    if (add_overflow(var_c_1, 0xa))
                        sub_403010()
                        noreturn
                    
                    sub_47a1c0(*(data_530208 + ((var_c_1 + 0xa) << 2)), *data_530a74, *data_530304)
                
                if (var_c_1 != var_14_1)
                    var_18c:8.d = 0
                    
                    if (add_overflow(var_c_1, 0x12))
                        sub_403010()
                        noreturn
                    
                    sub_47a1c0(*(data_530208 + ((var_c_1 + 0x12) << 2)), *data_530a74, *data_530304)
                else
                    var_18c:8.d = 1
                    
                    if (add_overflow(var_c_1, 0x12))
                        sub_403010()
                        noreturn
                    
                    sub_47a1c0(*(data_530208 + ((var_c_1 + 0x12) << 2)), *data_530a74, *data_530304)
                
                var_c_1 += 1
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        int80_t var_18c_1 = sub_4ca218(2)
        sub_409bbc(&var_64)
        sub_403e4c(*data_530454 + 0x4c0c, var_64)
        
        for (char i_1 = 0; i_1 != 2; i_1 += 1)
            int32_t eax_43 = *data_5300d0
            
            if (eax_43 s>= 0xffffffff)
                int32_t j_1 = eax_43 + 2
                int32_t var_c_2 = 0xffffffff
                int32_t j
                
                do
                    int32_t esi_1 = var_c_2
                    
                    if (var_c_2 == 0xffffffff)
                        esi_1 = 9
                    
                    if (var_c_2 == 0)
                        esi_1 = 0xa
                    
                    if (arg1 != 1)
                        entry_ebx.b = 6
                    
                    bool k
                    
                    do
                        int32_t eax_46
                        eax_46.b = entry_ebx.b
                        bool o_5 = unimplemented  {imul eax, eax, 0xd4f}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        bool o_6 = unimplemented  {imul edx, esi, 0x2e9c}
                        
                        if (o_6)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_48 = *(esi_1 * 0x174e0 + &data_532f70 + eax_46 * 0x353c - 0x14010)
                        
                        if (add_overflow(eax_48, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (eax_48 - 1 s>= 0)
                            int32_t var_38_1 = eax_48
                            int32_t var_10_2 = 0
                            int32_t temp19_1
                            
                            do
                                int32_t edi_3
                                
                                if (i_1 == 0 || arg1 != 0)
                                    edi_3 = var_10_2
                                else
                                    int32_t eax_51
                                    eax_51.b = entry_ebx.b
                                    bool o_8 = unimplemented  {imul eax, eax, 0xd4f}
                                    
                                    if (o_8)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_9 = unimplemented  {imul edx, esi, 0x2e9c}
                                    
                                    if (o_9)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t edi_1 =
                                        *(esi_1 * 0x174e0 + &data_532f70 + eax_51 * 0x353c - 0x14010)
                                    
                                    if (add_overflow(edi_1, 0xffffffff))
                                        sub_403010()
                                        noreturn
                                    
                                    edi_3 = edi_1 - 1 - var_10_2
                                    
                                    if (add_overflow(edi_1 - 1, neg.d(var_10_2)))
                                        sub_403010()
                                        noreturn
                                
                                int32_t eax_53
                                eax_53.b = entry_ebx.b
                                bool o_12 = unimplemented  {imul eax, eax, 0xd4f}
                                
                                if (o_12)
                                    sub_403010()
                                    noreturn
                                
                                bool o_13 = unimplemented  {imul edx, esi, 0x2e9c}
                                
                                if (o_13)
                                    sub_403010()
                                    noreturn
                                
                                bool o_14 = unimplemented  {imul edx, edi, 0xa}
                                
                                if (o_14)
                                    sub_403010()
                                    noreturn
                                
                                void* eax_55
                                eax_55.b = *(esi_1 * 0x174e0 +
                                    &data_532f70 + eax_53 * 0x353c + edi_3 * 0x50 - 0x174c8)
                                int32_t edx_20
                                edx_20.b = eax_55.b == 0
                                
                                if (edx_20.b == i_1)
                                    int32_t var_24_1 = 0
                                    char var_1c_1 = 0
                                    char var_19_1 = 0
                                    char var_1d_1 = 0
                                    int32_t edx_21
                                    edx_21.b = entry_ebx.b
                                    bool o_15 = unimplemented  {imul edx, edx, 0xd4f}
                                    
                                    if (o_15)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_16 = unimplemented  {imul ecx, esi, 0x2e9c}
                                    
                                    if (o_16)
                                        sub_403010()
                                        noreturn
                                    
                                    var_18c_1:8.d = esi_1 * 0x174e0 + &data_532f70 + edx_21 * 0x353c
                                    bool o_17 = unimplemented  {imul edx, edi, 0xa}
                                    
                                    if (o_17)
                                        sub_403010()
                                        noreturn
                                    
                                    bool var_1a_1 = eax_55.b == 0
                                    int32_t eax_59
                                    
                                    if (var_1a_1 == 0)
                                        eax_59 = 0
                                    else
                                        int32_t eax_56
                                        eax_56.b = entry_ebx.b
                                        bool o_18 = unimplemented  {imul eax, eax, 0xd4f}
                                        
                                        if (o_18)
                                            sub_403010()
                                            noreturn
                                        
                                        bool o_19 = unimplemented  {imul edx, esi, 0x2e9c}
                                        
                                        if (o_19)
                                            sub_403010()
                                            noreturn
                                        
                                        void* eax_58 = esi_1 * 0x174e0 + &data_532f70 + eax_56 * 0x353c
                                        int32_t edx_27 = edi_3 * 0xa
                                        bool o_20 = unimplemented  {imul edx, edi, 0xa}
                                        
                                        if (o_20)
                                            sub_403010()
                                            noreturn
                                        
                                        *(eax_58 + (edx_27 << 3) - 0x174c4)
                                        bool o_21 =
                                            unimplemented  {imul eax, dword [eax+edx*8-0x174c4], 0x2}
                                        
                                        if (o_21)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(data_61c0d0 + *(eax_58 + (edx_27 << 3) - 0x174c4) * 0x10
                                                + 0x1a) == 6)
                                            eax_59.b = 1
                                        else
                                            eax_59 = 0
                                    
                                    char var_1b_1 = eax_59.b
                                    int32_t eax_60
                                    eax_60.b = entry_ebx.b
                                    bool o_22 = unimplemented  {imul eax, eax, 0xd4f}
                                    
                                    if (o_22)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_23 = unimplemented  {imul edx, esi, 0x2e9c}
                                    
                                    if (o_23)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_24 = unimplemented  {imul edx, edi, 0xa}
                                    
                                    if (o_24)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(esi_1 * 0x174e0 +
                                            &data_532f70 + eax_60 * 0x353c + edi_3 * 0x50 - 0x174c8) != 2)
                                        int32_t eax_76
                                        eax_76.b = entry_ebx.b
                                        bool o_40 = unimplemented  {imul eax, eax, 0xd4f}
                                        
                                        if (o_40)
                                            sub_403010()
                                            noreturn
                                        
                                        bool o_41 = unimplemented  {imul edx, esi, 0x2e9c}
                                        
                                        if (o_41)
                                            sub_403010()
                                            noreturn
                                        
                                        bool o_42 = unimplemented  {imul edx, edi, 0xa}
                                        
                                        if (o_42)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(esi_1 * 0x174e0 +
                                                &data_532f70 + eax_76 * 0x353c + edi_3 * 0x50 - 0x174c8) != 3
                                                && arg1 != 6)
                                            if (arg1 == 3 && var_1a_1 == 0)
                                                var_24_1 = 1
                                                void* eax_80
                                                eax_80.b = *(*data_530304 + 0xdfa)
                                                
                                                if (eax_80.b != 0)
                                                    var_24_1 = 2
                                                
                                                if (*(*data_530304 + 0xdfb) != 0)
                                                    var_24_1 = 3
                                                
                                                data_530304
                                                
                                                if (eax_80.b != 0
                                                        && sub_4d0148(edi_3, esi_1, entry_ebx.b == 4)
                                                        s> 0x19)
                                                    var_19_1 = 1
                                                
                                                if (*(*data_530304 + 0xdfa) != 0)
                                                    int32_t eax_91
                                                    
                                                    if (mods.dp.d(sx.q(edi_3), 3) != 0)
                                                        eax_91 = 0
                                                    else
                                                        int32_t eax_88
                                                        eax_88.b = entry_ebx.b
                                                        bool o_43 =
                                                            unimplemented  {imul eax, eax, 0xd4f}
                                                        
                                                        if (o_43)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_44 =
                                                            unimplemented  {imul edx, esi, 0x2e9c}
                                                        
                                                        if (o_44)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        int32_t eax_90 = *(esi_1 * 0x174e0 +
                                                            &data_532f70 + eax_88 * 0x353c - 0x14010)
                                                        
                                                        if (add_overflow(eax_90, 0xffffffff))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (add_overflow(edi_3, 2))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (eax_90 - 1 s>= edi_3 + 2)
                                                            eax_91.b = 1
                                                        else
                                                            eax_91 = 0
                                                    
                                                    var_1c_1 = eax_91.b
                                                    
                                                    if (var_1c_1 == 0)
                                                        var_19_1 = 1
                                                        int32_t eax_92
                                                        eax_92.b = entry_ebx.b
                                                        bool o_47 =
                                                            unimplemented  {imul eax, eax, 0xd4f}
                                                        
                                                        if (o_47)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_48 =
                                                            unimplemented  {imul edx, esi, 0x2e9c}
                                                        
                                                        if (o_48)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        int32_t eax_94 = *(esi_1 * 0x174e0 +
                                                            &data_532f70 + eax_92 * 0x353c - 0x14010)
                                                        
                                                        if (add_overflow(eax_94, 0xffffffff))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (mods.dp.d(sx.q(eax_94 - 1), 3) u< 2)
                                                            int32_t eax_98
                                                            eax_98.b = entry_ebx.b
                                                            bool o_50 =
                                                                unimplemented  {imul eax, eax, 0xd4f}
                                                            
                                                            if (o_50)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            bool o_51 =
                                                                unimplemented  {imul edx, esi, 0x2e9c}
                                                            
                                                            if (o_51)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_100 = *(esi_1 * 0x174e0 +
                                                                &data_532f70 + eax_98 * 0x353c
                                                                - 0x14010)
                                                            
                                                            if (add_overflow(eax_100, 0xffffffff))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (edi_3 == eax_100 - 1)
                                                                var_19_1 = 0
                                                        
                                                        int32_t eax_102
                                                        eax_102.b = entry_ebx.b
                                                        bool o_53 =
                                                            unimplemented  {imul eax, eax, 0xd4f}
                                                        
                                                        if (o_53)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_54 =
                                                            unimplemented  {imul edx, esi, 0x2e9c}
                                                        
                                                        if (o_54)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        int32_t eax_104 = *(esi_1 * 0x174e0 +
                                                            &data_532f70 + eax_102 * 0x353c - 0x14010)
                                                        
                                                        if (add_overflow(eax_104, 0xffffffff))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (mods.dp.d(sx.q(eax_104 - 1), 3) == 1)
                                                            int32_t eax_108
                                                            eax_108.b = entry_ebx.b
                                                            bool o_56 =
                                                                unimplemented  {imul eax, eax, 0xd4f}
                                                            
                                                            if (o_56)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            bool o_57 =
                                                                unimplemented  {imul edx, esi, 0x2e9c}
                                                            
                                                            if (o_57)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_110 = *(esi_1 * 0x174e0 +
                                                                &data_532f70 + eax_108 * 0x353c
                                                                - 0x14010)
                                                            
                                                            if (add_overflow(eax_110, 0xfffffffe))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (edi_3 == eax_110 - 2)
                                                                var_19_1 = 0
                                            else if (arg1 == 2 && (var_1a_1 == 0 || var_1b_1 != 0)
                                                    && *(*data_530304 + 0xdfa) != 0)
                                                var_24_1 = 1
                                                
                                                if (*(*data_530304 + 0xdfa) != 0)
                                                    var_24_1 = 2
                                                
                                                if (*(*data_530304 + 0xdfb) != 0)
                                                    var_24_1 = 3
                                                
                                                int32_t eax_118
                                                eax_118.b = entry_ebx.b
                                                bool o_59 = unimplemented  {imul eax, eax, 0xd4f}
                                                
                                                if (o_59)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_60 = unimplemented  {imul edx, esi, 0x2e9c}
                                                
                                                if (o_60)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_61 = unimplemented  {imul edx, edi, 0xa}
                                                
                                                if (o_61)
                                                    sub_403010()
                                                    noreturn
                                                
                                                var_19_1 = sub_4d00b8(esi_1 * 0x174e0 + &data_532f70
                                                    + eax_118 * 0x353c + edi_3 * 0x50 - 0x174e0)
                                                int32_t eax_123
                                                eax_123.b = entry_ebx.b
                                                bool o_62 = unimplemented  {imul eax, eax, 0xd4f}
                                                
                                                if (o_62)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_63 = unimplemented  {imul edx, esi, 0x2e9c}
                                                
                                                if (o_63)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_64 = unimplemented  {imul edx, edi, 0xa}
                                                
                                                if (o_64)
                                                    sub_403010()
                                                    noreturn
                                                
                                                var_1c_1 = sub_4cff1c(esi_1 * 0x174e0 + &data_532f70
                                                    + eax_123 * 0x353c + edi_3 * 0x50 - 0x174e0)
                                            
                                            if (*(*data_530304 + 0xdfa) != 0)
                                                int32_t eax_130
                                                eax_130.b = entry_ebx.b
                                                bool o_65 = unimplemented  {imul eax, eax, 0xd4f}
                                                
                                                if (o_65)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_66 = unimplemented  {imul edx, esi, 0x2e9c}
                                                
                                                if (o_66)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_67 = unimplemented  {imul edx, edi, 0xa}
                                                
                                                if (o_67)
                                                    sub_403010()
                                                    noreturn
                                                
                                                var_1d_1 = sub_4d00b8(esi_1 * 0x174e0 + &data_532f70
                                                    + eax_130 * 0x353c + edi_3 * 0x50 - 0x174e0).b
                                            
                                            if (arg1 != 0)
                                                if (arg1 == 1)
                                                label_4d5891:
                                                    int32_t eax_137
                                                    eax_137.b = entry_ebx.b
                                                    bool o_68 = unimplemented  {imul eax, eax, 0xd4f}
                                                    
                                                    if (o_68)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_69 = unimplemented  {imul edx, esi, 0x2e9c}
                                                    
                                                    if (o_69)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_70 = unimplemented  {imul edx, edi, 0xa}
                                                    
                                                    if (o_70)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    var_19_1 = sub_4d00b8(esi_1 * 0x174e0 + &data_532f70
                                                        + eax_137 * 0x353c + edi_3 * 0x50 - 0x174e0)
                                                    int32_t eax_142
                                                    eax_142.b = entry_ebx.b
                                                    bool o_71 = unimplemented  {imul eax, eax, 0xd4f}
                                                    
                                                    if (o_71)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_72 = unimplemented  {imul edx, esi, 0x2e9c}
                                                    
                                                    if (o_72)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_73 = unimplemented  {imul edx, edi, 0xa}
                                                    
                                                    if (o_73)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    var_1c_1 = sub_4cff1c(esi_1 * 0x174e0 + &data_532f70
                                                        + eax_142 * 0x353c + edi_3 * 0x50 - 0x174e0).b
                                            else if (var_1a_1 == 0)
                                                if ((entry_ebx.b != 6 && (*(*data_530304 + 0xdfb) != 0
                                                        || *(*data_530304 + 0xdc0) s<= 2)) || arg1 == 1)
                                                    goto label_4d5891
                                            else if ((var_1b_1 != 0 && entry_ebx.b != 6 && (
                                                    *(*data_530304 + 0xdfb) != 0
                                                    || *(*data_530304 + 0xdc0) s<= 2)) || arg1 == 1)
                                                goto label_4d5891
                                            
                                            if (var_19_1 == 0)
                                                if (arg1 == 1)
                                                    int32_t var_28_1
                                                    
                                                    if (esi_1 != 1)
                                                        int32_t eax_150 = sub_4d5b1c(entry_ebx.b)
                                                        
                                                        if (add_overflow(eax_150, 0x14))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        var_28_1 = eax_150 + 0x14
                                                    else
                                                        int32_t eax_147 = sub_4d5b1c(entry_ebx.b)
                                                        
                                                        if (add_overflow(eax_147, 0xa))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        var_28_1 = eax_147 + 0xa
                                                    
                                                    var_18c_1:8.d = var_28_1
                                                    (*data_5307b0)()
                                                    var_24_1 = 3
                                                
                                                void* eax_129
                                                eax_129.b = var_1c_1
                                                var_18c_1:8.d = eax_129
                                                eax_129.b = var_1d_1
                                                var_18c_1:4.d = eax_129
                                                int32_t eax_155
                                                eax_155.b = entry_ebx.b
                                                bool o_76 = unimplemented  {imul eax, eax, 0xd4f}
                                                
                                                if (o_76)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_77 = unimplemented  {imul edx, esi, 0x2e9c}
                                                
                                                if (o_77)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_78 = unimplemented  {imul edx, edi, 0xa}
                                                
                                                if (o_78)
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t edx_88
                                                edx_88.b = arg1
                                                sub_4d2a58(esi_1 * 0x174e0 + &data_532f70
                                                    + eax_155 * 0x353c + edi_3 * 0x50 - 0x174e0)
                                    else
                                        if (entry_ebx.b != 6 || esi_1 == 9)
                                            int32_t edx_35
                                            edx_35.b = entry_ebx.b
                                            int32_t edx_36 = edx_35 * 0xd4f
                                            bool o_28 = unimplemented  {imul edx, edx, 0xd4f}
                                            
                                            if (o_28)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_66 = esi_1 * 0x2e9c
                                            bool o_29 = unimplemented  {imul eax, esi, 0x2e9c}
                                            
                                            if (o_29)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t temp27_1 = *((eax_66 << 3) +
                                                &data_532f70 + (edx_36 << 2) - 0x14010)
                                            *((eax_66 << 3) +
                                                &data_532f70 + (edx_36 << 2) - 0x14010) -= 1
                                            
                                            if (add_overflow(temp27_1, 0xffffffff))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t edx_37
                                            edx_37.b = entry_ebx.b
                                            bool o_31 = unimplemented  {imul edx, edx, 0xd4f}
                                            
                                            if (o_31)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_68 = *((eax_66 << 3) +
                                                &data_532f70 + edx_37 * 0x353c - 0x14010)
                                            
                                            if (add_overflow(eax_68, 0xffffffff))
                                                sub_403010()
                                                noreturn
                                            
                                            if (eax_68 - 1 s>= edi_3)
                                                int32_t var_3c_1 = eax_68 - 1 - edi_3 + 1
                                                bool o_33 = unimplemented  {imul eax, eax, 0xa}
                                                
                                                if (o_33)
                                                    sub_403010()
                                                    noreturn
                                                
                                                void* eax_74 = edi_3 * 0x50 + &data_532f70
                                                int32_t temp47_1
                                                
                                                do
                                                    bool o_34 = unimplemented  {imul edx, esi, 0x2e9c}
                                                    
                                                    if (o_34)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t ecx_9
                                                    ecx_9.b = entry_ebx.b
                                                    bool o_35 = unimplemented  {imul ecx, ecx, 0xd4f}
                                                    
                                                    if (o_35)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    var_18c_1:8.d = eax_74 + esi_1 * 0x174e0
                                                        + ecx_9 * 0x353c - 0x17490
                                                    bool o_36 = unimplemented  {imul edx, esi, 0x2e9c}
                                                    
                                                    if (o_36)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t ecx_11
                                                    ecx_11.b = entry_ebx.b
                                                    bool o_37 = unimplemented  {imul ecx, ecx, 0xd4f}
                                                    
                                                    if (o_37)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t edi_4 = var_18c_1:8.d
                                                    var_18c_1:8.d = esi_1
                                                    __builtin_memcpy(
                                                        eax_74 + esi_1 * 0x174e0 + ecx_11 * 0x353c
                                                            - 0x174e0, 
                                                        edi_4, 0x50)
                                                    esi_1 = var_18c_1:8.d
                                                    eax_74 += 0x50
                                                    temp47_1 = var_3c_1
                                                    var_3c_1 -= 1
                                                while (temp47_1 != 1)
                                        else
                                            int32_t eax_63
                                            eax_63.b = entry_ebx.b
                                            bool o_25 = unimplemented  {imul eax, eax, 0xd4f}
                                            
                                            if (o_25)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_26 = unimplemented  {imul edx, esi, 0x2e9c}
                                            
                                            if (o_26)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_27 = unimplemented  {imul edx, edi, 0xa}
                                            
                                            if (o_27)
                                                sub_403010()
                                                noreturn
                                            
                                            *(esi_1 * 0x174e0 + &data_532f70 + eax_63 * 0x353c
                                                + edi_3 * 0x50 - 0x174c8) = 3
                                        
                                        int32_t eax_75 = esi_1 * 0x2e9c
                                        bool o_38 = unimplemented  {imul eax, esi, 0x2e9c}
                                        
                                        if (o_38)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t temp32_1 = (&data_532f6c)[eax_75 * 2]
                                        (&data_532f6c)[eax_75 * 2] -= 1
                                        
                                        if (add_overflow(temp32_1, 0xffffffff))
                                            sub_403010()
                                            noreturn
                                
                                var_10_2 += 1
                                temp19_1 = var_38_1
                                var_38_1 -= 1
                            while (temp19_1 != 1)
                        
                        k = entry_ebx.b == 0
                        
                        if (k == 0)
                            int32_t eax_160 = sub_4d5b1c(entry_ebx.b)
                            
                            if (add_overflow(eax_160, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            entry_ebx = sub_4d5b64(eax_160 - 1)
                        
                        if (entry_ebx.b == 5)
                            entry_ebx.b = 4
                    while (k == 0)
                    var_c_2 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
        
        int32_t eax_164 = *data_5300d0
        
        if (eax_164 s>= 0xffffffff)
            int32_t i_4 = eax_164 + 2
            int32_t var_c_3 = 0xffffffff
            int32_t i_2
            
            do
                int32_t esi_3 = var_c_3
                
                if (var_c_3 == 0xffffffff)
                    esi_3 = 9
                
                if (var_c_3 == 0)
                    esi_3 = 0xa
                
                char eax_167
                
                if (esi_3 == 0xa)
                    eax_167 = sub_4c094c()
                
                if (esi_3 != 0xa || eax_167 == 0 || *(*data_530454 + 0x1e4) == 0
                        || *(*data_5301f4 + 0x10148) s> 1 || *(*data_5301f4 + 0x4584) != 0)
                    char var_2a_2 = 0
                else
                    char var_2a_1 = 1
                    sub_507d4c(&var_168)
                    sub_404080(&var_168, " starten..")
                    char var_164[0x100]
                    sub_404054(&var_164, var_168, 0xff)
                    void var_5d
                    sub_402bdc(&var_5d, &var_164, 0x20)
                
                var_c_3 += 1
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_178_1 = 0x4d5aff
    sub_403df8(&var_168)
    char** result = &var_64
    sub_403df8(result)
    return result
}
