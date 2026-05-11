// ============================================================
// 函数名称: sub_50f7b8
// 虚拟地址: 0x50f7b8
// WARP GUID: 8faab748-57d5-5dc7-8764-7e4267ba5137
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShellExecuteA, GetTickCount
// [内部子函数调用]: sub_404054, sub_4748fc, sub_50f478, sub_47a1c0, sub_404138, sub_402a90, sub_47a7ec, sub_40423c, sub_40401c, sub_402bdc, sub_50f300, sub_403e1c, sub_403010, sub_402c90, sub_4318d0, sub_51038c, sub_47ab08, sub_50f700, sub_48380c, sub_4040c4, sub_44613c, sub_4746a0, sub_4836b0, sub_40287c, sub_46910c, sub_408e80
// [被调用的父级函数]: sub_50f7af, sub_50f6ec
// ============================================================

int32_t __convention("regparm")sub_50f7b8(void* arg1, int32_t arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_3 = 0x32
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_3
        i_3 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_3
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg3
    *(esp_2 - 0x10) = arg4
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    void* esp_9 = esp_2 - 0x1c
    fsbase->NtTib.ExceptionList = esp_9
    
    if (arg2 == 1)
        *(*data_530454 + 0x31) = 0
        *(arg1 + 0x1b1f8) = 0
        *(arg1 + 0x1b1f6) = 2
        *(arg1 + 0x4c) = 0
        void var_128
        int32_t esi_3
        ebp_1, esi_3 = sub_46910c(*data_530304, "f_verbindenhaupt", &var_128)
        *(esp_9 - 4) = ebp_1[-0x49]
        *(esp_9 - 8) = 0
        *(esp_9 - 0xc) = &ebp_1[-3]
        sub_4040c4(&ebp_1[-0x4a], *(ebp_1[-1] + 0x34), "?ACTION=GET_SERVERLIST")
        sub_51038c(ebp_1[-1], ebp_1[-0x4a], 1, esi_3, arg4)
        ebp_1[-1]
        sub_50f478(ebp_1[-3], ebp_1[-1] + 0x5c)
        *(esp_9 - 4) = ebp_1
        *(esp_9 - 8) = j_sub_40353c
        *(esp_9 - 0xc) = fsbase->NtTib.ExceptionList
        void* esp_16 = esp_9 - 0xc
        fsbase->NtTib.ExceptionList = esp_16
        int32_t i_6 = *(ebp_1[-1] + 0x5c)
        
        if (add_overflow(i_6, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_6 - 1 s>= 0)
            int32_t i_4 = i_6
            int32_t ebx = 0
            int32_t i_1
            
            do
                *(esp_16 - 4) = &ebp_1[-0x5b]
                int32_t edi_4 = ebx * 0x17
                bool o_2 = unimplemented  {imul edi, ebx, 0x17}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                sub_40287c(4, 1, ebp_1[-1] + (edi_4 << 3) + 0x70)
                int32_t ecx_6
                ecx_6.b = ebp_1[-0x5b].b
                sub_402c90(&ebp_1[-0x5b], 0x51002c, ecx_6 + 1)
                
                if (ecx_6 != 0xffffffff)
                    ebp_1[-5] = sub_402a90(0x510034, ebp_1[-1] + (edi_4 << 3) + 0x70)
                    
                    if (ebp_1[-5] s> 0)
                        *(esp_16 - 4) = &ebp_1[-0x5b]
                        int32_t ecx_8 = ebp_1[-5]
                        
                        if (add_overflow(ecx_8, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        sub_40401c(sub_40287c(ecx_8 - 1, 1, ebp_1[-1] + (edi_4 << 3) + 0x70), 
                            &ebp_1[-0x5b])
                        *(esp_16 - 4) = &ebp_1[-0x5b]
                        int32_t ecx_11
                        ecx_11.b = *(ebp_1[-1] + (edi_4 << 3) + 0x70)
                        
                        if (add_overflow(ecx_11, neg.d(ebp_1[-5])))
                            sub_403010()
                            noreturn
                        
                        int32_t edx_10 = ebp_1[-5]
                        
                        if (add_overflow(edx_10, 1))
                            sub_403010()
                            noreturn
                        
                        sub_40401c(
                            sub_40287c(ecx_11 - ebp_1[-5], edx_10 + 1, 
                                ebp_1[-1] + (edi_4 << 3) + 0x70), 
                            &ebp_1[-0x5b])
                        sub_404054(&ebp_1[-0x48], ebp_1[-6], 0xff)
                        sub_402bdc(ebp_1[-1] + (edi_4 << 3) + 0x70, &ebp_1[-0x48], 0x40)
                        *(ebp_1[-1] + (edi_4 << 3) + 0x68) = sub_408e80(ebp_1[-7])
                
                ebx += 1
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        int32_t ecx_1 = *(esp_16 + 8)
        esp_9 = esp_16 + 0xc
        fsbase->NtTib.ExceptionList = *esp_16
        int32_t i_7 = *(ebp_1[-1] + 0x5c)
        
        if (add_overflow(i_7, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_7 - 1 s>= 0)
            int32_t i_5 = i_7
            int32_t ebx_1 = 0
            int32_t i_2
            
            do
                int32_t edi_5 = ebx_1 * 0x17
                bool o_7 = unimplemented  {imul edi, ebx, 0x17}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                *(ebp_1[-1] + 0x4c) = *(ebp_1[-1] + (edi_5 << 3) + 0x60)
                *(ebp_1[-1] + 0x44) = *(ebp_1[-1] + (edi_5 << 3) + 0x64)
                
                if (*(ebp_1[-1] + 0x4c) s<= 3)
                    int32_t ecx_16
                    void* ebp_2
                    ecx_16, ebp_2, i_5 = sub_46910c(*data_530304, "f_verbindenmit", &ebp_1[-0x5d])
                    *(esp_9 - 4) = *(ebp_2 - 0x174)
                    sub_40401c(ecx_16, *(ebp_2 - 4) + (edi_5 << 3) + 0xb1)
                    *(esp_9 - 8) = *(ebp_2 - 0x178)
                    *(esp_9 - 0xc) = &data_510058
                    void* ecx_17 = sub_404138(ebp_2 - 0x170, 3)
                    esp_9 += 4
                    *(ebp_2 - 4)
                    ecx_1, ebp_1 = sub_50f300(ecx_17, *(ebp_2 - 0x170))
                
                *(ebp_1[-1] + 0x40) = *(ebp_1[-1] + (edi_5 << 3) + 0x68)
                int32_t eax_58 = *(ebp_1[-1] + 0x4c)
                
                if ((eax_58 == 0xa || eax_58 == 0x14) && *(ebp_1[-1] + 0x44) s> 0xa)
                label_50fb3b:
                    ebp_1[-1]
                    int32_t esi_6 = ebx_1 * 0x17
                    bool o_9 = unimplemented  {imul esi, ebx, 0x17}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_19 = sub_40401c(ecx_1, ebp_1[-1] + (esi_6 << 3) + 0x70)
                    ebp_1[-1]
                    sub_40401c(ecx_19, ebp_1[-1] + (esi_6 << 3) + 0xb1)
                    *(ebp_1[-1] + 0x48) = mods.dp.d(sx.q(*(ebp_1[-1] + (esi_6 << 3) + 0x6c)), 0xa)
                    *data_52fee0 = 0
                    
                    for (int32_t j = 1; j != 4; j += 1)
                        int32_t ecx_21 = *(ebp_1[-1] + 0x40)
                        
                        if (add_overflow(ecx_21, 1))
                            sub_403010()
                            noreturn
                        
                        *(*(ebp_1[-1] + (j << 2) + 0x18) + 4) = ecx_21 + 1
                    
                    *(ebp_1[-1] + 0x1b1fc) = GetTickCount()
                    *(ebp_1[-1] + 0x1b1f6) = 4
                    break
                
                if (*(ebp_1[-1] + 0x4c) s<= 3)
                    int32_t edi_6 = ebx_1 * 0x17
                    bool o_8 = unimplemented  {imul edi, ebx, 0x17}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    sub_40401c(ecx_1, ebp_1[-1] + (edi_6 << 3) + 0x70)
                    char eax_66
                    eax_66, ecx_1, ebp_1, i_5 =
                        sub_50f700(ebp_1[-1], ebp_1[-0x5f], *(ebp_1[-1] + (edi_6 << 3) + 0x60))
                    
                    if (eax_66 == 0)
                        goto label_50fbc8
                    
                    goto label_50fb3b
                
            label_50fbc8:
                ebx_1 += 1
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        if (*(ebp_1[-1] + 0x4c) s<= 3)
            sub_48380c(*data_530304, *data_530230)
        
        void* eax_81
        eax_81.b = *(ebp_1[-1] + 0x1b1f6)
        
        if (eax_81.b != 2)
            int32_t edx_45 = *(ebp_1[-1] + 0x4c)
            
            if (edx_45 s<= 3)
                *(ebp_1[-1] + 0x1b1f7) = eax_81.b
                *(ebp_1[-1] + 0x1b1f6) = 3
                void* eax_93 = data_530988
                *eax_93
                bool o_12 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                void* edx_50 = data_5300f4
                *edx_50
                bool o_13 = unimplemented  {imul edx, dword [edx], 0x23}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                *(*(*data_530304 + 0xab0) + *eax_93 * 0x81c0 + *edx_50 * 0x118 - 0x82) = 0x14
                void* ebp_3 = sub_46910c(*data_530304, "f_internetspiel", &ebp_1[-0x60])
                *(esp_9 - 4) = *(ebp_3 - 0x180)
                int80_t x87_r0
                sub_47ab08(*data_530304, *data_530988, 1, x87_r0)
                void* ebp_4 = sub_46910c(*data_530304, "f_willkommen", ebp_3 - 0x188)
                *(esp_9 - 4) = *(ebp_4 - 0x188)
                *(esp_9 - 8) = *(*(ebp_4 - 4) + 0x3c)
                *(esp_9 - 0xc) = &data_510098
                void* ebp_5 = sub_46910c(*data_530304, "f_spielernamen", ebp_4 - 0x18c)
                *(esp_9 - 0x10) = *(ebp_5 - 0x18c)
                sub_404138(ebp_5 - 0x184, 4)
                *(esp_9 - 4) = *(ebp_5 - 0x184)
                int32_t ecx_30 = *data_5300f4
                
                if (add_overflow(ecx_30, 0xffffffff))
                    sub_403010()
                    noreturn
                
                sub_47ab08(*data_530304, *data_530988, ecx_30 - 1, x87_r0)
                *(esp_9 - 4) = "Name:"
                int32_t ecx_33 = *data_5300f4
                
                if (add_overflow(ecx_33, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                sub_47ab08(*data_530304, *data_530988, ecx_33 - 2, x87_r0)
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = ebp_5 - 0x10
                *data_530438
                *data_530304
                ebp_1 = sub_47a7ec(*data_530960)
                *(esp_9 - 4) = ebp_1[-4]
                sub_47ab08(*data_530304, *data_530988, *data_5300f4, x87_r0)
                void* eax_118 = data_530988
                *eax_118
                bool o_16 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_16)
                    sub_403010()
                    noreturn
                
                void* edx_65 = data_5300f4
                *edx_65
                bool o_17 = unimplemented  {imul edx, dword [edx], 0x23}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                *(*(*data_530304 + 0xab0) + *eax_118 * 0x81c0 + *edx_65 * 0x118 - 0xf6) = 0x64
                *(esp_9 - 4) = 1
                sub_47a1c0(*data_5303dc, *data_530988, *data_530304)
                void* esp_48
                *esp_48 = 1
                int32_t ecx_42 = *data_5303dc
                
                if (add_overflow(ecx_42, 1))
                    sub_403010()
                    noreturn
                
                sub_47a1c0(ecx_42 + 1, *data_530988, *data_530304)
                sub_4836b0(*data_530304, *data_530988)
            else if (edx_45 == 0xa)
                *(ebp_1[-1] + 0x1b1f6) = 0
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = 0
                *(esp_9 - 0xc) = 0
                *(esp_9 - 0x10) = 0
                esp_9 -= 0x10
                ebp_1 = sub_46910c(*data_530304, "f_internetspiel", &ebp_1[-0x64])
                sub_4748fc(*data_530304, *(ebp_1[-1] + 0x3c), ebp_1[-0x64])
            else if (edx_45 == 0x14)
                *(ebp_1[-1] + 0x1b1f6) = 0
                *(esp_9 - 4) = 4
                *(esp_9 - 8) = 0
                *(esp_9 - 0xc) = 0
                *(esp_9 - 0x10) = 0
                esp_9 -= 0x10
                ebp_1 = sub_46910c(*data_530304, "f_internetspiel", &ebp_1[-0x65])
                int32_t eax_139
                int32_t ecx_48
                int32_t edx_75
                eax_139, ecx_48, edx_75 = sub_4748fc(*data_530304, *(ebp_1[-1] + 0x3c), ebp_1[-0x65])
                
                if (eax_139 == 6)
                    sub_44613c(*data_530304, edx_75, ecx_48)
                    *(esp_9 - 4) = 0
                    *(esp_9 - 8) = 0x51005c
                    *(esp_9 - 0xc) = sub_40423c(*(ebp_1[-1] + 0x38))
                    *(esp_9 - 0x10) = "explorer"
                    *(esp_9 - 0x14) = "open"
                    *(esp_9 - 0x18) = sub_4318d0(*data_530304)
                    ShellExecuteA()
        else
            if (*(ebp_1[-1] + 0x5c) s<= 0)
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = 0x51005c
                *(esp_9 - 0xc) = 0x51005c
                sub_4746a0(0, 0x1c, *data_530304)
            else
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = 0x51005c
                *(esp_9 - 0xc) = 0x51005c
                sub_4746a0(0, 0x1c, *data_530304)
                void* eax_85 = data_530230
                *eax_85
                bool o_11 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                if (*(*(*data_530304 + 0xab0) + *eax_85 * 0x81c0 + 1) != 0)
                    sub_48380c(*data_530304, *data_530230)
            
            *(ebp_1[-1] + 0x1b1f6) = 0
    
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_50ffd6
    sub_403e1c(&ebp_1[-0x65], 0xa)
    sub_403e1c(&ebp_1[-0x4a], 2)
    sub_403e1c(&ebp_1[-8], 3)
    return sub_403e1c(&ebp_1[-4], 2)
}
