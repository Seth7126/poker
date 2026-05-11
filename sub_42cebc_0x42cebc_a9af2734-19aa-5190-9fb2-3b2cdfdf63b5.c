// ============================================================
// 函数名称: sub_42cebc
// 虚拟地址: 0x42cebc
// WARP GUID: a9af2734-19aa-5190-9fb2-3b2cdfdf63b5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ce08
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42cebc(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: (*(*arg1 - 0x10))()
    (*(*arg1 - 0x10))()
    int32_t ecx_1
    ecx_1.b = 1
    return sub_42ce08(arg1, arg2, ecx_1)
}
