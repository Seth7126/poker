// ============================================================
// 函数名称: sub_457900
// 虚拟地址: 0x457900
// WARP GUID: 30ea4371-be94-5f36-a1bd-e8e1182e2fb8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_456790
// ============================================================

int32_t* __convention("regparm")sub_457900(void* arg1)
{
    // 第一条实际指令: int32_t (__convention("regparm")** eax_1)(int32_t* arg1) = (**(arg1 + 4))()
    int32_t (__convention("regparm")** eax_1)(int32_t* arg1) = (**(arg1 + 4))()
    *(arg1 + 0x1ae) = eax_1
    *eax_1 = sub_456ba8
    int32_t i = 0
    void* edx_2 = &eax_1[0xb]
    
    do
        i += 1
        *edx_2 = 0
        edx_2 += 4
    while (i s< 4)
    
    *(arg1 + 0x20)
    int32_t* j = (**(arg1 + 4))()
    *(arg1 + 0x9c) = j
    int32_t* j_1 = j
    
    for (int32_t i_1 = 0; i_1 s< *(arg1 + 0x20); i_1 += 1)
        for (j = nullptr; j s< 0x40; j += 1)
            *j_1 = 0xffffffff
            j_1 = &j_1[1]
    
    return j
}
