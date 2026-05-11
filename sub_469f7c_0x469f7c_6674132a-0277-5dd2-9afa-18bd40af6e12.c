// ============================================================
// 函数名称: sub_469f7c
// 虚拟地址: 0x469f7c
// WARP GUID: 6674132a-0277-5dd2-9afa-18bd40af6e12
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_474260, sub_404138, sub_408e1c, sub_469ad8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_47ab08, sub_4692db, sub_47af7c, sub_46f698, sub_4692e4, sub_47b650, sub_47b0c8
// ============================================================

int32_t __convention("regparm")sub_469f7c(void* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_224 = ebx
    int32_t esi
    int32_t var_228 = esi
    int32_t edi
    int32_t var_22c = edi
    char* var_214 = nullptr
    int32_t var_218 = 0
    int32_t var_21c = 0
    int32_t var_220 = 0
    int32_t ecx
    ecx.b = *arg2
    char var_110[0x100]
    __builtin_memcpy(&var_110, arg2, ecx + 1)
    int32_t esi_2 = arg3
    int32_t* var_230_1 = &var_4
    int32_t (* var_234)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool eax = esi_2 s>= 0x3e8
    
    if (eax != 0)
        int32_t temp0_1 = esi_2
        esi_2 -= 0x3e8
        
        if (add_overflow(temp0_1, 0xfffffc18))
            sub_403010()
            noreturn
    
    bool o_2 = unimplemented  {imul edx, esi, 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    bool o_3 = unimplemented  {imul edx, edi, 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    int32_t edx_2
    edx_2.b = *(*(arg1 + 0xab0) + esi_2 * 0x81c0 + arg5 * 0x118 - 0x16)
    char var_9 = edx_2.b
    bool o_4 = unimplemented  {imul edx, esi, 0x1038}
    
    if (o_4)
        sub_403010()
        noreturn
    
    bool o_5 = unimplemented  {imul edx, edi, 0x23}
    
    if (o_5)
        sub_403010()
        noreturn
    
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 =
        *(*(arg1 + 0xab0) + esi_2 * 0x81c0 + arg5 * 0x118 - 0x1c)
    int32_t var_10
    
    var_10 = eax == 0 ? 0 : 1
    
    bool o_6 = unimplemented  {imul eax, esi, 0x1038}
    
    if (o_6)
        sub_403010()
        noreturn
    
    bool o_7 = unimplemented  {imul edx, edi, 0x23}
    
    if (o_7)
        sub_403010()
        noreturn
    
    int32_t eax_2
    eax_2.b = *(*(arg1 + 0xab0) + esi_2 * 0x81c0 + arg5 * 0x118 - 0xf8)
    char temp1 = eax_2.b
    eax_2.b -= 0xd
    char temp4_1
    
    if (temp1 != 0xd)
        eax_2.b -= 2
        temp4_1 = eax_2.b
        eax_2.b -= 3
    
    int32_t eax_4
    
    if (temp1 == 0xd || temp4_1 u< 3 || arg4 s> 0)
        eax_4 = arg4 + var_10
        
        if (add_overflow(arg4, var_10))
            sub_403010()
            noreturn
        
        if (var_9 != 0)
            int32_t eax_5 = arg4 * 2
            bool o_9 = unimplemented  {imul eax, dword [ebp+0xc], 0x2}
            
            if (o_9)
                sub_403010()
                noreturn
            
            eax_4 = eax_5 + var_10
            
            if (add_overflow(eax_5, var_10))
                sub_403010()
                noreturn
    else
        eax_4 = var_10
    
    struct _EXCEPTION_REGISTRATION_RECORD** esp
    
    if (var_8 s< 0 || *(arg1 + 0x314) s<= var_8 || arg4 s< 0 || eax_4 s< 0)
    label_46a118:
        void* const var_23c_4 = "OVCStringContainer Error: \rOverflow at d"
        sub_408e1c(esi_2, &var_218)
        int32_t var_240_1 = var_218
        void* const var_244_1 = &data_46a1e8
        sub_408e1c(arg5, &var_21c)
        int32_t var_248_1 = var_21c
        void* const var_24c_1 = &data_46a1f4
        sub_408e1c(var_8, &var_220)
        int32_t var_250_1 = var_220
        sub_404138(&var_214, 6)
        esp = &var_8
        sub_474260(arg1, var_214)
    else
        bool o_11 = unimplemented  {imul edx, esi, 0x1038}
        
        if (o_11)
            sub_403010()
            noreturn
        
        bool o_12 = unimplemented  {imul edx, edi, 0x23}
        
        if (o_12)
            sub_403010()
            noreturn
        
        if (eax_4 s> sx.d(*(*(arg1 + 0xab0) + esi_2 * 0x81c0 + arg5 * 0x118 - 0x18)))
            goto label_46a118
        
        struct _EXCEPTION_REGISTRATION_RECORD* edx_14 = var_8
        
        if (add_overflow(edx_14, neg.d(eax_4)))
            sub_403010()
            noreturn
        
        void* var_23c_3 = edx_14 - eax_4
        void var_210
        sub_469ad8(0xff, &var_110, arg1, &var_210)
        esp = &ExceptionList
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_46a1a3
    return sub_403e1c(&var_220, 4)
}
