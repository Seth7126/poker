// ============================================================
// 函数名称: sub_45fa04
// 虚拟地址: 0x45fa04
// WARP GUID: 40113e6e-19f9-589d-bb7d-8d4e0073e5cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45fd34
// ============================================================

int32_t __convention("regparm")sub_45fa04(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1[5]
    int32_t* edi = arg1[5]
    char* ebx = *edi
    int32_t esi = edi[1]
    
    if (esi == 0)
        if (edi[3]() == 0)
            return 0
        
        ebx = *edi
        esi = edi[1]
    
    int32_t esi_1 = esi - 1
    int32_t eax_3
    eax_3.b = *ebx
    void* ebx_1 = &ebx[1]
    int32_t var_18 = eax_3 << 8
    
    if (esi_1 == 0)
        if (edi[3](var_18) == 0)
            return 0
        
        ebx_1 = *edi
        esi_1 = edi[1]
    
    int32_t esi_2 = esi_1 - 1
    int32_t eax_7
    eax_7.b = *ebx_1
    var_18 += eax_7
    void* ebx_2 = ebx_1 + 1
    
    if (var_18 != 4)
        *(*arg1 + 0x14) = 9
        (**arg1)(var_18)
    
    if (esi_2 == 0)
        if (edi[3](var_18) == 0)
            return 0
        
        ebx_2 = *edi
        esi_2 = edi[1]
    
    int32_t esi_3 = esi_2 - 1
    int32_t eax_11
    eax_11.b = *ebx_2
    void* ebx_3 = ebx_2 + 1
    int32_t var_14 = eax_11 << 8
    
    if (esi_3 == 0)
        if (edi[3](var_18, var_14) == 0)
            return 0
        
        ebx_3 = *edi
        esi_3 = edi[1]
    
    int32_t eax_15
    eax_15.b = *ebx_3
    var_14 += eax_15
    void* eax_16 = *arg1
    *(eax_16 + 0x14) = 0x51
    *(eax_16 + 0x18) = var_14
    (*(*arg1 + 4))(var_18, var_14)
    arg1[0x44] = var_14
    *edi = ebx_3 + 1
    edi[1] = esi_3 - 1
    return 1
}
