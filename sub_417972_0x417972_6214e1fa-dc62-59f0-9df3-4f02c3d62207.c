// ============================================================
// 函数名称: sub_417972
// 虚拟地址: 0x417972
// WARP GUID: 6214e1fa-dc62-59f0-9df3-4f02c3d62207
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

char* __convention("regparm")sub_417972(char* arg1, int16_t arg2, void* arg3, int32_t* arg4 @ ebp)
{
    // 第一条实际指令: char temp0 = *arg1
    char temp0 = *arg1
    *arg1 += arg2:1.b
    *(arg3 + 1) = sub_41b3d8
    arg1.b = sbb.b(arg1.b, 0xc8, temp0 + arg2:1.b u< temp0)
    *arg1 += arg1:1.b
    unimplemented  {enter 0x41, 0x78}
    *arg4
    int16_t entry_ebx
    arg1.b += entry_ebx:1.b
    arg2.b = 0x41
    arg1[0x500041c6] += (arg3 + 1).b + 2
    return arg1
}
