// ============================================================
// 函数名称: sub_4139fc
// 虚拟地址: 0x4139fc
// WARP GUID: 3b80f962-9c33-5580-968d-99ceacbc3fd6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_4030d0
// [被调用的父级函数]: sub_4138b8, sub_4140e4
// ============================================================

void* const __convention("regparm")sub_4139fc(void* arg1)
{
    // 第一条实际指令: void* const result = *(arg1 + 0x30)
    void* const result = *(arg1 + 0x30)
    
    if (result != 0)
        int32_t esi_2 = *(result + 8) - 1
        
        if (esi_2 s>= 0)
            int32_t i_1 = esi_2 + 1
            int32_t edi_1 = 0
            int32_t i
            
            do
                sub_4030d0(sub_410524(*(arg1 + 0x30), edi_1))
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        sub_4030d0(*(arg1 + 0x30))
        result = nullptr
        *(arg1 + 0x30) = 0
    
    return result
}
