// ============================================================
// 函数名称: sub_51f880
// 虚拟地址: 0x51f880
// WARP GUID: 89e6f263-ee95-5979-b616-8f55451a4b19
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_51cc08, sub_4ee7d8, sub_4f2e8c, sub_4d7e6c, sub_4ee818
// [被调用的父级函数]: sub_4ed7a0, sub_4ed040, sub_4c95c4
// ============================================================

int32_t*sub_51f880()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    int32_t ecx
    int32_t* ebp_1 = sub_51cc08(ecx, 1)
    sub_4f2e8c(0)
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t esi_1 = 1
        void* ebx_2 = data_5301b0 + 0x8980
        int32_t i
        
        do
            if (sub_4ee7d8() != 0)
                ebx_2, ebp_1 = sub_4ee818(ebx_2, esi_1, &ebp_1[-6], esi_1, i_1)
                __builtin_memcpy(ebx_2, &ebp_1[-6], 0x18)
                __builtin_memcpy(ebx_2 + 0x18, &ebp_1[-6], 0x18)
            
            esi_1 += 1
            ebx_2 += 0x8d14
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *data_530304
    int32_t* result = sub_4d7e6c()
    *ebp_1
    return result
}
