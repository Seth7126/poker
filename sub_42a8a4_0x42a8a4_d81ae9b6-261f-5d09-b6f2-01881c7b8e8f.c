// ============================================================
// 函数名称: sub_42a8a4
// 虚拟地址: 0x42a8a4
// WARP GUID: d81ae9b6-261f-5d09-b6f2-01881c7b8e8f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4165c4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42a8a4(void* arg1)
{
    // 第一条实际指令: if (sub_4165c4() == 0 || *(*(arg1 + 0x18) + 0x108) != *(*(arg1 + 0x10) + 0x30))
    if (sub_4165c4() == 0 || *(*(arg1 + 0x18) + 0x108) != *(*(arg1 + 0x10) + 0x30))
        return 0
    
    int32_t result
    result.b = 1
    return result
}
