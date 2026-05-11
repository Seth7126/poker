// ============================================================
// 函数名称: sub_463e20
// 虚拟地址: 0x463e20
// WARP GUID: f52105a9-f689-5a7a-975a-585a7b95fcce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_463b5c
// [被调用的父级函数]: sub_4642f8
// ============================================================

void* __fastcallsub_463e20(void* arg1, void* arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t ecx_1 = *(arg2 + 0x1c) << 3
    int32_t ecx_1 = *(arg2 + 0x1c) << 3
    sub_463b5c(*(arg3 + 0x18), *(arg3 + 0xe1), arg1, ecx_1 * 2)
    int32_t i = 0
    void* var_1c = arg1
    int32_t* var_18 = arg4
    
    while (*(arg2 + 0xc) s> i)
        int32_t esi_1 = 1
        char* ecx_4 = *var_18
        void* eax_3 = *var_1c
        char* edx_7 = *(var_1c + 4)
        int32_t var_10_1 = 0
        
        if (0 u< ecx_1)
            do
                uint32_t edi_1 = zx.d(*(eax_3 + 1))
                int32_t ebx_1
                ebx_1.b = *eax_3
                eax_3 += 2
                int32_t ebx_4 = ebx_1 + edi_1 + zx.d(*edx_7) + zx.d(edx_7[1])
                edx_7 = &edx_7[2]
                int32_t ebx_5 = ebx_4 + esi_1
                esi_1 ^= 3
                *ecx_4 = (ebx_5 s>> 2).b
                ecx_4 = &ecx_4[1]
                var_10_1 += 1
            while (var_10_1 u< ecx_1)
        
        var_1c += 8
        i += 1
        var_18 = &var_18[1]
    
    return arg2
}
