// ============================================================
// 函数名称: sub_47be18
// 虚拟地址: 0x47be18
// WARP GUID: e5df1460-e267-5cb0-bca3-7d195d084c3f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409040, sub_406010, sub_404138, sub_44cde0, sub_408f48, sub_402824, sub_4062e1, sub_4062f8, sub_405e46, sub_403e1c, sub_403008, sub_404078, sub_404080, sub_4040c4, sub_44613c, sub_404248, sub_403fa0, sub_403df8, sub_405f4c, sub_40634c, sub_405f88
// [被调用的父级函数]: sub_47d208, sub_47bd9b
// ============================================================

void** __convention("regparm")sub_47be18(BOOL arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_170 = ebx
    int32_t esi
    int32_t var_174 = esi
    int32_t edi
    int32_t var_178 = edi
    char* var_16c = nullptr
    char* var_168 = nullptr
    int32_t var_164 = 0
    int32_t var_160 = 0
    void* var_c = nullptr
    int32_t* var_17c = &var_4
    int32_t (* var_180)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4040c4(&var_160, *(arg1 + 0xa64), "\errors.txt")
    
    if (sub_409040(var_160) == 0)
        sub_4040c4(&var_164, *(arg1 + 0xa64), "\errors.txt")
        sub_408f48(var_164)
    
    sub_4040c4(&var_168, *(arg1 + 0xa64), "\errors.txt")
    void var_15c
    sub_405e46(&var_15c, var_168)
    sub_402824(sub_4062e1())
    sub_403df8(&var_c)
    
    while (true)
        uint32_t eax_13 = sub_405f88(&var_15c)
        sub_402824(eax_13)
        
        if (eax_13.b != 0)
            break
        
        uint8_t var_d
        void* eax_10
        int32_t edx_6
        eax_10, edx_6 = sub_406010(&var_15c, &var_d)
        sub_402824(eax_10)
        edx_6.b = var_d
        sub_403fa0()
        sub_404080(&var_c, var_16c)
    
    void* var_188 = var_c
    void* const var_18c = &data_47c014
    void* const var_190 = &data_47c020
    int32_t var_194 = *(arg3 + 4)
    sub_404138(&var_c, 4)
    sub_402824(sub_4062f8())
    int32_t i_1 = sub_404078(var_c)
    
    if (i_1 s> 0)
        int32_t esi_1 = 1
        int32_t i
        
        do
            void* eax_20 = sub_404248(&var_c)
            
            if (esi_1 - 1 u>= *(eax_20 - 4))
                sub_403008()
                noreturn
            
            HANDLE* eax_21 = &var_15c
            sub_40634c(eax_21, eax_20 + esi_1 - 1)
            sub_402824(eax_21)
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_402824(sub_405f4c(&var_15c))
    
    if (*(arg1 + 0x1335) == 0)
        *(arg3 + 4)
        int32_t ecx
        int32_t edx_10
        ecx, edx_10 = sub_44cde0()
        sub_44613c(arg1, edx_10, ecx)
    
    fsbase->NtTib.ExceptionList = arg3
    __return_addr = sub_47bfef
    sub_403e1c(&var_16c, 4)
    void** result = &var_c
    sub_403df8(result)
    return result
}
