// ============================================================
// 函数名称: sub_4b008c
// 虚拟地址: 0x4b008c
// WARP GUID: 3b91636b-4ee1-591a-8435-80f3f2a316bf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_4b0000, sub_404138, sub_4b16d0, sub_403e4c, sub_4030a0, sub_4b06c8, sub_4b125c, sub_403e1c, sub_4a2dfc, sub_404078, sub_49cf70, sub_4b1304, sub_4b1160, sub_4af7b0, sub_403260, sub_4ab120, sub_403df8, sub_4b19b0
// [被调用的父级函数]: sub_4b0427
// ============================================================

int32_t __convention("regparm")sub_4b008c(int32_t* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t var_18 = 0
    char* var_14 = nullptr
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    char eax_1
    int32_t ecx
    int32_t edx
    eax_1, ecx, edx = sub_4af7b0(arg1)
    *(arg2 + 0x98) = eax_1
    
    if (eax_1 == 2)
        sub_49cf70(arg1[0x41])
        ecx, edx = sub_403e4c(arg2 + 0x8c, var_14)
    
    void* eax_7
    eax_7.b = *(arg2 + 0x98)
    char temp0 = eax_7.b
    eax_7.b -= 1
    
    if (temp0 u< 1)
        if (arg1[0x3d].b == 0 && *(arg2 + 0xc) == 0)
            ecx, edx = sub_403e4c(arg2 + 0xc, "keep-alive")
    else if (temp0 == 1)
        ecx, edx = sub_403df8(arg2 + 0xc)
    else
        char temp1_1 = eax_7.b
        eax_7.b -= 1
        
        if (temp1_1 != 1)
            char temp3_1 = eax_7.b
            eax_7.b -= 1
            
            if (temp3_1 == 1)
                ecx, edx = sub_403df8(arg2 + 0xc)
        else if (arg1[0x3d].b == 0 && *(arg2 + 0xc) == 0)
            ecx, edx = sub_403e4c(arg2 + 0x80, "keep-alive")
    
    if (*(arg2 + 0x98) != 3)
        sub_4b0000(ecx, arg3)
        arg1[0x41]
        sub_4b1304(arg1[0x42], arg3, edi)
        void* eax_77
        eax_77.b = *(arg2 + 0x90)
        char temp2 = eax_77.b
        eax_77.b -= 2
        char temp4_1
        
        if (temp2 != 2)
            temp4_1 = eax_77.b
            eax_77.b -= 3
        
        if (temp2 == 2 || temp4_1 == 3)
            *0x94
            int32_t ecx_8
            ecx_8.b = 1
            (*(*arg1 + 0x80))(0, 0)
        
        fsbase->NtTib.ExceptionList = arg1
        __return_addr = &data_4b03c5
        return sub_403e1c(&var_18, 2)
    
    edx.b = 1
    int32_t* eax_19 = sub_4b125c(sub_4aed0c+0x100, edx, arg1)
    sub_403e4c(eax_19[2] + 0x70, *(arg2 + 0x70))
    sub_403e4c(eax_19[2] + 0x78, *(arg2 + 0x78))
    sub_4a2dfc(eax_19[2], *(arg2 + 0x18))
    sub_403e4c(eax_19[2] + 0x48, "no-cache")
    void* ebx_2 = arg1[0x41]
    int32_t var_34 = *(ebx_2 + 0x18)
    void* const var_38 = &data_4b03fc
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = *(ebx_2 + 0x10)
    sub_404138(eax_19[2] + 0x8c, 3)
    void* ebx_3 = eax_19[2]
    *(ebx_3 + 0x90) = 7
    int32_t ecx_2
    int32_t edx_7
    ecx_2, edx_7 = sub_403e4c(ebx_3 + 0x80, "keep-alive")
    edx_7.b = 1
    int32_t eax_39
    int32_t ecx_3
    eax_39, ecx_3 = sub_4030a0(ecx_2, edx_7)
    *(eax_19[3] + 0x78) = eax_39
    int32_t* var_34_1 = &var_4
    int32_t (* var_38_1)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_40 = &var_4
    int32_t (* var_44)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    while (true)
        ebp_1[-1]
        sub_4b0000(ecx_3, *(ebp_1[-3] + 0xc))
        sub_4b1304(ebp_1[-3], arg3, edi)
        esp_1[9] = 0xffffffff
        esp_1[8] = &ebp_1[-5]
        esp_1 = &esp_1[8]
        (*(*ebp_1[-1] + 0x70))()
        sub_403e4c(*(ebp_1[-3] + 0xc) + 0x70, ebp_1[-5])
        
        if (sub_404078(*(*(ebp_1[-3] + 0xc) + 0x70)) != 0)
            ebp_1 = sub_4b16d0(ebp_1[-3])
            sub_4b06c8(ebp_1[-1], *(ebp_1[-3] + 8), *(ebp_1[-3] + 0xc))
        else
            sub_403e4c(*(ebp_1[-3] + 0xc) + 0x70, "HTTP/1.0 200 OK")
            sub_403e4c(*(ebp_1[-3] + 0xc) + 0xc, sub_4b0427+5)
        
        int32_t eax_64
        eax_64, ebp_1 = sub_4b1160(*(ebp_1[-3] + 0xc))
        
        if (eax_64 == 0xc8)
            break
        
        ecx_3 = sub_4b19b0(ebp_1[-3])
    
    int32_t* eax_66 = *(ebp_1[-1] + 0x74)
    sub_403260(eax_66, 0x4a9e20)
    void* ebp_2 = sub_4ab120(eax_66, 0)
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[5]
    fsbase->NtTib.ExceptionList = esp_1[3]
    esp_1[5] = 0x4b0361
    sub_4030d0(*(*(*(ebp_2 - 0xc) + 0xc) + 0x78))
    return sub_4030d0(*(ebp_2 - 0xc))
}
