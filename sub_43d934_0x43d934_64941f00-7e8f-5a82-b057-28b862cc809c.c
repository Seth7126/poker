// ============================================================
// 函数名称: sub_43d934
// 虚拟地址: 0x43d934
// WARP GUID: 64941f00-7e8f-5a82-b057-28b862cc809c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowDC, SaveDC, RestoreDC, GetSubMenu, DefWindowProcA
// [内部子函数调用]: sub_428bd4, sub_43b5b8, sub_43d524, sub_449b74, sub_43cd94, sub_44987c, sub_43ccd8, sub_43cd78, sub_43cd08, sub_419a60, sub_43e104, sub_419bc0, sub_410524, sub_449888, sub_403df8, sub_41920c
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_43d934(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_38 = ebx
    int32_t esi
    int32_t var_3c = esi
    int32_t edi
    int32_t var_40 = edi
    int32_t ecx = 0
    void* var_34 = nullptr
    int32_t* esi_1 = arg2
    int32_t* var_44 = &var_4
    int32_t (* var_48)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax = *esi_1
    
    if (eax s> 0x111)
        if (eax == 0x117)
            int32_t ebx_4 = arg1[2] - 1
            
            if (ebx_4 s>= 0)
                int32_t i_6 = ebx_4 + 1
                int32_t edi_2 = 0
                int32_t i
                
                do
                    int32_t* eax_12 = sub_410524(arg1, edi_2)
                    esi_1[1]
                    
                    if (sub_43cd94(eax_12) != 0)
                        goto label_43de4f
                    
                    edi_2 += 1
                    i = i_6
                    i_6 -= 1
                while (i != 1)
            
            goto label_43de34
        
        if (eax == 0x11f)
            char var_11_1 = 0
            
            if ((*(esi_1 + 6) & 0x10) != 0)
                var_11_1 = 1
            
            int32_t ebx_6 = arg1[2] - 1
            
            if (ebx_6 s>= 0)
                int32_t i_7 = ebx_6 + 1
                int32_t edi_3 = 0
                int32_t i_1
                
                do
                    if (var_11_1 != 1)
                        HMENU var_c_1 = zx.d(esi_1[1].w)
                    else
                        HMENU hMenu = esi_1[2]
                        
                        if (hMenu == 0)
                            var_c_1 = 0xffffffff
                        else
                            HMENU eax_15
                            eax_15, ecx = GetSubMenu(hMenu, zx.d(esi_1[1].w))
                            esp_1 = &ExceptionList
                            var_c_1 = eax_15
                    
                    ecx.b = var_11_1
                    sub_43ccd8(sub_410524(arg1, edi_3))
                    int32_t var_10_1 = 0
                    edi_3 += 1
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
            
            esi_1 = sub_449b74(*data_530660, nullptr)
            goto label_43de34
        
        if (eax == 0x120)
            int32_t ebx_15 = arg1[2] - 1
            
            if (ebx_15 s< 0)
                goto label_43de34
            
            int32_t ebx_16 = ebx_15 + 1
            int32_t edi_7 = 0
            
            while (true)
                int32_t* eax_86 = sub_410524(arg1, edi_7)
                int32_t eax_88
                int32_t ecx_10
                eax_88, ecx_10 = (*(*eax_86 + 0x34))()
                esp_1 = &esp_1[0x11]
                
                if (eax_88 == esi_1[2])
                    sub_43d524(ecx_10, esi_1)
                    break
                
                esi_1[2]
                ecx_10.b = 1
                sub_43ccd8(eax_86)
                edi_7 += 1
                int32_t temp11_1 = ebx_16
                ebx_16 -= 1
                
                if (temp11_1 == 1)
                    goto label_43de34
        else
        label_43de34:
            *(esp_1 - 4) = esi_1[2]
            *(esp_1 - 8) = esi_1[1]
            *(esp_1 - 0xc) = *esi_1
            *(esp_1 - 0x10) = arg1[4]
            esi_1[3] = DefWindowProcA()
    else
        if (eax == 0x111)
            int32_t ebx_2 = arg1[2] - 1
            
            if (ebx_2 s>= 0)
                int32_t i_5 = ebx_2 + 1
                int32_t edi_1 = 0
                int32_t i_2
                
                do
                    sub_410524(arg1, edi_1)
                    int32_t edx
                    edx.w = esi_1[1].w
                    char eax_9
                    eax_9, ecx = sub_43cd78(ecx, edx.w)
                    
                    if (eax_9 != 0)
                        goto label_43de4f
                    
                    edi_1 += 1
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
            
            goto label_43de34
        
        if (eax == 0x2b)
            void* eax_41 = esi_1[2]
            int32_t ebx_11 = arg1[2] - 1
            
            if (ebx_11 s>= 0)
                int32_t i_8 = ebx_11 + 1
                int32_t edi_5 = 0
                int32_t i_3
                
                do
                    void* eax_44 = sub_410524(arg1, edi_5)
                    *(eax_41 + 8)
                    sub_43ccd8(eax_44)
                    int32_t* var_10_3 = nullptr
                    edi_5 += 1
                    i_3 = i_8
                    i_8 -= 1
                while (i_3 != 1)
            
            goto label_43de34
        
        if (eax == 0x2c)
            void* eax_62 = esi_1[2]
            int32_t ebx_13 = arg1[2] - 1
            
            if (ebx_13 s>= 0)
                int32_t i_9 = ebx_13 + 1
                int32_t edi_6 = 0
                int32_t i_4
                
                do
                    void* eax_65 = sub_410524(arg1, edi_6)
                    *(eax_62 + 8)
                    sub_43ccd8(eax_65)
                    int32_t* var_10_4 = nullptr
                    edi_6 += 1
                    i_4 = i_9
                    i_9 -= 1
                while (i_4 != 1)
            
            goto label_43de34
        
        if (eax != 0x53)
            goto label_43de34
        
        void* eax_24 = esi_1[2]
        int32_t ebx_8 = arg1[2] - 1
        
        if (ebx_8 s< 0)
            goto label_43de34
        
        int32_t ebx_9 = ebx_8 + 1
        int32_t edi_4 = 0
        
        while (true)
            int32_t eax_28
            int32_t ecx_1
            eax_28, ecx_1 = (*(*sub_410524(arg1, edi_4) + 0x34))()
            esp_1 = &esp_1[0x11]
            int32_t var_10_2
            
            if (eax_28 != *(eax_24 + 0xc))
                void* eax_33 = sub_410524(arg1, edi_4)
                *(eax_24 + 0xc)
                ecx_1.b = 1
                sub_43ccd8(eax_33)
                var_10_2 = 0
            else
                var_10_2 = *(sub_410524(arg1, edi_4) + 0x28)
            
            if (var_10_2 != 0)
                ecx_1.b = 1
                LPARAM eax_36 = sub_43cd08(sub_410524(arg1, edi_4), *(eax_24 + 8), ecx_1)
                
                if (eax_36 == 0)
                    eax_36 = sub_43cd08(sub_410524(arg1, edi_4), *(eax_24 + 0xc), 0)
                
                void* edx_23 = *(*data_530a18 + 0x60)
                
                if (edx_23 != 0)
                    if (eax_36 == 0)
                        eax_36 = *(edx_23 + 0x150)
                    
                    if ((*(edx_23 + 0x210) & 8) == 0)
                        *data_530660
                        sub_44987c(data_530a18, eax_36)
                    else
                        *data_530660
                        sub_449888()
                
                break
            
            edi_4 += 1
            int32_t temp13_1 = ebx_9
            ebx_9 -= 1
            
            if (temp13_1 == 1)
                goto label_43de34
    
    label_43de4f:
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = 0x43de68
    int32_t* result = &var_34
    sub_403df8(result)
    return result
}
