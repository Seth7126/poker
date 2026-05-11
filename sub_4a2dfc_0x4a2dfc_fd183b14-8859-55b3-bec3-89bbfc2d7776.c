// ============================================================
// 函数名称: sub_4a2dfc
// 虚拟地址: 0x4a2dfc
// WARP GUID: fd183b14-8859-55b3-bec3-89bbfc2d7776
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b008c, sub_4afc9c, sub_4afc93
// ============================================================

void __convention("regparm")sub_4a2dfc(void* arg1, int32_t arg2)
{
    // 第一条实际指令: *(arg1 + 0x18) = arg2
    *(arg1 + 0x18) = arg2
    arg2.b = arg2 s>= 0
    *(arg1 + 0x4c) = arg2.b
}
