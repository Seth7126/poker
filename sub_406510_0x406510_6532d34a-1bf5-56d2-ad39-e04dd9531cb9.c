// ============================================================
// 函数名称: sub_406510
// 虚拟地址: 0x406510
// WARP GUID: 6532d34a-1bf5-56d2-ad39-e04dd9531cb9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40d7c0, sub_40d5e8
// ============================================================

void __convention("regparm")sub_406510(uint32_t arg1, long double arg2 @ st0)
{
    // 第一条实际指令: if (arg1 s< 0)
    if (arg1 s< 0)
        int32_t eax = neg.d(arg1)
        
        if (eax s>= 0x1400)
            return 
        
        *((eax & 0x1f) * 0xa + sub_4065b4)
        arg1 = eax u>> 5
        
        if (arg1 != 0)
            int32_t edx_11 = arg1 & 0xf
            
            if (edx_11 != 0)
                *(edx_11 * 0xa + &data_4066ea)
            
            arg1 u>>= 4
            
            if (arg1 != 0)
                *(arg1 * 0xa + &data_406780)
    else if (arg1 != 0)
        if (arg1 s>= 0x1400)
            data_4065aa
            return 
        
        *((arg1 & 0x1f) * 0xa + sub_4065b4)
        arg1 u>>= 5
        
        if (arg1 != 0)
            int32_t edx_5 = arg1 & 0xf
            
            if (edx_5 != 0)
                *(edx_5 * 0xa + &data_4066ea)
            
            arg1 u>>= 4
            
            if (arg1 != 0)
                *(arg1 * 0xa + &data_406780)
}
