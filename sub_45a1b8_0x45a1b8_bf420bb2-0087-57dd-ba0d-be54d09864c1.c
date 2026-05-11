// ============================================================
// 函数名称: sub_45a1b8
// 虚拟地址: 0x45a1b8
// WARP GUID: bf420bb2-0087-57dd-ba0d-be54d09864c1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45a2fc
// ============================================================

char __convention("regparm")sub_45a1b8(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_28 = 0
    int32_t var_28 = 0
    int32_t var_24 = 0
    int32_t var_20 = 0
    int32_t var_1c = 0
    int32_t i = *arg2
    int32_t k_1 = arg2[4]
    int32_t* var_14 = *(*(arg1 + 0x1be) + 0x18) + (i << 2)
    
    while (i s<= arg2[1])
        for (int32_t j = arg2[2]; j s<= arg2[3]; j += 1)
            int16_t* edi_3 = *var_14 + (j << 6) + k_1 * 2
            
            for (int32_t k = k_1; arg2[5] s>= k; k += 1)
                int32_t eax_7
                eax_7.w = *edi_3
                edi_3 = &edi_3[1]
                eax_7 = zx.d(eax_7.w)
                
                if (eax_7 != 0)
                    var_28 += eax_7
                    var_24 += ((i << 3) + 4) * eax_7
                    var_20 += ((j << 2) + 2) * eax_7
                    var_1c += ((k << 3) + 4) * eax_7
        
        i += 1
        var_14 = &var_14[1]
    
    int32_t ecx_1 = var_28 s>> 1
    char** ebx_3 = *(arg1 + 0x84)
    (*ebx_3)[arg3] = (divs.dp.d(sx.q(ecx_1 + var_24), var_28)).b
    ebx_3[1][arg3] = (divs.dp.d(sx.q(ecx_1 + var_20), var_28)).b
    char result = (divs.dp.d(sx.q(ecx_1 + var_1c), var_28)).b
    ebx_3[2][arg3] = result
    return result
}
