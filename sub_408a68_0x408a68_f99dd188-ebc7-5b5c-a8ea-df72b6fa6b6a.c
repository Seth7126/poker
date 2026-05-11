// ============================================================
// 函数名称: sub_408a68
// 虚拟地址: 0x408a68
// WARP GUID: f99dd188-ebc7-5b5c-a8ea-df72b6fa6b6a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CompareStringA
// [内部子函数调用]: sub_40423c, sub_404078
// [被调用的父级函数]: sub_40c05c
// ============================================================

int32_t __convention("regparm")sub_408a68(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t cchCount2 = sub_404078(arg2)
    int32_t cchCount2 = sub_404078(arg2)
    char* lpString2 = sub_40423c(arg2)
    int32_t cchCount1 = sub_404078(arg1)
    return CompareStringA(0x400, 0, sub_40423c(arg1), cchCount1, lpString2, cchCount2) - 2
}
