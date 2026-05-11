// ============================================================
// 函数名称: sub_4fe250
// 虚拟地址: 0x4fe250
// WARP GUID: 3b72d5b5-03a7-5ada-aba5-f7d10ea3c1af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4fe478
// ============================================================

void* __stdcallsub_4fe250(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void* result = arg4
    void* result = arg4
    
    if (*(result - 0x21) != 0)
        result = arg4
        
        if (*(result - 0x22) == 0)
            void* eax = data_530740
            int32_t temp1_1 = *eax
            *eax += 1
            
            if (add_overflow(temp1_1, 1))
                sub_403010()
                noreturn
            
            void* eax_1 = data_530740
            *eax_1
            bool o_2 = unimplemented  {imul eax, dword [eax], 0x3}
            
            if (o_2)
                sub_403010()
                noreturn
            
            *(data_530740 + *eax_1 * 0xc - 8) = arg3
            void* eax_3 = data_530740
            *eax_3
            bool o_3 = unimplemented  {imul eax, dword [eax], 0x3}
            
            if (o_3)
                sub_403010()
                noreturn
            
            *(data_530740 + *eax_3 * 0xc - 4) = arg2
            int32_t* eax_5 = data_530740
            *eax_5
            result = *eax_5 * 3
            bool o_4 = unimplemented  {imul eax, dword [eax], 0x3}
            
            if (o_4)
                sub_403010()
                noreturn
            
            *(data_530740 + (result << 2)) = arg1
    
    return result
}
