// ============================================================
// 函数名称: sub_50a360
// 虚拟地址: 0x50a360
// WARP GUID: d49b198e-4f54-578b-a30d-29cab66c1a4b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_408e80, sub_403e1c, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_50b624
// ============================================================

void** __convention("regparm")sub_50a360(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    char* var_1c = nullptr
    char* var_18 = nullptr
    char* var_14 = nullptr
    void* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_9 = 1
    sub_404280(3, 1, var_8, &var_14)
    int32_t eax_3 = sub_408e80(var_14)
    bool o = unimplemented  {imul eax, edi, 0x2345}
    
    if (o)
        sub_403010()
        noreturn
    
    *(data_5301b0 + arg1 * 0x8d14 - 0x39c) = eax_3
    bool o_1 = unimplemented  {imul eax, edi, 0x2345}
    
    if (o_1)
        sub_403010()
        noreturn
    
    data_5301b0
    
    if (eax_3 s>= 0x19)
        int32_t i_1 = eax_3 - 0x18
        int32_t esi_1 = 0x19
        void* ebx_5 = data_5301b0 + 0x14b4
        int32_t i
        
        do
            if (add_overflow(esi_1, 0xffffffe8))
                sub_403010()
                noreturn
            
            int32_t edx_2 = (esi_1 - 0x18) * 2
            bool o_3 = unimplemented  {imul edx, eax, 0x2}
            
            if (o_3)
                sub_403010()
                noreturn
            
            if (add_overflow(edx_2, 3))
                sub_403010()
                noreturn
            
            if (add_overflow(edx_2 + 3, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_404280(1, edx_2 + 2, var_8, &var_18)
            char* eax_9
            eax_9.b = *var_18
            bool o_6 = unimplemented  {imul edx, edi, 0x2345}
            
            if (o_6)
                sub_403010()
                noreturn
            
            *(ebx_5 + arg1 * 0x8d14 - 0x8de8) = eax_9.b
            
            if (add_overflow(esi_1, 0xffffffe8))
                sub_403010()
                noreturn
            
            int32_t edx_6 = (esi_1 - 0x18) * 2
            bool o_8 = unimplemented  {imul edx, eax, 0x2}
            
            if (o_8)
                sub_403010()
                noreturn
            
            if (add_overflow(edx_6, 3))
                sub_403010()
                noreturn
            
            sub_404280(1, edx_6 + 3, var_8, &var_1c)
            char* eax_13
            eax_13.b = *var_1c
            bool o_10 = unimplemented  {imul edx, edi, 0x2345}
            
            if (o_10)
                sub_403010()
                noreturn
            
            *(ebx_5 + arg1 * 0x8d14 - 0x8de7) = eax_13.b
            esi_1 += 1
            ebx_5 += 0xd4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_50a4d6
    sub_403e1c(&var_1c, 3)
    void** result = &var_8
    sub_403df8(result)
    return result
}
