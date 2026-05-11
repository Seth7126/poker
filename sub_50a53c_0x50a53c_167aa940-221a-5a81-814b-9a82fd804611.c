// ============================================================
// 函数名称: sub_50a53c
// 虚拟地址: 0x50a53c
// WARP GUID: 167aa940-221a-5a81-814b-9a82fd804611
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c094c, sub_403010
// [被调用的父级函数]: sub_4fb834, sub_512d1c, sub_510f54, sub_507860, sub_5223e8, sub_520efc, sub_4c5eb0, sub_4c329c, sub_4f8b60, sub_507e90, sub_512cbc, sub_509d44, sub_507d3f, sub_4dc3b8, sub_512ce8
// ============================================================

int32_t __convention("regparm")sub_50a53c(int32_t arg1)
{
    // 第一条实际指令: int32_t result = arg1
    int32_t result = arg1
    
    if (sub_4c094c() != 0)
        void* eax_2 = *data_530454
        int32_t ebx = result + *(eax_2 + 0x350)
        
        if (add_overflow(result, *(eax_2 + 0x350)))
            sub_403010()
            noreturn
        
        result = ebx - 1
        
        if (add_overflow(ebx, 0xffffffff))
            sub_403010()
            noreturn
        
        if (result s< 1)
            void* eax_3 = data_5300d0
            int32_t result_1 = result
            result += *eax_3
            
            if (add_overflow(result_1, *eax_3))
                sub_403010()
                noreturn
        
        if (result s> *data_5300d0)
            void* eax_5 = data_5300d0
            int32_t result_2 = result
            result -= *eax_5
            
            if (add_overflow(result_2, neg.d(*eax_5)))
                sub_403010()
                noreturn
    
    return result
}
