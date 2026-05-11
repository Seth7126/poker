// ============================================================
// 函数名称: sub_4ee6f0
// 虚拟地址: 0x4ee6f0
// WARP GUID: e18ed9b4-a9fe-5ccf-9cb8-3e091700a7a8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4f9658
// ============================================================

int32_t __convention("regparm")sub_4ee6f0(int16_t arg1, int16_t arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    bool o = unimplemented  {imul ecx, ecx, 0x2345}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t ecx_2 = *(data_5301b0 + sx.d(arg1) * 0x8d14 - 0x39c)
    
    if (ecx_2 s>= sx.d(arg2))
        if (arg2 == 1)
            result.b = 1
        
        bool o_1 = unimplemented  {imul ebx, ebx, 0x2345}
        
        if (o_1)
            sub_403010()
            noreturn
        
        data_5301b0
        
        while (ecx_2.w s> 0)
            bool o_3 = unimplemented  {imul ebx, ebx, 0x2345}
            
            if (o_3)
                sub_403010()
                noreturn
            
            bool o_4 = unimplemented  {imul edi, edi, 0x35}
            
            if (o_4)
                sub_403010()
                noreturn
            
            if (*(data_5301b0 + sx.d(arg1) * 0x8d14 + sx.d(ecx_2.w) * 0xd4 - 0x8d8c) == 0)
                break
            
            int16_t temp4_1 = ecx_2.w
            ecx_2.w -= 1
            
            if (add_overflow(temp4_1, 0xffff))
                sub_403010()
                noreturn
        
        if (ecx_2.w == arg2)
            result.b = 1
    
    return result
}
