// ============================================================
// 函数名称: sub_45fc98
// 虚拟地址: 0x45fc98
// WARP GUID: 5856cba9-a098-52c5-8341-505956321c92
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45fd34
// ============================================================

int32_t __convention("regparm")sub_45fc98(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1[5]
    int32_t* ebx = arg1[5]
    char* esi = *ebx
    int32_t edi = ebx[1]
    
    if (edi == 0)
        if (ebx[3]() == 0)
            return 0
        
        esi = *ebx
        edi = ebx[1]
    
    int32_t edi_1 = edi - 1
    int32_t eax_3
    eax_3.b = *esi
    void* esi_1 = &esi[1]
    
    if (edi_1 == 0)
        if (ebx[3](eax_3) == 0)
            return 0
        
        esi_1 = *ebx
        edi_1 = ebx[1]
    
    int32_t eax_6
    eax_6.b = *esi_1
    
    if (eax_3 != 0xff || eax_6 != 0xd8)
        void* eax_7 = *arg1
        *(eax_7 + 0x14) = 0x34
        *(eax_7 + 0x18) = eax_3
        *(eax_7 + 0x1c) = eax_6
        (**arg1)(eax_3, eax_6)
    
    *(arg1 + 0x192) = eax_6
    *ebx = esi_1 + 1
    ebx[1] = edi_1 - 1
    return 1
}
