// ============================================================
// 函数名称: sub_5096d8
// 虚拟地址: 0x5096d8
// WARP GUID: 1bcdf93f-47ae-5db5-8897-d28dc89bfb97
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4f2e8c
// ============================================================

int32_tsub_5096d8()
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t ecx_1 = 1
        void* eax_1 = data_530850
        int32_t i
        
        do
            int32_t esi_2 = *data_5300d0
            
            if (add_overflow(esi_2, 1))
                sub_403010()
                noreturn
            
            if (add_overflow(esi_2 + 1, neg.d(ecx_1)))
                sub_403010()
                noreturn
            
            *eax_1 = (esi_2 + 1).w - ecx_1.w
            ecx_1 += 1
            eax_1 += 2
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return entry_result
}
