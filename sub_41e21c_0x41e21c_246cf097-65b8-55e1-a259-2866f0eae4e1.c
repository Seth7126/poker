// ============================================================
// 函数名称: sub_41e21c
// 虚拟地址: 0x41e21c
// WARP GUID: 246cf097-65b8-55e1-a259-2866f0eae4e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419acc, sub_41842c, sub_41e04c, sub_41e100
// [被调用的父级函数]: sub_41e3e0, sub_41932c
// ============================================================

int32_t __convention("regparm")sub_41e21c(int32_t* arg1)
{
    // 第一条实际指令: uint32_t eax = arg1[0xb]
    uint32_t eax = arg1[0xb]
    COLORREF eax_3
    
    if (eax != 0x20000000)
        eax_3 = sub_41842c(eax)
    else if (sub_41e100(arg1) == 0)
        int32_t eax_6 = (*(*arg1 + 0x20))() - 1
        eax_3 = sub_419acc(sub_41e04c(arg1), 0, eax_6)
    else
        eax_3 = 0xffffff
    
    return eax_3 | 0x2000000
}
