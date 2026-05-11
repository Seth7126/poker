// ============================================================
// 函数名称: sub_4c9168
// 虚拟地址: 0x4c9168
// WARP GUID: a1d76f62-26e1-5691-8b98-8fff70624ba1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_4837ec, sub_4c1090, sub_528b98, sub_403df8, sub_403010
// [被调用的父级函数]: sub_51b730, sub_529818, sub_4c8aa0
// ============================================================

void**sub_4c9168()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_4c1090() != 0)
        sub_528b98(*data_5302c4, 1, &var_8)
        int32_t ecx_3 = *data_5300e4
        
        if (add_overflow(ecx_3, 1))
            sub_403010()
            noreturn
        
        long double x87_r0
        sub_47ab08(*data_530304, *data_5307c8, ecx_3 + 1, x87_r0, var_8)
        sub_528b98(*data_5302c4, 2, &var_8)
        sub_47ab08(*data_530304, *data_5307c8, *data_5300e4, x87_r0, var_8)
        void* eax_11 = data_5302c8
        *eax_11
        bool o_2 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (*(*(*data_530304 + 0xab0) + *eax_11 * 0x81c0 + 1) != 0)
            sub_4837ec(*data_530304, *data_5307c8, false)
        else
            void* eax_13 = data_530434
            *eax_13
            bool o_3 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_3)
                sub_403010()
                noreturn
            
            if (*(*(*data_530304 + 0xab0) + *eax_13 * 0x81c0 + 1) != 0)
                sub_4837ec(*data_530304, *data_5307c8, false)
            else
                void* eax_15 = data_530854
                *eax_15
                bool o_4 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                if (*(*(*data_530304 + 0xab0) + *eax_15 * 0x81c0 + 1) != 0)
                    sub_4837ec(*data_530304, *data_5307c8, false)
                else
                    void* eax_18 = *data_530304
                    *(eax_18 + 0x9f0)
                    bool o_5 = unimplemented  {imul eax, dword [eax+0x9f0], 0x1038}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    if (*(*(*data_530304 + 0xab0) + *(eax_18 + 0x9f0) * 0x81c0 + 1) == 0)
                        sub_4837ec(*data_530304, *data_5307c8, true)
                    else
                        sub_4837ec(*data_530304, *data_5307c8, false)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_4c92e8
    void** result = &var_8
    sub_403df8(result)
    return result
}
