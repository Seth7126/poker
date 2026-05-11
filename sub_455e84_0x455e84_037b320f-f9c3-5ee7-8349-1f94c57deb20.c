// ============================================================
// 函数名称: sub_455e84
// 虚拟地址: 0x455e84
// WARP GUID: 037b320f-f9c3-5ee7-8349-1f94c57deb20
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_455e3c, sub_455a4c
// [被调用的父级函数]: sub_455f30, sub_455e74, sub_455f6c
// ============================================================

int32_t __convention("regparm")sub_455e84(int32_t* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1a6)
    void* esi = *(arg1 + 0x1a6)
    
    if (*(esi + 0x14) != 0)
        return 2
    
    int32_t result = (*(*(arg1 + 0x1aa) + 4))()
    
    if (result == 1)
        if (*(esi + 0x18) == 0)
            if (*(esi + 0x10) == 0)
                *(*arg1 + 0x14) = 0x22
                (**arg1)()
            
            sub_455e3c(arg1)
        else
            sub_455a4c(arg1)
            *(esi + 0x18) = 0
    else if (result == 2)
        *(esi + 0x14) = 1
        
        if (*(esi + 0x18) == 0)
            int32_t eax_9 = arg1[0x23]
            
            if (eax_9 s< arg1[0x25])
                arg1[0x25] = eax_9
        else if (*(*(arg1 + 0x1aa) + 0x54) != 0)
            *(*arg1 + 0x14) = 0x3a
            (**arg1)()
    
    return result
}
