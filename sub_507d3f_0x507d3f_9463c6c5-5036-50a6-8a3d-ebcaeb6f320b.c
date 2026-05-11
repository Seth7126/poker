// ============================================================
// 函数名称: sub_507d3f
// 虚拟地址: 0x507d3f
// WARP GUID: 9463c6c5-5036-50a6-8a3d-ebcaeb6f320b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_403e4c, sub_40401c, sub_50d9e0, sub_50e368, sub_50e22c, sub_402b4c, sub_403e1c, sub_403010, sub_4ce5b4, sub_402bc0, sub_408e1c, sub_50d2f4, sub_402b90, sub_4c2d7c, sub_4c2f1c, sub_511198, sub_50a53c, sub_46910c, sub_4c0924
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_507d3f(void* arg1, void* arg2, void* arg3 @ ebp, void* arg4 @ esi, long double arg5 @ st0)
{
    // 第一条实际指令: int32_t temp1 = *0x66000000
    int32_t temp1 = *0x66000000
    *0x66000000 += 1
    int32_t eflags
    void* entry___return_addr
    bool c
    
    if (c)
        *(arg3 - 0x75) += arg2.b
        int32_t* eax
        eax.b = __in_al_dx(arg2.w, eflags)
        __return_addr = entry___return_addr
        sub_46910c(*data_530304, "f_netzwerkspiel", eax)
        
        if (*(*data_5301f4 + 0x111fa) != 0)
            sub_46910c(*data_530304, "f_internetspiel", eax)
        
        return 
    
    void* entry___return_addr_1
    void* entry___return_addr_2 = entry___return_addr_1
    int32_t (* arg_8)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3)
    int32_t* esp = &arg_8
    *(arg4 + 0x74)
    void* ebp_1 = *(arg4 + 0x74) * 0x656e7265
    bool o = unimplemented  {imul ebp, dword [esi+0x74], 0x656e7265}
    char* gsbase
    
    if (temp1 == 0xffffffff)
        *(gsbase + arg1) += arg1.b
    else if (o)
        if (temp1 + 1 s< 0)
            *(entry___return_addr + 0x55c033f8)
            entry___return_addr_1 = j_sub_4037f0
            TEB* fsbase
            __return_addr = *(fsbase + arg1)
            *(fsbase + arg1) = &__return_addr
            
            if (sub_4c0924() != 0)
                int32_t eax_30 = sub_50a53c(entry___return_addr)
                
                if (*(*data_530454 + 0x1e4) == 0)
                label_50807e:
                    
                    if (entry___return_addr == *(*data_5301f4 + 0x10020))
                        int32_t eax_65 = sub_50a53c(entry___return_addr) * 0xe9
                        bool o_6 = unimplemented  {imul eax, eax, 0xe9}
                        
                        if (o_6)
                            sub_403010()
                            noreturn
                        
                        eax_65.b = *(*data_530454 + (eax_65 << 2) - 0x50)
                        
                        if (eax_65.b - 1 u< 2
                                && (entry___return_addr != 1 || *(*data_530454 + 0x1b5) != 0))
                            char eax_71
                            eax_71, ebp_1 = sub_4ce5b4(*data_53067c)
                            
                            if (eax_71 != 0 && *(*data_5301f4 + 0x10004) == 3
                                    && *(*data_5301f4 + 0xffec) == 4)
                                if (*(*data_530454 + 0x1b4) == 0 || (*(*data_530454 + 0x1e0) != 0
                                        && *(*data_5301f4 + 0x200a8) != 0))
                                    sub_403e4c(entry___return_addr_2, 0x508218)
                                else
                                    sub_402bc0(ebp_1 - 0x10, 0x50821c)
                                    int32_t eax_85
                                    int32_t edx_14
                                    eax_85, edx_14 =
                                        sub_402b4c(sub_511198(*data_530454) * fconvert.t(100f))
                                    bool o_7 = unimplemented  {adc edx, 0x0}
                                    
                                    if (o_7)
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebp_1 - 0x13) = eax_85.b + 0x64
                                    *(ebp_1 - 0x14) = 1
                                    sub_40401c(sub_402b90(ebp_1 - 0x10, ebp_1 - 0x14, 2), ebp_1 - 0x10)
                else
                    if (*data_530538 == 0)
                        void* eax_34 = data_5302c8
                        *eax_34
                        bool o_1 = unimplemented  {imul eax, dword [eax], 0x1038}
                        
                        if (o_1)
                            sub_403010()
                            noreturn
                        
                        if (*(*(*data_530304 + 0xab0) + *eax_34 * 0x81c0 + 1) == 0)
                            goto label_50807e
                    
                    if (*data_530538 != 0 || *(*data_5301f4 + 0xffec) == 5)
                        bool o_2 = unimplemented  {imul eax, esi, 0xe9}
                        
                        if (o_2)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_39
                        eax_39.b = *(*data_530454 + eax_30 * 0x3a4 - 0x50)
                        
                        if (eax_39.b != 0)
                            bool o_3 = unimplemented  {imul edx, esi, 0xe9}
                            
                            if (o_3)
                                sub_403010()
                                noreturn
                            
                            *data_530454
                            
                            if (eax_39.b - 1 u< 2)
                                char eax_42 = sub_4c2d7c(entry___return_addr)
                                char eax_44
                                
                                if (eax_42 != 0)
                                    eax_44 = sub_4c2f1c(entry___return_addr)
                                
                                if (eax_42 == 0 || eax_44 == 0)
                                    char eax_49 = sub_4c2d7c(entry___return_addr)
                                    char eax_51
                                    
                                    if (eax_49 == 0)
                                        eax_51 = sub_4c2f1c(entry___return_addr)
                                    
                                    if (eax_49 != 0 || eax_51 == 0)
                                        bool o_4 = unimplemented  {imul eax, esi, 0xe9}
                                        
                                        if (o_4)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(*data_530454 + eax_30 * 0x3a4 + 0x188) != 1)
                                            if (*(*data_530304 + 0xce0) == 0)
                                                if (entry___return_addr != 1)
                                                    sub_403e4c(entry___return_addr_2, 0x508218)
                                            else if (entry___return_addr != 1)
                                                int32_t var_4_1 = 0x508200
                                                bool o_5 = unimplemented  {imul eax, esi, 0xe9}
                                                
                                                if (o_5)
                                                    sub_403010()
                                                    noreturn
                                                
                                                sub_408e1c(*(*data_530454 + eax_30 * 0x3a4 + 0x188), 
                                                    ebp_1 - 0xc)
                                                int32_t var_8_1 = *(ebp_1 - 0xc)
                                                void* const var_c_1 = &data_50820c
                                                sub_404138(entry___return_addr_2, 3)
                                        else if (entry___return_addr != 1)
                                            sub_403e4c(entry___return_addr_2, U"~")
                                    else
                                        sub_403e4c(entry___return_addr_2, 0x5081e8)
                                else
                                    ebp_1 = sub_46910c(*data_530304, "f_ausgeschieden2", ebp_1 - 8)
                                    sub_403e4c(entry___return_addr_2, *(ebp_1 - 8))
            
            fsbase->NtTib.ExceptionList = __return_addr
            arg_8 = sub_5081b9
            sub_403e1c(ebp_1 - 0xc, 2)
            return 
        
        entry___return_addr_1 = arg1
        esp = &entry___return_addr_1
        *(arg2 + 0x653be801) += arg2:1.b
        *arg1 += arg1.b
    else
        uint8_t* edi_1
        uint8_t temp0_2
        temp0_2, edi_1 = __insb(entry___return_addr_2, arg2.w, eflags)
        *edi_1 = temp0_2
        *(ebp_1 - 0x75) += arg2.b
        arg1.b = __in_al_dx(arg2.w, eflags)
        entry___return_addr_1 = entry___return_addr
        __return_addr = arg4
        esp = &__return_addr
        *(*data_530454 + 0x1c8) = 0
        char eax_12
        
        if (*data_530084 != 0)
            eax_12 = sub_50d9e0(*data_530084)
        
        if (*data_530084 == 0 || eax_12 == 0)
            if (*data_530084 != 0)
                *data_530454
                
                if (sub_50d2f4() != 0 && arg1 == 2)
                    *(*data_530084 + 0x1b1f6) = 0
                    sub_50e22c(*data_530084)
        else if (arg1 == 1)
            sub_50e368(*data_530084, 0, nullptr)
        else if (arg1 == 2)
            sub_50e22c(*data_530084)
        else if (arg1 == 3)
            arg2.b = 1
            sub_50e368(*data_530084, arg2.b, "Internetspiel starten..")
    *esp
    esp[1]
    esp[2]
}
