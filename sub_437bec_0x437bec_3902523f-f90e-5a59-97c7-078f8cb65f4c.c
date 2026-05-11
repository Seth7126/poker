// ============================================================
// 函数名称: sub_437bec
// 虚拟地址: 0x437bec
// WARP GUID: 3902523f-f90e-5a59-97c7-078f8cb65f4c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_410414
// [被调用的父级函数]: sub_43d360, sub_437030, sub_436724, sub_43c1e8, sub_438264
// ============================================================

void* __convention("regparm")sub_437bec(void* arg1, void* arg2)
{
    // 第一条实际指令: void* result = *(arg1 + 0x40)
    void* result = *(arg1 + 0x40)
    
    if (result != 0)
        int32_t edi_2 = *(result + 8) - 1
        
        if (edi_2 s>= 0)
            int32_t i_1 = edi_2 + 1
            int32_t esi_1 = 0
            int32_t i
            
            do
                result = sub_410524(*(arg1 + 0x40), esi_1)
                
                if (arg2 == result)
                    *(arg2 + 4) = 0
                    return sub_410414(*(arg1 + 0x40), esi_1)
                
                esi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
