// ============================================================
// 函数名称: sub_4563ec
// 虚拟地址: 0x4563ec
// WARP GUID: f7a045ef-6f5e-5f66-97a6-61095ac2ba03
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453ff8
// ============================================================

int32_t __convention("regparm")sub_4563ec(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    
    if ((eax == 0xcd || eax == 0xce) && arg1[0xf] != 0)
        (*(*(arg1 + 0x196) + 4))()
        arg1[4] = 0xd0
    else if (arg1[4] != 0xd0)
        void* eax_2 = *arg1
        *(eax_2 + 0x14) = 0x12
        *(eax_2 + 0x18) = arg1[4]
        (**arg1)()
    
    while (true)
        if (arg1[0x23] s> arg1[0x25] || *(*(arg1 + 0x1a6) + 0x14) != 0)
            arg1[4] = 0xcf
            return 1
        
        if ((**(arg1 + 0x1a6))() == 0)
            break
        
        continue
    
    return 0
}
