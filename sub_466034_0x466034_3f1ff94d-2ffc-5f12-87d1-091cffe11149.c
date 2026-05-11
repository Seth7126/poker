// ============================================================
// 函数名称: sub_466034
// 虚拟地址: 0x466034
// WARP GUID: 3f1ff94d-2ffc-5f12-87d1-091cffe11149
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4533f4
// [被调用的父级函数]: sub_465e68, sub_464a00
// ============================================================

int32_t __convention("regparm")sub_466034(void* arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: void* var_524 = arg2
    void* var_524 = arg2
    
    if (*arg3 == 0)
        *arg3 = (**(arg1 + 4))()
    
    int32_t eax_2 = *arg3
    int32_t eax_3 = 0
    int32_t i = 1
    char* ebp = var_524 + 1
    
    do
        int32_t ecx_1 = 1
        void* edx_2 = &var_524 + eax_3 + 0xc
        
        while (true)
            int32_t ebx_2
            ebx_2.b = *ebp
            
            if (ecx_1 s> ebx_2)
                break
            
            eax_3 += 1
            *edx_2 = i.b
            edx_2 += 1
            ecx_1 += 1
        
        i += 1
        ebp = &ebp[1]
    while (i s<= 0x10)
    
    char var_518[0x104]
    var_518[eax_3] = 0
    int32_t ebx_3 = 0
    int32_t i_1 = sx.d(var_518[0])
    int32_t eax_4 = 0
    
    while (var_518[eax_4] != 0)
        void* ecx_2 = &(&var_524)[eax_4 + 0x44]
        void* edx_3 = &var_524 + eax_4 + 0xc
        
        while (i_1 == sx.d(*edx_3))
            *ecx_2 = ebx_3
            eax_4 += 1
            ecx_2 += 4
            edx_3 += 1
            ebx_3 += 1
        
        ebx_3 *= 2
        i_1 += 1
    
    sub_4533f4(eax_2 + 0x400, 0, 0x100)
    int32_t result = 0
    char (* esi_3)[0x104] = &var_518
    void* edx_5 = var_524 + 0x11
    void var_414
    void* ecx_3 = &var_414
    
    if (0 s< eax_3)
        do
            int32_t ebx_4
            ebx_4.b = *edx_5
            int32_t ebp_1 = *ecx_3
            ecx_3 += 4
            result += 1
            *(eax_2 + (ebx_4 << 2)) = ebp_1
            int32_t ebx_5
            ebx_5.b = *edx_5
            edx_5 += 1
            char* edi_3 = eax_2 + ebx_5 + 0x400
            ebx_5.b = *esi_3
            esi_3 = &(*esi_3)[1]
            *edi_3 = ebx_5.b
        while (result s< eax_3)
    
    return result
}
