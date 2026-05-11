// ============================================================
// 函数名称: sub_40605c
// 虚拟地址: 0x40605c
// WARP GUID: 76c0ff0d-00de-56f9-8913-7e13dd037489
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: j_sub_406190, sub_402844
// [被调用的父级函数]: sub_406168, sub_4060e7, sub_405fdc
// ============================================================

void* __convention("regparm")sub_40605c(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 4) != 0xd7b1)
    if (*(arg1 + 4) != 0xd7b1)
        if (arg1 != &data_531050)
        label_40608b:
            sub_402844(0x68)
            void* eax
            eax.b = 0x1a
            return eax
        
        j_sub_406190()
        arg1 = &data_531050
        
        if (data_531054 != 0xd7b1)
            goto label_40608b
    
    int32_t edx = *(arg1 + 0xc)
    
    if (edx u>= *(arg1 + 0x10))
        int32_t eax_1 = (*(arg1 + 0x1c))(arg1)
        
        if (eax_1 != 0)
            sub_402844(eax_1)
            void* eax_2
            eax_2.b = 0x1a
            return eax_2
        
        edx = *(arg1 + 0xc)
        
        if (edx u>= *(arg1 + 0x10))
            (*(arg1 + 0x14))[edx] = 0x1a
            *(arg1 + 0x10) += 1
            arg1.b = 0x1a
            return arg1
    
    char* ecx
    ecx.b = (*(arg1 + 0x14))[edx]
    
    if (ecx.b != 0x1a)
        *(arg1 + 0xc) = edx + 1
    
    arg1.b = ecx.b
    return arg1
}
