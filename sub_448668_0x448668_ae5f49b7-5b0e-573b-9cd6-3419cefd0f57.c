// ============================================================
// 函数名称: sub_448668
// 虚拟地址: 0x448668
// WARP GUID: ae5f49b7-5b0e-573b-9cd6-3419cefd0f57
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsWindowVisible, GetFocus, IsIconic, GetLastError, IsWindowEnabled, SendMessageA, GetProcAddress, SetFocus, PostMessageA
// [内部子函数调用]: sub_448d20, sub_42c754, sub_4484f4, sub_440aa8, sub_4484e4, sub_410524, sub_44a448, sub_448d04, sub_447c9c, sub_448590, sub_4318d0, sub_4485e0, sub_4484ec, sub_4492b4, sub_44613c, sub_435a60, sub_40cca8, sub_448dc0, sub_449750, sub_449258, sub_449118, sub_44861c, sub_440958, sub_440a0c
// [被调用的父级函数]: sub_4481cc, sub_4455e4
// ============================================================

int32_t __convention("regparm")sub_448668(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg2[3] = 0
    int32_t ebx_1 = *(*(arg1 + 0x98) + 8) - 1
    
    if (ebx_1 s< 0)
    label_4486d6:
        int32_t ecx_1
        int32_t edx_4
        ecx_1, edx_4 = sub_448590(arg1, arg2)
        int32_t ebx_4 = *arg2
        
        if (ebx_4 s> 0x112)
            if (ebx_4 s> 0xb01a)
                if (ebx_4 == 0xb01f)
                    int32_t* edx_19
                    edx_19.w = arg2[1].w
                    sub_449750(arg1, edx_19.w, arg2[2])
                else if (ebx_4 == 0xb020)
                    if (arg2[1] != 0)
                        int32_t* eax_122 = arg2[2]
                        int32_t var_28_20 = eax_122[1]
                        sub_4492b4(arg1, *eax_122)
                    else
                        int32_t* eax_119 = arg2[2]
                        int32_t var_28_19 = eax_119[1]
                        sub_449258(arg1, *eax_119)
                else if (ebx_4 == 0xb031)
                    if (arg2[1] != 1)
                        *(arg1 + 0xa0) = arg2[2]
                    else
                        arg2[3] = *(arg1 + 0xa0)
                else if (ebx_4 - 0xb03f u< 2)
                    arg2[3] = sub_44a448(arg1, ebx_4, arg2[2]) & 0x7f
                else
                    sub_4485e0(&__saved_ebp)
            else if (ebx_4 == 0xb01a)
                if (IsIconic(*(arg1 + 0x24)) == 0 && GetFocus() == *(arg1 + 0x24))
                    HWND hWnd_1 = sub_440aa8(0)
                    
                    if (hWnd_1 != 0)
                        SetFocus(hWnd_1)
            else if (ebx_4 s> 0xb001)
                if (ebx_4 == 0xb016)
                    if (sub_449118(arg1, arg2) != 0)
                        arg2[3] = 1
                else if (ebx_4 == 0xb017)
                    int32_t* eax_93 = *(arg1 + 0x38)
                    
                    if (eax_93 != 0 && sub_4318d0(eax_93) != 0
                            && IsWindowEnabled(sub_4318d0(eax_93)) != 0
                            && IsWindowVisible(sub_4318d0(eax_93)) != 0)
                        data_52e97c = 0
                        HWND hWnd = GetFocus()
                        SetFocus(sub_4318d0(eax_93))
                        arg2[1]
                        sub_42c754(eax_93, arg2[2])
                        SetFocus(hWnd)
                        data_52e97c = 1
                        arg2[3] = 1
                else
                    sub_4485e0(&__saved_ebp)
            else if (ebx_4 == 0xb001)
                if (*(arg1 + 0xe2) != 0)
                    *(arg1 + 0xe4)
                    (*(arg1 + 0xe0))()
            else if (ebx_4 - 0x132 u< 7)
                LPARAM esi_3 = arg2[2]
                arg2[3] = SendMessageA(esi_3, ebx_4 + 0xbc00, arg2[1], esi_3)
            else if (ebx_4 != 0xb000)
                sub_4485e0(&__saved_ebp)
            else if (*(arg1 + 0xea) != 0)
                *(arg1 + 0xec)
                (*(arg1 + 0xe8))()
        else if (ebx_4 == 0x112)
            int32_t eax_27 = arg2[1] & 0xfff0
            
            if (eax_27 == 0xf020)
                sub_448d20(arg1)
            else if (eax_27 == 0xf120)
                sub_448dc0(arg1)
            else
                sub_4485e0(&__saved_ebp)
        else if (ebx_4 s> 0x16)
            if (ebx_4 s> 0x1d)
                if (ebx_4 == 0x37)
                    arg2[3] = sub_448d04(arg1)
                else if (ebx_4 != 0x4a)
                    sub_4485e0(&__saved_ebp)
                else if (*arg2[2] == 0xde534454 && *(arg1 + 0x8e) != 0)
                    if (*(arg1 + 0x90) != 0)
                        arg2[3] = 0
                    else
                        uint32_t eax_74
                        void* ebp_1
                        int16_t x87control
                        eax_74, ebp_1 = sub_40cca8("vcltest3.dll", SEM_NOOPENFILEERRORBOX, x87control)
                        *(*(ebp_1 - 4) + 0x90) = eax_74
                        
                        if (eax_74 == 0)
                            *(*(ebp_1 - 8) + 0xc) = GetLastError()
                            *(*(ebp_1 - 4) + 0x90) = 0
                        else
                            *(*(ebp_1 - 8) + 0xc) = 0
                            int32_t eax_79 =
                                GetProcAddress(*(*(ebp_1 - 4) + 0x90), "RegisterAutomation")
                            
                            if (eax_79 != 0)
                                void* eax_81 = *(*(ebp_1 - 8) + 8)
                                *(ebp_1 - 8)
                                eax_79(*(eax_81 + 4), *(eax_81 + 8))
            else if (ebx_4 == 0x1d)
                sub_447c9c(data_5317dc)
                sub_4485e0(&__saved_ebp)
            else if (ebx_4 == 0x1a)
                sub_435a60(*data_530968, arg2[1])
                sub_4485e0(&__saved_ebp)
            else if (ebx_4 == 0x1c)
                sub_4485e0(&__saved_ebp)
                int32_t eax_43 = arg2[1]
                int32_t eax_44 = neg.d(eax_43)
                *(arg1 + 0x8d) = (neg.d(sbb.d(eax_44, eax_44, eax_43 != 0))).b
                
                if (arg2[1] == 0)
                    sub_4484e4()
                    PostMessageA(*(arg1 + 0x24), 0xb001, 0, 0)
                else
                    sub_4484f4(arg1)
                    PostMessageA(*(arg1 + 0x24), 0xb000, 0, 0)
            else
                sub_4485e0(&__saved_ebp)
        else if (ebx_4 == 0x16)
            if (arg2[1] != 0)
                *(arg1 + 0x8c) = 1
        else if (ebx_4 - 7 u> 0xd)
            sub_4485e0(&__saved_ebp)
        else
            switch (ebx_4)
                case 7
                    PostMessageA(*(arg1 + 0x24), 0xb01a, 0, 0)
                    sub_4485e0(&__saved_ebp)
                case 8, 9, 0xb, 0xc, 0xd, 0xe, 0x11, 0x12, 0x13
                    sub_4485e0(&__saved_ebp)
                case 0xa
                    if (arg2[1] == 0)
                        sub_4485e0(&__saved_ebp)
                        
                        if (*(arg1 + 0x9c) == 0)
                            int32_t eax_62
                            eax_62, ebp = sub_440958(*(arg1 + 0x24))
                            *(ebp[-1] + 0x9c) = eax_62
                        
                        ebp[-1]
                        sub_4484ec()
                    else
                        sub_4484f4(arg1)
                        int32_t* eax_57 = *(arg1 + 0x9c)
                        
                        if (eax_57 != 0)
                            sub_440a0c(eax_57)
                            *(arg1 + 0x9c) = 0
                        
                        sub_4485e0(&__saved_ebp)
                case 0xf
                    if (IsIconic(*(arg1 + 0x24)) == 0)
                        sub_4485e0(&__saved_ebp)
                    else
                        sub_44861c(&__saved_ebp)
                case 0x10
                    BOOL eax_33 = *(arg1 + 0x38)
                    
                    if (eax_33 != 0)
                        sub_44613c(eax_33, edx_4, ecx_1)
                case 0x14
                    *arg2 = 0x27
                    sub_4485e0(&__saved_ebp)
        
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        int32_t ebx_2 = ebx_1 + 1
        int32_t esi_1 = 0
        
        while (true)
            void* eax_5 = sub_410524(*(arg1 + 0x98), esi_1)
            *(eax_5 + 4)
            
            if ((*eax_5)() != 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                break
            
            esi_1 += 1
            int32_t temp2_1 = ebx_2
            ebx_2 -= 1
            
            if (temp2_1 == 1)
                goto label_4486d6
    
    return 0
}
