// ============================================================
// 函数名称: sub_4650ac
// 虚拟地址: 0x4650ac
// WARP GUID: ec351688-ab3b-5cfc-a8b5-8a59a7c5a8cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_464d6c, sub_464c08
// [被调用的父级函数]: sub_464a00
// ============================================================

int32_t __convention("regparm")sub_4650ac(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    uint32_t esi = *(arg1 + 0x161)
    int32_t eax = *(arg1 + 0x13d)
    *(esi + 0x10) = **(arg1 + 0x14)
    *(esi + 0x14) = *(*(arg1 + 0x14) + 4)
    
    if (*(arg1 + 0xc0) != 0 && *(esi + 0x44) == 0)
        sub_464d6c(esi, (*(esi + 0x48)).b)
    
    int32_t i = 0
    int32_t* edi_1 = arg2
    
    while (i s< *(arg1 + 0x105))
        sub_464c08(esi, sx.d(**edi_1) s>> eax.b, 1)
        i += 1
        edi_1 = &edi_1[1]
    
    int32_t* eax_7 = *(arg1 + 0x14)
    *eax_7 = *(esi + 0x10)
    eax_7[1] = *(esi + 0x14)
    int32_t eax_8 = *(arg1 + 0xc0)
    
    if (eax_8 != 0)
        if (*(esi + 0x44) == 0)
            *(esi + 0x44) = eax_8
            *(esi + 0x48) += 1
            *(esi + 0x48) &= 7
        
        *(esi + 0x44) -= 1
    
    return 1
}
