// ============================================================
// 函数名称: sub_463d8c
// 虚拟地址: 0x463d8c
// WARP GUID: 1e8a7e0b-bc90-5954-b907-dfc3f9298270
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_463b5c
// [被调用的父级函数]: sub_4642f8
// ============================================================

void* __fastcallsub_463d8c(void* arg1, void* arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t ecx_1 = *(arg2 + 0x1c) << 3
    int32_t ecx_1 = *(arg2 + 0x1c) << 3
    sub_463b5c(*(arg3 + 0x18), *(arg3 + 0xe1), arg1, ecx_1 * 2)
    int32_t i = 0
    void* var_18 = arg1
    int32_t* var_14 = arg4
    
    while (*(arg2 + 0xc) s> i)
        int32_t esi_1 = 0
        char* edx_5 = *var_14
        void* eax_3 = *var_18
        int32_t ecx_5 = 0
        
        if (0 u< ecx_1)
            do
                uint32_t edi_1 = zx.d(*(eax_3 + 1))
                esi_1 += 1
                int32_t ebx_1
                ebx_1.b = *eax_3
                eax_3 += 2
                int32_t ebx_3 = ebx_1 + edi_1 + ecx_5
                ecx_5 ^= 1
                *edx_5 = (ebx_3 s>> 1).b
                edx_5 = &edx_5[1]
            while (esi_1 u< ecx_1)
        
        i += 1
        var_18 += 4
        var_14 = &var_14[1]
    
    return arg2
}
