// ============================================================
// 函数名称: sub_4971fc
// 虚拟地址: 0x4971fc
// WARP GUID: a53b456b-abeb-5fa1-9379-22e50a9afcb8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_497894, sub_4974fc
// ============================================================

void __convention("regparm")sub_4971fc(int32_t arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 + 0x34) = arg1
    *(arg2 + 0x34) = arg1
    *(arg2 + 0x30) = sub_4971b0
    *(arg2 + 0x3c) = arg1
    *(arg2 + 0x38) = sub_4971c4
}
