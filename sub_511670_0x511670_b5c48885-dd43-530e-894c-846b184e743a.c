// ============================================================
// 函数名称: sub_511670
// 虚拟地址: 0x511670
// WARP GUID: b5c48885-dd43-530e-894c-846b184e743a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_404080, sub_40401c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4f8b60
// ============================================================

char** __convention("regparm")sub_511670(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    char* var_c = nullptr
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg3)
    bool o = unimplemented  {imul eax, edi, 0xe9}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t i_2 = *(arg1 + arg2 * 0x3a4 + 0x17c)
    
    if (i_2 s<= 0)
        sub_403df8(arg3)
    else
        int32_t ecx = sub_403df8(arg3)
        
        if (add_overflow(i_2, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_2 - 1 s>= 0)
            int32_t i_1 = i_2
            int32_t var_8_1 = 0
            int32_t i
            
            do
                if (*arg3 != 0)
                    int32_t var_28_1 = *arg3
                    void* const var_2c_1 = &data_511754
                    int32_t var_30_1 = 0x511760
                    void* const var_34_1 = &data_511754
                    ecx = sub_404138(arg3, 4)
                
                bool o_2 = unimplemented  {imul edx, dword [ebp-0x4], 0x41}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                sub_40401c(ecx, arg1 + arg2 * 0x3a4 - 0x50 + var_8_1 * 0x41 + 0x2b)
                ecx = sub_404080(arg3, var_c)
                var_8_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_511742
    char** result = &var_c
    sub_403df8(result)
    return result
}
