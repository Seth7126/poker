// ============================================================
// 函数名称: sub_45cfe0
// 虚拟地址: 0x45cfe0
// WARP GUID: 6ed60a51-9510-5413-a72a-506bfb3e1d4d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45d134
// ============================================================

int32_t __fastcallsub_45cfe0(void* arg1, void* arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t eax_1 = *arg4
    int32_t eax_1 = *arg4
    int32_t var_20 = 0
    int32_t* var_30 = arg1
    int32_t result
    
    while (true)
        result = *(arg3 + 0x12a)
        
        if (result s<= var_20)
            break
        
        int32_t i = 0
        int32_t* var_2c_1 = eax_1 + (var_20 << 2)
        
        do
            char* eax_6 = *var_30
            char* var_14_1
            
            if (i != 0)
                var_14_1 = var_30[1]
            else
                var_14_1 = var_30[-1]
            
            char* ecx_6 = *var_2c_1
            var_20 += 1
            var_2c_1 = &var_2c_1[1]
            uint32_t esi_2 = zx.d(*eax_6) * 3 + zx.d(*var_14_1)
            uint32_t edi_2 = zx.d(eax_6[1]) * 3 + zx.d(var_14_1[1])
            void* var_14_3 = &var_14_1[2]
            char* var_10_3 = &eax_6[2]
            *ecx_6 = (((esi_2 << 2) + 8) s>> 4).b
            ecx_6[1] = ((esi_2 * 3 + edi_2 + 7) s>> 4).b
            uint32_t var_18_1 = esi_2
            void* ecx_8 = &ecx_6[2]
            uint32_t esi_3 = edi_2
            int32_t j = *(arg2 + 0x28) - 2
            
            while (j u> 0)
                uint32_t eax_30 = zx.d(*var_14_3)
                var_14_3 += 1
                uint32_t edi_4 = zx.d(*var_10_3) * 3 + eax_30
                var_10_3 = &var_10_3[1]
                uint32_t eax_31 = esi_3 * 3
                *ecx_8 = ((eax_31 + var_18_1 + 8) s>> 4).b
                *(ecx_8 + 1) = ((eax_31 + edi_4 + 7) s>> 4).b
                var_18_1 = esi_3
                j -= 1
                ecx_8 += 2
                esi_3 = edi_4
            
            *ecx_8 = ((esi_3 * 3 + var_18_1 + 8) s>> 4).b
            *(ecx_8 + 1) = (((esi_3 << 2) + 7) s>> 4).b
            i += 1
        while (i s< 2)
        
        var_30 = &var_30[1]
    
    return result
}
