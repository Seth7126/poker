// ============================================================
// 函数名称: sub_490eb4
// 虚拟地址: 0x490eb4
// WARP GUID: 508e7278-e63e-549b-beb5-ec092e4fb911
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_490768
// [被调用的父级函数]: sub_519df0
// ============================================================

int32_t __convention("regparm")sub_490eb4(void** arg1, char arg2)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    
    if (arg2 != 0)
        esi = 1
    
    int32_t* eax = arg1[4]
    return sub_490768(arg1, "Play", (*(*eax + 0x30))(eax, 0, 0, esi))
}
