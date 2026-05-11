// ============================================================
// 函数名称: sub_469994
// 虚拟地址: 0x469994
// WARP GUID: 31f06d00-55d6-50e0-93bf-fbdbfc5b64e9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4fb834
// ============================================================

void __convention("regparm")sub_469994(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_4_1 = arg3
    int32_t var_4_1 = arg3
    *(arg1 + (arg2 << 2) + 0xa64) = fconvert.s(float.t(arg3))
}
