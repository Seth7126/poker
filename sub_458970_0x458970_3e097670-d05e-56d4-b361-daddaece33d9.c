// ============================================================
// 函数名称: sub_458970
// 虚拟地址: 0x458970
// WARP GUID: 3e097670-d05e-56d4-b361-daddaece33d9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_458404
// [被调用的父级函数]: sub_456790
// ============================================================

int32_t __convention("regparm")sub_458970(void* arg1)
{
    // 第一条实际指令: int32_t (__convention("regparm")** eax_1)(void* arg1) = (**(arg1 + 4))()
    int32_t (__convention("regparm")** eax_1)(void* arg1) = (**(arg1 + 4))()
    *(arg1 + 0x1b6) = eax_1
    *eax_1 = sub_4584bc
    eax_1[2] = 0
    eax_1[0xa] = *(arg1 + 0x6c) * *(arg1 + 0x74)
    
    if (*(arg1 + 0x12a) != 2)
        eax_1[1] = sub_458588
        eax_1[3] = sub_4585c0
        eax_1[8] = 0
    else
        eax_1[1] = sub_4584d0
        eax_1[3] = sub_458738
        eax_1[0xa]
        eax_1[8] = (*(*(arg1 + 4) + 4))()
    
    return sub_458404(arg1)
}
