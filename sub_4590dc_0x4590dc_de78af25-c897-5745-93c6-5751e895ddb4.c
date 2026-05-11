// ============================================================
// 函数名称: sub_4590dc
// 虚拟地址: 0x4590dc
// WARP GUID: de78af25-c897-5745-93c6-5751e895ddb4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_458f9c, sub_459094
// [被调用的父级函数]: sub_459b60
// ============================================================

int32_t __convention("regparm")sub_4590dc(int32_t* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x1be)
    void* edx = *(arg1 + 0x1be)
    int32_t result = sub_458f9c(arg1, edx + 0x20)
    
    if (arg1[0x1d] != 3)
        void* eax_8 = *arg1
        *(eax_8 + 0x14) = 0x5e
        *(eax_8 + 0x18) = result
        (*(*arg1 + 4))(arg1, edx)
    else
        int32_t* eax_4 = *arg1 + 0x18
        *eax_4 = result
        eax_4[1] = *(edx + 0x20)
        eax_4[2] = *(edx + 0x24)
        eax_4[3] = *(edx + 0x28)
        *(*arg1 + 0x14) = 0x5d
        (*(*arg1 + 4))(arg1, edx)
    
    int32_t* eax_12 = (*(arg1[1] + 8))(arg1[0x1d])
    int32_t result_1 = result
    int32_t i = 0
    int32_t* var_14 = eax_12
    void* var_20 = edx + 0x20
    
    while (arg1[0x1d] s> i)
        int32_t edx_13 = *var_20
        int32_t result_2 = divs.dp.d(sx.q(result_1), edx_13)
        int32_t var_2c_1 = 0
        
        if (0 s< edx_13)
            do
                char eax_20 = sub_459094(var_2c_1, edx_13 - 1)
                
                for (int32_t j = var_2c_1 * result_2; j s< result; j += result_1)
                    int32_t eax_22 = 0
                    
                    if (result_2 s> 0)
                        do
                            char* ebx_3 = *var_14 + j + eax_22
                            eax_22 += 1
                            *ebx_3 = eax_20
                        while (result_2 s> eax_22)
                
                var_2c_1 += 1
            while (var_2c_1 s< edx_13)
        
        result_1 = result_2
        i += 1
        var_14 = &var_14[1]
        var_20 += 4
    
    *(edx + 0x10) = eax_12
    *(edx + 0x14) = result
    return result
}
