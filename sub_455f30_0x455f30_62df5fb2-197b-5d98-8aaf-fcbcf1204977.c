// ============================================================
// 函数名称: sub_455f30
// 虚拟地址: 0x455f30
// WARP GUID: 62df5fb2-197b-5d98-8aaf-fcbcf1204977
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_455f6c
// ============================================================

int32_t __convention("regparm")sub_455f30(int32_t* arg1)
{
    // 第一条实际指令: int32_t (__convention("regparm")** eax)(int32_t* arg1) = *(arg1 + 0x1a6)
    int32_t (__convention("regparm")** eax)(int32_t* arg1) = *(arg1 + 0x1a6)
    *eax = sub_455e84
    eax[4] = 0
    eax[5] = 0
    eax[6] = 1
    (*(*arg1 + 0x10))()
    int32_t result = (**(arg1 + 0x1aa))()
    arg1[0x27] = 0
    return result
}
