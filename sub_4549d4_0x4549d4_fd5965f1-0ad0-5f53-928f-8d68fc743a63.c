// ============================================================
// 函数名称: sub_4549d4
// 虚拟地址: 0x4549d4
// WARP GUID: fd5965f1-0ad0-5f53-928f-8d68fc743a63
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_454c28
// ============================================================

int32_t __convention("regparm")sub_4549d4(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[8]
    int32_t eax = arg1[8]
    
    if (eax == 1)
        arg1[9] = 1
        arg1[0xa] = 1
    else if (eax == 3)
        if (arg1[0x45] != 0)
            arg1[9] = 3
        else if (*(arg1 + 0x11d) == 0)
            int32_t* ecx_2 = arg1[0x35]
            int32_t eax_6 = *ecx_2
            int32_t edx_3 = ecx_2[0x15]
            int32_t ecx_3 = ecx_2[0x2a]
            
            if (eax_6 == 1 && edx_3 == 2 && ecx_3 == 3)
                arg1[9] = 3
            else if (eax_6 != 0x52 || edx_3 != 0x47 || ecx_3 != 0x42)
                int32_t* esi_2 = *arg1 + 0x18
                *esi_2 = eax_6
                esi_2[1] = edx_3
                esi_2[2] = ecx_3
                *(*arg1 + 0x14) = 0x6b
                (*(*arg1 + 4))()
                arg1[9] = 3
            else
                arg1[9] = 2
        else
            char temp3_1 = *(arg1 + 0x121)
            
            if (temp3_1 u< 1)
                arg1[9] = 2
            else if (temp3_1 == 1)
                arg1[9] = 3
            else
                void* eax_4 = *arg1
                *(eax_4 + 0x14) = 0x6e
                int32_t edx_1
                edx_1.b = *(arg1 + 0x121)
                *(eax_4 + 0x18) = edx_1
                (*(*arg1 + 4))()
                arg1[9] = 3
        
        arg1[0xa] = 2
    else if (eax == 4)
        if (*(arg1 + 0x11d) == 0)
            arg1[9] = 4
        else
            char edx = *(arg1 + 0x121)
            
            if (edx u< 1)
                arg1[9] = 4
            else if (edx == 2)
                arg1[9] = 5
            else
                void* eax_9 = *arg1
                *(eax_9 + 0x14) = 0x6e
                int32_t edx_5
                edx_5.b = *(arg1 + 0x121)
                *(eax_9 + 0x18) = edx_5
                (*(*arg1 + 4))()
                arg1[9] = 5
        
        arg1[0xa] = 4
    else
        arg1[9] = 0
        arg1[0xa] = 0
    
    arg1[0xb] = 1
    arg1[0xc] = 1
    arg1[0xd] = 0
    arg1[0xe] = 0x3ff00000
    arg1[0xf] = 0
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 1
    arg1[0x13] = 1
    arg1[0x14] = 0
    arg1[0x15] = 2
    arg1[0x16] = 1
    arg1[0x17] = 0x100
    arg1[0x21] = 0
    arg1[0x18] = 0
    arg1[0x19] = 0
    arg1[0x1a] = 0
    return 0
}
