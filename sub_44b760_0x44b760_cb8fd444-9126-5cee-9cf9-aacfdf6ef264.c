// ============================================================
// 函数名称: sub_44b760
// 虚拟地址: 0x44b760
// WARP GUID: cb8fd444-9126-5cee-9cf9-aacfdf6ef264
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InflateRect
// [内部子函数调用]: sub_44b69c, sub_418ee4
// [被调用的父级函数]: sub_44c05c
// ============================================================

RECT* __fastcallsub_44b760(int32_t arg1, RECT* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t var_10 = arg1
    int32_t var_10 = arg1
    int32_t i = arg4
    sub_418ee4(*(arg3 + 0x10), 1)
    arg2->bottom -= 1
    arg2->right -= 1
    
    while (i s> 0)
        i -= 1
        int32_t __saved_ebp
        sub_44b69c(&__saved_ebp)
        InflateRect(arg2, 0xffffffff, 0xffffffff)
    
    arg2->bottom += 1
    arg2->right += 1
    return arg2
}
