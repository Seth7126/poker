// ============================================================
// 函数名称: sub_40e200
// 虚拟地址: 0x40e200
// WARP GUID: 1b05a01b-cc65-5fad-9c34-d9347db6be9a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_40e1ac
// [被调用的父级函数]: sub_40e334
// ============================================================

void* __convention("regparm")sub_40e200(int32_t arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: char var_10c[0x100]
    char var_10c[0x100]
    sub_404054(&var_10c, arg3, 0xff)
    return sub_40e1ac(arg1, arg2, &var_10c)
}
