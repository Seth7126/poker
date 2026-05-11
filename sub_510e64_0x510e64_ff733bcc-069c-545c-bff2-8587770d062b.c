// ============================================================
// 函数名称: sub_510e64
// 虚拟地址: 0x510e64
// WARP GUID: ff733bcc-069c-545c-bff2-8587770d062b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_512f3c, sub_404188, sub_408e80, sub_403df8, sub_403010
// [被调用的父级函数]: sub_5168a7, sub_511e1c, sub_514ef8
// ============================================================

void** __convention("regparm")sub_510e64(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    void* var_c = nullptr
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_512f3c(arg1, 1, &var_c)
    char var_5 = 0
    void* temp0 = var_c
    
    if (temp0 != 0)
        sub_404188(var_c, 0x510f50)
    
    int32_t eax_3
    
    if (temp0 == 0 || temp0 == 0)
        eax_3 = 0
    else
        eax_3 = sub_408e80(var_c)
    
    if (eax_3 == 0)
    label_510ecc:
        
        if (eax_3 != 0)
            bool o_2 = unimplemented  {imul eax, eax, 0xe9}
            
            if (o_2)
                sub_403010()
                noreturn
            
            *(arg1 + eax_3 * 0x3a4 + 0x185) = 0
        
        int32_t i_1 = *(arg1 + 0x348)
        
        if (i_1 s> 0)
            int32_t eax_5 = 1
            int32_t i
            
            do
                int32_t edx_2 = eax_5 * 0xe9
                bool o_3 = unimplemented  {imul edx, eax, 0xe9}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                if (*(arg1 + (edx_2 << 2) - 0x50) == 1 && *(arg1 + (edx_2 << 2) + 0x185) == 0)
                    *(arg1 + (edx_2 << 2) + 0x185) = 1
                    char var_5_1 = 1
                    break
                
                eax_5 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    else
        bool o_1 = unimplemented  {imul edx, eax, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(arg1 + eax_3 * 0x3a4 - 0x50) != 1)
            goto label_510ecc
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) =
        sub_510f3f
    void** result = &var_c
    sub_403df8(result)
    return result
}
