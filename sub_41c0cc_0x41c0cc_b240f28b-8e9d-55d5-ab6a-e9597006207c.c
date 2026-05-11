// ============================================================
// 函数名称: sub_41c0cc
// 虚拟地址: 0x41c0cc
// WARP GUID: b240f28b-8e9d-55d5-ab6a-e9597006207c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_410b1c, sub_41d044, sub_4030a0, sub_41d040
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41c0cc(int32_t* arg1, void* const arg2)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    int32_t ecx
    
    if (esi != 0 && sub_403248(esi, &data_417940) == 0)
        return sub_410b1c(ecx, esi)
    
    int32_t edi_1 = 0
    int32_t* eax_2 = arg1[8]
    
    if (eax_2 != 0)
        edi_1 = eax_2[5]
        ecx, arg2 = sub_41d044(eax_2)
    
    if (esi == 0)
        arg2.b = 1
        arg1[8] = sub_4030a0(ecx, arg2)
        arg1[9].b = 1
    else
        arg1[8] = esi[8]
        int32_t* eax_3
        eax_3.b = esi[9].b
        arg1[9].b = eax_3.b
    
    sub_41d040(arg1[8])
    int32_t eax_8 = (*(*arg1 + 0x24))()
    int32_t eax_10
    
    if (edi_1 != eax_8)
        eax_10 = (*(*arg1 + 0x24))()
    
    if (edi_1 != eax_8 && eax_10 != 0)
        eax_10.b = 1
    else
        eax_10 = 0
    
    *(arg1 + 0x1a) = eax_10.b
    return (*(*arg1 + 0x10))()
}
