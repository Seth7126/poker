// ============================================================
// 函数名称: sub_435f97
// 虚拟地址: 0x435f97
// WARP GUID: bc7c7022-d4f8-54ff-a605-103e22788c14
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_435f97(int32_t arg1, void* arg2 @ ebp)
{
    // 第一条实际指令: char temp0 = *(arg2 + 0x6c)
    char temp0 = *(arg2 + 0x6c)
    *(arg2 + 0x6c) += arg1.b
    
    if (not(add_overflow(temp0, arg1.b)))
        jump("i%.8X")
    
    int32_t entry_ebx
    arg1.b = *(entry_ebx + arg1)
    undefined
}
