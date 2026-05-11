// ============================================================
// 函数名称: sub_456b70
// 虚拟地址: 0x456b70
// WARP GUID: 2a02a87b-1ddd-51d1-980d-cb681dd92299
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_456790
// [被调用的父级函数]: sub_4560cc
// ============================================================

int32_t __convention("regparm")sub_456b70(int32_t* arg1)
{
    // 第一条实际指令: void* (__convention("regparm")** eax_1)(int32_t* arg1) = (*arg1[1])()
    void* (__convention("regparm")** eax_1)(int32_t* arg1) = (*arg1[1])()
    *(arg1 + 0x196) = eax_1
    *eax_1 = sub_4569a0
    eax_1[1] = sub_456ae8
    eax_1[2] = 0
    return sub_456790(arg1)
}
