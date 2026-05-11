// ============================================================
// 函数名称: sub_4359c4
// 虚拟地址: 0x4359c4
// WARP GUID: 9572b781-5e06-5ac2-849b-8dc947a93973
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_435a60
// ============================================================

char __convention("regparm")sub_4359c4(void* arg1)
{
    // 第一条实际指令: int32_t eax_2 = (*data_5302cc)(0x13)
    int32_t eax_2 = (*data_5302cc)(0x13)
    int32_t eax_3 = neg.d(eax_2)
    char result = (neg.d(sbb.d(eax_3, eax_3, eax_2 != 0))).b
    *(arg1 + 0xc) = result
    return result
}
