// ============================================================
// 函数名称: sub_47a5fc
// 虚拟地址: 0x47a5fc
// WARP GUID: 6993e3e1-0ba8-5944-af81-e461c5e030a1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_402c90, sub_404080, sub_469d58, sub_40401c, sub_40287c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_47a86c
// ============================================================

void* __convention("regparm")sub_47a5fc(void* arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_214 = ebx
    int32_t esi
    int32_t var_218 = esi
    int32_t edi
    int32_t var_21c = edi
    int32_t var_110 = 0
    int32_t* ebx_1 = arg4
    int32_t* var_220 = &var_4
    int32_t (* var_224)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t esi_1 = arg3 * 0x23
    bool o_1 = unimplemented  {imul esi, edx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    char* eax_3 = *(arg1 + 0xab0) + arg2 * 0x81c0 + (esi_1 << 3) - 0xbc
    int32_t ecx
    ecx.b = *eax_3
    sub_402c90(eax_3, sub_47a769+3, ecx + 1)
    
    if (ecx == 0xffffffff)
        sub_403df8(ebx_1)
        char var_10c_1 = 0
        int32_t esi_2 = 1
        
        while (true)
            sub_40287c(0x14, 1, &ebp_1[-0x42], &ebp_1[-0x83])
            int32_t ecx_6
            ecx_6.b = ebp_1[-0x83].b
            int32_t ecx_8 = sub_402c90(&ebp_1[-0x83], sub_47a769+0xb, ecx_6 + 1)
            
            if (ecx_6 == 0xffffffff)
                break
            
            sub_40401c(ecx_8, &ebp_1[-0x42])
            sub_404080(ebx_1, ebp_1[-0x43])
            ebx_1, ebp_1 =
                sub_469d58(arg1, &ebp_1[-0x42], 0xff, &ebp_1[-0x83], esi_2, ebp_1[-2], ebp_1[-1])
            int32_t temp4_1 = esi_2
            esi_2 += 1
            
            if (add_overflow(temp4_1, 1))
                sub_403010()
                noreturn
    else
        bool o_2 = unimplemented  {imul edx, edx, 0x1038}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        sub_40401c(arg3, *(arg1 + 0xab0) + arg2 * 0x81c0 + (esi_1 << 3) - 0xbc)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_220_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_47a760
    sub_403df8(&ebp_1[-0x43])
    return &ebp_1[-0x43]
}
