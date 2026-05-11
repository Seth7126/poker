// ============================================================
// 函数名称: sub_4cf878
// 虚拟地址: 0x4cf878
// WARP GUID: db283741-c6ff-5d78-86e1-b50e28e8aded
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4cf900
// ============================================================

void __convention("regparm")sub_4cf878(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x10)
    int32_t esi = *(arg1 + 0x10)
    
    if (add_overflow(esi, 0xfffffffe))
        sub_403010()
        noreturn
    
    if (esi - 2 s>= arg2)
        int32_t i_1 = esi - 2 - arg2 + 1
        int32_t i
        
        do
            int32_t ebx_1 = arg2 * 2
            bool o_1 = unimplemented  {imul ebx, edx, 0x2}
            
            if (o_1)
                sub_403010()
                noreturn
            
            __builtin_memcpy(arg1 + (ebx_1 << 3) + 0x14, arg1 + (ebx_1 << 3) + 0x24, 0x10)
            int32_t ecx_1
            ecx_1.b = *(arg1 + (ebx_1 << 3) + 0x18)
            bool o_2 = unimplemented  {imul ecx, ecx, 0xd4f}
            
            if (o_2)
                sub_403010()
                noreturn
            
            bool o_3 = unimplemented  {imul edi, edi, 0x2e9c}
            
            if (o_3)
                sub_403010()
                noreturn
            
            bool o_4 = unimplemented  {imul ebx, ebx, 0xa}
            
            if (o_4)
                sub_403010()
                noreturn
            
            *(zx.d(*(arg1 + (ebx_1 << 3) + 0x14)) * 0x174e0 +
                &data_532f70 + ecx_1 * 0x353c + zx.d(*(arg1 + (ebx_1 << 3) + 0x16)) * 0x50 - 0x174c4) = arg2
            arg2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t temp2 = *(arg1 + 0x10)
    *(arg1 + 0x10) -= 1
    
    if (not(add_overflow(temp2, 0xffffffff)))
        return 
    
    sub_403010()
    noreturn
}
