// ============================================================
// 函数名称: sub_4367e8
// 虚拟地址: 0x4367e8
// WARP GUID: 70039990-b25d-5e0a-b594-d908297295ce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_403248
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4367e8(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x32) != 0)
    if (*(arg1 + 0x32) != 0)
        *(arg1 + 0x34)
        (*(arg1 + 0x30))()
    
    void* result = *(arg1 + 0x24)
    int32_t esi_1 = *(result + 8) - 1
    
    if (esi_1 s>= 0)
        int32_t i_1 = esi_1 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            result = (*(*sub_410524(*(arg1 + 0x24), edi_1) + 0x30))()
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if ((*(arg1 + 0x20) & 0x10) != 0)
        int32_t* esi_2 = *(arg1 + 4)
        result = sub_403248(esi_2, &data_43f864)
        
        if (result.b != 0 && esi_2[0x8e] != 0)
            return (*(*esi_2[0x8e] + 0xc))()
    
    return result
}
