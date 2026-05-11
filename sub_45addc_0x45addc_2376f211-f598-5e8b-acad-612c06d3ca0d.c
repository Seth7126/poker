// ============================================================
// 函数名称: sub_45addc
// 虚拟地址: 0x45addc
// WARP GUID: 2376f211-f598-5e8b-acad-612c06d3ca0d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45abfc
// [被调用的父级函数]: sub_456790
// ============================================================

int32_t __convention("regparm")sub_45addc(int32_t* arg1)
{
    // 第一条实际指令: int32_t (__convention("regparm")** eax_1)(int32_t* arg1, int32_t arg2) = (*arg1[1])()
    int32_t (__convention("regparm")** eax_1)(int32_t* arg1, int32_t arg2) = (*arg1[1])()
    *(arg1 + 0x1be) = eax_1
    *eax_1 = sub_45acb4
    eax_1[3] = sub_45adcc
    eax_1[8] = 0
    eax_1[0xa] = 0
    
    if (arg1[0x1d] != 3)
        *(*arg1 + 0x14) = 0x2e
        (**arg1)()
    
    eax_1[6] = (*arg1[1])()
    
    for (int32_t i = 0; i s< 0x20; i += 1)
        *(eax_1[6] + (i << 2)) = (*(arg1[1] + 4))()
    
    eax_1[7] = 1
    int32_t result
    
    if (arg1[0x1a] == 0)
        result = 0
        eax_1[4] = 0
    else
        int32_t edi_1 = arg1[0x17]
        
        if (edi_1 s< 8)
            void* eax_7 = *arg1
            *(eax_7 + 0x14) = 0x37
            *(eax_7 + 0x18) = 8
            (**arg1)()
        
        if (edi_1 s> 0x100)
            void* eax_9 = *arg1
            *(eax_9 + 0x14) = 0x38
            *(eax_9 + 0x18) = 0x100
            (**arg1)()
        
        result = (*(arg1[1] + 8))(3)
        eax_1[4] = result
        eax_1[5] = edi_1
    
    if (arg1[0x15] != 0)
        arg1[0x15] = 2
    
    if (arg1[0x15] != 2)
        return result
    
    eax_1[8] = (*(arg1[1] + 4))()
    return sub_45abfc(arg1)
}
