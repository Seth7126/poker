// ============================================================
// 函数名称: sub_431afc
// 虚拟地址: 0x431afc
// WARP GUID: 4f3a9f39-5f8e-5d5d-b232-d6f4bfef1d48
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowLongA, GetWindowLongA
// [内部子函数调用]: sub_42c754, sub_431bcc
// [被调用的父级函数]: sub_4258dc, sub_423e50, sub_42508c, sub_47d208, sub_4b2780, sub_4b2693, sub_4b2718
// ============================================================

void __convention("regparm")sub_431afc(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x174))
    if (arg2 == *(arg1 + 0x174))
        return 
    
    *(arg1 + 0x174) = arg2
    
    if (sub_431bcc(arg1) != 0)
        int32_t dwNewLong = GetWindowLongA(*(arg1 + 0x14c), 0xfffffff0) & 0xfffeffff
        
        if (arg2 != 0)
            dwNewLong |= 0x10000
        
        SetWindowLongA(*(arg1 + 0x14c), 0xfffffff0, dwNewLong)
    
    sub_42c754(arg1, 0)
}
