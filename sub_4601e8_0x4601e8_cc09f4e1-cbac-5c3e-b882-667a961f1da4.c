// ============================================================
// 函数名称: sub_4601e8
// 虚拟地址: 0x4601e8
// WARP GUID: cc09f4e1-cbac-5c3e-b882-667a961f1da4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4601b8
// [被调用的父级函数]: sub_4548b8
// ============================================================

int32_t __convention("regparm")sub_4601e8(void* arg1)
{
    // 第一条实际指令: int32_t (__convention("regparm")** eax_1)(void* arg1) = (**(arg1 + 4))()
    int32_t (__convention("regparm")** eax_1)(void* arg1) = (**(arg1 + 4))()
    int32_t i = 0
    *(arg1 + 0x1aa) = eax_1
    *eax_1 = sub_4601b8
    eax_1[1] = sub_45fd34
    eax_1[2] = sub_46002c
    eax_1[3] = sub_45faf0
    
    do
        *(*(arg1 + 0x1aa) + (i << 2) + 0x10) = sub_45faf0
        i += 1
    while (i s< 0x10)
    
    void* eax_2 = *(arg1 + 0x1aa)
    *(eax_2 + 0x10) = sub_45ee70
    *(eax_2 + 0x48) = sub_45f0f4
    sub_4601b8(arg1)
    return 0
}
