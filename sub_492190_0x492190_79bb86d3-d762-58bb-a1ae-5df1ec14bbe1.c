// ============================================================
// 函数名称: sub_492190
// 虚拟地址: 0x492190
// WARP GUID: 79bb86d3-d762-58bb-a1ae-5df1ec14bbe1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_492190(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    eax.b = arg2
    
    switch (eax)
        case 0
            eax.w = 0x81
            *(arg1 + 0x28e) &= (not.d(eax)).w
            int16_t eax_1 = 6 | *(arg1 + 0x28e)
            *(arg1 + 0x28e) = eax_1
            return eax_1
        case 1
            if (*(arg1 + 0x2cb) != 0)
                *(arg1 + 0x28e) |= 1
            
            if (*(arg1 + 0x2ce) != 0)
                *(arg1 + 0x28e) |= 0x80
        case 2
            if (*(arg1 + 0x2cb) != 0)
                *(arg1 + 0x28e) |= 1
            
            if (*(arg1 + 0x2ce) != 0)
                *(arg1 + 0x28e) |= 0x80
            
            eax.w = 6
            int16_t eax_2 = (not.d(eax)).w & *(arg1 + 0x28e)
            *(arg1 + 0x28e) = eax_2
            return eax_2
        case 3
            if (*(arg1 + 0x2cb) != 0)
                *(arg1 + 0x28e) |= 1
            
            if (*(arg1 + 0x2ce) != 0)
                *(arg1 + 0x28e) |= 0x80
            
            eax.w = 6
            int16_t eax_3 = (not.d(eax)).w & *(arg1 + 0x28e)
            *(arg1 + 0x28e) = eax_3
            return eax_3
        case 4
            if (*(arg1 + 0x2cb) != 0)
                *(arg1 + 0x28e) |= 1
            
            if (*(arg1 + 0x2ce) != 0)
                *(arg1 + 0x28e) |= 0x80
            
            eax.w = 6
            int16_t eax_4 = (not.d(eax)).w & *(arg1 + 0x28e)
            *(arg1 + 0x28e) = eax_4
            return eax_4
        case 5
            if (*(arg1 + 0x2cb) != 0)
                *(arg1 + 0x28e) |= 1
            
            if (*(arg1 + 0x2ce) != 0)
                *(arg1 + 0x28e) |= 0x80
            
            eax.w = 6
            int16_t eax_5 = (not.d(eax)).w & *(arg1 + 0x28e)
            *(arg1 + 0x28e) = eax_5
            return eax_5
        case 6
            if (*(arg1 + 0x2cb) != 0)
                *(arg1 + 0x28e) |= 1
            
            if (*(arg1 + 0x2ce) != 0)
                *(arg1 + 0x28e) |= 0x80
            
            eax.w = 6
            int16_t eax_6 = (not.d(eax)).w & *(arg1 + 0x28e)
            *(arg1 + 0x28e) = eax_6
            return eax_6
        case 7
            eax.w = 0x81
            *(arg1 + 0x28e) &= (not.d(eax)).w
            int16_t eax_7 = 6 | *(arg1 + 0x28e)
            *(arg1 + 0x28e) = eax_7
            return eax_7
        case 8
            if (*(arg1 + 0x2cb) != 0)
                *(arg1 + 0x28e) |= 1
            
            if (*(arg1 + 0x2ce) != 0)
                *(arg1 + 0x28e) |= 0x80
            
            eax.w = 6
            eax.w = not.d(eax).w & *(arg1 + 0x28e)
            *(arg1 + 0x28e) = eax.w
    
    return eax
}
