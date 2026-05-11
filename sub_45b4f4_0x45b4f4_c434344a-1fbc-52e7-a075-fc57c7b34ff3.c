// ============================================================
// 函数名称: sub_45b4f4
// 虚拟地址: 0x45b4f4
// WARP GUID: c434344a-1fbc-52e7-a075-fc57c7b34ff3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45aefc
// [被调用的父级函数]: sub_456790
// ============================================================

int32_t __convention("regparm")sub_45b4f4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void (__convention("regparm")** eax_1)(int32_t* arg1, int32_t arg2) = (*arg1[1])()
    void (__convention("regparm")** eax_1)(int32_t* arg1, int32_t arg2) = (*arg1[1])()
    *(arg1 + 0x19a) = eax_1
    *eax_1 = sub_45b2cc
    
    if (arg2 != 0)
        *(*arg1 + 0x14) = 4
        (**arg1)()
    
    int32_t var_14
    
    if (*(*(arg1 + 0x1b6) + 8) == 0)
        var_14 = *(arg1 + 0x12e)
    else
        if (*(arg1 + 0x12e) s< 2)
            *(*arg1 + 0x14) = 0x2e
            (**arg1)()
        
        sub_45aefc(arg1)
        var_14 = *(arg1 + 0x12e) + 2
    
    int32_t i = 0
    void* ebx_1 = arg1[0x35]
    void* edi_2 = &eax_1[2]
    
    while (i s< arg1[8])
        *(ebx_1 + 0x1c)
        *(ebx_1 + 0x24)
        *edi_2 = (*(arg1[1] + 8))(divs.dp.d(sx.q(*(ebx_1 + 0xc) * *(ebx_1 + 0x24)), *(arg1 + 0x12e))
            * var_14)
        edi_2 += 4
        i += 1
        ebx_1 += 0x54
    
    return i
}
