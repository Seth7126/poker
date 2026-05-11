// ============================================================
// 函数名称: sub_455e3c
// 虚拟地址: 0x455e3c
// WARP GUID: 453e99a4-5807-5408-9fa6-5194aa913394
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_455c18, sub_455da4
// [被调用的父级函数]: sub_455e84, sub_455f6c
// ============================================================

int32_t __convention("regparm")sub_455e3c(int32_t* arg1)
{
    // 第一条实际指令: uint32_t ecx
    uint32_t ecx
    int32_t edx
    sub_455c18(arg1, edx, ecx)
    sub_455da4(arg1)
    (**(arg1 + 0x1ae))()
    (**(arg1 + 0x19e))()
    int32_t result = *(*(arg1 + 0x19e) + 4)
    **(arg1 + 0x1a6) = result
    return result
}
