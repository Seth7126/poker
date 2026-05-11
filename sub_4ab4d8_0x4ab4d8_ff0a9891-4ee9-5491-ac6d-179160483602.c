// ============================================================
// 函数名称: sub_4ab4d8
// 虚拟地址: 0x4ab4d8
// WARP GUID: ff0a9891-4ee9-5491-ac6d-179160483602
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4ab4a5, sub_4ab4f8
// ============================================================

int32_t __convention("regparm")sub_4ab4d8(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x24)
    int32_t result = *(arg1 + 0x24)
    
    if (result != 0)
        (*data_530638)(result)
        result = 0
        *(arg1 + 0x24) = 0
    
    return result
}
