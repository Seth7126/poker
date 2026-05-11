// ============================================================
// 函数名称: sub_51497c
// 虚拟地址: 0x51497c
// WARP GUID: f6a5fcbf-b9d3-573a-ae20-1e27f8e54ce7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_50d52c, sub_515920, sub_402bdc, sub_4956c0, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_50b624, sub_514ef8, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_51497c(void* arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_19c = ebx
    int32_t esi
    int32_t var_1a0 = esi
    int32_t edi
    int32_t var_1a4 = edi
    void* var_198 = nullptr
    void* var_194 = nullptr
    int32_t* var_1a8 = &var_4
    int32_t (* var_1ac)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    void var_90
    sub_50d52c(arg3, &var_90)
    int32_t ebx_1
    ebx_1.b = 1
    int32_t* var_1b4 = &var_4
    int32_t (* var_1b8)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_8c = 7
    char var_89 = 2
    void var_2b
    
    if (arg2 != 0)
        char var_8a = 2
        char var_8b = 4
    else
        char var_190[0x100]
        
        if (*(arg1 + 0x344) == 0)
            char var_8a_2 = 4
            char var_8b_2 = 5
            sub_4956c0(*(*(arg1 + 0x94) + 0x80), &var_198)
            sub_404054(&var_190, var_198, 0xff)
            sub_402bdc(&var_2b, &var_190, 0x12)
        else
            char var_8a_1 = 0
            char var_8b_1 = 4
            sub_4956c0(*(*(arg1 + 0x60) + 0x80), &var_194)
            sub_404054(&var_190, var_194, 0xff)
            sub_402bdc(&var_2b, &var_190, 0x12)
    
    void var_6c
    sub_402bdc(&var_6c, arg1 + 0x31, 0x40)
    
    if (*(arg1 + 0x344) == 0)
        *(arg1 + 0x350)
        bool o_2 = unimplemented  {imul eax, dword [edi+0x350], 0xe9}
        
        if (o_2)
            sub_403010()
            noreturn
        
        *(arg1 + *(arg1 + 0x350) * 0x3a4 - 0x50) = 1
    else
        *(arg1 + 0x350)
        bool o = unimplemented  {imul eax, dword [edi+0x350], 0xe9}
        
        if (o)
            sub_403010()
            noreturn
        
        *(arg1 + *(arg1 + 0x350) * 0x3a4 - 0x50) = 2
        *(arg1 + 0x350)
        bool o_1 = unimplemented  {imul eax, dword [edi+0x350], 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(arg1 + *(arg1 + 0x350) * 0x3a4 + 0x185) = 0
    
    *(arg1 + 0x350)
    bool o_3 = unimplemented  {imul eax, dword [edi+0x350], 0xe9}
    
    if (o_3)
        sub_403010()
        noreturn
    
    sub_402bdc(arg1 + *(arg1 + 0x350) * 0x3a4 - 0x4f, arg1 + 0x31, 0x14)
    char var_7f = *(arg1 + 0x346)
    char var_88 = (*(arg1 + 0x350)).b
    char var_87 = (*(*data_5301f4 + 0x111d0)).b
    
    if (arg2 == 0)
        sub_515920(arg1, &var_90, nullptr)
    else
        for (int32_t i = 1; i != 9; i += 1)
            if (i s<= *(arg1 + 0x348) && i != arg3)
                bool o_4 = unimplemented  {imul eax, esi, 0xe9}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                int32_t eax_20
                eax_20.b = *(arg1 + i * 0x3a4 - 0x50)
                
                if (eax_20.b - 1 u< 2)
                    bool o_5 = unimplemented  {imul eax, esi, 0xe9}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_22
                    eax_22.b = *(arg1 + i * 0x3a4 + 0x184)
                    char var_7f_1 = eax_22.b
                    char var_88_1 = i.b
                    bool o_6 = unimplemented  {imul edx, esi, 0xe9}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    sub_402bdc(&var_6c, arg1 + i * 0x3a4 - 0x4f, 0x40)
                    bool o_7 = unimplemented  {imul edx, esi, 0xe9}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    sub_402bdc(&var_2b, arg1 + i * 0x3a4 - 0x3a, 0x12)
                    bool o_8 = unimplemented  {imul eax, dword [ebp-0x8], 0xe9}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    sub_515920(arg1, &var_90, *(arg1 + arg3 * 0x3a4 + 0x194))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_1a8_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_514c3d
    return sub_403e1c(&var_198, 2)
}
