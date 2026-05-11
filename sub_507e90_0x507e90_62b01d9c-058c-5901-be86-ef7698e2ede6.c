// ============================================================
// 函数名称: sub_507e90
// 虚拟地址: 0x507e90
// WARP GUID: 62b01d9c-058c-5901-be86-ef7698e2ede6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2f1c, sub_404138, sub_403e4c, sub_408e1c, sub_511198, sub_40401c, sub_50a53c, sub_4ce5b4, sub_402bc0, sub_4c0924, sub_402b90, sub_4c2d7c, sub_402b4c, sub_403e1c, sub_46910c, sub_403010
// [被调用的父级函数]: sub_4c8a8f, sub_4c8a23, sub_4c8aa0
// ============================================================

int32_t __convention("regparm")sub_507e90(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_4c0924() != 0)
        int32_t eax_2 = sub_50a53c(arg2)
        
        if (*(*data_530454 + 0x1e4) == 0)
        label_50807e:
            
            if (arg2 == *(*data_5301f4 + 0x10020))
                int32_t eax_37 = sub_50a53c(arg2) * 0xe9
                bool o_6 = unimplemented  {imul eax, eax, 0xe9}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                eax_37.b = *(*data_530454 + (eax_37 << 2) - 0x50)
                
                if (eax_37.b - 1 u< 2 && (arg2 != 1 || *(*data_530454 + 0x1b5) != 0))
                    char eax_43
                    eax_43, ebp_1 = sub_4ce5b4(*data_53067c)
                    
                    if (eax_43 != 0 && *(*data_5301f4 + 0x10004) == 3 && *(*data_5301f4 + 0xffec) == 4)
                        if (*(*data_530454 + 0x1b4) == 0
                                || (*(*data_530454 + 0x1e0) != 0 && *(*data_5301f4 + 0x200a8) != 0))
                            sub_403e4c(arg1, 0x508218)
                        else
                            sub_402bc0(&ebp_1[-4], 0x50821c)
                            int32_t eax_57
                            int32_t edx_14
                            eax_57, edx_14 = sub_402b4c(sub_511198(*data_530454) * fconvert.t(100f))
                            bool o_7 = unimplemented  {adc edx, 0x0}
                            
                            if (o_7)
                                sub_403010()
                                noreturn
                            
                            *(ebp_1 - 0x13) = eax_57.b + 0x64
                            ebp_1[-5].b = 1
                            sub_40401c(sub_402b90(&ebp_1[-4], &ebp_1[-5], 2), &ebp_1[-4])
        else
            if (*data_530538 == 0)
                void* eax_6 = data_5302c8
                *eax_6
                bool o_1 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (*(*(*data_530304 + 0xab0) + *eax_6 * 0x81c0 + 1) == 0)
                    goto label_50807e
            
            if (*data_530538 != 0 || *(*data_5301f4 + 0xffec) == 5)
                bool o_2 = unimplemented  {imul eax, esi, 0xe9}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                int32_t eax_11
                eax_11.b = *(*data_530454 + eax_2 * 0x3a4 - 0x50)
                
                if (eax_11.b != 0)
                    bool o_3 = unimplemented  {imul edx, esi, 0xe9}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    *data_530454
                    
                    if (eax_11.b - 1 u< 2)
                        char eax_14 = sub_4c2d7c(arg2)
                        char eax_16
                        
                        if (eax_14 != 0)
                            eax_16 = sub_4c2f1c(arg2)
                        
                        if (eax_14 == 0 || eax_16 == 0)
                            char eax_21 = sub_4c2d7c(arg2)
                            char eax_23
                            
                            if (eax_21 == 0)
                                eax_23 = sub_4c2f1c(arg2)
                            
                            if (eax_21 != 0 || eax_23 == 0)
                                bool o_4 = unimplemented  {imul eax, esi, 0xe9}
                                
                                if (o_4)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*data_530454 + eax_2 * 0x3a4 + 0x188) != 1)
                                    if (*(*data_530304 + 0xce0) == 0)
                                        if (arg2 != 1)
                                            sub_403e4c(arg1, 0x508218)
                                    else if (arg2 != 1)
                                        int32_t var_34_1 = 0x508200
                                        bool o_5 = unimplemented  {imul eax, esi, 0xe9}
                                        
                                        if (o_5)
                                            sub_403010()
                                            noreturn
                                        
                                        sub_408e1c(*(*data_530454 + eax_2 * 0x3a4 + 0x188), &var_10)
                                        int32_t var_38_1 = var_10
                                        void* const var_3c_1 = &data_50820c
                                        sub_404138(arg1, 3)
                                        void var_8
                                        esp = &var_8
                                else if (arg2 != 1)
                                    sub_403e4c(arg1, U"~")
                            else
                                sub_403e4c(arg1, 0x5081e8)
                        else
                            ebp_1 = sub_46910c(*data_530304, "f_ausgeschieden2", &var_c)
                            sub_403e4c(arg1, ebp_1[-2])
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_5081b9
    return sub_403e1c(&ebp_1[-3], 2)
}
