// ============================================================
// 函数名称: sub_50a598
// 虚拟地址: 0x50a598
// WARP GUID: 35c090c5-3a9b-51d4-876c-5ed26394edc1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50a64c, sub_50918c, sub_4837d0, sub_510d9c, sub_5143f0, sub_528320, sub_507dbc, sub_4dc3b8
// [被调用的父级函数]: sub_511fd8, sub_50b624
// ============================================================

int32_tsub_50a598()
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    void* esi = data_530454
    *(*esi + 0x1c8) = 0
    sub_507dbc(3)
    *data_530304
    int32_t edi
    sub_4dc3b8(0, 0, esi, edi)
    sub_50a64c()
    sub_4837d0(*data_530304, *data_530438)
    *(*esi + 0x1e0) = 0
    *(*esi + 0x1e1) = 0
    *(*esi + 0x1e2) = 0
    *(*esi + 0x9c) = 0
    *(*esi + 0x98) = 0
    sub_510d9c(*esi, 0)
    sub_50918c(0, 0)
    *data_530144 = 1
    sub_5143f0(*esi, 0)
    sub_528320(*data_5301f4, *(*data_5301f4 + 4), 0)
    return entry_result
}
