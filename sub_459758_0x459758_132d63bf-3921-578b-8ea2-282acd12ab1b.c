// ============================================================
// 函数名称: sub_459758
// 虚拟地址: 0x459758
// WARP GUID: 132d63bf-3921-578b-8ea2-282acd12ab1b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_459a70
// ============================================================

int32_t __fastcallsub_459758(int32_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void* ebx = *(arg3 + 0x1be)
    void* ebx = *(arg3 + 0x1be)
    int32_t* ebx_2 = *(ebx + 0x18)
    void* esi = *ebx_2
    void* esi_1 = ebx_2[1]
    void* ebx_3 = ebx_2[2]
    int32_t i_1 = *(arg3 + 0x6c)
    int32_t var_28 = 0
    int32_t* var_38 = arg1
    int32_t* var_34 = arg2
    int32_t result = 0
    
    if (0 s< arg4)
        do
            int32_t ecx = *(ebx + 0x30)
            char* esi_2 = *var_38
            int32_t edx_3 = ecx << 6
            char* eax_1 = *var_34
            int32_t ecx_3 = *(ebx + 0x34) + edx_3
            int32_t ecx_6 = *(ebx + 0x38) + edx_3
            int32_t ecx_9 = *(ebx + 0x3c) + edx_3
            int32_t edx_4 = 0
            
            for (int32_t i = i_1; i u> 0; i -= 1)
                int32_t ecx_11
                ecx_11.b = *eax_1
                int32_t ebx_7
                ebx_7.b = eax_1[1]
                char ecx_14 =
                    (esi + ecx_11)[*(ecx_3 + (edx_4 << 2))] + (esi_1 + ebx_7)[*(ecx_6 + (edx_4 << 2))]
                int32_t ebx_12
                ebx_12.b = eax_1[2]
                eax_1 = &eax_1[3]
                int32_t ebx_15 = *(ecx_9 + (edx_4 << 2))
                edx_4 = (edx_4 + 1) & 0xf
                *esi_2 = ecx_14 + (ebx_3 + ebx_12)[ebx_15]
                esi_2 = &esi_2[1]
            
            result = (ecx + 1) & 0xf
            *(ebx + 0x30) = result
            var_28 += 1
            var_38 = &var_38[1]
            var_34 = &var_34[1]
        while (var_28 s< arg4)
    
    return result
}
