// ============================================================
// 函数名称: sub_44c258
// 虚拟地址: 0x44c258
// WARP GUID: 0c8256ed-ea07-5caa-a4f4-6166fe7c332e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InflateRect
// [内部子函数调用]: sub_42dc78
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_44c258(void* arg1, RECT* arg2)
{
    // 第一条实际指令: int32_t eax_2 = neg.d(*(arg1 + 0x200))
    int32_t eax_2 = neg.d(*(arg1 + 0x200))
    *(arg1 + 0x200)
    InflateRect(arg2, eax_2, eax_2)
    int32_t eax_3 = 0
    
    if (*(arg1 + 0x1fa) != 0)
        eax_3 = *(arg1 + 0x1fc)
    
    if (*(arg1 + 0x1f9) != 0)
        eax_3 += *(arg1 + 0x1fc)
    
    int32_t edx_4 = neg.d(eax_3)
    return InflateRect(arg2, edx_4, edx_4)
}
