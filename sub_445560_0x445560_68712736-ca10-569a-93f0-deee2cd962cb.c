// ============================================================
// 函数名称: sub_445560
// 虚拟地址: 0x445560
// WARP GUID: 68712736-ca10-569a-93f0-deee2cd962cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c864
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_445560(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: char eax_1 = (*(*arg1 + 0xd0))()
    char eax_1 = (*(*arg1 + 0xd0))()
    int32_t eax_2
    
    if (eax_1 != 0)
        eax_2 = sub_40c864()
    
    if (eax_1 != 0 && eax_2.b != 0)
        eax_2.b = 1
    else
        eax_2 = 0
    
    int32_t result = eax_2 & 0x7f
    *(arg2 + 0xc) = result
    return result
}
