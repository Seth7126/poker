// ============================================================
// 函数名称: sub_445760
// 虚拟地址: 0x445760
// WARP GUID: 9064b417-8351-537c-b698-c2cd3ae3c5fb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetFocus
// [内部子函数调用]: sub_431df4
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_445760(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 8) != 0)
    if (*(arg2 + 8) != 0)
        return SetFocus(*(arg2 + 4))
    
    int32_t ecx = *(arg2 + 4)
    return sub_431df4(neg.d(sbb.d(ecx, ecx, ecx u< 1)), *(arg1 + 0x208), 1)
}
