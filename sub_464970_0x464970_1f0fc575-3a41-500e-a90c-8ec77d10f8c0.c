// ============================================================
// 函数名称: sub_464970
// 虚拟地址: 0x464970
// WARP GUID: 1f0fc575-3a41-500e-a90c-8ec77d10f8c0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_461234
// ============================================================

void* __convention("regparm")sub_464970(int32_t* arg1)
{
    // 第一条实际指令: int32_t (__convention("regparm")** eax_1)(int32_t* arg1) = (*arg1[1])()
    int32_t (__convention("regparm")** eax_1)(int32_t* arg1) = (*arg1[1])()
    *(arg1 + 0x15d) = eax_1
    *eax_1 = sub_464480
    int32_t eax_2 = arg1[0x2f]
    
    if (eax_2 u< 1)
        eax_1[1] = sub_46468c
        eax_1[2] = sub_4654ec
    else if (eax_2 == 1)
        eax_1[1] = sub_46468c
        eax_1[2] = sub_4658d0
    else if (eax_2 == 2)
        eax_1[1] = sub_4647e0
        eax_1[7] = sub_465b3c
    else
        *(*arg1 + 0x14) = 0x2f
        (**arg1)()
    
    int32_t i = 0
    void* result = &eax_1[3]
    
    do
        i += 1
        *result = 0
        *(result + 0x14) = 0
        result += 4
    while (i s< 4)
    
    return result
}
