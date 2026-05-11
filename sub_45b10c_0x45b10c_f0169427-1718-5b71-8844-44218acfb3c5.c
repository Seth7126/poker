// ============================================================
// 函数名称: sub_45b10c
// 虚拟地址: 0x45b10c
// WARP GUID: f0169427-1718-5b71-8844-44218acfb3c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45b3ac
// ============================================================

void* __convention("regparm")sub_45b10c(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x19a)
    void* edx = *(arg1 + 0x19a)
    int32_t ecx_1 = *(arg1 + 0x12e)
    int32_t i = 0
    void* var_1c = *(arg1 + 0xd4)
    
    while (*(arg1 + 0x20) s> i)
        int32_t temp0_1 = divs.dp.d(sx.q(*(var_1c + 0xc) * *(var_1c + 0x24)), *(arg1 + 0x12e))
        int32_t* ebx_3 = *(*(edx + 0x38) + (i << 2))
        int32_t* esi_2 = *(*(edx + 0x3c) + (i << 2))
        int32_t eax_10 = 0
        int32_t* var_14_1 = esi_2
        int32_t* var_18_1 = ebx_3
        
        if (temp0_1 s> 0)
            do
                ebx_3[eax_10 - temp0_1] = ebx_3[(ecx_1 + 1) * temp0_1 + eax_10]
                esi_2[eax_10 - temp0_1] = esi_2[(ecx_1 + 1) * temp0_1 + eax_10]
                ebx_3[(ecx_1 + 2) * temp0_1 + eax_10] = *var_18_1
                esi_2[(ecx_1 + 2) * temp0_1 + eax_10] = *var_14_1
                eax_10 += 1
                var_14_1 = &var_14_1[1]
                var_18_1 = &var_18_1[1]
            while (temp0_1 s> eax_10)
        
        i += 1
        var_1c += 0x54
    
    return arg1
}
