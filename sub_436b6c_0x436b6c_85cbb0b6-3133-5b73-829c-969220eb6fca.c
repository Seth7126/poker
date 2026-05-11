// ============================================================
// 函数名称: sub_436b6c
// 虚拟地址: 0x436b6c
// WARP GUID: 85cbb0b6-3133-5b73-829c-969220eb6fca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_403248
// [被调用的父级函数]: sub_44a448, sub_436a30, sub_43c13c, sub_42d4b8
// ============================================================

void __convention("regparm")sub_436b6c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2.b == *(arg1 + 0x59))
    if (arg2.b == *(arg1 + 0x59))
        return 
    
    int32_t edi_2 = *(arg1[0x10] + 8) - 1
    
    if (edi_2 s>= 0)
        int32_t i_1 = edi_2 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            if (sub_403248(sub_410524(arg1[0x10], esi_1), sub_4362e0+0x8c) != 0)
                (*(*sub_410524(arg1[0x10], esi_1) + 0x48))()
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x59) = arg2.b
    (*(*arg1 + 0x30))()
}
