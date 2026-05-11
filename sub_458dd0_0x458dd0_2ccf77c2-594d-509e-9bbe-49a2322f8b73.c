// ============================================================
// 函数名称: sub_458dd0
// 虚拟地址: 0x458dd0
// WARP GUID: 2ccf77c2-594d-509e-9bbe-49a2322f8b73
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4589f0
// [被调用的父级函数]: sub_456790
// ============================================================

int32_t __convention("regparm")sub_458dd0(int32_t* arg1)
{
    // 第一条实际指令: int32_t (** eax_1)() = (*arg1[1])()
    int32_t (** eax_1)() = (*arg1[1])()
    *(arg1 + 0x1ba) = eax_1
    *eax_1 = sub_458dcc
    int32_t eax_2 = arg1[9]
    int32_t i = eax_2 - 1
    
    if (eax_2 != 1)
        int32_t eax_3 = i - 1
        i = eax_3 - 2
        
        if (eax_3 u>= 2)
            int32_t i_1 = i
            i -= 2
            
            if (i_1 u< 2)
                if (arg1[8] != 4)
                    *(*arg1 + 0x14) = 8
                    i = (**arg1)()
            else if (arg1[8] s< 1)
                *(*arg1 + 0x14) = 8
                i = (**arg1)()
        else if (arg1[8] != 3)
            *(*arg1 + 0x14) = 8
            i = (**arg1)()
    else if (arg1[8] != 1)
        *(*arg1 + 0x14) = 8
        i = (**arg1)()
    
    int32_t ecx_4 = arg1[0xa]
    
    if (ecx_4 == 1)
        arg1[0x1d] = 1
        int32_t eax_8 = arg1[9]
        
        if (eax_8 == 1 || eax_8 == 3)
            eax_1[1] = sub_458c20
            i = 1
            
            while (i s< arg1[8])
                int32_t edx_8 = i * 7
                i += 1
                *(arg1[0x35] + edx_8 * 0xc + 0x30) = 0
        else
            *(*arg1 + 0x14) = 0x19
            i = (**arg1)()
    else if (ecx_4 == 2)
        arg1[0x1d] = 3
        
        if (arg1[9] == 3)
            eax_1[1] = sub_458aa8
            i = sub_4589f0(arg1)
        else if (arg1[9] == 2)
            eax_1[1] = sub_458bb0
        else if (arg1[9] != 1)
            *(*arg1 + 0x14) = 0x19
            i = (**arg1)()
        else
            eax_1[1] = sub_458c40
    else if (ecx_4 == 4)
        arg1[0x1d] = 4
        
        if (arg1[9] == 5)
            eax_1[1] = sub_458c8c
            i = sub_4589f0(arg1)
        else if (arg1[9] != 4)
            *(*arg1 + 0x14) = 0x19
            i = (**arg1)()
        else
            eax_1[1] = sub_458bb0
    else if (arg1[0xa] != arg1[9])
        *(*arg1 + 0x14) = 0x19
        i = (**arg1)()
    else
        i = arg1[8]
        arg1[0x1d] = i
        eax_1[1] = sub_458bb0
    
    if (arg1[0x14] == 0)
        arg1[0x1e] = arg1[0x1d]
        return i
    
    arg1[0x1e] = 1
    return i
}
