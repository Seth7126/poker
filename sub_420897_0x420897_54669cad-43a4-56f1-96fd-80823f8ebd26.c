// ============================================================
// 函数名称: sub_420897
// 虚拟地址: 0x420897
// WARP GUID: 54669cad-43a4-56f1-96fd-80823f8ebd26
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: OffsetRect, GetDCOrgEx, IntersectRect, GetClipBox
// [内部子函数调用]: sub_4202fc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_420897(char* arg1, int16_t arg2, int32_t* arg3 @ ebp, int32_t* arg4 @ esi, void* arg5 @ edi)
{
    // 第一条实际指令: *arg4 -= 1
    *arg4 -= 1
    *arg1 += arg1.b
    char temp1 = *(arg5 + 0x65)
    *(arg5 + 0x65) += arg1.b
    int32_t result
    void** esp
    
    if (temp1 == neg.b(arg1.b))
        result = data_5316e0()
    else
        int32_t eflags
        uint16_t* esi = __outsd(arg2, *arg4, arg4, eflags)
        __outsb(arg2, *esi, esi, eflags)
        int32_t esi_2 = *(arg5 + (arg3 << 1) + 0x72) * 0x6f666e49
        *arg1 += arg1.b
        int32_t ebx
        int32_t var_3_1 = ebx
        char* var_7_1 = arg1
        *(arg3 - 0x75) += arg2.b
        arg1.b = __in_al_dx(arg2, eflags)
        int32_t var_34_1 = ebx
        int32_t var_38_1 = esi_2
        void* var_3c = arg5
        esp = &var_3c
        RECT* lprcSrc2 = arg3[3]
        HDC hdc = arg3[2]
        HDC hdc_1
        
        if (data_5316f3 != 0)
            result = 0
            
            if (arg3[4] != 0)
                arg3[-7] = 0
                arg3[-6] = 0
                arg3[-5] = data_5316c4(0)
                arg3[-4] = data_5316c4(1)
                
                if (hdc != 0)
                    arg3[-3] = GetClipBox(hdc, &arg3[-0xb])
                    esp = &var_3c
                    
                    if (GetDCOrgEx(hdc, &arg3[-2]) != 0)
                        OffsetRect(&arg3[-7], neg.d(arg3[-2]), neg.d(arg3[-1]))
                        
                        if (IntersectRect(&arg3[-7], &arg3[-7], &arg3[-0xb]) != 0 && lprcSrc2 == 0)
                            goto label_4209a9
                        
                        esp = &var_3c
                        
                        if (IntersectRect(&arg3[-7], &arg3[-7], lprcSrc2) != 0)
                            goto label_4209a9
                        
                        if (arg3[-3] == 1)
                            result.b = 1
                else if (lprcSrc2 == 0)
                label_4209a9:
                    int32_t eax_25 = arg3[5]
                    hdc_1 = 0x12340042
                    esp = &var_3c
                    result = arg3[4](hdc_1, hdc, &arg3[-7], eax_25)
                else
                    esp = &var_3c
                    
                    if (IntersectRect(&arg3[-7], &arg3[-7], lprcSrc2) != 0)
                        goto label_4209a9
                    
                    result.b = 1
        else
            arg1.b = 7
            struct _EXCEPTION_REGISTRATION_RECORD** eax
            int32_t edi
            eax, arg3, edi = sub_4202fc(arg1.b, data_5316e0, sub_4209cb+5)
            data_5316e0 = eax
            int32_t var_40_1 = arg3[5]
            int32_t var_44_1 = arg3[4]
            int32_t var_48_1 = edi
            hdc_1 = hdc
            esp = &hdc_1
            result = data_5316e0()
    
    *esp
    esp[1]
    esp[2]
    *arg3
    return result
}
