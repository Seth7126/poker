// ============================================================
// 函数名称: sub_4490e8
// 虚拟地址: 0x4490e8
// WARP GUID: 2214a645-0b22-50d3-8a31-a0699bfeb145
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_449ec0
// [被调用的父级函数]: sub_449184, sub_447da8
// ============================================================

int32_t __convention("regparm")sub_4490e8(BOOL arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x74)
    int32_t* esi = *(arg1 + 0x74)
    
    if (esi != 0 && (*(*esi + 0xc4))() != 0)
        sub_449ec0(arg1)
    
    return 0
}
