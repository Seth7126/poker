// ============================================================
// 函数名称: sub_408ad8
// 虚拟地址: 0x408ad8
// WARP GUID: e473e42d-3737-5833-bf89-3bc40107e36b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CompareStringA
// [内部子函数调用]: sub_40423c, sub_404078
// [被调用的父级函数]: sub_4a8988, sub_4af7a3, sub_4afc9c, sub_49aef8, sub_4af7b0, sub_49e018, sub_49dbf0, sub_49f684, sub_4a5d10, sub_4b0fd8, sub_49f1c0, sub_4afc93, sub_49ee10, sub_4a22e0, sub_43e2f4
// ============================================================

enum COMPARESTRING_RESULT __convention("regparm")sub_408ad8(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t cchCount2 = sub_404078(arg2)
    int32_t cchCount2 = sub_404078(arg2)
    char* lpString2 = sub_40423c(arg2)
    int32_t cchCount1 = sub_404078(arg1)
    enum COMPARESTRING_RESULT result
    result.b = CompareStringA(0x400, 1, sub_40423c(arg1), cchCount1, lpString2, cchCount2) == CSTR_EQUAL
    return result
}
