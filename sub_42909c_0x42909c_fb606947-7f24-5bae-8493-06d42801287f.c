// ============================================================
// 函数名称: sub_42909c
// 虚拟地址: 0x42909c
// WARP GUID: fb606947-7f24-5bae-8493-06d42801287f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_42909c(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        arg1.w = 0xfff3
    else
        arg1.w = *(*(arg1 + 0x38) + 0x6a)
    
    return arg1
}
