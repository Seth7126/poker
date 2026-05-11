// ============================================================
// 函数名称: sub_43b53c
// 虚拟地址: 0x43b53c
// WARP GUID: 3c1c44f4-0f3b-513a-9686-6cad475c9d3c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43bed0
// [被调用的父级函数]: sub_43b5b8, sub_439b68, sub_43b417
// ============================================================

int32_t __convention("regparm")sub_43b53c(void* arg1)
{
    // 第一条实际指令: void* i
    void* i
    
    for (i = *(arg1 + 0x58); i != 0; i = *(i + 0x58))
        if (*(i + 0x70) != 0)
            break
    
    if (i != 0)
        return *(i + 0x70)
    
    void* eax = sub_43bed0(arg1)
    
    if (eax == 0)
        return 0
    
    return *(eax + 0x3c)
}
