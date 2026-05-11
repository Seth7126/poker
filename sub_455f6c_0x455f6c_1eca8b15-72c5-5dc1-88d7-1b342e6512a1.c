// ============================================================
// 函数名称: sub_455f6c
// 虚拟地址: 0x455f6c
// WARP GUID: 1eca8b15-72c5-5dc1-88d7-1b342e6512a1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4548b8
// ============================================================

int32_t (__convention("regparm")** __convention("regparm")sub_455f6c(void* arg1))(int32_t* arg1)
{
    // 第一条实际指令: int32_t (__convention("regparm")** result)(int32_t* arg1) = (**(arg1 + 4))()
    int32_t (__convention("regparm")** result)(int32_t* arg1) = (**(arg1 + 4))()
    *(arg1 + 0x1a6) = result
    *result = sub_455e84
    result[1] = sub_455f30
    result[2] = sub_455e3c
    result[3] = sub_455e74
    result[4] = 0
    result[5] = 0
    result[6] = 1
    return result
}
