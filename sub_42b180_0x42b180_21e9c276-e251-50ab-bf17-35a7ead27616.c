// ============================================================
// 函数名称: sub_42b180
// 虚拟地址: 0x42b180
// WARP GUID: 21e9c276-e251-50ab-bf17-35a7ead27616
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4317d8, sub_42bba4, sub_43550c, sub_431344, sub_42aa4c, sub_446d80, sub_42c2ec, sub_42bb18, sub_435390, sub_44a0a0, sub_434670
// ============================================================

void __convention("regparm")sub_42b180(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: *arg2 = *(arg1 + 0x30)
    *arg2 = *(arg1 + 0x30)
    arg2[1] = *(arg1 + 0x34)
    arg2[2] = *(arg1 + 0x30) + *(arg1 + 0x38)
    arg2[3] = *(arg1 + 0x34) + *(arg1 + 0x3c)
}
