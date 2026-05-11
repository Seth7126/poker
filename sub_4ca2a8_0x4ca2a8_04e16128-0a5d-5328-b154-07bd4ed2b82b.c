// ============================================================
// 函数名称: sub_4ca2a8
// 虚拟地址: 0x4ca2a8
// WARP GUID: 04e16128-0a5d-5328-b154-07bd4ed2b82b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a078, sub_4c0924, sub_403010
// [被调用的父级函数]: sub_4ca104
// ============================================================

long double __convention("regparm")sub_4ca2a8(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    float var_8_1 = 0f
    
    if (arg1 s< 1 || arg1 s> 8)
        var_8_1 = 1f
    else
        if (add_overflow(arg1, 0x12))
            sub_403010()
            noreturn
        
        if (sub_47a078(*data_530304, *data_530a74, *(data_530208 + ((arg1 + 0x12) << 2))) != 0)
            void* eax_4 = data_530208
            *(eax_4 + ((arg1 + 0x12) << 2))
            bool o_2 = unimplemented  {imul eax, dword [eax+esi*4], 0x23}
            
            if (o_2)
                sub_403010()
                noreturn
            
            void* edx_3 = data_530a74
            *edx_3
            bool o_3 = unimplemented  {imul edx, dword [edx], 0x1038}
            
            if (o_3)
                sub_403010()
                noreturn
            
            var_8_1 = *(*(*data_530304 + 0xab0) + *edx_3 * 0x81c0
                + *(eax_4 + ((arg1 + 0x12) << 2)) * 0x118 + 0x18)
    
    if (sub_4c0924() != 0)
        void* eax_8 = data_530630
        *eax_8
        bool o_4 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_4)
            sub_403010()
            noreturn
        
        if (*(*(*data_530304 + 0xab0) + *eax_8 * 0x81c0 + 1) == 0)
            var_8_1 = 0f
    
    return fconvert.t(var_8_1)
}
