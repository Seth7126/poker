// ============================================================
// 函数名称: sub_4449fc
// 虚拟地址: 0x4449fc
// WARP GUID: a6846a8c-bf17-5ad4-b0d2-51843d4b4514
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_4105a0, sub_42c754, sub_4038c8, sub_440ae4, sub_4318d0, sub_4106bc, sub_42e5e4
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4449fc(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    data_52e980 += 1
    
    if (arg1[0x8e] == 0)
        if (arg1 == arg2)
            arg1[0x82] = 0
        else
            arg1[0x82] = arg2
    
    *(data_5317dc + 0x58) = arg2
    *(data_5317dc + 0x5c) = arg1
    sub_4106bc(*(data_5317dc + 0x44))
    sub_4105a0(*(data_5317dc + 0x44), 0, arg1)
    
    if (sub_403248(arg1, &data_43f864) == 0)
        *(data_5317dc + 0x60) = 0
    else
        *(data_5317dc + 0x60) = arg1
        sub_4106bc(*(data_5317dc + 0x40))
        sub_4105a0(*(data_5317dc + 0x40), 0, arg1)
    
    if ((arg2[0x11].b & 0x20) == 0)
        int32_t* eax_16
        eax_16.w = arg2[0x11].w
        eax_16.w |= 0x20
        arg2[0x11].w = eax_16.w
        int32_t __saved_ebp
        int32_t* var_18_1 = &__saved_ebp
        int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_4037f0
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        int32_t* eax_18 = *(data_5317dc + 0x6c)
        
        if (arg1 == eax_18)
        label_444b40:
            
            if (arg1[0x83] == 0)
                arg1[0x83] = arg1
            
            if (arg1[0x83] != arg2)
                while (true)
                    int32_t esi_3 = arg1[0x83]
                    
                    if (esi_3 != 0 && sub_42e5e4(esi_3, arg2) == 0)
                        HWND eax_29 = sub_4318d0(arg1[0x83])
                        arg1[0x83] = *(arg1[0x83] + 0x24)
                        
                        if (sub_440ae4(eax_29, 0xb01b) != 0)
                            continue
                        
                        sub_4038c8(ExceptionList, var_1c_1)
                        goto label_444c86
                    
                    while (true)
                        if (arg1[0x83] == arg2)
                            for (int32_t* i = arg2[9]; i != 0; i = i[9])
                                if (sub_403248(i, &data_43e7fc) != 0)
                                    (*(*i + 0xb8))()
                            
                            sub_42c754(arg1, arg2)
                            void* eax_47 = arg1[0x99]
                            
                            if (eax_47 != 0 && eax_47 != arg2)
                                sub_42c754(eax_47, 0)
                            
                            break
                        
                        int32_t* esi_4 = arg2
                        
                        while (true)
                            int32_t* eax_36 = esi_4[9]
                            
                            if (eax_36 == arg1[0x83])
                                break
                            
                            esi_4 = eax_36
                        
                        arg1[0x83] = esi_4
                        
                        if (sub_440ae4(sub_4318d0(esi_4), 0xb01a) == 0)
                            sub_4038c8(ExceptionList, var_1c_1)
                            goto label_444c86
                    
                    break
            
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t (__stdcall* var_18_2)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) =
                sub_444c73
            struct _EXCEPTION_REGISTRATION_RECORD* edx_11
            edx_11.w = 0x20
            arg2[0x11].w &= (not.d(edx_11)).w
            return arg2
        
        char eax_22
        
        if (eax_18 != 0)
            HWND eax_19 = sub_4318d0(eax_18)
            *(data_5317dc + 0x6c) = 0
            eax_22 = sub_440ae4(eax_19, 0xb001)
        
        if (eax_18 == 0 || eax_22 != 0)
            *(data_5317dc + 0x6c) = arg1
            
            if (sub_440ae4(sub_4318d0(arg1), 0xb000) != 0)
                goto label_444b40
            
            sub_4038c8(ExceptionList, var_1c_1)
        else
            sub_4038c8(ExceptionList, var_1c_1)
    
    label_444c86:
    return 0
}
