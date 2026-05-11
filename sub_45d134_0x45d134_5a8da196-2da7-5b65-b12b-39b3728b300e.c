// ============================================================
// 函数名称: sub_45d134
// 虚拟地址: 0x45d134
// WARP GUID: 5a8da196-2da7-5b65-b12b-39b3728b300e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_460254
// [被调用的父级函数]: sub_456790
// ============================================================

int32_t __convention("regparm")sub_45d134(int32_t* arg1)
{
    // 第一条实际指令: int32_t (__convention("regparm")** eax_1)(void* arg1) = (*arg1[1])()
    int32_t (__convention("regparm")** eax_1)(void* arg1) = (*arg1[1])()
    *(arg1 + 0x1b6) = eax_1
    *eax_1 = sub_45cc50
    eax_1[1] = sub_45cc68
    eax_1[2] = 0
    
    if (*(arg1 + 0x122) != 0)
        *(*arg1 + 0x14) = 0x17
        (**arg1)(eax_1)
    
    int32_t ecx_3
    
    if (arg1[0x12] == 0 || *(arg1 + 0x12e) s<= 1)
        ecx_3 = 0
    else
        ecx_3 = 1
    
    int32_t i = 0
    void* edi = arg1[0x35]
    void* var_14 = &eax_1[0x23]
    void* esi_1 = &eax_1[0x19]
    
    while (i s< arg1[8])
        int32_t ecx_5 = *(edi + 0x24)
        int32_t temp0_1 = divs.dp.d(sx.q(*(edi + 8) * ecx_5), *(arg1 + 0x12e))
        int32_t temp0_2 = divs.dp.d(sx.q(*(edi + 0xc) * ecx_5), *(arg1 + 0x12e))
        int32_t eax_14 = *(arg1 + 0x126)
        int32_t edx_6 = *(arg1 + 0x12a)
        *esi_1 = temp0_2
        int32_t var_24_1 = 1
        
        if (*(edi + 0x30) == 0)
            *(esi_1 - 0x30) = sub_45cd74
            var_24_1 = 0
        else if (temp0_1 == eax_14 && temp0_2 == edx_6)
            *(esi_1 - 0x30) = sub_45cd68
            var_24_1 = 0
        else if (temp0_1 * 2 != eax_14 || temp0_2 != edx_6)
            if (temp0_1 * 2 != eax_14 || temp0_2 * 2 != edx_6)
                int32_t eax_18
                int32_t edx_11
                edx_11:eax_18 = sx.q(eax_14)
                int32_t eax_21
                int32_t edx_13
                
                if (mods.dp.d(edx_11:eax_18, temp0_1) == 0)
                    edx_13:eax_21 = sx.q(edx_6)
                
                if (mods.dp.d(edx_11:eax_18, temp0_1) != 0 || mods.dp.d(edx_13:eax_21, temp0_2) != 0)
                    *(*arg1 + 0x14) = 0x25
                    (**arg1)(eax_1, i, 1, ecx_3, eax_14, edx_6, var_14)
                else
                    *(esi_1 - 0x30) = sub_45cd84
                    *var_14 = (divs.dp.d(sx.q(eax_14), temp0_1)).b
                    *(var_14 + 0xa) = (divs.dp.d(sx.q(edx_6), temp0_2)).b
            else if (ecx_3 == 0 || *(edi + 0x28) u<= 2)
                *(esi_1 - 0x30) = sub_45ce9c
            else
                *(esi_1 - 0x30) = sub_45cfe0
                eax_1[2] = 1
        else if (ecx_3 == 0 || *(edi + 0x28) u<= 2)
            *(esi_1 - 0x30) = sub_45ce40
        else
            *(esi_1 - 0x30) = sub_45cf2c
        
        if (var_24_1 != 0)
            *(esi_1 - 0x58) = (*(arg1[1] + 8))(*(arg1 + 0x12a))
        
        esi_1 += 4
        var_14 += 1
        i += 1
        edi += 0x54
    
    return i
}
