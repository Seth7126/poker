// ============================================================
// 函数名称: sub_466418
// 虚拟地址: 0x466418
// WARP GUID: 04f1e677-b058-580b-b8b8-4f6d1d26d1e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4663a4, sub_466238
// [被调用的父级函数]: sub_465e68
// ============================================================

int32_t __convention("regparm")sub_466418(void* arg1, int16_t** arg2)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0x14)
    int32_t* eax = *(arg1 + 0x14)
    void* ebp = *(arg1 + 0x161)
    int32_t var_34 = *eax
    int32_t ecx = eax[1]
    void var_2c
    __builtin_memcpy(&var_2c, ebp + 0xc, 0x18)
    void* var_14 = arg1
    
    if (*(arg1 + 0xc0) != 0 && *(ebp + 0x24) == 0 && sub_4663a4(&var_34, (*(ebp + 0x28)).b) == 0)
        return 0
    
    int32_t i = 0
    int16_t** ebx_1 = arg2
    void* var_38_1 = arg1 + 0x109
    
    while (i s< *(arg1 + 0x105))
        int32_t edi_1 = *var_38_1
        void* eax_5 = *(arg1 + (edi_1 << 2) + 0xed)
        int32_t ecx_2 = *(ebp + (*(eax_5 + 0x14) << 2) + 0x2c)
        int32_t* var_44 = *(ebp + (*(eax_5 + 0x18) << 2) + 0x3c)
        int32_t var_24[0x4]
        
        if (sub_466238(var_24[edi_1], *ebx_1, &var_34, var_44, ecx_2) == 0)
            return 0
        
        var_24[edi_1] = sx.d(**ebx_1)
        i += 1
        ebx_1 = &ebx_1[1]
        var_38_1 += 4
    
    int32_t* eax_10 = *(arg1 + 0x14)
    *eax_10 = var_34
    eax_10[1] = ecx
    __builtin_memcpy(ebp + 0xc, &var_2c, 0x18)
    int32_t eax_11 = *(arg1 + 0xc0)
    
    if (eax_11 != 0)
        if (*(ebp + 0x24) == 0)
            *(ebp + 0x24) = eax_11
            *(ebp + 0x28) += 1
            *(ebp + 0x28) &= 7
        
        *(ebp + 0x24) -= 1
    
    return 1
}
