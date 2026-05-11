// ============================================================
// 函数名称: sub_416494
// 虚拟地址: 0x416494
// WARP GUID: acd068ff-3ae6-5661-8cb2-bcf4bab11ff4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032f4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_416494(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x1c) == 0)
    if (*(arg1 + 0x1c) == 0)
        return 0x8000ffff
    
    return (*(**(arg1 + 0x1c) + 0x1c))()
}
