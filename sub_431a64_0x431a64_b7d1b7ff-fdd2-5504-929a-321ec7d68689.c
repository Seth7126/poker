// ============================================================
// 函数名称: sub_431a64
// 虚拟地址: 0x431a64
// WARP GUID: b7d1b7ff-fdd2-5504-929a-321ec7d68689
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410580
// [被调用的父级函数]: sub_431a88
// ============================================================

int32_t __convention("regparm")sub_431a64(void* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x24)
    void* esi = *(arg1 + 0x24)
    
    if (esi == 0)
        return 0xffffffff
    
    return sub_410580(*(esi + 0x16c), arg1)
}
