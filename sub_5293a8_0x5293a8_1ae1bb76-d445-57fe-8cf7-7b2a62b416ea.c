// ============================================================
// 函数名称: sub_5293a8
// 虚拟地址: 0x5293a8
// WARP GUID: 1ae1bb76-d445-57fe-8cf7-7b2a62b416ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_402d38, sub_402d20, sub_404138, sub_44cde0, sub_408e1c, sub_40401c, sub_403010, sub_40287c, sub_403e1c, sub_402bc0
// [被调用的父级函数]: sub_4dc3b8, sub_529170
// ============================================================

int32_t __fastcallsub_5293a8(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_324 = ebx
    int32_t esi
    int32_t var_328 = esi
    int32_t edi
    int32_t var_32c = edi
    int32_t var_220
    __builtin_memset(&var_220, 0, 0x1c)
    int32_t* var_330 = &var_4
    int32_t (* var_334)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *arg1 = 0
    int32_t ebx_1 = sub_402d20(*data_52fea4)
    
    if (arg2 s> 0)
        ebx_1 = arg2
    
    if (ebx_1 s< 0 || ebx_1 s>= *data_52fea4)
        int32_t var_208
        sub_408e1c(ebx_1, &var_208)
        sub_44cde0()
    
    bool o = unimplemented  {imul edx, ebx, 0xb}
    
    if (o)
        sub_403010()
        noreturn
    
    char var_104[0x100]
    sub_402bc0(&var_104, data_52ffa8 + ebx_1 * 0xb)
    arg1[0x100] = ebx_1 s< 0x1e
    int32_t edx_3 = sub_402d20(*data_530a24) * 0xb
    bool o_1 = unimplemented  {imul edx, ebx, 0xb}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t var_210
    int32_t var_33c = var_210
    void* const var_340 = &data_5295bc
    char var_204[0x100]
    sub_40401c(sub_40401c(sub_402bc0(&var_204, data_52ff20 + edx_3), &var_104), &var_204)
    int32_t var_214
    int32_t var_344 = var_214
    char* var_20c
    sub_404138(&var_20c, 3)
    int32_t ecx_4 = sub_404054(arg1, var_20c, 0xff)
    
    if (*(*data_5301f4 + 0x111f9) != 0)
        sub_402bc0(arg1, &var_104)
    else
        long double st0_1 = sub_402d38()
        long double x87_r6_1 = data_5295c0
        x87_r6_1 - st0_1
        void* eax_15
        eax_15.w = (x87_r6_1 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, st0_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_15:1.b, 6)) && not(test_bit(eax_15:1.b, 0)))
            sub_40401c(ecx_4, &var_104)
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
            ExceptionList = ExceptionList_1
            void* const var_33c_1 = &data_5295bc
            char var_320[0x100]
            sub_40401c(sub_40287c(1, 1, &var_204, &var_320), &var_320)
            int32_t var_340_2 = var_220
            void* const var_344_1 = &data_5295d4
            char* var_218
            sub_404138(&var_218, 4)
            sub_404054(arg1, var_218, 0xff)
    
    fsbase->NtTib.ExceptionList = var_334
    int32_t (* var_32c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_5295ad
    return sub_403e1c(&var_220, 7)
}
