// ============================================================
// 函数名称: sub_4b5228
// 虚拟地址: 0x4b5228
// WARP GUID: 40924c83-569d-5598-8ce6-294ab2401dd7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_425bf8, sub_4b4788
// [被调用的父级函数]: sub_4b4de4, sub_4b47c8, sub_4b5214
// ============================================================

int32_t __convention("regparm")sub_4b5228(void* arg1)
{
    // 第一条实际指令: int32_t esi = sub_4b4788(*(arg1 + 0x58))
    int32_t esi = sub_4b4788(*(arg1 + 0x58))
    
    if (*(arg1 + 0x26c) == 1 && esi s< (*(**(arg1 + 0x250) + 0x20))() + 1)
        esi = (*(**(arg1 + 0x250) + 0x20))() + 1
    
    return sub_425bf8(arg1, esi)
}
