// ============================================================
// 函数名称: sub_426610
// 虚拟地址: 0x426610
// WARP GUID: c3a29e20-ec53-5653-88ab-f89045e89540
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CloseClipboard
// [内部子函数调用]: sub_440d6c
// [被调用的父级函数]: sub_426761, sub_4265b0, sub_426a2c, sub_4268dc, sub_426874, sub_426752, sub_4269a8
// ============================================================

void __convention("regparm")sub_426610(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 4) == 0)
    if (*(arg1 + 4) == 0)
        return 
    
    *(arg1 + 4) -= 1
    
    if (*(arg1 + 4) != 0)
        return 
    
    CloseClipboard()
    
    if (*(arg1 + 0xc) != 0)
        sub_440d6c(*(arg1 + 8))
    
    *(arg1 + 8) = 0
}
