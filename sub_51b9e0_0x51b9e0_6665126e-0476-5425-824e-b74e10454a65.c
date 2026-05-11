// ============================================================
// 函数名称: sub_51b9e0
// 虚拟地址: 0x51b9e0
// WARP GUID: 6665126e-0476-5425-824e-b74e10454a65
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_5047f4
// ============================================================

void __convention("regparm")sub_51b9e0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx = arg3
    int32_t ebx = arg3
    bool o = unimplemented  {imul ecx, edx, 0x41}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t esi = sx.d(*(arg1 + arg2 * 0x104))
    
    if (add_overflow(esi, 0xffffffff))
        sub_403010()
        noreturn
    
    if (esi - 1 s>= ebx)
        int32_t i_1 = esi - 1 - ebx + 1
        int32_t i
        
        do
            bool o_2 = unimplemented  {imul ecx, edx, 0x41}
            
            if (o_2)
                sub_403010()
                noreturn
            
            bool o_3 = unimplemented  {imul edi, edx, 0x41}
            
            if (o_3)
                sub_403010()
                noreturn
            
            *(arg1 + arg2 * 0x104 + (ebx << 2) - 0x104) = *(arg1 + arg2 * 0x104 + (ebx << 2) - 0x100)
            ebx += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t ecx_4 = arg2 * 0x41
    bool o_4 = unimplemented  {imul ecx, edx, 0x41}
    
    if (o_4)
        sub_403010()
        noreturn
    
    int16_t temp2 = *(arg1 + (ecx_4 << 2))
    *(arg1 + (ecx_4 << 2)) -= 1
    
    if (add_overflow(temp2, 0xffff))
        sub_403010()
        noreturn
    
    if (*(arg1 + (ecx_4 << 2)) != 0)
        return 
    
    int32_t ebx_2 = arg2 + 1
    
    if (add_overflow(arg2, 1))
        sub_403010()
        noreturn
    
    while (true)
        int32_t esi_4 = ebx_2 * 0x41
        bool o_8 = unimplemented  {imul esi, ebx, 0x41}
        
        if (o_8)
            sub_403010()
            noreturn
        
        if (*(arg1 + (esi_4 << 2)) s<= 0)
            break
        
        __builtin_memcpy(arg1 + (esi_4 << 2) - 0x204, arg1 + (esi_4 << 2) - 0x100, 0x104)
        int32_t temp7_1 = ebx_2
        ebx_2 += 1
        
        if (add_overflow(temp7_1, 1))
            sub_403010()
            noreturn
    
    if (arg2 s> 0x14)
        int32_t temp5_1 = *(arg1 + 0x3cfc)
        *(arg1 + 0x3cfc) -= 1
        
        if (add_overflow(temp5_1, 0xffffffff))
            sub_403010()
            noreturn
    else
        int32_t temp6_1 = *(arg1 + 0x3cf8)
        *(arg1 + 0x3cf8) -= 1
        
        if (add_overflow(temp6_1, 0xffffffff))
            sub_403010()
            noreturn
}
