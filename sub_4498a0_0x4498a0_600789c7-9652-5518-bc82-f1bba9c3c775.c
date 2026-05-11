// ============================================================
// 函数名称: sub_4498a0
// 虚拟地址: 0x4498a0
// WARP GUID: 600789c7-9652-5518-bc82-f1bba9c3c775
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b904, sub_4030d0
// [被调用的父级函数]: sub_4480dd, sub_4408d0, sub_435eac, sub_448590
// ============================================================

void __convention("regparm")sub_4498a0(void* const arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x78))
    if (arg2 == *(arg1 + 0x78))
        return 
    
    *(arg1 + 0x78) = arg2
    
    if (arg2 == 0)
        sub_4030d0(*(arg1 + 0x74))
        *(arg1 + 0x74) = 0
    else
        void* eax_2 = (*(data_52e978 + 0x2c))()
        *(arg1 + 0x74) = eax_2
        sub_42b904(eax_2, *(arg1 + 0x4c))
}
