// ============================================================
// 函数名称: sub_48380c
// 虚拟地址: 0x48380c
// WARP GUID: 8d619a97-653d-5c23-8889-9267f40b7df7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4e6659, sub_50fa27, sub_50b624, sub_50f2e0, sub_4836b0, sub_509850, sub_475d3c, sub_50f7b8, sub_50e368, sub_50e22c, sub_478234, sub_4ecb3c, sub_51038c, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_48380c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_c = &__saved_ebp
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul ecx, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    *(*(arg1 + 0xab0) + arg2 * 0x81c0 + 1) = 0
    bool o_1 = unimplemented  {imul ecx, edx, 0x1038}
    
    if (o_1)
        sub_403010()
        noreturn
    
    if (*(*(arg1 + 0xab0) + arg2 * 0x81c0 + 0x813a) != 0xffff)
        bool o_2 = unimplemented  {imul ecx, edx, 0x1038}
        
        if (o_2)
            sub_403010()
            noreturn
        
        int32_t ecx_3 = sx.d(*(*(arg1 + 0xab0) + arg2 * 0x81c0 + 0x813a))
        *(arg1 + 0x8a0) = ecx_3
        *(arg1 + 0xab8) = ecx_3
        bool o_3 = unimplemented  {imul edx, edx, 0x1038}
        
        if (o_3)
            sub_403010()
            noreturn
        
        *(*(arg1 + 0xab0) + arg2 * 0x81c0 + 0x813a) = 0xffff
        *(arg1 + 0x9b0) = 0
        
        if (*(arg1 + 0xa95) != 0)
            *(arg1 + 0x9b8) = *(arg1 + 0xab8)
            bool o_4 = unimplemented  {imul edx, edx, 0x1038}
            
            if (o_4)
                sub_403010()
                noreturn
            
            *(arg1 + 0x9b4) = sx.d(*(*(arg1 + 0xab0) + *(arg1 + 0xab8) * 0x81c0 + 0x8136))
            *(arg1 + 0x9b0) = 1
    
    int32_t edx_5 = *(arg1 + 0x8a0)
    bool o_5 = unimplemented  {imul ecx, edx, 0x1038}
    
    if (o_5)
        sub_403010()
        noreturn
    
    if (*(*(arg1 + 0xab0) + edx_5 * 0x81c0 + 1) == 0)
    label_483923:
        int32_t edx_7 = *(arg1 + 0x8a4)
        *(arg1 + 0x8a0) = edx_7
        *(arg1 + 0xab8) = edx_7
    else
        bool o_6 = unimplemented  {imul edx, edx, 0x1038}
        
        if (o_6)
            sub_403010()
            noreturn
        
        if (*(*(arg1 + 0xab0) + edx_5 * 0x81c0 + 0x8139) == 0)
            goto label_483923
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
