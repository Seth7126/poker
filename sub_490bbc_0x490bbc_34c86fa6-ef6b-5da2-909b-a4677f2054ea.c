// ============================================================
// 函数名称: sub_490bbc
// 虚拟地址: 0x490bbc
// WARP GUID: 34c86fa6-ef6b-5da2-909b-a4677f2054ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_490768
// [被调用的父级函数]: sub_5193d0
// ============================================================

int32_t __convention("regparm")sub_490bbc(void** arg1)
{
    // 第一条实际指令: int32_t* eax = arg1[4]
    int32_t* eax = arg1[4]
    int32_t var_c
    int32_t var_8
    void* ebx_1
    void* ebp
    ebx_1, ebp = sub_490768(arg1, "GetCursorPos", (*(*eax + 0x10))(eax, &var_c, &var_8))
    *(ebx_1 + 0x44) = *(ebp - 4)
    *(ebx_1 + 0x48) = *(ebp - 8)
    return *(ebx_1 + 0x44)
}
