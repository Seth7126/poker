// ============================================================
// 函数名称: sub_4583c4
// 虚拟地址: 0x4583c4
// WARP GUID: ca6458d7-ca0d-56d2-90ed-6111ec2384e6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_456790
// ============================================================

void* __convention("regparm")sub_4583c4(void* arg1)
{
    // 第一条实际指令: int32_t (__convention("regparm")** eax_1)(int32_t* arg1) = (**(arg1 + 4))()
    int32_t (__convention("regparm")** eax_1)(int32_t* arg1) = (**(arg1 + 4))()
    *(arg1 + 0x1ae) = eax_1
    *eax_1 = sub_457974
    eax_1[1] = sub_457f28
    int32_t i = 0
    void* result = &eax_1[0xe]
    
    do
        *result = 0
        *(result - 0x10) = 0
        i += 1
        result += 4
    while (i s< 4)
    
    return result
}
