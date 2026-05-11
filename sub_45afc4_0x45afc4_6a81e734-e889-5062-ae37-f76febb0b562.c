// ============================================================
// 函数名称: sub_45afc4
// 虚拟地址: 0x45afc4
// WARP GUID: 6a81e734-e889-5062-ae37-f76febb0b562
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45b2cc
// ============================================================

void* __convention("regparm")sub_45afc4(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x19a)
    void* edx = *(arg1 + 0x19a)
    int32_t ecx_1 = *(arg1 + 0x12e)
    int32_t i = 0
    void* var_28 = *(arg1 + 0xd4)
    int32_t* var_20 = edx + 8
    
    while (*(arg1 + 0x20) s> i)
        int32_t temp0_1 = divs.dp.d(sx.q(*(var_28 + 0xc) * *(var_28 + 0x24)), *(arg1 + 0x12e))
        int32_t* ebx_3 = *(*(edx + 0x38) + (i << 2))
        int32_t* esi_2 = *(*(edx + 0x3c) + (i << 2))
        int32_t* eax_12 = *var_20
        int32_t* var_14_1 = ebx_3
        int32_t j = 0
        int32_t* var_18_1 = esi_2
        int32_t* var_1c_1 = eax_12
        
        while (j s< (ecx_1 + 2) * temp0_1)
            j += 1
            int32_t edi_5 = *var_1c_1
            *var_18_1 = edi_5
            *var_14_1 = edi_5
            var_14_1 = &var_14_1[1]
            var_18_1 = &var_18_1[1]
            var_1c_1 = &var_1c_1[1]
        
        int32_t j_1 = 0
        
        while (j_1 s< temp0_1 * 2)
            esi_2[(ecx_1 - 2) * temp0_1 + j_1] = eax_12[temp0_1 * ecx_1 + j_1]
            int32_t var_38_2 = eax_12[(ecx_1 - 2) * temp0_1 + j_1]
            int32_t edi_19 = temp0_1 * ecx_1 + j_1
            j_1 += 1
            esi_2[edi_19] = var_38_2
        
        int32_t eax_13 = 0
        
        if (temp0_1 s> 0)
            do
                ebx_3[eax_13 - temp0_1] = *ebx_3
                eax_13 += 1
            while (temp0_1 s> eax_13)
        
        var_20 = &var_20[1]
        i += 1
        var_28 += 0x54
    
    return arg1
}
