// ============================================================
// 函数名称: sub_4c0ff8
// 虚拟地址: 0x4c0ff8
// WARP GUID: 7a5f058b-49ec-5520-a9a8-4b25f9b483fb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a9a0
// [被调用的父级函数]: sub_4d69e8
// ============================================================

int32_tsub_4c0ff8()
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    int32_t* esi = *data_5301f4 + 0x111fc
    sub_47a9a0(*data_530404, *data_52fee4, *data_530304, &esi[1])
    sub_47a9a0(*data_530578, *data_52fee4, *data_530304, &esi[2])
    sub_47a9a0(*data_5309cc, *data_52fee4, *data_530304, esi)
    sub_47a9a0(*data_530778, *data_52fee4, *data_530304, &esi[3])
    return entry_result
}
