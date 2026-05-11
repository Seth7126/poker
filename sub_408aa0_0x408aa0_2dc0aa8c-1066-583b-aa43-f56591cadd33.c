// ============================================================
// 函数名称: sub_408aa0
// 虚拟地址: 0x408aa0
// WARP GUID: 2dc0aa8c-1066-583b-aa43-f56591cadd33
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CompareStringA
// [内部子函数调用]: sub_40423c, sub_404078
// [被调用的父级函数]: sub_412848, sub_4124f0, sub_411b8c, sub_411b0c, sub_42feb8, sub_418900, sub_4394b8, sub_43d43c, sub_42ffa4
// ============================================================

int32_t __convention("regparm")sub_408aa0(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t cchCount2 = sub_404078(arg2)
    int32_t cchCount2 = sub_404078(arg2)
    char* lpString2 = sub_40423c(arg2)
    int32_t cchCount1 = sub_404078(arg1)
    return CompareStringA(0x400, 1, sub_40423c(arg1), cchCount1, lpString2, cchCount2) - 2
}
