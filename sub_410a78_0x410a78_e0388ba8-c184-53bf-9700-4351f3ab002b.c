// ============================================================
// 函数名称: sub_410a78
// 虚拟地址: 0x410a78
// WARP GUID: e0388ba8-c184-53bf-9700-4351f3ab002b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4395b0
// ============================================================

int32_t __convention("regparm")sub_410a78(void* arg1)
{
    // 第一条实际指令: int32_t i_2
    int32_t i_2
    int32_t i_1 = i_2
    int32_t eax_2 = *(arg1 + 4) + 0x1f
    
    if (eax_2 s< 0)
        eax_2 += 0x1f
    
    if ((eax_2 s>> 5) - 1 s>= 0)
        i_1 = eax_2 s>> 5
        int32_t esi_1 = 0
        int32_t i
        
        do
            if (0xffffffff != *(*(arg1 + 8) + (esi_1 << 2)))
                int32_t eax_8 = 0
                
                do
                    bool c_1 = eax_8.b u< 0x1f
                    
                    if (eax_8.b == 0x1f || c_1)
                        c_1 = test_bit(*(*(arg1 + 8) + (esi_1 << 2)), eax_8 & 0x7f)
                    
                    if (not(c_1))
                        int32_t eax_10 = (esi_1 << 5) + (eax_8 & 0x7f)
                        int32_t edx_6 = *(arg1 + 4)
                        
                        if (eax_10 s< edx_6)
                            return eax_10
                        
                        return edx_6
                    
                    eax_8 += 1
                while (eax_8.b != 0x20)
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return *(arg1 + 4)
}
