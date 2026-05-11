// ============================================================
// 函数名称: sub_463ed8
// 虚拟地址: 0x463ed8
// WARP GUID: d86de4ff-8dfa-51b9-8775-39e1f2eac161
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_463b5c
// [被调用的父级函数]: sub_4642f8
// ============================================================

void* __fastcallsub_463ed8(void* arg1, void* arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t edx_1 = *(arg2 + 0x1c) << 3
    int32_t edx_1 = *(arg2 + 0x1c) << 3
    sub_463b5c(*(arg3 + 0x18), *(arg3 + 0xe1) + 2, arg1 - 4, edx_1 * 2)
    int32_t eax_2 = *(arg3 + 0xb8)
    int32_t edx_5 = eax_2 << 4
    int32_t eax_3 = eax_2 << 4
    int32_t i = 0
    void* var_30 = arg1
    int32_t* var_2c = arg4
    
    while (*(arg2 + 0xc) s> i)
        char* ecx_5 = *var_2c
        char* eax_6 = *var_30
        char* esi_1 = *(var_30 + 8)
        char* edx_10 = *(var_30 + 4)
        int32_t ebx_2
        ebx_2.b = *eax_6
        char* ecx_7 = *(var_30 - 4)
        int32_t ebx_6
        ebx_6.b = *ecx_7
        void* eax_7 = &eax_6[2]
        int32_t ebx_13 = ebx_6 + zx.d(ecx_7[1]) + zx.d(*esi_1) + zx.d(esi_1[1]) + zx.d(*eax_6)
            + zx.d(eax_6[2]) + zx.d(*edx_10) + zx.d(edx_10[2])
        void* edx_11 = &edx_10[2]
        int32_t ebx_15
        ebx_15.b = *ecx_7
        void* ecx_8 = &ecx_7[2]
        void* esi_2 = &esi_1[2]
        int32_t ebx_21 =
            (ebx_2 + zx.d(eax_6[1]) + zx.d(*edx_10) + zx.d(edx_10[1])) * (0x4000 - edx_5 * 5)
            + (ebx_13 * 2 + ebx_15 + zx.d(ecx_7[2]) + zx.d(*esi_1) + zx.d(esi_1[2])) * eax_3
        *ecx_5 = ((ebx_21 + 0x8000) s>> 0x10).b
        void* var_18_2 = &ecx_5[1]
        
        for (int32_t j = edx_1 - 2; j u> 0; j -= 1)
            int32_t ebx_27
            ebx_27.b = *eax_7
            int32_t ebx_30 = ebx_27 + zx.d(*(eax_7 + 1)) + zx.d(*edx_11) + zx.d(*(edx_11 + 1))
            int32_t ebx_31
            ebx_31.b = *ecx_8
            int32_t ebx_36 = ebx_31 + zx.d(*(ecx_8 + 1)) + zx.d(*esi_2) + zx.d(*(esi_2 + 1))
                + zx.d(*(eax_7 - 1)) + zx.d(*(eax_7 + 2))
            eax_7 += 2
            int32_t ebx_38 = ebx_36 + zx.d(*(edx_11 - 1)) + zx.d(*(edx_11 + 2))
            edx_11 += 2
            uint32_t edi_27 = zx.d(*(ecx_8 + 2))
            int32_t ebx_40
            ebx_40.b = *(ecx_8 - 1)
            ecx_8 += 2
            int32_t ebx_43 = ebx_40 + edi_27 + zx.d(*(esi_2 - 1)) + zx.d(*(esi_2 + 2))
            esi_2 += 2
            *var_18_2 =
                ((ebx_30 * (0x4000 - edx_5 * 5) + (ebx_38 * 2 + ebx_43) * eax_3 + 0x8000) s>> 0x10).b
            var_18_2 += 1
        
        int32_t ebx_50
        ebx_50.b = *eax_7
        int32_t ebx_54
        ebx_54.b = *ecx_8
        int32_t eax_9
        eax_9.b = *(edx_11 - 1)
        int32_t ebx_61 = ebx_54 + zx.d(*(ecx_8 + 1)) + zx.d(*esi_2) + zx.d(*(esi_2 + 1))
            + zx.d(*(eax_7 - 1)) + zx.d(*(eax_7 + 1)) + eax_9 + zx.d(*(edx_11 + 1))
        int32_t edx_13
        edx_13.b = *(ecx_8 - 1)
        int32_t eax_11
        eax_11.b = *(esi_2 - 1)
        int32_t ecx_10
        ecx_10.b = *(esi_2 + 1)
        int32_t edx_19 =
            (ebx_50 + zx.d(*(eax_7 + 1)) + zx.d(*edx_11) + zx.d(*(edx_11 + 1))) * (0x4000 - edx_5 * 5)
            + (ebx_61 * 2 + edx_13 + zx.d(*(ecx_8 + 1)) + eax_11 + ecx_10) * eax_3
        *var_18_2 = ((edx_19 + 0x8000) s>> 0x10).b
        var_30 += 8
        i += 1
        var_2c = &var_2c[1]
    
    return arg2
}
