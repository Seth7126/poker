// ============================================================
// 函数名称: sub_41c3a4
// 虚拟地址: 0x41c3a4
// WARP GUID: 1bea5fc3-fce7-56a1-8dd0-f83af3cee105
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_41d040, sub_41d044
// [被调用的父级函数]: sub_41c1fc, sub_41c438, sub_41c7a4, sub_41c820, sub_41c730, sub_41c2ec, sub_41c7e0, sub_41c8f4, sub_41cbd0, sub_41c508
// ============================================================

void* __convention("regparm")sub_41c3a4(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t edx
    ecx, edx = sub_41d044(*(arg1 + 0x20))
    edx.b = 1
    void* result = sub_4030a0(ecx, edx)
    *(arg1 + 0x20) = result
    sub_41d040(result)
    return result
}
