// ============================================================
// 函数名称: sub_436d90
// 虚拟地址: 0x436d90
// WARP GUID: 13694e7f-2559-5d5a-b042-65337bb09e46
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404188, sub_436aac, sub_41627c
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_436d90(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: sub_404188(arg1[2], arg1[0x15])
    sub_404188(arg1[2], arg1[0x15])
    void* ebx_1
    bool z
    
    if (z)
        ebx_1 = arg1[1]
    
    char eax_1
    
    if (z && (ebx_1 == 0 || (*(ebx_1 + 0x20) & 1) == 0))
        eax_1 = 1
    else
        eax_1 = 0
    
    void* result = sub_41627c(arg1, arg2)
    
    if (eax_1 != 0)
        result = arg1[0x10]
        
        if (*(result + 8) == 0)
            return sub_436aac(arg1, arg2)
    
    return result
}
