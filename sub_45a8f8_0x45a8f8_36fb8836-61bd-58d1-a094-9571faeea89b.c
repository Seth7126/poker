// ============================================================
// 函数名称: sub_45a8f8
// 虚拟地址: 0x45a8f8
// WARP GUID: 36fb8836-61bd-58d1-a094-9571faeea89b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45a74c
// [被调用的父级函数]: sub_45acb4
// ============================================================

int16_t* __fastcallsub_45a8f8(int32_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void* edx = *(arg3 + 0x1be)
    void* edx = *(arg3 + 0x1be)
    int32_t eax_1 = *(edx + 0x18)
    int32_t i_1 = *(arg3 + 0x6c)
    char* edx_2 = *(arg3 + 0x136)
    int32_t eax_3 = *(edx + 0x28)
    char* eax_4 = **(arg3 + 0x84)
    char* eax_5 = *(*(arg3 + 0x84) + 4)
    void* eax_6 = *(*(arg3 + 0x84) + 8)
    int32_t var_4c = 0
    int32_t* var_74 = arg1
    int32_t* var_70 = arg2
    int16_t* result = nullptr
    
    if (0 s< arg4)
        do
            char* var_38_1 = *var_70
            char* var_3c_1 = *var_74
            int32_t var_48_1
            int32_t var_44_1
            int16_t* result_1
            
            if (*(edx + 0x24) == 0)
                var_44_1 = 1
                var_48_1 = 3
                result_1 = *(edx + 0x20)
                *(edx + 0x24) = 1
            else
                var_38_1 = &var_38_1[(i_1 - 1) * 3]
                var_3c_1 = &var_3c_1[i_1 - 1]
                var_44_1 = 0xffffffff
                var_48_1 = 0xfffffffd
                result_1 = *(edx + 0x20) + (i_1 * 3 + 3) * 2
                *(edx + 0x24) = 0
            
            int16_t var_24_1 = 0
            int16_t var_20_1 = 0
            int16_t var_1c_1 = 0
            int16_t var_30_1 = 0
            int16_t var_2c_1 = 0
            int16_t var_28_1 = 0
            int32_t i = i_1
            int32_t ebx_1 = 0
            int32_t esi_1 = 0
            int32_t edi_1 = 0
            
            for (; i u> 0; i -= 1)
                int32_t eax_19
                eax_19.b = *var_38_1
                int32_t ecx_21
                ecx_21.b = var_38_1[1]
                int32_t edx_18
                edx_18.b = var_38_1[2]
                int32_t eax_21
                eax_21.b =
                    edx_2[*(eax_3 + ((edi_1 + sx.d(result_1[var_48_1]) + 8) s>> 4 << 2)) + eax_19]
                int32_t ecx_23
                ecx_23.b =
                    edx_2[*(eax_3 + ((esi_1 + sx.d(result_1[var_48_1 + 1]) + 8) s>> 4 << 2)) + ecx_21]
                int32_t edx_20
                edx_20.b =
                    edx_2[*(eax_3 + ((ebx_1 + sx.d(result_1[var_48_1 + 2]) + 8) s>> 4 << 2)) + edx_18]
                int32_t eax_24 = eax_21 s>> 3
                int16_t* ecx_26 = *(eax_1 + (eax_24 << 2)) + (ecx_23 s>> 2 << 6) + (edx_20 s>> 3) * 2
                
                if (*ecx_26 == 0)
                    sub_45a74c(ecx_23 s>> 2, eax_24, arg3, edx_20 s>> 3)
                
                int32_t eax_27 = zx.d(*ecx_26) - 1
                *var_3c_1 = eax_27.b
                int32_t edx_32
                edx_32.b = eax_4[eax_27]
                int32_t edi_8 = eax_21 - edx_32
                int32_t edx_33
                edx_33.b = eax_5[eax_27]
                int32_t esi_8 = ecx_23 - edx_33
                int32_t ebx_8 = edx_20 - zx.d(*(eax_6 + eax_27))
                edx_33.w = var_28_1
                int32_t eax_30 = edi_8 * 2
                int32_t edi_9 = edi_8 + eax_30
                edx_33.w += edi_9.w
                int32_t edi_10 = edi_9 + eax_30
                *result_1 = edx_33.w
                edi_1 = edi_10 + eax_30
                var_28_1 = var_1c_1 + edi_10.w
                int32_t eax_32 = esi_8 * 2
                var_1c_1 = edi_8.w
                int32_t esi_9 = esi_8 + eax_32
                int32_t esi_10 = esi_9 + eax_32
                result_1[1] = var_2c_1 + esi_9.w
                esi_1 = esi_10 + eax_32
                var_2c_1 = var_20_1 + esi_10.w
                int32_t eax_34 = ebx_8 * 2
                var_20_1 = esi_8.w
                int32_t ebx_9 = ebx_8 + eax_34
                int32_t ebx_10 = ebx_9 + eax_34
                result_1[2] = var_30_1 + ebx_9.w
                ebx_1 = ebx_10 + eax_34
                var_30_1 = var_24_1 + ebx_10.w
                var_24_1 = ebx_8.w
                var_38_1 = &var_38_1[var_48_1]
                var_3c_1 = &var_3c_1[var_44_1]
                result_1 = &result_1[var_48_1]
            
            int32_t eax_14
            eax_14.w = var_28_1
            *result_1 = eax_14.w
            int16_t* ecx_40
            ecx_40.w = var_2c_1
            result_1[1] = ecx_40.w
            result = result_1
            int16_t* edx_42
            edx_42.w = var_30_1
            result[2] = edx_42.w
            var_4c += 1
            var_74 = &var_74[1]
            var_70 = &var_70[1]
        while (var_4c s< arg4)
    
    return result
}
