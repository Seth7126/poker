// ============================================================
// 函数名称: sub_46390c
// 虚拟地址: 0x46390c
// WARP GUID: 375837e8-991e-51f5-8ca2-6821e60ab942
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_461234
// ============================================================

int32_t __convention("regparm")sub_46390c(int32_t* arg1)
{
    // 第一条实际指令: int32_t (** eax_1)() = (*arg1[1])()
    int32_t (** eax_1)() = (*arg1[1])()
    *(arg1 + 0x155) = eax_1
    *eax_1 = sub_463908
    int32_t eax_2 = arg1[9]
    int32_t eax_3 = eax_2 - 1
    
    if (eax_2 != 1)
        int32_t eax_4 = eax_3 - 1
        eax_3 = eax_4 - 2
        
        if (eax_4 u>= 2)
            int32_t temp2_1 = eax_3
            eax_3 -= 2
            
            if (temp2_1 u< 2)
                if (arg1[8] != 4)
                    *(*arg1 + 0x14) = 7
                    eax_3 = (**arg1)()
            else if (arg1[8] s< 1)
                *(*arg1 + 0x14) = 7
                eax_3 = (**arg1)()
        else if (arg1[8] != 3)
            *(*arg1 + 0x14) = 7
            eax_3 = (**arg1)()
    else if (arg1[8] != 1)
        *(*arg1 + 0x14) = 7
        eax_3 = (**arg1)()
    
    switch (arg1[0xe])
        case 1
            if (arg1[0xd] != 1)
                *(*arg1 + 0x14) = 8
                eax_3 = (**arg1)()
            
            if (arg1[9] == 1)
                eax_1[1] = sub_463848
                return eax_3
            
            if (arg1[9] == 2)
                *eax_1 = sub_4634d0
                eax_1[1] = sub_463678
                return eax_3
            
            if (arg1[9] != 3)
                *(*arg1 + 0x14) = 0x19
                return (**arg1)()
            
            eax_1[1] = sub_463848
            return eax_3
        case 2
            if (arg1[0xd] != 3)
                *(*arg1 + 0x14) = 8
                eax_3 = (**arg1)()
            
            if (arg1[9] != 2)
                *(*arg1 + 0x14) = 0x19
                return (**arg1)()
            
            eax_1[1] = sub_463894
            return eax_3
        case 3
            if (arg1[0xd] != 3)
                *(*arg1 + 0x14) = 8
                eax_3 = (**arg1)()
            
            if (arg1[9] == 2)
                *eax_1 = sub_4634d0
                eax_1[1] = sub_463570
                return eax_3
            
            if (arg1[9] != 3)
                *(*arg1 + 0x14) = 0x19
                return (**arg1)()
            
            eax_1[1] = sub_463894
            return eax_3
        case 4
            if (arg1[0xd] != 4)
                *(*arg1 + 0x14) = 8
                eax_3 = (**arg1)()
            
            if (arg1[9] != 4)
                *(*arg1 + 0x14) = 0x19
                return (**arg1)()
            
            eax_1[1] = sub_463894
            return eax_3
        case 5
            if (arg1[0xd] != 4)
                *(*arg1 + 0x14) = 8
                eax_3 = (**arg1)()
            
            if (arg1[9] == 4)
                *eax_1 = sub_4634d0
                eax_1[1] = sub_463704
                return eax_3
            
            if (arg1[9] != 5)
                *(*arg1 + 0x14) = 0x19
                return (**arg1)()
            
            eax_1[1] = sub_463894
            return eax_3
    
    int32_t eax_25
    
    if (arg1[0xe] == arg1[9])
        eax_25 = arg1[0xd]
    
    if (arg1[0xe] != arg1[9] || eax_25 != arg1[8])
        *(*arg1 + 0x14) = 0x19
        eax_25 = (**arg1)()
    
    eax_1[1] = sub_463894
    return eax_25
}
