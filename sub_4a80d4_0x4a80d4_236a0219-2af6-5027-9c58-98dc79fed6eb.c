// ============================================================
// 函数名称: sub_4a80d4
// 虚拟地址: 0x4a80d4
// WARP GUID: 236a0219-2af6-5027-9c58-98dc79fed6eb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4128c0, sub_49adb4, sub_4a86fc, sub_40cc98, sub_4128b4, sub_4a3090, sub_49ae68, sub_405ae8, sub_412930, sub_403df8, sub_4a87b0, sub_40b4b0, sub_403010
// [被调用的父级函数]: sub_4a84a7, sub_4a8418, sub_4a80ac, sub_4a86fc
// ============================================================

int32_t* __convention("regparm")sub_4a80d4(int32_t* arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3, char arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    char* var_20 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
    int32_t esi_1 = arg2
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (var_8 s> 0 && esi_1 != 0)
        arg3.b = 1
        arg2.b = 1
        (*(*arg1 + 0x48))()
        esp_1 = &var_8
        char eax_2
        int32_t ecx
        int32_t edx_1
        eax_2, edx_1, ecx = (*(*arg1 + 0x54))()
        
        if (eax_2 == 0)
            sub_405ae8(data_5302d8, &var_20)
            int32_t edx_16
            edx_16.b = 1
            sub_40b4b0(sub_4a6faf+0x221, edx_16, var_20)
            sub_403828()
            noreturn
        
        int32_t* eax_3 = arg1[0x2a]
        edx_1.b = eax_3 == 0
        edx_1.b |= arg4
        
        if (edx_1.b != 0)
            int32_t* var_c = nullptr
            edx_1.b = 1
            var_c = sub_4a87b0(ecx, edx_1, &data_4a6c6c, 0, var_c)
            var_c = &var_4
            int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_4037f0
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
            struct _EXCEPTION_REGISTRATION_RECORD** esp_2 = &ExceptionList_1
            fsbase->NtTib.ExceptionList = &ExceptionList_1
            sub_412930(var_c, esi_1, var_8)
            
            if (arg1[0x1c] != 0)
                sub_4128b4(var_c)
                (*(*arg1[0x1c] + 0x4c))()
                var_8 = sub_4128c0(var_c)
            
            int32_t var_10_2 = 1
            
            do
                int32_t eax_11 = sub_4128c0(var_c)
                
                if (add_overflow(eax_11, neg.d(var_10_2)))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_11 - var_10_2, 1))
                    sub_403010()
                    noreturn
                
                var_c[1]
                int32_t eax_15
                int32_t edx_7
                eax_15, edx_7 = (*(*arg1[0x1d] + 0x58))()
                int32_t esi_3 = eax_15
                eax_15.b = esi_3 == 0
                *(arg1 + 0x61) = eax_15.b
                edx_7.b = 1
                (*(*arg1 + 0x48))()
                esp_2[2] = 2
                int32_t var_1c = 0x274a
                int32_t var_18_1 = 0x2745
                ExceptionList_1 = 0x2746
                esp_2 = &esp_2[3]
                
                if (sub_49adb4(&var_1c, esi_3, *data_5308e0) != 0)
                    (*(*arg1 + 0x5c))()
                    sub_49ae68(*data_5308e0, *(*data_5308e0 + 4))
                    noreturn
                
                sub_4a3090(0, 0)
                int32_t edx_11
                edx_11.b = 1
                (*(*arg1 + 0x34))()
                int32_t temp3_1 = var_10_2
                var_10_2 += esi_3
                
                if (add_overflow(temp3_1, esi_3))
                    sub_403010()
                    noreturn
            while (var_10_2 s<= var_8)
            
            esp_2[2]
            fsbase->NtTib.ExceptionList = *esp_2
            esp_2[2] = 0x4a82be
            return sub_40cc98(&var_c)
        
        sub_412930(eax_3, esi_1, var_8)
        int32_t eax_31 = sub_4128c0(arg1[0x2a])
        struct _EXCEPTION_REGISTRATION_RECORD* esi_4 = arg1[0x2b]
        
        if (eax_31 s>= esi_4 && esi_4 s> 0)
            sub_4a86fc(arg1, esi_4)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_4a82db
    int32_t* result = &var_20
    sub_403df8(result)
    return result
}
