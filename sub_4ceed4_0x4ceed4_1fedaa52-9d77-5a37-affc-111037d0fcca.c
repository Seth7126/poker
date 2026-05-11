// ============================================================
// 函数名称: sub_4ceed4
// 虚拟地址: 0x4ceed4
// WARP GUID: 1fedaa52-9d77-5a37-affc-111037d0fcca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_4d5ba0, sub_404054, sub_4cc6dc, sub_4d5bdc, sub_4746a0, sub_4c08f8, sub_51b4f0, sub_408e1c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4cdcac, sub_4ce8e2, sub_4c62e8, sub_4cdec4, sub_4ce5b4, sub_4ce88a, sub_40e8c2, sub_4ce832
// ============================================================

void* __convention("regparm")sub_4ceed4(void* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, int32_t arg3, char arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_134 = ebx
    int32_t esi
    int32_t var_138 = esi
    int32_t edi
    int32_t var_13c = edi
    int32_t var_28 = 0
    int32_t var_12c = 0
    int32_t var_130 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
    void* ebx_1 = arg1
    int32_t* var_140 = &var_4
    int32_t (* var_144)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t eax
    int32_t ecx
    eax, ecx = GetTickCount()
    int32_t var_14c = 0
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(ebx_1 + 8))
    int32_t var_14c_1 = sbb.d(0, edx, eax u< eax_2)
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    
    if (var_14c_1 != 0)
        if (var_14c_1 s> 0)
        label_4cef2d:
            uint32_t eax_4
            eax_4, ecx = GetTickCount()
            *(ebx_1 + 8) = eax_4
            *(ebx_1 + 4) = 0
    else if (eax - eax_2 u> 0x12c)
        goto label_4cef2d
    
    if (arg5 s> 0 || arg5 == 0xffffff91)
        if (*(ebx_1 + 4) s<= 0 && arg4 == 0)
            if (*(*data_5301f4 + 0xffec) != 2)
            label_4cefb0:
                
                if (*(*data_5301f4 + 0xffec) == 2 || (arg3 != 9 && var_8 != 9)
                        || *(*data_5301f4 + 0x2008c) != 0)
                    int32_t var_14c_2 = 0xffffffff
                    int32_t var_150_2 = 0x15
                    ecx, ebx_1, ebp_1 = sub_51b4f0(*data_5303b8, nullptr, data_530714, 0x15, 0xffffffff)
                    esp_1 = &var_8
                    int32_t temp5_1 = *(ebx_1 + 4)
                    *(ebx_1 + 4) += 1
                    
                    if (add_overflow(temp5_1, 1))
                        sub_403010()
                        noreturn
            else
                int32_t eax_7
                eax_7, ecx = sub_4c08f8()
                int32_t edx_4 = *(*data_5301f4 + 0x456c)
                
                if (add_overflow(edx_4, neg.d(eax_7)))
                    sub_403010()
                    noreturn
                
                if (edx_4 - eax_7 s<= *(*data_5301f4 + 0xfff0) || *(*data_5301f4 + 0xfff0) == 1)
                    goto label_4cefb0
        
        if (ebp_1[-1] == 9 && ebp_1[4].b != 0)
            *(ebp_1 - 0x19) = sub_4d5bdc(ebp_1[5])
            ebp_1[-4] = 0xffffffff
            int32_t eax_20
            eax_20.b = *(ebp_1 - 0x19)
            bool o_3 = unimplemented  {imul eax, eax, 0xd4f}
            
            if (o_3)
                sub_403010()
                noreturn
            
            int32_t edi_1 = *(eax_20 * 0x353c + &data_5f0b40)
            
            if (edi_1 s>= 0)
                int32_t i_4 = edi_1 + 1
                void* eax_22 = &data_532f70
                int32_t i
                
                do
                    int32_t edx_6
                    edx_6.b = *(ebp_1 - 0x19)
                    bool o_4 = unimplemented  {imul edx, edx, 0xd4f}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    if (*(eax_22 + edx_6 * 0x353c + 0xba718) == 1)
                        int32_t temp14_1 = ebp_1[-4]
                        ebp_1[-4] += 1
                        
                        if (add_overflow(temp14_1, 1))
                            sub_403010()
                            noreturn
                    
                    eax_22 += 0x50
                    i = i_4
                    i_4 -= 1
                while (i != 1)
            
            int32_t i_7 = *(ebx_1 + 0x1660)
            
            if (add_overflow(i_7, 0xffffffff))
                sub_403010()
                noreturn
            
            if (i_7 - 1 s>= 0)
                int32_t i_5 = i_7
                int32_t esi_1 = 0
                int32_t i_1
                
                do
                    int32_t eax_23 = esi_1 * 5
                    bool o_7 = unimplemented  {imul eax, esi, 0x5}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    if (*(ebx_1 + (eax_23 << 1) + 0x844) == 9
                            && sx.d(*(ebx_1 + (eax_23 << 1) + 0x848)) == ebp_1[5]
                            && *(ebx_1 + (eax_23 << 1) + 0x84d) != 0)
                        int32_t temp21_1 = ebp_1[-4]
                        ebp_1[-4] -= 1
                        
                        if (add_overflow(temp21_1, 0xffffffff))
                            sub_403010()
                            noreturn
                    
                    esi_1 += 1
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
            
            if (ebp_1[-4] s< 0)
                int32_t eax_24
                eax_24.b = *(ebp_1 - 0x19)
                bool o_9 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                ebp_1[-8] = eax_24 * 0x353c + &data_5ed670
                int32_t edi_3 = *(ebp_1[-8] + 0x34d0)
                
                if (add_overflow(edi_3, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (edi_3 - 1 s>= 0)
                    int32_t edi_5 = edi_3
                    int32_t esi_2 = 0
                    int32_t i_2
                    
                    do
                        int32_t eax_29 = *(ebp_1[-8] + 0x34d0)
                        int32_t eax_30 = eax_29 - esi_2
                        
                        if (add_overflow(eax_29, neg.d(esi_2)))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_30, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        ebp_1[-5] = eax_30 - 1
                        int32_t eax_32 = ebp_1[-4]
                        int32_t eax_33 = neg.d(eax_32)
                        
                        if (neg.d(eax_32) == 0x80000000)
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_33, ebp_1[-5]))
                            sub_403010()
                            noreturn
                        
                        ebp_1[-6] = eax_33 + ebp_1[-5]
                        ebp_1[-5]
                        bool o_15 = unimplemented  {imul eax, dword [ebp-0x14], 0xa}
                        
                        if (o_15)
                            sub_403010()
                            noreturn
                        
                        *(esp_1 - 4) = ebp_1[-8] + ebp_1[-5] * 0x50
                        ebp_1[-6]
                        int32_t eax_37 = ebp_1[-6] * 0xa
                        bool o_16 = unimplemented  {imul eax, dword [ebp-0x18], 0xa}
                        
                        if (o_16)
                            sub_403010()
                            noreturn
                        
                        int32_t edx_10 = ebp_1[-8]
                        int32_t ecx_2 = *(esp_1 - 4)
                        *(esp_1 - 4) = esi_2
                        *(esp_1 - 8) = edi_5
                        __builtin_memcpy(edx_10 + (eax_37 << 3), ecx_2, 0x50)
                        i_2 = *(esp_1 - 8)
                        int32_t esi_4 = *(esp_1 - 4)
                        ebp_1[-6]
                        bool o_17 = unimplemented  {imul eax, dword [ebp-0x18], 0xa}
                        
                        if (o_17)
                            sub_403010()
                            noreturn
                        
                        *(ebp_1[-8] + ebp_1[-6] * 0x50 + 4) = ebp_1[-6]
                        ebp_1[-6]
                        bool o_18 = unimplemented  {imul eax, dword [ebp-0x18], 0xa}
                        
                        if (o_18)
                            sub_403010()
                            noreturn
                        
                        if (*(ebp_1[-8] + ebp_1[-6] * 0x50 + 0x18) == 0)
                            ebp_1[-5]
                            int32_t eax_40 = ebp_1[-5] * 0xa
                            bool o_19 = unimplemented  {imul eax, dword [ebp-0x14], 0xa}
                            
                            if (o_19)
                                sub_403010()
                                noreturn
                            
                            int32_t edx_13 = ebp_1[-8]
                            *(edx_13 + (eax_40 << 3) + 0x1c)
                            bool o_20 = unimplemented  {imul eax, dword [edx+eax*8+0x1c], 0x2}
                            
                            if (o_20)
                                sub_403010()
                                noreturn
                            
                            *(data_61c0d0 + *(edx_13 + (eax_40 << 3) + 0x1c) * 0x10 + 0x16) =
                                ebp_1[-6].b
                        
                        esi_2 = esi_4 + 1
                        edi_5 = i_2 - 1
                    while (i_2 != 1)
                
                int32_t edi_7 = ebp_1[-4]
                int32_t i_8 = neg.d(edi_7)
                
                if (neg.d(edi_7) == 0x80000000)
                    sub_403010()
                    noreturn
                
                if (add_overflow(i_8, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (i_8 - 1 s>= 0)
                    int32_t i_6 = i_8
                    int32_t esi_5 = 0
                    int32_t i_3
                    
                    do
                        bool o_23 = unimplemented  {imul eax, esi, 0xa}
                        
                        if (o_23)
                            sub_403010()
                            noreturn
                        
                        *(ebp_1[-8] + esi_5 * 0x50 + 4) = esi_5
                        bool o_24 = unimplemented  {imul eax, esi, 0xa}
                        
                        if (o_24)
                            sub_403010()
                            noreturn
                        
                        ecx.b = *(ebp_1 - 0x19)
                        *(ebp_1[-8] + esi_5 * 0x50) = ecx.b
                        
                        if (*(ebp_1 - 0x19) != 6)
                            int32_t eax_43
                            eax_43.b = *(ebp_1 - 0x19)
                            int16_t eax_44 = sub_4d5ba0(eax_43.b)
                            bool o_25 = unimplemented  {imul edx, esi, 0xa}
                            
                            if (o_25)
                                sub_403010()
                                noreturn
                            
                            *(ebp_1[-8] + esi_5 * 0x50 + 8) = eax_44
                        
                        bool o_26 = unimplemented  {imul eax, esi, 0xa}
                        
                        if (o_26)
                            sub_403010()
                            noreturn
                        
                        *(ebp_1[-8] + esi_5 * 0x50 + 0xc) = 9
                        bool o_27 = unimplemented  {imul eax, esi, 0xa}
                        
                        if (o_27)
                            sub_403010()
                            noreturn
                        
                        ecx.b = *(ebp_1 - 0x19)
                        *(ebp_1[-8] + esi_5 * 0x50 + 0x10) = ecx.b
                        bool o_28 = unimplemented  {imul eax, esi, 0xa}
                        
                        if (o_28)
                            sub_403010()
                            noreturn
                        
                        *(ebp_1[-8] + esi_5 * 0x50 + 0x18) = 1
                        bool o_29 = unimplemented  {imul eax, esi, 0xa}
                        
                        if (o_29)
                            sub_403010()
                            noreturn
                        
                        *(ebp_1[-8] + esi_5 * 0x50 + 0x1c) = 0xffffffff
                        esi_5 += 1
                        i_3 = i_6
                        i_6 -= 1
                    while (i_3 != 1)
                
                int32_t eax_49 = ebp_1[-4]
                int32_t eax_50 = neg.d(eax_49)
                
                if (neg.d(eax_49) == 0x80000000)
                    sub_403010()
                    noreturn
                
                void* edx_22 = ebp_1[-8]
                int32_t temp25_1 = *(edx_22 + 0x34d0)
                *(edx_22 + 0x34d0) += eax_50
                
                if (add_overflow(temp25_1, eax_50))
                    sub_403010()
                    noreturn
        
        if (ebp_1[5] != 0xffffff91 && sub_4cc6dc(ebp_1[-1]) s< ebp_1[5])
            sub_408e1c(sub_4cc6dc(ebp_1[-1]), &ebp_1[-9])
            *(esp_1 - 4) = ebp_1[-9]
            sub_408e1c(ebp_1[5], &ebp_1[-0x4a])
            sub_404054(&ebp_1[-0x49], ebp_1[-0x4a], 0xff)
            *(esp_1 - 8) = &ebp_1[-0x49]
            *(esp_1 - 0xc) = 0x4cf400
            sub_408e1c(ebp_1[-1], &ebp_1[-0x4b])
            sub_4746a0(ebp_1[-0x4b], 0x1a, *data_530304)
        
        *(ebp_1 - 9) = 1
        int32_t temp1_1 = *(ebx_1 + 0x1660)
        *(ebx_1 + 0x1660) += 1
        
        if (add_overflow(temp1_1, 1))
            sub_403010()
            noreturn
        
        *(ebx_1 + 0x1660)
        bool o_33 = unimplemented  {imul edx, dword [ebx+0x1660], 0x5}
        
        if (o_33)
            sub_403010()
            noreturn
        
        *(ebx_1 + *(ebx_1 + 0x1660) * 0xa + 0x83a) = (ebp_1[-1]).w
        *(ebx_1 + 0x1660)
        bool o_34 = unimplemented  {imul edx, dword [ebx+0x1660], 0x5}
        
        if (o_34)
            sub_403010()
            noreturn
        
        *(ebx_1 + *(ebx_1 + 0x1660) * 0xa + 0x83c) = (ebp_1[-2]).w
        *(ebx_1 + 0x1660)
        bool o_35 = unimplemented  {imul edx, dword [ebx+0x1660], 0x5}
        
        if (o_35)
            sub_403010()
            noreturn
        
        *(ebx_1 + *(ebx_1 + 0x1660) * 0xa + 0x83e) = (ebp_1[5]).w
        *(ebx_1 + 0x1660)
        bool o_36 = unimplemented  {imul eax, dword [ebx+0x1660], 0x5}
        
        if (o_36)
            sub_403010()
            noreturn
        
        int32_t edx_30
        edx_30.b = ebp_1[3].b
        *(ebx_1 + *(ebx_1 + 0x1660) * 0xa + 0x842) = edx_30.b
        *(ebx_1 + 0x1660)
        bool o_37 = unimplemented  {imul eax, dword [ebx+0x1660], 0x5}
        
        if (o_37)
            sub_403010()
            noreturn
        
        edx_30.b = ebp_1[4].b
        *(ebx_1 + *(ebx_1 + 0x1660) * 0xa + 0x843) = edx_30.b
        *(ebx_1 + 0x1660)
        bool o_38 = unimplemented  {imul edx, dword [ebx+0x1660], 0x5}
        
        if (o_38)
            sub_403010()
            noreturn
        
        *(ebx_1 + *(ebx_1 + 0x1660) * 0xa + 0x840) = (ebp_1[2]).w
    else
        char var_d_1 = 0
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_4cf3f4
    sub_403e1c(&ebp_1[-0x4b], 2)
    sub_403df8(&ebp_1[-9])
    return &ebp_1[-9]
}
