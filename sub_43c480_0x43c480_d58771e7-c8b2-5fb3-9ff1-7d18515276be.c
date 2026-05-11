// ============================================================
// 函数名称: sub_43c480
// 虚拟地址: 0x43c480
// WARP GUID: d58771e7-c8b2-5fb3-9ff1-7d18515276be
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_4030d0, sub_4042c0, sub_403e4c, sub_4030a0, sub_411c84, sub_404280, sub_403e1c, sub_404308, sub_403e90, sub_43b964, sub_43c26c, sub_404078, sub_404188, sub_43b974, sub_43e290, sub_43e1f8, sub_43c29c, sub_403df8, sub_411c50, sub_43ca9c, sub_4088f0, sub_43c320
// [被调用的父级函数]: sub_439e08, sub_43e014, sub_43cd94
// ============================================================

void** __convention("regparm")sub_43c480(void* arg1, char arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_5 = 8
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_5
        i_5 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg3
    *(esp_2 - 0xc) = arg4
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x18
    char var_1d = 0
    void var_30
    void* var_8
    
    if (arg2 == 0)
        char eax_1
        
        if ((*(arg1 + 0x20) & 0x10) == 0)
            eax_1 = sub_43ca9c(arg1)
        
        if ((*(arg1 + 0x20) & 0x10) != 0 || eax_1 == 0)
            *(esp_2 - 0x10)
            fsbase->NtTib.ExceptionList = *(esp_2 - 0x18)
            *(esp_2 - 0x10) = sub_43c8f9
            void var_44
            sub_403e1c(&var_44, 4)
            sub_403e1c(&var_30, 3)
            void var_1c
            sub_403df8(&var_1c)
            void** result = &var_8
            sub_403df8(result)
            return result
    
    int32_t ecx
    int32_t edx_1
    ecx, edx_1 = sub_403e90(&var_8, data_52e88c)
    edx_1.b = 1
    int32_t eax_4
    int32_t ecx_1
    int32_t edx_2
    eax_4, ecx_1, edx_2 = sub_4030a0(ecx, edx_1)
    int32_t var_10 = eax_4
    edx_2.b = 1
    int32_t eax_6
    int32_t ecx_2
    int32_t edx_3
    eax_6, ecx_2, edx_3 = sub_4030a0(ecx_1, edx_2)
    int32_t var_18 = eax_6
    edx_3.b = 1
    int32_t* eax_8
    int32_t ecx_3
    int32_t edx_4
    eax_8, ecx_3, edx_4 = sub_4030a0(ecx_2, edx_3)
    edx_4.b = 1
    int32_t var_c = sub_4030a0(ecx_3, edx_4)
    int32_t var_14 = 0
    *(esp_2 - 0x1c) = &var_4
    *(esp_2 - 0x20) = j_sub_4037f0
    *(esp_2 - 0x24) = fsbase->NtTib.ExceptionList
    void* esp_11 = esp_2 - 0x24
    fsbase->NtTib.ExceptionList = esp_11
    int32_t eax_13 = sub_43b964(arg1) - 1
    
    if (eax_13 s>= 0)
        int32_t i_4 = eax_13 + 1
        int32_t esi = 0
        int32_t i_1
        
        do
            char temp1_1 = *(sub_43b974(arg1, esi) + 0x32)
            
            if (temp1_1 != 0)
                sub_404188(*(sub_43b974(arg1, esi) + 0x24), 0x43c90c)
                
                if (temp1_1 != 0 && *(sub_43b974(arg1, esi) + 0x24) != 0)
                    void* var_38
                    sub_43e290(*(sub_43b974(arg1, esi) + 0x24), &var_38)
                    int32_t var_28
                    sub_4088f0(var_38, &var_28)
                    
                    if (var_28 != 0)
                        if (sub_40c024(var_28, data_52e88c) != 0)
                            *(esp_11 - 4) = &var_4
                            char eax_34 = sub_43c26c()
                            *(esp_11 - 4)
                            
                            if (eax_34 == 0)
                                *(esp_11 - 4) = sub_43b974(arg1, esi) + 0x24
                                char* var_3c
                                sub_43e1f8(*(sub_43b974(arg1, esi) + 0x24), &var_3c)
                                sub_403e4c(*(esp_11 - 4), var_3c)
                                *(esp_11 - 4) = sub_43b974(arg1, esi)
                                *(sub_43b974(arg1, esi) + 0x24)
                                sub_411c84(eax_8)
                    else
                        *(esp_11 - 4) = sub_43b974(arg1, esi)
                        *(sub_43b974(arg1, esi) + 0x24)
                        sub_411c84(eax_8)
            
            esi += 1
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    sub_403e90(&var_30, var_8)
    void* esp_17 = esp_11 + 0x28
    int32_t eax_50 = (*(*eax_8 + 0x14))() - 1
    
    if (eax_50 s>= 0)
        int32_t var_34_1 = eax_50 + 1
        int32_t i_2
        
        do
            sub_403e90(&ebp_1[-1], ebp_1[-0xb])
            ebp_1[-8]
            (*(*ebp_1[-5] + 8))()
            (*(*ebp_1[-3] + 0x40))()
            int32_t j = (*(*ebp_1[-5] + 0x14))() - 1
            
            if (j s>= 0)
                do
                    (*(*ebp_1[-5] + 0xc))()
                    
                    for (struct _EXCEPTION_REGISTRATION_RECORD* k = 1; k s<= sub_404078(ebp_1[-0xa]); 
                            k = &k->Next + 1)
                        int32_t eax_58
                        eax_58.b = *(ebp_1[-0xa] + k - 1)
                        
                        if (not(test_bit(*data_530a44, eax_58 & 0xff)))
                            *(esp_17 - 4) = &ebp_1[-0xf]
                            sub_404280(1, k, ebp_1[-0xa])
                            sub_4088f0(ebp_1[-0xf], &ebp_1[-9])
                            *(esp_17 - 4) = ebp_1
                            ebp_1[-9]
                            char eax_64 = sub_43c26c()
                            *(esp_17 - 4)
                            
                            if (eax_64 != 0)
                                if (*(data_530a80 + 8) == 0)
                                    sub_404308(sub_43c913+5, &ebp_1[-0xa], k)
                                else
                                    ebp_1, j = sub_43c320(&ebp_1[-0xa], ebp_1[-9], k)
                                
                                (*(*ebp_1[-5] + 0x18))()
                                ebp_1[-0xa]
                                (*(*ebp_1[-3] + 0x38))()
                                (*(*ebp_1[-5] + 0x44))()
                                break
                        else
                            k = &k->Next + 1
                    
                    j -= 1
                while (j != 0xffffffff)
            
            if ((*(*ebp_1[-3] + 0x14))() s> ebp_1[-4])
                *(esp_17 - 4) = ebp_1
                sub_43c29c()
                *(esp_17 - 4)
            
            if ((*(*ebp_1[-5] + 0x14))() s<= 0)
                break
            
            int32_t ebx_4 = (*(*ebp_1[-5] + 0x14))() - 1
            
            if (ebx_4 s>= 0)
                int32_t j_2 = ebx_4 + 1
                int32_t esi_2 = 0
                int32_t j_1
                
                do
                    int32_t eax_80 = (*(*ebp_1[-5] + 0x18))()
                    sub_411c50(ebp_1[-8], eax_80)
                    (*(*ebp_1[-8] + 0x14))()
                    (*(*ebp_1[-8] + 0x60))()
                    esi_2 += 1
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
            
            i_2 = ebp_1[-0xc]
            ebp_1[-0xc] -= 1
        while (i_2 != 1)
    
    if (ebp_1[-4] == 0)
        *(esp_17 - 4) = ebp_1
        sub_43c29c()
        *(esp_17 - 4)
    
    *(ebp_1 - 0x19) = (*(*ebp_1[-2] + 0x14))() s> 0
    int32_t eax_90 = (*(*ebp_1[-2] + 0x14))() - 1
    
    if (eax_90 s>= 0)
        ebp_1[-0xc] = eax_90 + 1
        int32_t esi_3 = 0
        int32_t i_3
        
        do
            (*(*ebp_1[-2] + 0xc))()
            
            if (*(data_530a80 + 8) != 0 && sub_40c024(sub_43c913+5, ebp_1[-0xa]) == 0 && ebp_1[-6] != 0
                    && sub_40c024(sub_43c913+5, ebp_1[-0xa]) == 0)
                *(esp_17 - 4) = &ebp_1[-0x10]
                sub_404280(1, sub_404078(ebp_1[-6]), ebp_1[-6])
                ebp_1, esi_3 = sub_43c320(&ebp_1[-0xa], ebp_1[-0x10], nullptr)
                sub_4042c0(&ebp_1[-6], sub_404078(ebp_1[-6]), 1)
            
            sub_403e4c((*(*ebp_1[-2] + 0x18))() + 0x24, ebp_1[-0xa])
            esi_3 += 1
            i_3 = ebp_1[-0xc]
            ebp_1[-0xc] -= 1
        while (i_3 != 1)
    
    *(esp_17 + 8)
    fsbase->NtTib.ExceptionList = *esp_17
    *(esp_17 + 8) = 0x43c8ba
    sub_4030d0(ebp_1[-2])
    sub_4030d0(ebp_1[-8])
    sub_4030d0(ebp_1[-5])
    return sub_4030d0(ebp_1[-3])
}
