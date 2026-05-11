// ============================================================
// 函数名称: sub_4c9540
// 虚拟地址: 0x4c9540
// WARP GUID: 75204869-115d-5dfa-90fa-a6a46d1b2c50
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d9a28, sub_47b304, sub_4da10c, sub_4cfe9c, sub_4dc3b8, sub_4c94dc
// [被调用的父级函数]: sub_4c96bc, sub_4c95c4
// ============================================================

int32_tsub_4c9540()
{
    // 第一条实际指令: sub_4cfe9c(*data_53067c)
    sub_4cfe9c(*data_53067c)
    *data_530304
    int32_t ecx
    ecx.b = 1
    int32_t esi
    int32_t edi
    sub_4dc3b8(ecx, 0, esi, edi)
    sub_4c94dc()
    int32_t result = *data_530598
    *data_530598 = 1
    data_530598
    
    if (result == 1)
        return result
    
    *data_530304
    int32_t ecx_3 = sub_4da10c()
    *data_530304
    sub_4d9a28(ecx_3, 0, esi, edi)
    return sub_47b304(*data_530790, *data_5308d0, *data_530304, *data_530598)
}
