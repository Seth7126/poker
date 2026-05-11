// ============================================================
// 函数名称: sub_43b7f4
// 虚拟地址: 0x43b7f4
// WARP GUID: 25f9227b-5066-517a-94f4-40cc99afd51d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b83c, sub_43b974, sub_43b964
// [被调用的父级函数]: sub_43b908, sub_43bee0, sub_43b83c
// ============================================================

void __convention("regparm")sub_43b7f4(uint32_t arg1)
{
    // 第一条实际指令: uint32_t ebx = arg1
    uint32_t ebx = arg1
    void* esi = *(ebx + 0x58)
    
    if (esi == 0)
        return 
    
    arg1 = sub_43b964(esi) - 1
    
    if (arg1 s< 0)
        return 
    
    int32_t i_1 = arg1 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        arg1 = sub_43b974(*(ebx + 0x58), edi_1)
        
        if (ebx != arg1 && *(arg1 + 0x31) != 0)
            int32_t edx_1
            edx_1.b = *(arg1 + 0x33)
            
            if (edx_1.b == *(ebx + 0x33))
                sub_43b83c(arg1, 0)
        
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
}
