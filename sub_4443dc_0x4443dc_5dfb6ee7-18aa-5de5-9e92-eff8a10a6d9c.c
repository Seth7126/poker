// ============================================================
// 函数名称: sub_4443dc
// 虚拟地址: 0x4443dc
// WARP GUID: 5dfb6ee7-18aa-5de5-9e92-eff8a10a6d9c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e92c, sub_441bb0
// [被调用的父级函数]: 无
// ============================================================

void** __convention("regparm")sub_4443dc(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    void** result = sub_441bb0(ecx, arg2)
    
    if (arg1[9] == 0 && arg1[0x59] == 0)
        result = *(data_5317d8 + 0x24)
        arg2[7] = result
        arg2[1] &= 0xbffcffff
    
    arg2[9] = 8
    
    if ((arg1[8].b & 0x10) == 0 || arg1[9] != 0)
        result.b = arg1[0x86].b
        
        if (result.b - 1 u< 2)
            arg2[3] = 0x80000000
            arg2[4] = 0x80000000
        
        void** result_1
        result_1.b = arg1[0x84].b
        var_10.b = *(arg1 + 0x211)
        
        if (*(arg1 + 0x217) == 1)
            char eax_2 = var_10.b
            char temp2_1
            
            if (eax_2 != 0)
                temp2_1 = eax_2
            
            if (eax_2 == 0 || temp2_1 == 3)
                var_10.b = 2
        
        result.b = var_10.b
        
        switch (result)
            case nullptr
                if (arg1[9] == 0 && arg1[0x59] == 0)
                    arg2[1] |= 0x80000000
                
                result_1.b = 0
            case 1, 4
                arg2[1] |= 0xc00000
            case 2, 5
                arg2[1] |= 0xc40000
                result.b = arg1[0x86].b
                char temp4_1 = result.b
                result.b -= 1
                char temp5_1
                
                if (temp4_1 != 1)
                    temp5_1 = result.b
                    result.b -= 2
                
                if (temp4_1 == 1 || temp5_1 == 2)
                    arg2[5] = 0x80000000
                    arg2[6] = 0x80000000
            case 3
                arg2[1] = arg2[1] | 0x80000000 | 0xc00000
                arg2[2] = 0x101
                sub_42e92c(arg1, &arg2[2])
                
                if (*data_53040c == 0)
                    arg2[1] = arg2[1] | &__dos_header | 0x80
                
                result.b = 9
                result.b = 9 & result_1.b
                result_1 = result
                arg2[9] = 0x2808
        
        result.b = var_10.b
        result.b -= 4
        char temp1_1 = result.b
        result.b -= 2
        
        if (temp1_1 u< 2)
            arg2[2] = 0x80
            sub_42e92c(arg1, &arg2[2])
            result.b = 1
            result.b = 1 & result_1.b
            result_1 = result
        
        result.b = var_10.b
        char temp3_1 = result.b
        result.b -= 3
        
        if (temp3_1 u>= 3)
            *(arg1 + 0x213) = 0
        else
            if (*(arg1 + 0x217) != 1 || (result_1.b & 1) != 0)
                if ((result_1.b & 2) != 0)
                    arg2[1] |= 0x20000
                
                if ((result_1.b & 4) != 0)
                    arg2[1] |= 0x10000
            
            result.b = *(arg1 + 0x213)
            
            if (result.b == 1)
                arg2[1] |= 0x20000000
            else if (result.b == 2)
                arg2[1] |= 0x1000000
        
        if ((result_1.b & 1) != 0)
            arg2[1] |= 0x80000
        
        if ((result_1.b & 8) != 0)
            arg2[2] |= 0x400
        
        if ((*(arg1 + 0x21) & 2) != 0)
            arg2[1] &= 0xff3fffff
        
        if (*(arg1 + 0x217) == 1)
            result = DefMDIChildProcA
            arg2[0xa] = DefMDIChildProcA
    else
        arg2[1] |= 0xcf0000
    
    return result
}
