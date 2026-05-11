// ============================================================
// 函数名称: sub_458f9c
// 虚拟地址: 0x458f9c
// WARP GUID: 815484c0-37a1-5514-b64a-d8854ffa87d0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4590dc
// ============================================================

int32_t __convention("regparm")sub_458f9c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edx = arg1[0x1d]
    int32_t edx = arg1[0x1d]
    int32_t eax_1 = arg1[0x17]
    int32_t ebx = 1
    int32_t eax_2
    
    do
        ebx += 1
        eax_2 = ebx
        int32_t ecx_1 = 1
        
        if (1 s< edx)
            do
                eax_2 *= ebx
                ecx_1 += 1
            while (ecx_1 s< edx)
    while (eax_2 s<= eax_1)
    
    if (ebx - 1 s< 2)
        void* edx_2 = *arg1
        *(edx_2 + 0x14) = 0x37
        *(edx_2 + 0x18) = eax_2
        (**arg1)(arg1, arg2, edx, eax_1)
    
    int32_t result = 1
    int32_t ecx_3 = 0
    int32_t* eax_4 = arg2
    
    if (0 s< edx)
        do
            *eax_4 = ebx - 1
            result *= ebx - 1
            ecx_3 += 1
            eax_4 = &eax_4[1]
        while (ecx_3 s< edx)
    
    int32_t i
    
    do
        i = 0
        int32_t ecx_4 = 0
        void* var_10_1 = &data_52ee04
        
        if (0 s< edx)
            do
                int32_t ebx_2
                
                if (arg1[0xa] != 2)
                    ebx_2 = ecx_4
                else
                    ebx_2 = *var_10_1
                
                int32_t result_1 = divs.dp.d(sx.q(result), arg2[ebx_2]) * (arg2[ebx_2] + 1)
                
                if (result_1 s> eax_1)
                    break
                
                ecx_4 += 1
                result = result_1
                arg2[ebx_2] += 1
                i = 1
                var_10_1 += 4
            while (ecx_4 s< edx)
    while (i != 0)
    return result
}
