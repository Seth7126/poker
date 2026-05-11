// ============================================================
// 函数名称: sub_465154
// 虚拟地址: 0x465154
// WARP GUID: 4affd43b-05b3-56bd-b51c-c4a0aed42890
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_464c08, sub_464cf0, sub_464d1c, sub_464d6c, sub_464cc4
// [被调用的父级函数]: sub_464a00
// ============================================================

int32_t __convention("regparm")sub_465154(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* var_130 = arg1
    void* var_130 = arg1
    uint32_t ebx = *(var_130 + 0x161)
    int32_t edx = *(var_130 + 0x135)
    char esi = (*(var_130 + 0x13d)).b
    *(ebx + 0x10) = **(var_130 + 0x14)
    *(ebx + 0x14) = *(*(var_130 + 0x14) + 4)
    
    if (*(var_130 + 0xc0) != 0 && *(ebx + 0x44) == 0)
        sub_464d6c(ebx, (*(ebx + 0x48)).b)
    
    int32_t edx_4 = *arg2
    int32_t var_124 = 0
    int32_t var_128 = *(var_130 + 0x131)
    void* edx_6 = &(&var_130)[var_128 + 8]
    void* eax_8 = (var_128 << 2) + &data_52eed0
    
    while (var_128 s<= edx)
        int32_t var_12c_1 = sx.d(*(edx_4 + (*eax_8 << 1)))
        
        if (var_12c_1 s< 0)
            var_12c_1 = neg.d(var_12c_1)
        
        int32_t var_12c_2 = var_12c_1 s>> esi
        *edx_6 = var_12c_2
        
        if (var_12c_2 == 1)
            var_124 = var_128
        
        var_128 += 1
        edx_6 += 4
        eax_8 += 4
    
    char* ebp_1 = *(ebx + 0x40) + *(ebx + 0x3c)
    int32_t i = 0
    int32_t esi_1 = 0
    int32_t var_128_1 = *(var_130 + 0x131)
    void* var_114 = (var_128_1 << 2) + &data_52eed0
    void* var_118 = &(&var_130)[var_128_1 + 8]
    
    while (var_128_1 s<= edx)
        int32_t ecx_13 = *var_118
        
        if (ecx_13 != 0)
            while (i s> 0xf)
                if (var_128_1 s> var_124)
                    break
                
                sub_464d1c(ebx)
                sub_464cc4(ebx, *(ebx + 0x34), 0xf0)
                i -= 0x10
                sub_464cf0(ebx, ebp_1, esi_1)
                ebp_1 = *(ebx + 0x40)
                esi_1 = 0
            
            if (ecx_13 s<= 1)
                sub_464d1c(ebx)
                sub_464cc4(ebx, *(ebx + 0x34), (i << 4) + 1)
                int32_t edx_13 = 0
                
                if (*(edx_4 + (*var_114 << 1)) s>= 0)
                    edx_13 = 1
                
                sub_464c08(ebx, edx_13, 1)
                sub_464cf0(ebx, ebp_1, esi_1)
                ebp_1 = *(ebx + 0x40)
                esi_1 = 0
                i = 0
            else
                void* edx_11
                edx_11.b = ecx_13.b
                edx_11.b &= 1
                ebp_1[esi_1] = edx_11.b
                esi_1 += 1
        else
            i += 1
        
        var_128_1 += 1
        var_114 += 4
        var_118 += 4
    
    if (i s> 0 || esi_1 u> 0)
        *(ebx + 0x38) += 1
        *(ebx + 0x3c) += esi_1
        
        if (*(ebx + 0x38) == 0x7fff || *(ebx + 0x3c) u> 0x3a9)
            sub_464d1c(ebx)
    
    int32_t* eax_23 = *(var_130 + 0x14)
    *eax_23 = *(ebx + 0x10)
    eax_23[1] = *(ebx + 0x14)
    int32_t eax_25 = *(var_130 + 0xc0)
    
    if (eax_25 != 0)
        if (*(ebx + 0x44) == 0)
            *(ebx + 0x44) = eax_25
            *(ebx + 0x48) += 1
            *(ebx + 0x48) &= 7
        
        *(ebx + 0x44) -= 1
    
    return 1
}
