// ============================================================
// 函数名称: sub_4eca90
// 虚拟地址: 0x4eca90
// WARP GUID: 5afee965-5c3e-5fd4-b48c-218553a80e95
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ed16c, sub_4eca48, sub_478234, sub_4ed040
// [被调用的父级函数]: sub_4e6659, sub_4ed7a0, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4eca90(int32_t arg1)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    
    if (arg1 == *data_530418)
        *(*data_5301f4 + 0x10038) = 0
        *data_5300d0 = 6
        *(*data_5301f4 + 0x456c) = 6
        sub_4eca48()
        sub_4ed16c(1)
    else if (arg1 == *data_5306dc)
        *(*data_5301f4 + 0x10038) = 0
        *data_5300d0 = 6
        *(*data_5301f4 + 0x456c) = 6
        sub_4ed040()
    else if (arg1 == *data_530a0c)
        sub_478234(*data_530304, *data_530854, *data_52ff48)
    
    return entry_result
}
