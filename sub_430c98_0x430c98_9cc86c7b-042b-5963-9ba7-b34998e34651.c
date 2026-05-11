// ============================================================
// 函数名称: sub_430c98
// 虚拟地址: 0x430c98
// WARP GUID: 9cc86c7b-042b-5963-9ba7-b34998e34651
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_430c98(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: void* edi = arg2
    void* edi = arg2
    arg1[0x11].w |= 4
    arg2.b = 1
    int32_t ebx
    ebx.w = 0xffd6
    int32_t result = sub_4032ac(arg1, arg2) & 0x7f
    *(edi + 0xc) = result
    return result
}
