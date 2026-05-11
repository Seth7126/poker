// ============================================================
// 函数名称: sub_455da4
// 虚拟地址: 0x455da4
// WARP GUID: 3ec1c1b6-1161-5145-a98b-411758ae2278
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45340c
// [被调用的父级函数]: sub_455e3c
// ============================================================

int32_t __convention("regparm")sub_455da4(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i = 0
    void* var_14 = arg1 + 0x13e
    
    while (i s< *(arg1 + 0x13a))
        void* esi_1 = *var_14
        
        if (*(esi_1 + 0x4c) == 0)
            int32_t edi_1 = *(esi_1 + 0x10)
            
            if (edi_1 s< 0 || edi_1 s>= 4 || arg1[edi_1 + 0x28] == 0)
                void* eax = *arg1
                *(eax + 0x14) = 0x33
                *(eax + 0x18) = edi_1
                (**arg1)(i, var_14)
            
            int32_t eax_3 = (*arg1[1])(i, var_14)
            result = sub_45340c(eax_3, arg1[edi_1 + 0x28], 0x84)
            *(esi_1 + 0x4c) = eax_3
        
        i += 1
        var_14 += 4
    
    return result
}
