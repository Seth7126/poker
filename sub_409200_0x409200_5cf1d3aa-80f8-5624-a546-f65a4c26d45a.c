// ============================================================
// 函数名称: sub_409200
// 虚拟地址: 0x409200
// WARP GUID: 5cf1d3aa-80f8-5624-a546-f65a4c26d45a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_404280, sub_404078
// [被调用的父级函数]: sub_4b44d0
// ============================================================

char** __convention("regparm")sub_409200(char* arg1, char** arg2)
{
    // 第一条实际指令: if (sub_404078(arg1) s>= 2 && arg1[1] == 0x3a)
    if (sub_404078(arg1) s>= 2 && arg1[1] == 0x3a)
        return sub_404280(2, 1, arg1, arg2)
    
    if (sub_404078(arg1) s< 2 || *arg1 != 0x5c || arg1[1] != 0x5c)
        sub_403df8(arg2)
        return arg2
    
    int32_t edi_1 = 0
    void* i = 3
    
    while (i s< sub_404078(arg1))
        if (edi_1 s>= 2)
            break
        
        if (*(arg1 + i - 1) == 0x5c)
            edi_1 += 1
        
        if (edi_1 s< 2)
            i += 1
    
    if (*(arg1 + i - 1) == 0x5c)
        i -= 1
    
    return sub_404280(i, 1, arg1, arg2)
}
