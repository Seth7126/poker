// ============================================================
// 函数名称: sub_40986b
// 虚拟地址: 0x40986b
// WARP GUID: 85ed37d7-c472-55d4-ad14-40267322d0b7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4068d4, sub_4069c9
// [被调用的父级函数]: sub_4097ab
// ============================================================

int32_tsub_40986b(void* arg1 @ ebp)
{
    // 第一条实际指令: char* esi = arg1 - 0x51
    char* esi = arg1 - 0x51
    int32_t i
    
    do
        char eax_2
        int32_t edx_2
        int32_t* entry_ebx
        eax_2, edx_2 = sub_4069c9(0xa, entry_ebx[1], *entry_ebx, 0xa, 0)
        char edx_3 = eax_2 + 0x30
        
        if (edx_3 u>= 0x3a)
            edx_3 += 7
        
        esi -= 1
        *esi = edx_3
        int32_t eax_5
        int32_t edx_5
        eax_5, edx_5 = sub_4068d4(0xa, entry_ebx[1], *entry_ebx, 0xa, 0)
        *entry_ebx = eax_5
        entry_ebx[1] = edx_5
        i = eax_5 | edx_5
    while (i != 0)
    
    void* ecx_1 = arg1 - 0x51 - esi
    int32_t edx_6 = *(arg1 - 0x20)
    
    if (edx_6 u> 0x10)
        return i
    
    void* i_2 = edx_6 - ecx_1
    
    if (edx_6 u> ecx_1)
        i.b = 0x30
        void* i_1
        
        do
            esi -= 1
            *esi = 0x30
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    return i
}
