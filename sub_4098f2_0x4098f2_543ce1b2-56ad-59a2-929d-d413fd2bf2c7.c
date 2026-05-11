// ============================================================
// 函数名称: sub_4098f2
// 虚拟地址: 0x4098f2
// WARP GUID: 543ce1b2-56ad-59a2-929d-d413fd2bf2c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4097ab
// ============================================================

uint32_t __convention("regparm")sub_4098f2(uint32_t arg1, void* arg2 @ ebp)
{
    // 第一条实际指令: uint8_t* esi = arg2 - 0x61
    uint8_t* esi = arg2 - 0x61
    
    do
        int32_t edx_1 = 0
        uint8_t edx_2 = (modu.dp.d(edx_1:arg1, 0xa)).b + 0x30
        
        if (edx_2 u>= 0x3a)
            edx_2 += 7
        
        esi -= 1
        *esi = edx_2
        arg1 = divu.dp.d(edx_1:arg1, 0xa)
    while (arg1 != 0)
    
    void* ecx_1 = arg2 - 0x61 - esi
    int32_t edx_3 = *(arg2 - 0x20)
    
    if (edx_3 u> 0x10)
        return arg1
    
    void* i_1 = edx_3 - ecx_1
    
    if (edx_3 u> ecx_1)
        arg1.b = 0x30
        void* i
        
        do
            esi -= 1
            *esi = 0x30
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return arg1
}
