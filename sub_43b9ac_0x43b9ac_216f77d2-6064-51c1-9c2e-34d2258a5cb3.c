// ============================================================
// 函数名称: sub_43b9ac
// 虚拟地址: 0x43b9ac
// WARP GUID: 216f77d2-6064-51c1-9c2e-34d2258a5cb3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4399ec, sub_43bf0c
// ============================================================

void __convention("regparm")sub_43b9ac(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x32))
    if (arg2 != *(arg1 + 0x32))
        *(arg1 + 0x32) = arg2
        (*(*arg1 + 0x38))()
}
