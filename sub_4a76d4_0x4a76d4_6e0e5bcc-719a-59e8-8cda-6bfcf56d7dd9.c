// ============================================================
// 函数名称: sub_4a76d4
// 虚拟地址: 0x4a76d4
// WARP GUID: 6e0e5bcc-719a-59e8-8cda-6bfcf56d7dd9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4128c0, sub_4128b4, sub_49ae68, sub_405ae8, sub_412930, sub_403df8, sub_49adb4, sub_40b4b0, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4a76d4(int32_t* arg1, char arg2, char* arg3, char arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_28 = ebx
    int32_t esi
    int32_t var_2c = esi
    int32_t edi
    int32_t var_30 = edi
    char* var_24 = nullptr
    char* var_20 = nullptr
    char* var_14 = nullptr
    int32_t* var_34 = &var_4
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_c
    
    if (arg3 == 0xffffffff)
        char* eax = arg1[0x25]
        
        var_c = eax != 0 ? eax : 0xfffffffe
    
    int32_t var_10 = 0
    (*(*arg1 + 0x48))()
    
    if ((*(*arg1 + 0x54))() != 0)
        char i
        
        do
            char eax_5
            int32_t edx_2
            eax_5, edx_2 = (*(*arg1[0x1d] + 0x50))()
            
            if (eax_5 == 0)
                if (arg4 == 0)
                    int32_t var_10_2 = 0xffffffff
                    break
                
                sub_405ae8(data_530010, &var_20)
                int32_t edx_16
                edx_16.b = 1
                sub_40b4b0(sub_498a24+0xa4, edx_16, var_20)
                sub_403828()
                noreturn
            
            int32_t* eax_6 = arg1[0x27]
            int32_t* esi_5
            
            if (eax_6 == 0 || arg1[0x1d] == 0)
                esi_5 = nullptr
                
                if (arg2 != 0)
                    sub_405ae8(data_5302d8, &var_14)
                    int32_t edx_6
                    edx_6.b = 1
                    sub_40b4b0(sub_4a6faf+0x221, edx_6, var_14)
                    sub_403828()
                    noreturn
            else
                arg1[0x26]
                (**eax_6)()
                int32_t* esi_3 = arg1[0x27]
                sub_4128c0(esi_3)
                esi_3[1]
                eax_6, edx_2 = (*(*arg1[0x1d] + 0x54))()
                esi_5 = eax_6
            
            eax_6.b = esi_5 == 0
            *(arg1 + 0x61) = eax_6.b
            
            if (eax_6.b == 0)
                var_c = 1
                int32_t var_1c = 0x274a
                int32_t var_18_1 = 0x2745
                char eax_13
                eax_13, edx_2 = sub_49adb4(&var_1c, esi_5, *data_5308e0, var_c)
                
                if (eax_13 != 0)
                    esi_5 = nullptr
                    (*(*arg1 + 0x5c))()
                    int32_t eax_16
                    eax_16, edx_2 = sub_4128c0(arg1[0x1b])
                    
                    if (eax_16 == 0)
                        sub_49ae68(*data_5308e0, *(*data_5308e0 + 4))
                        noreturn
                
                if (esi_5 s> 0)
                    (**arg1[0x27])()
                    
                    if (arg1[0x1c] != 0)
                        sub_4128b4(arg1[0x27])
                        arg1[0x27]
                        (*(*arg1[0x1c] + 0x48))()
                        esi_5 = sub_4128c0(arg1[0x27])
                    
                    if (arg1[0x18].b != 0)
                        int32_t j_1 = sub_4128c0(arg1[0x27])
                        
                        if (j_1 s> 0)
                            int32_t eax_28 = 1
                            int32_t j
                            
                            do
                                char* ecx_10
                                ecx_10.b = (*(arg1[0x27] + 4))[eax_28]
                                ecx_10.b &= 0x7f
                                *(*(arg1[0x27] + 4) + eax_28) = ecx_10.b
                                eax_28 += 1
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                    
                    (*(*arg1[0x1b] + 0xc))()
                    int32_t* edi_3 = arg1[0x27]
                    int32_t eax_31 = sub_4128c0(edi_3)
                    sub_412930(arg1[0x1b], edi_3[1], eax_31)
            
            edx_2.b = arg2
            (*(*arg1 + 0x48))()
            int32_t* var_10_1 = esi_5
            
            if (esi_5 != 0)
                break
            
            i = (*(*arg1 + 0x54))()
        while (i != 0)
    else if (arg2 != 0)
        sub_405ae8(data_5302d8, &var_24)
        int32_t edx_19
        edx_19.b = 1
        sub_40b4b0(sub_4a6faf+0x221, edx_19, var_24)
        sub_403828()
        noreturn
    
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4a7960
    sub_403e1c(&var_24, 2)
    int32_t* result = &var_14
    sub_403df8(result)
    return result
}
