// ============================================================
// 函数名称: sub_42e5e4
// 虚拟地址: 0x42e5e4
// WARP GUID: 7eefbdd4-3725-5726-aa65-2036859d0cc2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_444990, sub_4449fc
// ============================================================

int32_t __convention("regparm")sub_42e5e4(int32_t arg1, void* arg2)
{
    // 第一条实际指令: while (arg2 != 0)
    for (; arg2 != 0; arg2 = *(arg2 + 0x24))
        if (arg1 == arg2)
            break
    
    arg1.b = arg2 != 0
    return arg1
}
