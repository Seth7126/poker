// ============================================================
// 函数名称: sub_47a2ac
// 虚拟地址: 0x47a2ac
// WARP GUID: 159f775b-998e-5e80-b573-f0244414b74e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_402c90, sub_404080, sub_469d58, sub_40401c, sub_40287c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_50b624, sub_471144, sub_4d6bc8, sub_47a7ec, sub_509bfc, sub_4fc834, sub_46e24c, sub_4e649b
// ============================================================

void* __convention("regparm")sub_47a2ac(void* arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_210 = ebx
    int32_t esi
    int32_t var_214 = esi
    int32_t edi
    int32_t var_218 = edi
    int32_t var_20c = 0
    int32_t* var_21c = &var_4
    int32_t (* var_220)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul eax, edi, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t ebx_1 = arg3 * 0x23
    bool o_1 = unimplemented  {imul ebx, edx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    char* eax_2 = *(arg1 + 0xab0) + arg2 * 0x81c0 + (ebx_1 << 3) - 0xf0
    int32_t ecx
    ecx.b = *eax_2
    sub_402c90(eax_2, 0x47a44c, ecx + 1)
    
    if (ecx == 0xffffffff)
        sub_403df8(arg4)
        char var_108_1 = 0
        int32_t ebx_2 = 0
        
        while (true)
            sub_40287c(0x14, 1, &ebp_1[-0x41], &ebp_1[-0x81])
            int32_t ecx_9
            ecx_9.b = ebp_1[-0x81].b
            sub_402c90(&ebp_1[-0x81], 0x47a454, ecx_9 + 1)
            
            if (ecx_9 == 0xffffffff)
                break
            
            if (ebx_2 s> 5)
                break
            
            int32_t ebx_3
            ebx_3, ebp_1 = sub_469d58(arg1, &ebp_1[-0x41], 0xff, &ebp_1[-0x81], ebx_2, ebp_1[-1], arg2)
            sub_40287c(0x14, 1, &ebp_1[-0x41], &ebp_1[-0x81])
            int32_t ecx_6
            ecx_6.b = ebp_1[-0x81].b
            int32_t ecx_8 = sub_402c90(&ebp_1[-0x81], 0x47a454, ecx_6 + 1)
            
            if (ecx_6 != 0xffffffff)
                sub_40401c(ecx_8, &ebp_1[-0x41])
                sub_404080(ebp_1[2], ebp_1[-0x82])
                ebp_1[2]
            
            ebx_2 = ebx_3 + 1
            
            if (add_overflow(ebx_3, 1))
                sub_403010()
                noreturn
    else
        bool o_2 = unimplemented  {imul edx, edi, 0x1038}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        sub_40401c(arg3, *(arg1 + 0xab0) + arg2 * 0x81c0 + (ebx_1 << 3) - 0xf0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_21c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_47a442
    sub_403df8(&ebp_1[-0x82])
    return &ebp_1[-0x82]
}
