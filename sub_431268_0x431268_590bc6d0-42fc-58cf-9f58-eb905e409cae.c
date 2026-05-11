// ============================================================
// 函数名称: sub_431268
// 虚拟地址: 0x431268
// WARP GUID: 590bc6d0-42fc-58cf-9f58-eb905e409cae
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_440ee0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_431268(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if ((arg1[8].b & 0x10) != 0)
    if ((arg1[8].b & 0x10) != 0)
        return 
    
    *(arg2 + 0xc) = 1
    sub_42c754(arg1, 0)
    int32_t eax_1 = *(arg2 + 8)
    int32_t* eax_3 = sub_440ee0(arg1)
    *(arg2 + 4)
    sub_42c754(eax_3, eax_1)
    *(arg2 + 0xc) = 0
}
