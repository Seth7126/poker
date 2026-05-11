// ============================================================
// 函数名称: sub_431310
// 虚拟地址: 0x431310
// WARP GUID: d3d45f4d-b37d-5c86-bc8d-59c41fe0dfa2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_440ee0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_431310(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if ((arg1[8].b & 0x10) != 0 || *(arg2 + 4) == 0x20)
    if ((arg1[8].b & 0x10) != 0 || *(arg2 + 4) == 0x20)
        return 
    
    int32_t eax = *(arg2 + 8)
    int32_t* eax_2 = sub_440ee0(arg1)
    *(arg2 + 4)
    sub_42c754(eax_2, eax)
    *(arg2 + 0xc) = 0
}
