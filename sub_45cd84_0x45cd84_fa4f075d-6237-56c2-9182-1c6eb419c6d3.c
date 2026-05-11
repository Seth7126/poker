// ============================================================
// 函数名称: sub_45cd84
// 虚拟地址: 0x45cd84
// WARP GUID: fa4f075d-6237-56c2-9182-1c6eb419c6d3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46026c
// [被调用的父级函数]: sub_45d134
// ============================================================

uint32_t __fastcallsub_45cd84(void* arg1, void* arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t eax_1 = *(arg3 + 0x1b6)
    int32_t eax_1 = *(arg3 + 0x1b6)
    void* ebx_1 = *arg4
    int32_t ebx_2 = *(arg2 + 4)
    uint32_t j_1 = zx.d(*(eax_1 + ebx_2 + 0x8c))
    uint32_t result_1 = zx.d(*(eax_1 + ebx_2 + 0x96))
    uint32_t result = 0
    int32_t i = 0
    int32_t* var_1c = arg1
    
    for (; *(arg3 + 0x12a) s> i; i += result)
        char* esi = *var_1c
        char* eax_4 = *(ebx_1 + (i << 2))
        void* edi_2 = *(arg3 + 0x6c) + eax_4
        
        while (edi_2 u> eax_4)
            int32_t ecx_1
            ecx_1.b = *esi
            esi = &esi[1]
            
            for (uint32_t j = j_1; j s> 0; j -= 1)
                *eax_4 = ecx_1.b
                eax_4 = &eax_4[1]
        
        if (result_1 s> 1)
            sub_46026c(ebx_1, i, ebx_1, *(arg3 + 0x6c), result_1 - 1, i + 1)
        
        var_1c = &var_1c[1]
        result = result_1
    
    return result
}
