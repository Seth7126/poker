// ============================================================
// 函数名称: sub_4197bc
// 虚拟地址: 0x4197bc
// WARP GUID: 8dc1de76-5e88-58c5-879a-921ad05797c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MoveToEx
// [内部子函数调用]: sub_419c14
// [被调用的父级函数]: sub_419aac, sub_43450c, sub_491e20, sub_4198d0
// ============================================================

BOOL __convention("regparm")sub_4197bc(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t x = arg2
    int32_t x = arg2
    arg2.b = 1
    sub_419c14(arg1, arg2.b)
    return MoveToEx(*(arg1 + 4), x, arg3, nullptr)
}
