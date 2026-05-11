// ============================================================
// 函数名称: sub_50a4e0
// 虚拟地址: 0x50a4e0
// WARP GUID: 83937661-3e0a-50f6-8b8e-f0cfb32cf387
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c094c, sub_403010
// [被调用的父级函数]: sub_5127fc, sub_50a64c, sub_507860, sub_509ed4, sub_514ef8, sub_509dc4, sub_4c329c, sub_50928c
// ============================================================

int32_t __convention("regparm")sub_50a4e0(int32_t arg1)
{
    // 第一条实际指令: int32_t result = arg1
    int32_t result = arg1
    
    if (sub_4c094c() != 0)
        void* eax_2 = *data_530454
        int32_t ebx = result - *(eax_2 + 0x350)
        
        if (add_overflow(result, neg.d(*(eax_2 + 0x350))))
            sub_403010()
            noreturn
        
        result = ebx + 1
        
        if (add_overflow(ebx, 1))
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
