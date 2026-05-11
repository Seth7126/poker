// ============================================================
// 函数名称: sub_50fa27
// 虚拟地址: 0x50fa27
// WARP GUID: de886904-6865-560f-a378-0f052b7a49d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShellExecuteA, GetTickCount
// [内部子函数调用]: sub_47ab08, sub_50f700, sub_4748fc, sub_48380c, sub_47a1c0, sub_44613c, sub_404138, sub_4746a0, sub_4318d0, sub_47a7ec, sub_4836b0, sub_40423c, sub_40401c, sub_50f300, sub_46910c, sub_403898, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_50fa27(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t ecx = sub_403898(__return_addr)
    int32_t ecx = sub_403898(__return_addr)
    int32_t i_2 = *(*(arg1 - 4) + 0x5c)
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    int32_t* esp
    
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t ebx_1 = 0
        int32_t i
        
        do
            int32_t edi_1 = ebx_1 * 0x17
            bool o_1 = unimplemented  {imul edi, ebx, 0x17}
            
            if (o_1)
                sub_403010()
                noreturn
            
            *(*(arg1 - 4) + 0x4c) = *(*(arg1 - 4) + (edi_1 << 3) + 0x60)
            *(*(arg1 - 4) + 0x44) = *(*(arg1 - 4) + (edi_1 << 3) + 0x64)
            
            if (*(*(arg1 - 4) + 0x4c) s<= 3)
                int32_t ecx_2
                void* ebp
                ecx_2, ebp, i_1 = sub_46910c(*data_530304, "f_verbindenmit", arg1 - 0x174)
                *(esp - 4) = *(ebp - 0x174)
                sub_40401c(ecx_2, *(ebp - 4) + (edi_1 << 3) + 0xb1)
                *(esp - 8) = *(ebp - 0x178)
                *(esp - 0xc) = &data_510058
                void* ecx_3 = sub_404138(ebp - 0x170, 3)
                esp = &esp[1]
                *(ebp - 4)
                ecx, arg1 = sub_50f300(ecx_3, *(ebp - 0x170))
            
            *(*(arg1 - 4) + 0x40) = *(*(arg1 - 4) + (edi_1 << 3) + 0x68)
            int32_t eax_14 = *(*(arg1 - 4) + 0x4c)
            
            if ((eax_14 == 0xa || eax_14 == 0x14) && *(*(arg1 - 4) + 0x44) s> 0xa)
            label_50fb3b:
                *(arg1 - 4)
                int32_t esi_1 = ebx_1 * 0x17
                bool o_3 = unimplemented  {imul esi, ebx, 0x17}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                int32_t ecx_5 = sub_40401c(ecx, *(arg1 - 4) + (esi_1 << 3) + 0x70)
                *(arg1 - 4)
                sub_40401c(ecx_5, *(arg1 - 4) + (esi_1 << 3) + 0xb1)
                *(*(arg1 - 4) + 0x48) = mods.dp.d(sx.q(*(*(arg1 - 4) + (esi_1 << 3) + 0x6c)), 0xa)
                *data_52fee0 = 0
                
                for (int32_t j = 1; j != 4; j += 1)
                    int32_t ecx_7 = *(*(arg1 - 4) + 0x40)
                    
                    if (add_overflow(ecx_7, 1))
                        sub_403010()
                        noreturn
                    
                    *(*(*(arg1 - 4) + (j << 2) + 0x18) + 4) = ecx_7 + 1
                
                *(*(arg1 - 4) + 0x1b1fc) = GetTickCount()
                *(*(arg1 - 4) + 0x1b1f6) = 4
                break
            
            if (*(*(arg1 - 4) + 0x4c) s<= 3)
                int32_t edi_2 = ebx_1 * 0x17
                bool o_2 = unimplemented  {imul edi, ebx, 0x17}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                sub_40401c(ecx, *(arg1 - 4) + (edi_2 << 3) + 0x70)
                char eax_22
                eax_22, ecx, arg1, i_1 =
                    sub_50f700(*(arg1 - 4), *(arg1 - 0x17c), *(*(arg1 - 4) + (edi_2 << 3) + 0x60))
                
                if (eax_22 == 0)
                    goto label_50fbc8
                
                goto label_50fb3b
            
        label_50fbc8:
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (*(*(arg1 - 4) + 0x4c) s<= 3)
        sub_48380c(*data_530304, *data_530230)
    
    void* eax_37
    eax_37.b = *(*(arg1 - 4) + 0x1b1f6)
    
    if (eax_37.b != 2)
        int32_t edx_29 = *(*(arg1 - 4) + 0x4c)
        
        if (edx_29 s<= 3)
            *(*(arg1 - 4) + 0x1b1f7) = eax_37.b
            *(*(arg1 - 4) + 0x1b1f6) = 3
            void* eax_49 = data_530988
            *eax_49
            bool o_6 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_6)
                sub_403010()
                noreturn
            
            void* edx_34 = data_5300f4
            *edx_34
            bool o_7 = unimplemented  {imul edx, dword [edx], 0x23}
            
            if (o_7)
                sub_403010()
                noreturn
            
            *(*(*data_530304 + 0xab0) + *eax_49 * 0x81c0 + *edx_34 * 0x118 - 0x82) = 0x14
            void* ebp_1 = sub_46910c(*data_530304, "f_internetspiel", arg1 - 0x180)
            *(esp - 4) = *(ebp_1 - 0x180)
            int80_t x87_r0
            sub_47ab08(*data_530304, *data_530988, 1, x87_r0)
            void* ebp_2 = sub_46910c(*data_530304, "f_willkommen", ebp_1 - 0x188)
            *(esp - 4) = *(ebp_2 - 0x188)
            *(esp - 8) = *(*(ebp_2 - 4) + 0x3c)
            *(esp - 0xc) = &data_510098
            void* ebp_3 = sub_46910c(*data_530304, "f_spielernamen", ebp_2 - 0x18c)
            *(esp - 0x10) = *(ebp_3 - 0x18c)
            sub_404138(ebp_3 - 0x184, 4)
            *(esp - 4) = *(ebp_3 - 0x184)
            int32_t ecx_16 = *data_5300f4
            
            if (add_overflow(ecx_16, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_47ab08(*data_530304, *data_530988, ecx_16 - 1, x87_r0)
            *(esp - 4) = "Name:"
            int32_t ecx_19 = *data_5300f4
            
            if (add_overflow(ecx_19, 0xfffffffe))
                sub_403010()
                noreturn
            
            sub_47ab08(*data_530304, *data_530988, ecx_19 - 2, x87_r0)
            *(esp - 4) = 0
            *(esp - 8) = ebp_3 - 0x10
            *data_530438
            *data_530304
            arg1 = sub_47a7ec(*data_530960)
            *(esp - 4) = *(arg1 - 0x10)
            sub_47ab08(*data_530304, *data_530988, *data_5300f4, x87_r0)
            void* eax_74 = data_530988
            *eax_74
            bool o_10 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_10)
                sub_403010()
                noreturn
            
            void* edx_49 = data_5300f4
            *edx_49
            bool o_11 = unimplemented  {imul edx, dword [edx], 0x23}
            
            if (o_11)
                sub_403010()
                noreturn
            
            *(*(*data_530304 + 0xab0) + *eax_74 * 0x81c0 + *edx_49 * 0x118 - 0xf6) = 0x64
            *(esp - 4) = 1
            sub_47a1c0(*data_5303dc, *data_530988, *data_530304)
            void* esp_26
            *esp_26 = 1
            int32_t ecx_28 = *data_5303dc
            
            if (add_overflow(ecx_28, 1))
                sub_403010()
                noreturn
            
            sub_47a1c0(ecx_28 + 1, *data_530988, *data_530304)
            sub_4836b0(*data_530304, *data_530988)
        else if (edx_29 == 0xa)
            *(*(arg1 - 4) + 0x1b1f6) = 0
            *(esp - 4) = 0
            *(esp - 8) = 0
            *(esp - 0xc) = 0
            *(esp - 0x10) = 0
            esp -= 0x10
            arg1 = sub_46910c(*data_530304, "f_internetspiel", arg1 - 0x190)
            sub_4748fc(*data_530304, *(*(arg1 - 4) + 0x3c), *(arg1 - 0x190))
        else if (edx_29 == 0x14)
            *(*(arg1 - 4) + 0x1b1f6) = 0
            *(esp - 4) = 4
            *(esp - 8) = 0
            *(esp - 0xc) = 0
            *(esp - 0x10) = 0
            esp -= 0x10
            arg1 = sub_46910c(*data_530304, "f_internetspiel", arg1 - 0x194)
            int32_t eax_95
            int32_t ecx_34
            int32_t edx_59
            eax_95, ecx_34, edx_59 = sub_4748fc(*data_530304, *(*(arg1 - 4) + 0x3c), *(arg1 - 0x194))
            
            if (eax_95 == 6)
                sub_44613c(*data_530304, edx_59, ecx_34)
                *(esp - 4) = 0
                *(esp - 8) = 0x51005c
                *(esp - 0xc) = sub_40423c(*(*(arg1 - 4) + 0x38))
                *(esp - 0x10) = "explorer"
                *(esp - 0x14) = "open"
                *(esp - 0x18) = sub_4318d0(*data_530304)
                ShellExecuteA()
    else
        if (*(*(arg1 - 4) + 0x5c) s<= 0)
            *(esp - 4) = 0
            *(esp - 8) = 0x51005c
            *(esp - 0xc) = 0x51005c
            sub_4746a0(0, 0x1c, *data_530304)
        else
            *(esp - 4) = 0
            *(esp - 8) = 0x51005c
            *(esp - 0xc) = 0x51005c
            sub_4746a0(0, 0x1c, *data_530304)
            void* eax_41 = data_530230
            *eax_41
            bool o_5 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_5)
                sub_403010()
                noreturn
            
            if (*(*(*data_530304 + 0xab0) + *eax_41 * 0x81c0 + 1) != 0)
                sub_48380c(*data_530304, *data_530230)
        
        *(*(arg1 - 4) + 0x1b1f6) = 0
    
    esp[2]
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_50ffd6
    sub_403e1c(arg1 - 0x194, 0xa)
    sub_403e1c(arg1 - 0x128, 2)
    sub_403e1c(arg1 - 0x20, 3)
    return sub_403e1c(arg1 - 0x10, 2)
}
