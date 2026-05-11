// ============================================================
// 函数名称: sub_433370
// 虚拟地址: 0x433370
// WARP GUID: 3fb36b26-53d9-55de-814a-0c4f47c41ca9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_434a1c, sub_433b34, sub_4341d8, sub_433528, sub_433480
// ============================================================

int32_t __convention("regparm")sub_433370(void* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    void* i = *(arg1 + 8)
    
    while (i != 0)
        i = *(i + 0xc)
        result += 1
    
    return result
}
