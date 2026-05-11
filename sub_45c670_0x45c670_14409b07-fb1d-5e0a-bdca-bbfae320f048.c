// ============================================================
// 函数名称: sub_45c670
// 虚拟地址: 0x45c670
// WARP GUID: 14409b07-fb1d-5e0a-bdca-bbfae320f048
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45c8d0
// ============================================================

void __convention("regparm")sub_45c670(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x1a2)
    void* ebx = *(arg1 + 0x1a2)
    
    if (arg2 u< 1)
        if (arg1[0x14] == 0)
            *(ebx + 4) = (*(arg1 + 0x1b6))[1]
        else
            *(ebx + 4) = sub_45c718
            
            if (*(ebx + 0xc) == 0)
                *(ebx + 8)
                *(ebx + 0xc) = (*(arg1[1] + 0x1c))(1, *(ebx + 0x10))
    else if (arg2 == 2)
        if (*(ebx + 8) == 0)
            *(*arg1 + 0x14) = 4
            (**arg1)()
        
        *(ebx + 4) = sub_45c838
    else if (arg2 == 3)
        if (*(ebx + 8) == 0)
            *(*arg1 + 0x14) = 4
            (**arg1)()
        
        *(ebx + 4) = sub_45c794
    else
        *(*arg1 + 0x14) = 4
        (**arg1)()
    
    *(ebx + 0x18) = 0
    *(ebx + 0x14) = 0
}
