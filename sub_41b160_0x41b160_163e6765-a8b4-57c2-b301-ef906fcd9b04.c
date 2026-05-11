// ============================================================
// 函数名称: sub_41b160
// 虚拟地址: 0x41b160
// WARP GUID: 163e6765-a8b4-57c2-b301-ef906fcd9b04
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41b108
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41b160(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax_2 = *(*arg1 + 0x30)
    int32_t eax_2 = *(*arg1 + 0x30)
    int32_t eax_5 = *(*arg1 + 0x44)
    int32_t __saved_ebp
    sub_41b108(&__saved_ebp)
    return (*(*arg2 + 8))(eax_5, arg1, eax_2, arg1)
}
