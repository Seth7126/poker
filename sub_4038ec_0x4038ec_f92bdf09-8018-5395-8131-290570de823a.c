// ============================================================
// 函数名称: sub_4038ec
// 虚拟地址: 0x4038ec
// WARP GUID: f92bdf09-8018-5395-8131-290570de823a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4038e0
// [被调用的父级函数]: 无
// ============================================================

voidsub_4038ec(int32_t* arg1) __noreturn
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    
    if (eax s> 0xc0000092)
        if (eax s> 0xc0000096)
            if (eax == 0xc00000fd)
                eax.b = 0xca
            else if (eax == 0xc000013a)
                eax.b = 0xd9
            else
                eax.b = 0xff
        else if (eax == 0xc0000096)
            eax.b = 0xda
        else if (eax == 0xc0000093)
            eax.b = 0xce
        else if (eax == 0xc0000094)
            eax.b = 0xc8
        else if (eax == 0xc0000095)
            eax.b = 0xd7
        else
            eax.b = 0xff
    else if (eax == 0xc0000092)
        eax.b = 0xcf
    else if (eax s> 0xc000008e)
        int32_t eax_1 = eax + 0x3fffff71
        
        if (eax_1 u< 2)
            eax.b = 0xcf
        else if (eax_1 == 2)
            eax.b = 0xcd
        else
            eax.b = 0xff
    else if (eax == 0xc000008e)
        eax.b = 0xc8
    else if (eax == 0xc0000005)
        eax.b = 0xd8
    else if (eax == 0xc000008c)
        eax.b = 0xc9
    else if (eax == 0xc000008d)
        eax.b = 0xce
    else
        eax.b = 0xff
    
    arg1[3]
    sub_4038e0()
    noreturn
}
