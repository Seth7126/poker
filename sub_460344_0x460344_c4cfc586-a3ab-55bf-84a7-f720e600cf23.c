// ============================================================
// 函数名称: sub_460344
// 虚拟地址: 0x460344
// WARP GUID: c4cfc586-a3ab-55bf-84a7-f720e600cf23
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_460418
// ============================================================

int32_t __convention("regparm")sub_460344(void* arg1)
{
    // 第一条实际指令: int32_t* ebx = *(arg1 + 0x14)
    int32_t* ebx = *(arg1 + 0x14)
    int32_t result = (**(arg1 + 4))()
    ebx[6] = result
    *ebx = result
    ebx[1] = 0x1000
    return result
}
