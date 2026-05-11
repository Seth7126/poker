// ============================================================
// 函数名称: sub_455258
// 虚拟地址: 0x455258
// WARP GUID: 029550a3-eff2-5196-9e51-bbfc9556e0fe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_455a28, sub_454fd0, sub_455a34, sub_4550a4
// [被调用的父级函数]: sub_45591c
// ============================================================

int32_t __convention("regparm")sub_455258(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    void* ebp = arg1[1]
    int32_t result = 0
    int32_t var_14_1 = 0
    int32_t esi = 0
    
    for (int32_t* i = *(ebp + 0x40); i != 0; i = i[0xb])
        if (*i == 0)
            result = i[2]
            esi += i[3] * result
            var_14_1 += i[1] * result
    
    for (int32_t* i_1 = *(ebp + 0x44); i_1 != 0; i_1 = i_1[0xb])
        if (*i_1 == 0)
            result = i_1[2]
            esi += (i_1[3] * result) << 7
            var_14_1 += (i_1[1] * result) << 7
    
    if (esi s> 0)
        int32_t var_18_1 = *(ebp + 0x48)
        result = sub_455a28(var_14_1)
        int32_t result_1
        
        if (result s< var_14_1)
            result = divs.dp.d(sx.q(result), esi)
            result_1 = result
            
            if (result_1 s<= 0)
                result_1 = 1
        else
            result_1 = 0x3b9aca00
        
        for (void** i_2 = *(ebp + 0x40); i_2 != 0; i_2 = i_2[0xb])
            if (*i_2 == 0)
                int32_t ecx_10
                
                if (result_1 s< divu.dp.d(0:(ecx_10 - 1), i_2[3]) + 1)
                    i_2[4] = result_1 * i_2[3]
                    i_2[1]
                    i_2[2]
                    sub_455a34(arg1)
                    i_2[0xa] = 1
                else
                    i_2[4] = i_2[1]
                
                *i_2 = sub_454fd0(i_2[2], 1, arg1, i_2[4])
                result = 0
                i_2[5] = *(ebp + 0x4c)
                i_2[6] = 0
                i_2[7] = 0
                i_2[9] = 0
        
        for (void** i_3 = *(ebp + 0x44); i_3 != 0; i_3 = i_3[0xb])
            if (*i_3 == 0)
                int32_t ecx_15
                
                if (result_1 s< divu.dp.d(0:(ecx_15 - 1), i_3[3]) + 1)
                    i_3[4] = result_1 * i_3[3]
                    i_3[1] * i_3[2]
                    sub_455a34(arg1)
                    i_3[0xa] = 1
                else
                    i_3[4] = i_3[1]
                
                *i_3 = sub_4550a4(i_3[2], 1, arg1, i_3[4])
                result = 0
                i_3[5] = *(ebp + 0x4c)
                i_3[6] = 0
                i_3[7] = 0
                i_3[9] = 0
    
    return result
}
