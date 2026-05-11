// ============================================================
// 函数名称: sub_45acb4
// 虚拟地址: 0x45acb4
// WARP GUID: 6687d434-59f2-568b-bf4b-e23d7de7fb3b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45abfc, sub_4533f4
// [被调用的父级函数]: sub_45addc
// ============================================================

int32_t __convention("regparm")sub_45acb4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    void* ebx = *(arg1 + 0x1be)
    int32_t result = *(ebx + 0x18)
    int32_t result_1 = result
    
    if (arg1[0x15] != 0)
        arg1[0x15] = 2
    
    if (arg2 == 0)
        if (arg1[0x15] != 2)
            *(ebx + 4) = sub_45a82c
        else
            *(ebx + 4) = sub_45a8f8
        
        *(ebx + 8) = sub_45acb0
        int32_t edi_1 = arg1[0x20]
        
        if (edi_1 s< 1)
            void* eax = *arg1
            *(eax + 0x14) = 0x37
            *(eax + 0x18) = 1
            result = (**arg1)(result_1)
        
        if (edi_1 s> 0x100)
            void* eax_2 = *arg1
            *(eax_2 + 0x14) = 0x38
            *(eax_2 + 0x18) = 0x100
            result = (**arg1)(result_1)
        
        if (arg1[0x15] == 2)
            int32_t edi_3 = arg1[0x1b] * 2
            
            if (*(ebx + 0x20) == 0)
                *(ebx + 0x20) = (*(arg1[1] + 4))(result_1)
            
            result = sub_4533f4(*(ebx + 0x20), 0, edi_3 * 3 + 0xc)
            
            if (*(ebx + 0x28) == 0)
                result = sub_45abfc(arg1)
            
            *(ebx + 0x24) = 0
    else
        *(ebx + 4) = sub_459bf4
        *(ebx + 8) = sub_45ac8c
        *(ebx + 0x1c) = 1
    
    if (*(ebx + 0x1c) != 0)
        int32_t i = 0
        int32_t* result_2 = result_1
        
        do
            result = sub_4533f4(*result_2, 0, 0x1000)
            i += 1
            result_2 = &result_2[1]
        while (i s< 0x20)
        
        *(ebx + 0x1c) = 0
    
    return result
}
