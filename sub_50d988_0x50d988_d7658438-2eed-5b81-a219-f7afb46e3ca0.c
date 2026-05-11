// ============================================================
// 函数名称: sub_50d988
// 虚拟地址: 0x50d988
// WARP GUID: d7658438-2eed-5b81-a219-f7afb46e3ca0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4746a0, sub_50d9e0, sub_50f2e0
// [被调用的父级函数]: sub_516c3c, sub_509af8
// ============================================================

int32_t __convention("regparm")sub_50d988(void* arg1)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    
    if (sub_50d9e0(arg1) != 0 && *(arg1 + 0x1b1f6) == 7)
        int32_t var_10_1 = 0
        sub_4746a0(nullptr, 0x1b, *data_530304, 0x50d9dc, 0x50d9dc)
        *(arg1 + 0x1b1f6) = *(arg1 + 0x1b1f7)
        sub_50f2e0()
    
    return entry_result
}
