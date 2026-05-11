// ============================================================
// 函数名称: sub_429218
// 虚拟地址: 0x429218
// WARP GUID: 24a34d58-5ebd-57b2-9465-80e7ab77d770
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42923c
// ============================================================

int32_t __convention("regparm")sub_429218(int32_t arg1, int32_t arg2) __pure
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(arg1)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(arg2)
    
    if ((eax_1 ^ edx) - edx s>= (eax_5 ^ edx_1) - edx_1)
        return arg2
    
    return arg1
}
