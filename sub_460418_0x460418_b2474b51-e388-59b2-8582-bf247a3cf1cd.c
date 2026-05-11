// ============================================================
// 函数名称: sub_460418
// 虚拟地址: 0x460418
// WARP GUID: b2474b51-e388-59b2-8582-bf247a3cf1cd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453acc
// ============================================================

void* __convention("regparm")sub_460418(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x14) == 0)
    if (*(arg1 + 0x14) == 0)
        *(arg1 + 0x14) = (**(arg1 + 4))()
    
    void* result = *(arg1 + 0x14)
    *(result + 8) = sub_460344
    *(result + 0xc) = sub_460370
    *(result + 0x10) = sub_4603b8
    *(result + 0x14) = arg2
    return result
}
