// ============================================================
// 函数名称: sub_436cdc
// 虚拟地址: 0x436cdc
// WARP GUID: 58209009-2a21-54ea-b981-c6d3c82e05b4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_403248
// [被调用的父级函数]: sub_436a30
// ============================================================

void __convention("regparm")sub_436cdc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2.w == arg1[0x1a].w)
    if (arg2.w == arg1[0x1a].w)
        return 
    
    int32_t edi_2 = *(arg1[0x10] + 8) - 1
    
    if (edi_2 s>= 0)
        int32_t i_1 = edi_2 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            if (sub_403248(sub_410524(arg1[0x10], esi_1), sub_4362e0+0x8c) != 0)
                (*(*sub_410524(arg1[0x10], esi_1) + 0x58))()
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    arg1[0x1a].w = arg2.w
    (*(*arg1 + 0x30))()
}
