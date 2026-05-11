// ============================================================
// 函数名称: sub_4654a8
// 虚拟地址: 0x4654a8
// WARP GUID: 98e79272-5480-5d24-b3f7-cd6453fb6c00
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_461234
// ============================================================

int32_t __convention("regparm")sub_4654a8(void* arg1)
{
    // 第一条实际指令: int32_t (__convention("regparm")** eax_1)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))()
    int32_t (__convention("regparm")** eax_1)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))()
    int32_t i = 0
    *(arg1 + 0x161) = eax_1
    *eax_1 = sub_464a00
    void* eax_2 = &eax_1[0x13]
    
    do
        i += 1
        *eax_2 = 0
        *(eax_2 + 0x10) = 0
        eax_2 += 4
    while (i s< 4)
    
    eax_1[0x10] = 0
    return 0
}
