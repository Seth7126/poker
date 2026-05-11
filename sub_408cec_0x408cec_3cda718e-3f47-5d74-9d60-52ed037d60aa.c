// ============================================================
// 函数名称: sub_408cec
// 虚拟地址: 0x408cec
// WARP GUID: 3cda718e-3f47-5d74-9d60-52ed037d60aa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ee0, sub_403e4c, sub_404078
// [被调用的父级函数]: sub_424ac0
// ============================================================

char** __convention("regparm")sub_408cec(char* arg1, char** arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    char* i = arg1
    void* esi_1 = sub_404078(arg1) + i
    int32_t edi = 0
    
    for (; esi_1 u> i; i = &i[1])
        void* eax_1
        eax_1.b = *i
        char edx = eax_1.b
        
        if (edx == 0xa)
            edi += 1
        else if (edx != 0xd)
            if (test_bit(data_52e118, eax_1 & 0xff))
                i = &i[1]
        else if (i[1] != 0xa)
            edi += 1
        else
            i = &i[1]
    
    if (edi == 0)
        return sub_403e4c(arg2, arg1)
    
    char* ebx = arg1
    char** result = arg2
    sub_403ee0(result, 0, esi_1 - ebx + edi)
    char* edi_2 = *arg2
    
    while (esi_1 u> ebx)
        result.b = *ebx
        char edx_2 = result.b
        
        if (edx_2 == 0xa)
            *edi_2 = 0xd
            edi_2[1] = 0xa
            edi_2 = &edi_2[2]
            ebx = &ebx[1]
        else if (edx_2 == 0xd)
            *edi_2 = 0xd
            edi_2[1] = 0xa
            edi_2 = &edi_2[2]
            ebx = &ebx[1]
            
            if (*ebx == 0xa)
                ebx = &ebx[1]
        else
            if (test_bit(data_52e118, zx.d(result.b)))
                *edi_2 = result.b
                edi_2 = &edi_2[1]
                ebx = &ebx[1]
            
            result.b = *ebx
            *edi_2 = result.b
            edi_2 = &edi_2[1]
            ebx = &ebx[1]
    
    return result
}
