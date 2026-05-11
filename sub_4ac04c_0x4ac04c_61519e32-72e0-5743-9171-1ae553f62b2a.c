// ============================================================
// 函数名称: sub_4ac04c
// 虚拟地址: 0x4ac04c
// WARP GUID: 61519e32-72e0-5743-9171-1ae553f62b2a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ac110
// [被调用的父级函数]: sub_4abbb0, sub_4abda8
// ============================================================

int32_t __convention("regparm")sub_4ac04c(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 8) == 0 && *(arg1 + 0x14) != 0)
    if (*(arg1 + 8) == 0 && *(arg1 + 0x14) != 0)
        int32_t edx
        edx.b = 1
        *(arg1 + 8) = sub_4ac110(0x4aa1a8, edx, arg1)
    
    return *(arg1 + 8)
}
