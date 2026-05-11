// ============================================================
// 函数名称: sub_436aac
// 虚拟地址: 0x436aac
// WARP GUID: 9edea3ef-6ae6-5a91-ac28-97a54157f21a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_404188, sub_410524, sub_403248
// [被调用的父级函数]: sub_436a30, sub_43c13c, sub_436d90, sub_42d4b8
// ============================================================

int32_t __convention("regparm")sub_436aac(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = sub_404188(arg2, arg1[0x15])
    int32_t result = sub_404188(arg2, arg1[0x15])
    bool z
    
    if (z)
        return result
    
    int32_t edi_2 = *(arg1[0x10] + 8) - 1
    
    if (edi_2 s>= 0)
        int32_t i_1 = edi_2 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            if (sub_403248(sub_410524(arg1[0x10], esi_1), sub_4362e0+0x8c) != 0)
                (*(*sub_410524(arg1[0x10], esi_1) + 0x40))()
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_403e4c(&arg1[0x15], arg2)
    return (*(*arg1 + 0x30))()
}
