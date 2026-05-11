// ============================================================
// 函数名称: sub_41f65d
// 虚拟地址: 0x41f65d
// WARP GUID: fe4d08da-dc41-5670-8a44-f6dabe0f80d5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

char* __convention("regparm")sub_41f65d(char* arg1, int32_t, char arg3)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    void* entry_ebx
    *(entry_ebx + 0x78832040) += arg3
    char temp0 = *arg1 | arg1.b
    *arg1 = temp0
    
    if (temp0 != 0 || *(arg1 + 0xc) != 0)
        return 0
    
    arg1.b = 1
    return arg1
}
