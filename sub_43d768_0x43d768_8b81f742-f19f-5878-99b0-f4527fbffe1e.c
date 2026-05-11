// ============================================================
// 函数名称: sub_43d768
// 虚拟地址: 0x43d768
// WARP GUID: 8b81f742-f19f-5878-99b0-f4527fbffe1e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_428990, sub_43d744
// [被调用的父级函数]: sub_43d2b0, sub_43d758, sub_43caf4, sub_443850
// ============================================================

void __convention("regparm")sub_43d768(HANDLE arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if (*(ebx + 0x35) == 0)
        return 
    
    arg1 = sub_428990(ebx[0xb])
    
    if (arg1 != 0)
        sub_43d744(ebx, *(arg1 + 0x4f))
        *(ebx + 0x35) = 1
}
