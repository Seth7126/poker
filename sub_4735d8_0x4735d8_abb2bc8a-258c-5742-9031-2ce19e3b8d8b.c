// ============================================================
// 函数名称: sub_4735d8
// 虚拟地址: 0x4735d8
// WARP GUID: abb2bc8a-258c-5742-9031-2ce19e3b8d8b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42afb8, sub_47b304, sub_447198, sub_42af98, sub_403010
// [被调用的父级函数]: sub_473684
// ============================================================

int32_t __convention("regparm")sub_4735d8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = arg2
    int32_t result = arg2
    void* edi = data_530a18
    
    while (true)
        *edi
        int32_t eax_10 = sub_447198()
        int32_t edx_4 = arg1[0xc]
        
        if (add_overflow(edx_4, result))
            sub_403010()
            noreturn
        
        if (eax_10 s>= edx_4 + result)
            return result
        
        sub_42af98(arg1)
        sub_42afb8(arg1)
        *edi
        int32_t eax_3 = sub_447198()
        
        if (add_overflow(result, arg1[0xc]))
            break
        
        if (eax_3 s< result + arg1[0xc])
            int32_t temp3_1 = arg1[0x36d]
            arg1[0x36d] -= 1
            
            if (add_overflow(temp3_1, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_47b304(arg1[0x451], arg1[0x435], arg1, arg1[0x36d])
            bool o_3 = unimplemented  {imul eax, eax, 0x3}
            
            if (o_3)
                sub_403010()
                noreturn
            
            arg1[0x38c] = *(arg1[0x289] + arg1[0x36d] * 0xc + 4)
        
        result = arg1[0x38c]
    
    sub_403010()
    noreturn
}
