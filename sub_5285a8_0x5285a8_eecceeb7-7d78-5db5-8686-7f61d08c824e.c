// ============================================================
// 函数名称: sub_5285a8
// 虚拟地址: 0x5285a8
// WARP GUID: eecceeb7-7d78-5db5-8686-7f61d08c824e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4cc6dc, sub_5207dc, sub_4c2d7c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_5286dc, sub_5289d0, sub_529818, sub_528770
// ============================================================

void** __convention("regparm")sub_5285a8(void* arg1, char arg2)
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
    void* var_c = nullptr
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0x13b4) = 1
    *(arg1 + 0x13ac) = *data_5300d0
    *(arg1 + 0x13b0) = 0
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            if (sub_4c2d7c(ebx_1) == 0)
            label_528699:
                bool o_6 = unimplemented  {imul eax, ebx, 0x22}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                *(arg1 + ebx_1 * 0x110 + 0xb28) = 0
            else
                if (arg2 != 0)
                    bool o_1 = unimplemented  {imul eax, ebx, 0x41}
                    
                    if (o_1)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + ebx_1 * 0x208 + 0x20086) != 0)
                        goto label_528699
                
                bool o_2 = unimplemented  {imul eax, ebx, 0x22}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                *(arg1 + ebx_1 * 0x110 + 0xb28) = 1
                sub_5207dc(*data_5301f4, ebx_1, 0, &var_c, nullptr)
                bool o_3 = unimplemented  {imul eax, ebx, 0x22}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                sub_404054(arg1 + ebx_1 * 0x110 + 0xa20, var_c, 0xff)
                int32_t eax_11 = sub_4cc6dc(ebx_1)
                bool o_4 = unimplemented  {imul edx, ebx, 0x22}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                *(arg1 + ebx_1 * 0x110 + 0xa1c) = eax_11
                int32_t temp1_1 = *(arg1 + 0x13b0)
                *(arg1 + 0x13b0) += 1
                
                if (add_overflow(temp1_1, 1))
                    sub_403010()
                    noreturn
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_1c_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
        int32_t arg5) = sub_5286d0
    void** result = &var_c
    sub_403df8(result)
    return result
}
