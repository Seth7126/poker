// ============================================================
// 函数名称: sub_435a10
// 虚拟地址: 0x435a10
// WARP GUID: 2dc3d804-00bf-5420-9201-be9a21b89a09
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_407860
// [被调用的父级函数]: sub_435a60
// ============================================================

HWND __convention("regparm")sub_435a10(void* arg1, int32_t arg2, LRESULT arg3)
{
    // 第一条实际指令: LRESULT var_8 = arg3
    LRESULT var_8 = arg3
    *(arg1 + 0x18) = sub_407860(arg1 + 0x14, arg1 + 0x24, arg1 + 0x1c, arg1 + 0x10, &var_8)
    HWND result
    result.b = *(arg1 + 0x1c) != 0
    *(arg1 + 0x20) = result.b
    return result
}
