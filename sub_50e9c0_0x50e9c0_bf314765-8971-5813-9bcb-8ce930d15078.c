// ============================================================
// 函数名称: sub_50e9c0
// 虚拟地址: 0x50e9c0
// WARP GUID: bf314765-8971-5813-9bcb-8ce930d15078
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a180, sub_47a1c0, sub_404138, sub_40401c, sub_47b650, sub_403e1c, sub_403010, sub_403e90, sub_404078, sub_483950, sub_404188, sub_50f2e0, sub_50f288, sub_402bc0, sub_47ab08, sub_47b488, sub_404248, sub_508730, sub_50d2f4, sub_402b90, sub_403df8, sub_47b304, sub_4836b0, sub_46910c, sub_47b2ac
// [被调用的父级函数]: sub_50deb4, sub_50e22c
// ============================================================

void* __convention("regparm")sub_50e9c0(void* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_4 = 0x1d
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_4
        i_4 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_4
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg2
    *(esp_2 - 0x10) = arg3
    char edx
    char var_5 = edx
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    void* esp_9 = esp_2 - 0x1c
    fsbase->NtTib.ExceptionList = esp_9
    
    if (*(arg1 + 0x1b1f6) u>= 2)
        sub_4836b0(*data_530304, *data_5307d8)
        void* eax_3 = data_5307d8
        *eax_3
        bool o_1 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(*(*data_530304 + 0xab0) + *eax_3 * 0x81c0 + 0x813a) = (*data_530114).w
        
        if (*(arg1 + 0x1b1e0) != 0)
            (*(**(arg1 + 0x1b1e8) + 0x40))()
            (*(**(arg1 + 0x1b1f0) + 0x40))()
            int32_t ecx_2 = (*(**(arg1 + 0x1b1ec) + 0x40))()
            *data_530454
            
            if (sub_50d2f4() == 0)
                int32_t i_5 = *(arg1 + 0x12164)
                
                if (add_overflow(i_5, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (i_5 - 1 s>= 0)
                    int32_t i_3 = i_5
                    int32_t var_c_1 = 0
                    int32_t i_1
                    
                    do
                        bool o_3 = unimplemented  {imul edx, dword [ebp-0x8], 0x17}
                        
                        if (o_3)
                            sub_403010()
                            noreturn
                        
                        sub_40401c(ecx_2, arg1 + var_c_1 * 0xb8 + 0x12178)
                        ecx_2 = (*(**(arg1 + 0x1b1ec) + 0x34))()
                        var_c_1 += 1
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                void var_28
                void* ecx_5
                void* ebp_2
                ecx_5, ebp_2 = sub_46910c(*data_530304, "f_spiellist", &var_28)
                sub_50f288(ecx_5, *(ebp_2 - 0x24))
                *(arg1 + 0x1b1f7) = *(arg1 + 0x1b1f6)
                *(arg1 + 0x1b1f6) = 8
                
                if ((*(**(arg1 + 0x1b1ec) + 0x14))() s> 3)
                    if ((*(**(arg1 + 0x1b1ec) + 0x14))() s> 6)
                        if ((*(**(arg1 + 0x1b1ec) + 0x14))() s> 0xa)
                            if ((*(**(arg1 + 0x1b1ec) + 0x14))() s> 0xf)
                                *(esp_9 - 4) = 0x3e8
                                esp_9 -= 4
                                ebp_1 = sub_508730(arg1 + 0x1b1e8, arg1 + 0x1b1f0, arg1 + 0x1b1ec)
                            else
                                *(esp_9 - 4) = 0x4b0
                                esp_9 -= 4
                                ebp_1 = sub_508730(arg1 + 0x1b1e8, arg1 + 0x1b1f0, arg1 + 0x1b1ec)
                        else
                            *(esp_9 - 4) = 0x578
                            esp_9 -= 4
                            ebp_1 = sub_508730(arg1 + 0x1b1e8, arg1 + 0x1b1f0, arg1 + 0x1b1ec)
                    else
                        *(esp_9 - 4) = 0x640
                        esp_9 -= 4
                        ebp_1 = sub_508730(arg1 + 0x1b1e8, arg1 + 0x1b1f0, arg1 + 0x1b1ec)
                else
                    *(esp_9 - 4) = 0x708
                    esp_9 -= 4
                    ebp_1 = sub_508730(arg1 + 0x1b1e8, arg1 + 0x1b1f0, arg1 + 0x1b1ec)
                
                *(arg1 + 0x1b1f6) = *(arg1 + 0x1b1f7)
                sub_50f2e0()
            
            *(esp_9 - 4) = 1
            sub_47a180(*data_5308d8, *data_5307d8, *data_530304)
            int32_t eax_35
            eax_35.b = *(ebp_1 - 1)
            *(esp_9 - 4) = eax_35
            int32_t ecx_15 = sub_47b488(*data_5308d8, *data_5307d8, *data_530304)
            void* esp_13 = esp_9
            sub_483950(*data_530304, *data_5307d8)
            int32_t eax_40 = *(arg1 + 0x12164)
            
            if (add_overflow(eax_40, 0xffffffff))
                sub_403010()
                noreturn
            
            if (eax_40 - 1 s>= 0)
                ebp_1[-5] = eax_40
                ebp_1[-2] = 0
                int32_t i_2
                
                do
                    *data_530454
                    
                    if (sub_50d2f4() == 0)
                        ebp_1[-2]
                        bool o_6 = unimplemented  {imul eax, dword [ebp-0x8], 0x17}
                        
                        if (o_6)
                            sub_403010()
                            noreturn
                        
                        ebp_1[-7] = arg1 + ebp_1[-2] * 0xb8 + 0x12168
                        sub_403df8(&ebp_1[-4])
                        ebp_1[-3] = 0
                        int32_t eax_56 = (*(**(arg1 + 0x1b1f0) + 0x14))()
                        
                        if (add_overflow(eax_56, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        bool cond:0_1 = eax_56 != 1
                        
                        if (eax_56 - 1 s>= 0)
                            ebp_1[-6] = eax_56
                            int32_t esi_1 = 0
                            int32_t j
                            
                            do
                                int32_t ecx_17 = (*(**(arg1 + 0x1b1f0) + 0xc))()
                                *(esp_13 - 4) = ebp_1[-0xa]
                                void* edx_32 = ebp_1[-7]
                                cond:0_1 = edx_32 != 0xfffffff0
                                sub_40401c(ecx_17, edx_32 + 0x10)
                                sub_404188(*(esp_13 - 4), ebp_1[-0xb])
                                
                                if (edx_32 == 0xfffffff0)
                                    sub_403e90(&ebp_1[-4], 0x50f05c)
                                    ebp_1[-3] = esi_1
                                    break
                                
                                esi_1 += 1
                                j = ebp_1[-6]
                                ebp_1[-6] -= 1
                                cond:0_1 = j != 1
                            while (j != 1)
                        
                        sub_404188(ebp_1[-4], 0x50f05c)
                        
                        if (cond:0_1)
                            sub_402bc0(&ebp_1[-0x36], ebp_1[-7] + 0x10)
                            sub_40401c(sub_402b90(&ebp_1[-0x36], 0x50f064, 0x5d), &ebp_1[-0x36])
                        else
                            sub_402bc0(&ebp_1[-0x1d], ebp_1[-7] + 0x10)
                            sub_40401c(sub_402b90(&ebp_1[-0x1d], 0x50f060, 0x41), &ebp_1[-0x1d])
                            *(esp_13 - 4) = ebp_1[-0xc]
                            ebp_1[-3]
                            (*(**(arg1 + 0x1b1e8) + 0xc))()
                            *(esp_13 - 4) = ebp_1[-0x1e]
                            *(esp_13 - 8) = 0
                            sub_404138(&ebp_1[-4], 3)
                    else
                        ebp_1[-2]
                        bool o_5 = unimplemented  {imul edx, dword [ebp-0x8], 0x17}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        sub_40401c(ecx_15, arg1 + ebp_1[-2] * 0xb8 + 0x121b9)
                        int32_t eax_48 = sub_404078(ebp_1[-4])
                        
                        if (eax_48 s> 0)
                            ebp_1[-6] = eax_48
                            int32_t esi = 1
                            int32_t j_1
                            
                            do
                                if (*(ebp_1[-4] + esi - 1) == 0x7e)
                                    *(sub_404248(&ebp_1[-4]) + esi - 1) = 0x7c
                                
                                esi += 1
                                j_1 = ebp_1[-6]
                                ebp_1[-6] -= 1
                            while (j_1 != 1)
                    
                    *(esp_13 - 4) = 0
                    esp_13 -= 4
                    ecx_15 = sub_47b650(*data_530304, *data_5308d8, ebp_1[-4])
                    ebp_1[-2] += 1
                    i_2 = ebp_1[-5]
                    ebp_1[-5] -= 1
                while (i_2 != 1)
            
            void* ebp_3 = sub_46910c(*data_530304, "f_spielevon", &ebp_1[-0x38])
            *(esp_13 - 4) = *(ebp_3 - 0xe0)
            *(esp_13 - 8) = *(arg1 + 0x50)
            *(esp_13 - 0xc) = &data_50f0a0
            sub_404138(ebp_3 - 0xdc, 3)
            *(esp_13 - 8) = *(ebp_3 - 0xdc)
            int80_t x87_r0
            sub_47ab08(*data_530304, *data_5307d8, *data_5302ac, x87_r0)
            void* ebp_4 = sub_46910c(*data_530304, "f_teilnehmen", ebp_3 - 0xe4)
            *(esp_13 - 0xc) = *(ebp_4 - 0xe4)
            void* esp_24 = esp_13 - 0xc
            int80_t x87_r1
            sub_47ab08(*data_530304, *data_5307d8, *data_5307d4, x87_r1)
            
            if (*(ebp_4 - 1) != 0)
                *(esp_24 - 4) = 1
                sub_47b2ac(*data_5308d8, *data_5307d8, *data_530304)
                *(esp_24 - 4) = 0
                sub_47b304(*data_5308d8, *data_5307d8, *data_530304)
            
            void* eax_92 = data_5307d8
            *eax_92
            bool o_8 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_8)
                sub_403010()
                noreturn
            
            void* edx_53 = data_5308d8
            *edx_53
            bool o_9 = unimplemented  {imul edx, dword [edx], 0x23}
            
            if (o_9)
                sub_403010()
                noreturn
            
            int32_t eax_94
            eax_94.b = *(*(*data_530304 + 0xab0) + *eax_92 * 0x81c0 + *edx_53 * 0x118 - 0x14) s> 0
            *(esp_24 - 4) = eax_94
            sub_47a180(*data_5307d4, *data_5307d8, *data_530304)
            void* ebp_5 = sub_46910c(*data_530304, "f_open", ebp_4 - 0xe8)
            *(esp_24 - 4) = *(ebp_5 - 0xe8)
            int80_t x87_r2
            sub_47ab08(*data_530304, *data_5307d8, *data_53082c, x87_r2)
            *(esp_24 - 8) = 1
            sub_47a1c0(*data_53082c, *data_5307d8, *data_530304)
            *(esp_24 - 8) = 1
            sub_47a180(*data_53082c, *data_5307d8, *data_530304)
            ebp_1 = sub_46910c(*data_530304, "f_aktualisieren", ebp_5 - 0xec)
            *(esp_24 - 8) = ebp_1[-0x3b]
            int80_t x87_r3
            sub_47ab08(*data_530304, *data_5307d8, *data_530450, x87_r3)
            *(esp_24 - 0xc) = 1
            sub_47a180(*data_530450, *data_5307d8, *data_530304)
            esp_9 = esp_24 - 8
    
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_50f035
    sub_403e1c(&ebp_1[-0x3b], 5)
    sub_403df8(&ebp_1[-0x1e])
    sub_403e1c(&ebp_1[-0xc], 5)
    sub_403df8(&ebp_1[-4])
    return &ebp_1[-4]
}
