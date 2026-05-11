// ============================================================
// 函数名称: sub_45abfc
// 虚拟地址: 0x45abfc
// WARP GUID: 14998a72-ea4d-5112-ab26-3e508278dfcd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45acb4, sub_45addc
// ============================================================

int32_t __convention("regparm")sub_45abfc(void* arg1)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x1be)
    void* ebx = *(arg1 + 0x1be)
    int32_t edx_1 = 0
    int32_t* ecx_2 = (**(arg1 + 4))() + 0x3fc
    int32_t i = 0
    *(ebx + 0x28) = ecx_2
    int32_t* ebx_1 = ecx_2
    
    do
        *ebx_1 = edx_1
        ecx_2[neg.d(i)] = neg.d(edx_1)
        ebx_1 = &ebx_1[1]
        i += 1
        edx_1 += 1
    while (i s< 0x10)
    
    int32_t* ebx_2 = &ecx_2[i]
    
    while (i s< 0x30)
        *ebx_2 = edx_1
        ecx_2[neg.d(i)] = neg.d(edx_1)
        ebx_2 = &ebx_2[1]
        i += 1
        int32_t esi_5 = 0
        
        if ((i.b & 1) == 0)
            esi_5 = 1
        
        edx_1 += esi_5
    
    void* ebx_3 = &ecx_2[i]
    
    while (i s<= 0xff)
        int32_t esi_7 = neg.d(i)
        *ebx_3 = edx_1
        ebx_3 += 4
        i += 1
        ecx_2[esi_7] = neg.d(edx_1)
    
    return i
}
