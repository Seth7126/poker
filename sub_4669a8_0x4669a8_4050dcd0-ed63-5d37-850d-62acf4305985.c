// ============================================================
// 函数名称: sub_4669a8
// 虚拟地址: 0x4669a8
// WARP GUID: 4050dcd0-ed63-5d37-850d-62acf4305985
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_461234
// ============================================================

void* __convention("regparm")sub_4669a8(void* arg1)
{
    // 第一条实际指令: void* (__convention("regparm")** eax_1)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))()
    void* (__convention("regparm")** eax_1)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))()
    *(arg1 + 0x161) = eax_1
    *eax_1 = sub_465e68
    int32_t i = 0
    void* result = &eax_1[0xf]
    
    do
        *result = 0
        *(result - 0x10) = 0
        *(result + 0x20) = 0
        *(result + 0x10) = 0
        i += 1
        result += 4
    while (i s< 4)
    
    return result
}
