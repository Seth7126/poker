// ============================================================
// 函数名称: sub_412c50
// 虚拟地址: 0x412c50
// WARP GUID: 6fc1d592-9743-59bd-a9a8-fdef9c97142c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_412ba8
// [被调用的父级函数]: sub_412c38, sub_412c78, sub_412d28
// ============================================================

int32_t __convention("regparm")sub_412c50(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    sub_412ba8(arg1, (*(*arg1 + 0x10))(arg2), arg1[2])
    arg1[4] = arg2
    return arg2
}
