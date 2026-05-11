// ============================================================
// 函数名称: sub_4f8b60
// 虚拟地址: 0x4f8b60
// WARP GUID: 12109da9-858a-53d4-9122-cf38823c7508
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a1c0, sub_4d4f84, sub_4f8278, sub_403e4c, sub_403e1c, sub_403010, sub_4fb834, sub_4fb48c, sub_4f49dc, sub_4f4d90, sub_4f9658, sub_4ee44c, sub_4f0c7c, sub_4f87f0, sub_4f89ac, sub_4f55c0, sub_4f4638, sub_48c290, sub_511670, sub_4f73cc, sub_4f6504, sub_50a53c, sub_4fc834, sub_4c0924
// [被调用的父级函数]: sub_4f9424
// ============================================================

int32_t __convention("regparm")sub_4f8b60(char arg1, bool arg2, char arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_88 = ebx
    int32_t esi
    int32_t var_8c = esi
    int32_t edi
    int32_t var_90 = edi
    int32_t var_84 = 0
    int32_t var_80 = 0
    int32_t var_7c = 0
    char ecx
    char var_49 = ecx
    int32_t* var_94 = &var_4
    int32_t (* var_98)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 == 1 || *(*data_530304 + 0xcf0) != 2)
        struct _EXCEPTION_REGISTRATION_RECORD* var_8
        
        if (arg3 != 0)
            sub_4ee44c()
            (*data_530838)(0x4100)
            int32_t var_c_1 = 0x3f800000
            int32_t var_10_1 = 0x41200000
            int32_t var_14_1 = 0x41200000
            int32_t var_18_1 = 0
            int32_t var_1c_1 = 2
            sub_48c290(*data_530304, "1234567890", nullptr, &var_7c, 0, 0, 0f, 1f, 0f)
            esp = &var_8
        else if (arg1 != 3)
            if (arg1 == 7)
                *data_530364 = 5
                
                if (*(*data_5301f4 + 0x2008c) == 0 && *(*data_53067c + 0x10) s> 1
                        && *(*data_53067c + 0x2a) == 6)
                    (*data_53006c)(0xb71)
                
                if (arg2 == 4)
                    *data_530364 = 3
                
                int32_t var_a0_1 = 0x3f800000
                int32_t var_a4_1 = 0x41200000
                int32_t var_a8_1 = 0x41200000
                int32_t var_ac_1 = 0
                int32_t var_b0_1 = 2
                sub_48c290(*data_530304, nullptr, nullptr, &var_80, 0, 0, 0f, 1f, 0f)
                esp = &ExceptionList
                int32_t i_2 = *(*data_5301f4 + 0x456c)
                long double x87_r0
                long double x87_r1
                
                if (i_2 s> 0)
                    void* ebx_2 = data_530850
                    int32_t i
                    
                    do
                        esi = sx.d(*ebx_2)
                        sub_4fc834(esi, esi, i_2, x87_r0, x87_r1)
                        ebx_2 += 2
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                sub_4fc834(9, esi, i_2, x87_r0, x87_r1)
                sub_4fc834(0xa, esi, i_2, x87_r0, x87_r1)
                int32_t i_3 = *(*data_5301f4 + 0x456c)
                
                if (i_3 s> 0)
                    void* ebx_3 = data_530850
                    int32_t i_1
                    
                    do
                        int32_t esi_1 = sx.d(*ebx_3)
                        
                        if (sub_4c0924() != 0 && esi_1 s>= 1 && esi_1 s<= *data_5300d0)
                            int32_t eax_32 = sub_50a53c(esi_1)
                            ebx_3, ebp_1 = sub_511670(*data_530454, eax_32, &ebp_1[-0x20])
                            sub_403e4c(data_5309b0, ebp_1[-0x20])
                            
                            if (*data_5309b0 == 0)
                                sub_47a1c0(*(data_530478 + (esi_1 << 2)), *data_530a74, *data_530304, 0)
                                esp = &ExceptionList
                            else
                                sub_47a1c0(*(data_530478 + (esi_1 << 2)), *data_530a74, *data_530304, 1)
                                sub_4fb48c(esi_1, 0)
                                void* eax_41 = data_530a74
                                *eax_41
                                bool o_1 = unimplemented  {imul eax, dword [eax], 0x1038}
                                
                                if (o_1)
                                    sub_403010()
                                    noreturn
                                
                                void* edx_7 = data_530478
                                *(edx_7 + (esi_1 << 2))
                                bool o_2 = unimplemented  {imul edx, dword [edx+esi*4], 0x23}
                                
                                if (o_2)
                                    sub_403010()
                                    noreturn
                                
                                sub_4fb834(*data_5309b0, esi_1, 
                                    *(*(*data_530304 + 0xab0) + *eax_41 * 0x81c0
                                        + *(edx_7 + (esi_1 << 2)) * 0x118 + 0x18))
                                esp = &ExceptionList
                        
                        ebx_3 += 2
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                if (*(*data_5301f4 + 0x2008c) == 0)
                    (*data_530034)(0xb71)
                    esp = &ExceptionList
            else if (arg1 == 5)
                sub_4f4638(&var_4)
                esp = &ExceptionList
            else if (arg1 != 2)
                if (arg1 == 4)
                    void* eax_62
                    eax_62.b = *(*data_530304 + 0xdfa)
                    data_52fe9c = eax_62.b
                    *data_530364 = 2
                    sub_4f9658()
                    void* eax_65
                    eax_65.b = *data_530364
                    ebp_1 = sub_4d4f84(eax_65.b)
                else if (arg1 u< 2)
                    sub_4ee44c()
                    bool var_39_1 = arg2 - 5 u< 2
                    bool var_5d_1 = arg2 == 5
                    
                    if (arg2 == 1 || arg1 == 0)
                        (*data_53006c)(0xb50)
                        esp = &ExceptionList
                    
                    if (arg2 == 1)
                        sub_4f0c7c(0xde1)
                        sub_4f0c7c(0xbe2)
                        (*data_530334)(0x306, 0x300)
                        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000)
                        (*data_53006c)(0xb71)
                        esp = &ExceptionList
                        char var_75_1 = 1
                    else if (arg2 == 0)
                        sub_4f0c7c(0xde1)
                        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000)
                        (*data_53006c)(0xbe2)
                        esp = &ExceptionList
                        char var_75_2 = 0
                    else if (arg2 - 5 u< 2)
                        (*data_53006c)(0xde1)
                        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000)
                        (*data_53006c)(0xbe2)
                        (*data_53006c)(0xb50)
                        esp = &ExceptionList
                        char var_75_3 = 0
                    
                    var_8 = 0xcd
                    int32_t var_c_2 = 0xffffff6a
                    int32_t var_10_2 = 0xfffffd7d
                    
                    if (arg1 != 0)
                        if (arg1 == 1)
                            int32_t var_74_2
                            
                            if (arg2 != 1)
                                int32_t var_40_3 = *(data_530598 + 0x398)
                                int32_t var_44_3 = *(data_530598 + 0x39c)
                                var_74_2 = *data_530a64
                                int32_t var_48_2 = *data_5304b8
                            else
                                int32_t var_40_2 = 1
                                int32_t var_44_2 = 1
                                var_74_2 = *data_5303d0
                                int32_t var_48_1 = 0
                            
                            (*data_53036c)(0xde1, var_74_2)
                            sub_4f89ac(&var_4)
                            esp = &var_8
                            int32_t eax_107 = *(data_530598 + 0x38c)
                            
                            if (eax_107 == 7)
                                sub_4f55c0(&var_4)
                                esp = &var_8
                            else if (eax_107 - 3 u>= 4)
                                data_530598
                                
                                if (eax_107 != 0)
                                    data_530598
                                    
                                    if (eax_107 != 1)
                                        data_530598
                                        
                                        if (eax_107 == 2)
                                            sub_4f8278(&var_4)
                                            esp = &var_8
                                    else
                                        sub_4f73cc(&var_4)
                                        esp = &var_8
                                else
                                    sub_4f4d90(&var_4)
                                    esp = &var_8
                            else
                                sub_4f6504(&var_4)
                                esp = &var_8
                    else if (arg2 != 1)
                        sub_4f87f0(&var_4)
                        int32_t var_40_1 = 1
                        int32_t var_44_1 = 1
                        (*data_53036c)(0xde1, *data_530730)
                        sub_4f49dc(&var_4)
                        esp = &var_8
                    
                    sub_4f0c7c(0xb50)
                    sub_4f0c7c(0xb71)
            else if (arg2 == 4)
                void* eax_54
                eax_54.b = *(*data_530304 + 0xdfa)
                data_52fe9c = eax_54.b
                *data_530364 = 3
                sub_4f9658()
            else if (arg2 != 2)
                void* eax
                eax.b = arg2
                char temp3_1 = eax.b
                eax.b -= 6
                
                if (temp3_1 == 6)
                    data_52fe9c = 1
                    *data_530364 = 1
                    sub_4f9658()
            else
                data_52fe9c = 0
                *data_530364 = 0
                sub_4f9658()
        else if (*(*data_5301f4 + 4) == 7)
            if (arg2 == 2)
                *data_530364 = 0
            
            if (arg2 == 4)
                *data_530364 = 3
            
            void* eax_10
            eax_10.b = *data_530364
            void* eax_11
            
            if (eax_10.b == 0)
                eax_11.b = *data_530364
                ebp_1 = sub_4d4f84(eax_11.b)
            else
                eax_10.b -= 2
                char temp1_1 = eax_10.b
                eax_10.b -= 2
                
                if (temp1_1 u< 2)
                    eax_11.b = *data_530364
                    ebp_1 = sub_4d4f84(eax_11.b)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4f91ae
    return sub_403e1c(&ebp_1[-0x20], 3)
}
