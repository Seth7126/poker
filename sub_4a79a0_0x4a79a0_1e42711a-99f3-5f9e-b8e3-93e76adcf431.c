// ============================================================
// 函数名称: sub_4a79a0
// 虚拟地址: 0x4a79a0
// WARP GUID: 1e42711a-99f3-5f9e-b8e3-93e76adcf431
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_403e90, sub_40422c, sub_4128c0, sub_404078, sub_4043ac, sub_404188, sub_4a8bc0, sub_405ae8, sub_403df8, sub_49e610, sub_40b4b0, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void** __convention("regparm")sub_4a79a0(int32_t* arg1, void* arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    char* var_18 = nullptr
    char* var_14 = nullptr
    void* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg5 == 0xffffffff)
        arg5 = arg1[0x20]
    
    if (sub_404078(var_8) == 0)
        sub_403e90(&var_8, 0x4a7bec)
    
    arg1[0x24].b = 0
    *(arg1 + 0x91) = 0
    void* ebx_1 = nullptr
    int32_t var_10 = 0
    
    while (true)
        int32_t eax_6
        int32_t ecx
        int32_t edx
        eax_6, ecx, edx = sub_4128c0(arg1[0x1b])
        
        if (eax_6 s> 0)
            char* edx_2 = sub_4a8bc0(arg1[0x1b]) + var_10
            
            if (add_overflow(eax_6, neg.d(var_10)))
                sub_403010()
                noreturn
            
            void* eax_10
            eax_10, ecx, edx = sub_49e610(var_8, edx_2, eax_6 - var_10)
            ebx_1 = eax_10
            
            if (ebx_1 s> 0)
                void* temp3_1 = ebx_1
                ebx_1 += var_10
                
                if (add_overflow(temp3_1, var_10))
                    sub_403010()
                    noreturn
            
            var_10 = eax_6
        
        if (add_overflow(ebx_1, 0xffffffff))
            sub_403010()
            noreturn
        
        if (ebx_1 - 1 s> arg5 && arg5 != 0)
            if (arg1[0x1f].b != 0)
                arg1[0x24].b = 1
                (*(*arg1[0x1b] + 0x14))()
                break
            
            sub_405ae8(data_5302a8, &var_14)
            int32_t edx_4
            edx_4.b = 1
            sub_40b4b0(sub_498a24+0x100, edx_4, var_14)
            sub_403828()
            noreturn
        
        if (ebx_1 == 0)
            if (var_10 s> arg5 && arg5 != 0)
                if (arg1[0x1f].b != 0)
                    arg1[0x24].b = 1
                    (*(*arg1[0x1b] + 0x14))()
                    break
                
                sub_405ae8(data_5302a8, &var_18)
                int32_t edx_7
                edx_7.b = 1
                sub_40b4b0(sub_498a24+0x100, edx_7, var_18)
                sub_403828()
                noreturn
            
            ecx.b = 1
            edx.b = 1
            int32_t eax_19
            int32_t edx_9
            eax_19, edx_9 = (*(*arg1 + 0x48))()
            eax_19.b = arg3 == 0xffffffff
            edx_9.b = 1
            *(arg1 + 0x91) = (*(*arg1 + 0x6c))(eax_19) == 0xffffffff
            
            if (*(arg1 + 0x91) != 0)
                sub_403df8(arg4)
                break
        
        if (ebx_1 s> 0)
            if (add_overflow(ebx_1, 0xffffffff))
                sub_403010()
                noreturn
            
            void* eax_25 = sub_404078(var_8)
            
            if (add_overflow(eax_25, ebx_1 - 1))
                sub_403010()
                noreturn
            
            (*(*arg1[0x1b] + 0x14))()
            sub_404188(var_8, 0x4a7bec)
            
            if (eax_25 != neg.d(ebx_1 - 1) || ebx_1 - 1 s<= 0 || *(*arg4 + ebx_1 - 1 - 1) != 0xd)
                sub_4043ac(arg4, ebx_1 - 1)
            else
                if (add_overflow(ebx_1 - 1, 0xffffffff))
                    sub_403010()
                    noreturn
                
                sub_4043ac(arg4, ebx_1 - 2)
            
            break
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4a7bd9
    sub_403e1c(&var_18, 2)
    void** result = &var_8
    sub_403df8(result)
    return result
}
