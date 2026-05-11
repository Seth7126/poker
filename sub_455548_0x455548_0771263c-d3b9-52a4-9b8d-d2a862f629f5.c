// ============================================================
// 函数名称: sub_455548
// 虚拟地址: 0x455548
// WARP GUID: 0771263c-d3b9-52a4-9b8d-d2a862f629f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4553ec, sub_4533f4
// [被调用的父级函数]: sub_45591c
// ============================================================

int32_t __fastcallsub_455548(int32_t arg1, int32_t* arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t edi_1 = arg1 + arg5
    int32_t edi_1 = arg1 + arg5
    
    if (edi_1 u> arg2[1] || arg5 u> arg2[3] || *arg2 == 0)
        *(*arg3 + 0x14) = 0x14
        (**arg3)()
    
    int32_t eax_3 = arg2[6]
    
    if (eax_3 u> arg1 || edi_1 u> eax_3 + arg2[4])
        if (arg2[0xa] == 0)
            *(*arg3 + 0x14) = 0x44
            (**arg3)()
        
        if (arg2[9] != 0)
            sub_4553ec(1, arg2)
            arg2[9] = 0
        
        if (arg1 u<= arg2[6])
            int32_t eax_9 = edi_1 - arg2[4]
            
            if (eax_9 s< 0)
                eax_9 = 0
            
            arg2[6] = eax_9
        else
            arg2[6] = arg1
        
        sub_4553ec(0, arg2)
    
    int32_t eax_11 = arg2[7]
    
    if (edi_1 u> eax_11)
        int32_t esi_1
        
        if (eax_11 u>= arg1)
            esi_1 = arg2[7]
        else
            if (arg4 != 0)
                *(*arg3 + 0x14) = 0x14
                (**arg3)()
            
            esi_1 = arg1
        
        if (arg4 != 0)
            arg2[7] = edi_1
        
        if (arg2[8] != 0)
            int32_t eax_13 = arg2[2]
            int32_t eax_14 = arg2[6]
            
            for (int32_t i = esi_1 - eax_14; edi_1 - eax_14 u> i; i += 1)
                sub_4533f4(*(*arg2 + (i << 2)), 0, eax_13)
        else if (arg4 == 0)
            *(*arg3 + 0x14) = 0x14
            (**arg3)()
    
    if (arg4 != 0)
        arg2[9] = 1
    
    return ((arg1 - arg2[6]) << 2) + *arg2
}
