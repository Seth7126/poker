// ============================================================
// 函数名称: sub_4b6a58
// 虚拟地址: 0x4b6a58
// WARP GUID: 774fc8bb-4329-58a7-8b5c-f9ad01e7241f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b696c, sub_40fa94, sub_4b6a00
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b6a58(void* arg1)
{
    // 第一条实际指令: void var_c
    void var_c
    int32_t ecx
    int32_t edx
    sub_40fa94(sub_4b6a00(arg1, edx, ecx), 0, &var_c)
    int32_t result
    sub_4b696c(&var_c, &result)
    return result
}
