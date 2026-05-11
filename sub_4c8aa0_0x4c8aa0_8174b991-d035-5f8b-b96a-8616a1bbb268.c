// ============================================================
// 函数名称: sub_4c8aa0
// 虚拟地址: 0x4c8aa0
// WARP GUID: 8174b991-d035-5f8b-b96a-8616a1bbb268
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_47a180, sub_4c9168, sub_47a1c0, sub_4837ec, sub_4cb50c, sub_4cca24, sub_507e90, sub_402bdc, sub_512cbc, sub_4cda5c, sub_403e1c, sub_403010, sub_4c2ca0, sub_403e90, sub_402c90, sub_404080, sub_47ab08, sub_4cc6dc, sub_4040c4, sub_4c4bec, sub_4cd498, sub_4c2d7c, sub_403df8, sub_47b258, sub_4c2be8, sub_4c4ab8, sub_46910c, sub_512d1c, sub_4c0924
// [被调用的父级函数]: sub_4c1fb8, sub_50b624, sub_4c8a23, sub_4c6c6f, sub_4c62e8, sub_4c95c4, sub_4c8a8f
// ============================================================

void* __convention("regparm")sub_4c8aa0(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_364 = ebx
    int32_t esi
    int32_t var_368 = esi
    int32_t edi
    int32_t var_36c = edi
    int32_t var_260 = 0
    int32_t var_158
    __builtin_memset(&var_158, 0, 0x18)
    void* var_c = nullptr
    int32_t* var_370 = &var_4
    int32_t (* var_374)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r0
    
    if (arg1 != 0x1b)
        if (arg1 != 0x1b)
            sub_4837ec(*data_530304, *data_530a74, true)
            
            for (int32_t i = 1; i != 9; i += 1)
                sub_47a1c0(i, *data_530a74, *data_530304, 0)
                sub_47a180(i, *data_530a74, *data_530304, 1)
            
            int32_t i_6 = 4
            void* esi_1 = data_530498
            int32_t i_1
            
            do
                sub_47a1c0(*esi_1, *data_530a74, *data_530304, 0)
                esi_1 += 4
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
            int32_t i_7 = 2
            void* esi_2 = data_5303bc
            int32_t i_2
            
            do
                sub_47a1c0(*esi_2, *data_530a74, *data_530304, 0)
                esi_2 += 4
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
            int32_t i_9 = *data_5300d0
            
            if (i_9 s> 0)
                void* ebx_3 = data_530678 + 4
                int32_t i_3
                
                do
                    sub_47b258(*ebx_3, *data_530a74, *data_530304, *data_5303ec)
                    ebx_3 += 4
                    i_3 = i_9
                    i_9 -= 1
                while (i_3 != 1)
            
            int32_t var_148
            void* ebp_2 = sub_4cda5c(*(*data_5301f4 + 0x21100), 0, &var_148)
            sub_4040c4(ebp_2 - 0x140, "Pot: ", *(ebp_2 - 0x144))
            sub_47ab08(*data_530304, *data_5302ec, 1, x87_r0, *(ebp_2 - 0x140))
            ebp_1 = sub_4cda5c(*(*data_5301f4 + 0x21104), 0, ebp_2 - 0x14c)
            sub_4040c4(&ebp_1[-0x52], "Einsatz: ", ebp_1[-0x53])
            sub_47ab08(*data_530304, *data_5302ec, 2, x87_r0, ebp_1[-0x52])
        
        int32_t i_10 = *data_5300d0
        
        if (i_10 s> 0)
            int32_t ebx_4 = 1
            ebp_1[-3] = data_52fed4 + 4
            int32_t i_4
            
            do
                bool o_1 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                char* edi_5 = *data_5301f4 + ebx_4 * 0x208 + 0x1fea0
                sub_403df8(&ebp_1[-2])
                
                if (ebp_1[-1] != 0x1b)
                    void** eax_42
                    eax_42.b = *edi_5
                    char temp2_1 = eax_42.b
                    eax_42.b -= 1
                    char temp4_1
                    
                    if (temp2_1 != 1)
                        temp4_1 = eax_42.b
                        eax_42.b -= 2
                    
                    if (temp2_1 == 1 || temp4_1 == 2)
                        int32_t eax_43 = sub_4c2ca0()
                        
                        if (eax_43 == 1)
                            eax_42 = sub_4c2be8(ebx_4)
                        
                        if (eax_43 != 1 || eax_42.b == 0)
                            eax_42.b = edi_5[2]
                            
                            switch (eax_42.b)
                                case 0
                                    if (sub_4cc6dc(ebx_4) == 0)
                                        edi_5[2] = 2
                                case 1
                                    eax_42.b = 6
                                    sub_4cb50c(eax_42.b, &ebp_1[-2])
                                case 2
                                    eax_42.b = 9
                                    sub_4cb50c(eax_42.b, &ebp_1[-2])
                                case 3
                                    eax_42.b = 7
                                    sub_4cb50c(eax_42.b, &ebp_1[-2])
                                case 4
                                    eax_42.b = 5
                                    sub_4cb50c(eax_42.b, &ebp_1[-0x54])
                                    sub_4040c4(&ebp_1[-2], ebp_1[-0x54], U" ")
                                case 5
                                    eax_42.b = 0xa
                                    sub_4cb50c(eax_42.b, &ebp_1[-0x55])
                                    sub_4040c4(&ebp_1[-2], ebp_1[-0x55], U" ")
                                case 7
                                    eax_42.b = 8
                                    sub_4cb50c(eax_42.b, &ebp_1[-2])
                                    
                                    if (edi_5[0xe] == 0)
                                        sub_403df8(&ebp_1[-2])
                                    
                                    int32_t ecx_13
                                    ecx_13.b = edi_5[0xe]
                                    sub_402c90(&edi_5[0xe], 0x4c912c, ecx_13 + 1)
                                    
                                    if (ecx_13 == 0xffffffff)
                                        sub_403df8(&ebp_1[-2])
                                case 8
                                    sub_4c4ab8(ebx_4, &ebp_1[-0x96])
                                    sub_4cd498(&ebp_1[-0x96], 0, &ebp_1[-0x4f])
                                    
                                    if (sub_4c4bec(ebx_4) != 0 || ebx_4 == 1)
                                        ebp_1, edi_5 = sub_4cca24(&ebp_1[-0x4f], &ebp_1[-2])
                                    
                                    if (sub_4cc6dc(ebx_4) s< *(*data_5301f4 + 0x21108))
                                        bool o_2 = unimplemented  {imul eax, ebx, 0x41}
                                        
                                        if (o_2)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(*data_5301f4 + ebx_4 * 0x208 + 0x20085) == 0)
                                            eax_42, ebp_1, i_10 =
                                                sub_46910c(*data_530304, "f_ausgeschieden2", &ebp_1[-2])
                                case 0xa
                                    sub_403df8(&ebp_1[-2])
                                case 0xb
                                    sub_403df8(&ebp_1[-2])
                        else
                            edi_5[2] = 9
                            eax_42, ebp_1, i_10 = sub_46910c(*data_530304, "f_gewinnt2", &ebp_1[-2])
                    
                    eax_42.b = edi_5[2]
                    eax_42.b -= 7
                    char temp7_1 = eax_42.b
                    eax_42.b -= 2
                    
                    if (temp7_1 u>= 2)
                        char temp8_1 = eax_42.b
                        eax_42.b -= 2
                        
                        if (temp8_1 != 2 && ebp_1[-2] != 0 && *(edi_5 + 4) != 0)
                            eax_42.b = edi_5[2]
                            eax_42.b -= 4
                            char temp10_1 = eax_42.b
                            eax_42.b -= 2
                            
                            if (temp10_1 u< 2)
                                ebp_1 = sub_4cda5c(*(edi_5 + 8), 0, &ebp_1[-0x97])
                                sub_404080(&ebp_1[-2], ebp_1[-0x97])
                
                sub_4c0924()
                char eax_62 = sub_4c0924()
                char eax_65
                
                if (eax_62 != 0)
                    eax_65 = sub_512d1c(*data_530454, ebx_4, 0)
                
                if (eax_62 == 0 || eax_65 == 0)
                    void* edi_6 = sub_507e90(&ebp_1[-2], ebx_4)
                    sub_402bdc(edi_6 + 0x13c, edi_6 + 0xa5, 0x96)
                    sub_404054(&ebp_1[-0xd7], ebp_1[-2], 0xff)
                    sub_402bdc(edi_6 + 0xa5, &ebp_1[-0xd7], 0x96)
                    
                    if (*(*data_5301f4 + ebx_4 + 0x10165) != 3)
                        if (sub_4c0924() != 0 && ebp_1[-2] == 0
                                && sub_512d1c(*data_530454, ebx_4, 0) == 0 && sub_4c2d7c(ebx_4) == 0
                                && sub_512cbc(*data_530454, ebx_4) != 0)
                            sub_403e90(&ebp_1[-2], 0x4c9164)
                        
                        if (ebp_1[-2] != 0)
                            ebx_4 =
                                sub_47ab08(*data_530304, *data_530a74, *ebp_1[-3], x87_r0, ebp_1[-2])
                        
                        sub_47a1c0(*ebp_1[-3], *data_530a74, *data_530304, (ebp_1[-2] != 0).b)
                
                ebx_4 += 1
                ebp_1[-3] += 4
                i_4 = i_10
                i_10 -= 1
            while (i_4 != 1)
        
        ebp_1 = sub_4c9168()
        
        if (sub_4c0924() == 0)
            sub_47a1c0(*data_5307f4, *data_530a74, *data_530304, 0)
    else if (sub_4c0924() != 0)
        int32_t i_8 = *(*data_530454 + 0x348)
        
        if (i_8 s> 0)
            int32_t ebx_1 = 1
            data_52fed4
            int32_t i_5
            
            do
                sub_403df8(&var_c)
                int32_t* edi_3 = sub_507e90(&var_c, ebx_1)
                
                if (var_c != 0)
                    ebx_1 = sub_47ab08(*data_530304, *data_530a74, *edi_3, x87_r0, var_c)
                    sub_47a1c0(*edi_3, *data_530a74, *data_530304, (var_c != 0).b)
                
                ebx_1 += 1
                i_5 = i_8
                i_8 -= 1
            while (i_5 != 1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_370_1 = 0x4c90ec
    sub_403df8(&ebp_1[-0x97])
    sub_403e1c(&ebp_1[-0x55], 6)
    sub_403df8(&ebp_1[-2])
    return &ebp_1[-2]
}
