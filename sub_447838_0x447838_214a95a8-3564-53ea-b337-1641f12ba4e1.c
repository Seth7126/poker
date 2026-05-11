// ============================================================
// 函数名称: sub_447838
// 虚拟地址: 0x447838
// WARP GUID: 214a95a8-3564-53ea-b337-1641f12ba4e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4479e8
// ============================================================

void** __convention("regparm")sub_447838(int32_t* arg1, char arg2, void* arg3)
{
    // 第一条实际指令: int32_t esi_2 = *(*(arg3 - 4) + 8) - **(arg3 - 4)
    int32_t esi_2 = *(*(arg3 - 4) + 8) - **(arg3 - 4)
    char temp0_1
    
    if (esi_2 s>= 0)
        int32_t* eax_2
        eax_2.b = arg2
        eax_2.b -= 3
        temp0_1 = eax_2.b
        eax_2.b -= 2
    
    if (esi_2 s< 0 || temp0_1 u< 2)
        esi_2 = arg1[0xe]
    
    int32_t var_14 = *(*(arg3 - 4) + 0xc) - *(*(arg3 - 4) + 4)
    int32_t eax_6
    
    if (var_14 s>= 0)
        eax_6.b = arg2
    
    if (var_14 s< 0 || eax_6.b - 1 u< 2)
        var_14 = arg1[0xf]
    
    int32_t var_10
    int32_t var_c
    
    if (arg2 != 1 || *(arg1 + 0x213) != 2)
        var_c = **(arg3 - 4)
        var_10 = *(*(arg3 - 4) + 4)
    else
        var_c = arg1[0xc]
        var_10 = arg1[0xd]
        esi_2 = (*data_5302cc)(0x3d)
    
    int32_t eax_13
    eax_13.b = arg2
    char temp2 = eax_13.b
    eax_13.b -= 1
    
    if (temp2 == 1)
        void* eax_20 = *(arg3 - 4)
        *(eax_20 + 4) += var_14
    else
        char temp3_1 = eax_13.b
        eax_13.b -= 1
        
        if (temp3_1 == 1)
            void* eax_22 = *(arg3 - 4)
            *(eax_22 + 0xc) -= var_14
            var_10 = *(*(arg3 - 4) + 0xc)
        else
            char temp4_1 = eax_13.b
            eax_13.b -= 1
            
            if (temp4_1 == 1)
                int32_t* eax_27 = *(arg3 - 4)
                *eax_27 += esi_2
            else
                char temp5_1 = eax_13.b
                eax_13.b -= 1
                
                if (temp5_1 == 1)
                    void* eax_29 = *(arg3 - 4)
                    *(eax_29 + 8) -= esi_2
                    var_c = *(*(arg3 - 4) + 8)
    
    (*(*arg1 + 0x7c))(var_14, esi_2)
    
    if (*(arg1 + 0x213) == 2)
        esi_2 -= var_c
        var_14 -= var_10
    
    void** result = arg1[0xe]
    
    if (esi_2 != result || arg1[0xf] != var_14)
        int32_t edx_6
        edx_6.b = arg2
        
        switch (edx_6)
            case 1
                result = var_14 - arg1[0xf]
                void* edx_8 = *(arg3 - 4)
                *(edx_8 + 4) -= result
            case 2
                result = var_14 - arg1[0xf]
                void* edx_10 = *(arg3 - 4)
                *(edx_10 + 0xc) += result
            case 3
                void* esi_3 = esi_2 - result
                result = *(arg3 - 4)
                *result -= esi_3
            case 4
                void* esi_4 = esi_2 - result
                result = *(arg3 - 4)
                result[2] += esi_4
            case 5
                void* eax_41 = *(arg3 - 4)
                *(eax_41 + 8) += esi_2 - result
                result = var_14 - arg1[0xf]
                void* edx_12 = *(arg3 - 4)
                *(edx_12 + 0xc) += result
    
    return result
}
