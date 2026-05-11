// ============================================================
// 函数名称: sub_4642f8
// 虚拟地址: 0x4642f8
// WARP GUID: fc50e31f-ce70-5c78-ad44-88aa1359b7fe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_461234
// ============================================================

int32_t __convention("regparm")sub_4642f8(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_14 = 1
    int32_t var_14 = 1
    int32_t result_1 = (*arg1[1])()
    *(arg1 + 0x159) = result_1
    *result_1 = sub_463b58
    *(result_1 + 4) = sub_463bac
    *(result_1 + 8) = 0
    
    if (arg1[0x2d] != 0)
        *(*arg1 + 0x14) = 0x17
        (**arg1)(result_1, 1)
    
    int32_t i = 0
    void* esi_1 = arg1[0xf]
    int32_t result = result_1
    void* (__fastcall** edi)(void* arg1, void* arg2, void* arg3 @ eax, int32_t* arg4) = result + 0xc
    
    while (i s< arg1[0xd])
        result = *(esi_1 + 8)
        
        if (result != *(arg1 + 0xdd) || *(esi_1 + 0xc) != *(arg1 + 0xe1))
            result = *(esi_1 + 8) * 2
            
            if (result != *(arg1 + 0xdd) || *(esi_1 + 0xc) != *(arg1 + 0xe1))
                result = *(esi_1 + 8) * 2
                int32_t edx_5
                
                if (result == *(arg1 + 0xdd))
                    edx_5 = *(esi_1 + 0xc)
                
                if (result != *(arg1 + 0xdd) || edx_5 * 2 != *(arg1 + 0xe1))
                    int32_t eax_7
                    int32_t edx_7
                    edx_7:eax_7 = sx.q(*(arg1 + 0xdd))
                    *(esi_1 + 8)
                    int32_t eax_10
                    int32_t edx_9
                    
                    if (mods.dp.d(edx_7:eax_7, *(esi_1 + 8)) == 0)
                        edx_9:eax_10 = sx.q(*(arg1 + 0xe1))
                        result = divs.dp.d(edx_9:eax_10, *(esi_1 + 0xc))
                    
                    if (mods.dp.d(edx_7:eax_7, *(esi_1 + 8)) != 0
                            || mods.dp.d(edx_9:eax_10, *(esi_1 + 0xc)) != 0)
                        *(*arg1 + 0x14) = 0x25
                        result = (**arg1)(result_1, var_14)
                    else
                        var_14 = 0
                        *edi = sub_463c30
                else if (arg1[0x2e] == 0)
                    *edi = sub_463e20
                else
                    *edi = sub_463ed8
                    *(result_1 + 8) = 1
            else
                var_14 = 0
                *edi = sub_463d8c
        else if (arg1[0x2e] == 0)
            *edi = sub_463d40
        else
            *edi = sub_464168
            *(result_1 + 8) = 1
        
        edi = &edi[1]
        i += 1
        esi_1 += 0x54
    
    if (arg1[0x2e] == 0 || var_14 != 0)
        return result
    
    *(*arg1 + 0x14) = 0x62
    return (*(*arg1 + 4))(result_1, var_14)
}
