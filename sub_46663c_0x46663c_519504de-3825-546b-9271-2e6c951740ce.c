// ============================================================
// 函数名称: sub_46663c
// 虚拟地址: 0x46663c
// WARP GUID: 519504de-3825-546b-9271-2e6c951740ce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46659c
// [被调用的父级函数]: sub_465e68
// ============================================================

int32_t __convention("regparm")sub_46663c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x161)
    void* ebx = *(arg1 + 0x161)
    
    if (*(arg1 + 0xc0) != 0)
        if (*(ebx + 0x24) == 0)
            int32_t i = 0
            void* eax = ebx + 0x14
            
            while (i s< *(arg1 + 0xe9))
                i += 1
                *eax = 0
                eax += 4
            
            *(ebx + 0x24) = *(arg1 + 0xc0)
        
        *(ebx + 0x24) -= 1
    
    int32_t i_1 = 0
    void* var_14 = arg1 + 0x109
    int32_t* edi = arg2
    
    while (*(arg1 + 0x105) s> i_1)
        int32_t esi_1 = *var_14
        void* eax_2 = *(arg1 + (esi_1 << 2) + 0xed)
        sub_46659c(*(ebx + (*(eax_2 + 0x14) << 2) + 0x4c), *(ebx + (esi_1 << 2) + 0x14), *edi, 
            *(ebx + (*(eax_2 + 0x18) << 2) + 0x5c))
        *(ebx + (esi_1 << 2) + 0x14) = sx.d(**edi)
        i_1 += 1
        edi = &edi[1]
        var_14 += 4
    
    return 1
}
