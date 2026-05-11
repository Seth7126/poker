// ============================================================
// 函数名称: sub_4108e4
// 虚拟地址: 0x4108e4
// WARP GUID: f03df3a5-c1ea-5e4d-a36d-597ff259281a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnterCriticalSection
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4aa8dc, sub_413564, sub_42a430, sub_40fe28, sub_4132fc, sub_40ffac, sub_4134b8, sub_41085c, sub_418028, sub_40fb5c, sub_41383c, sub_42a29c, sub_41cdd0, sub_4107e0, sub_4aaa64, sub_416c40, sub_4108f8, sub_41cd24, sub_4aa948, sub_42a358, sub_40fcf8
// ============================================================

int32_t __convention("regparm")sub_4108e4(void* arg1)
{
    // 第一条实际指令: EnterCriticalSection(arg1 + 8)
    EnterCriticalSection(arg1 + 8)
    return *(arg1 + 4)
}
