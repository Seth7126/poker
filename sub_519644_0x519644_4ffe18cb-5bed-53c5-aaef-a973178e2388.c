// ============================================================
// 函数名称: sub_519644
// 虚拟地址: 0x519644
// WARP GUID: 4ffe18cb-5bed-53c5-aaef-a973178e2388
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40401c, sub_402d20, sub_403010
// [被调用的父级函数]: sub_52ba68
// ============================================================

void __fastcallsub_519644(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: if (arg1 s<= 0)
    if (arg1 s<= 0)
        return 
    
    bool o_1 = unimplemented  {imul eax, dword [ebp-0x8], 0x21}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t i = *(arg3 + arg1 * 0x84 + (arg2 << 2) + 0x1b160)
    int32_t eax_3 = sub_402d20(i)
    int32_t esi_2 = eax_3 + 1
    
    if (add_overflow(eax_3, 1))
        sub_403010()
        noreturn
    
    int32_t ebx_1
    
    do
        ebx_1 = esi_2
        bool o_3 = unimplemented  {imul eax, dword [ebp-0x8], 0x21}
        
        if (o_3)
            sub_403010()
            noreturn
        
        if (ebx_1 == sx.d(*(arg3 + arg1 * 0x21 + arg2 + 0x1b57d)) && i s> 1)
            int32_t temp5_1 = esi_2
            esi_2 += 1
            
            if (add_overflow(temp5_1, 1))
                sub_403010()
                noreturn
            
            if (esi_2 s> i)
                esi_2 = 1
            
            ebx_1 = esi_2
        
        bool o_5 = unimplemented  {imul eax, dword [ebp-0x8], 0x21}
        
        if (o_5)
            sub_403010()
            noreturn
        
        if (ebx_1 != sx.d(*(arg3 + arg1 * 0x21 + arg2 + 0x1b57d)))
            break
    while (i != 1)
    
    bool o_6 = unimplemented  {imul edx, dword [ebp-0x8], 0x3e01}
    
    if (o_6)
        sub_403010()
        noreturn
    
    bool o_7 = unimplemented  {imul ecx, dword [ebp-0x4], 0x1e1}
    
    if (o_7)
        sub_403010()
        noreturn
    
    int32_t edx_5 = arg3 + arg1 * 0x3e01 + arg2 * 0x1e1
    bool o_8 = unimplemented  {imul edx, esi, 0x25}
    
    if (o_8)
        sub_403010()
        noreturn
    
    sub_40401c(edx_5, edx_5 + esi_2 * 0x25 - 0x50ec)
    bool o_9 = unimplemented  {imul eax, dword [ebp-0x8], 0x21}
    
    if (o_9)
        sub_403010()
        noreturn
    
    *(arg3 + arg1 * 0x21 + arg2 + 0x1b57d) = ebx_1.b
}
