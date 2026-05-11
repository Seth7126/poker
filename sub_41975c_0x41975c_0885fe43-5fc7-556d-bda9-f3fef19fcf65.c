// ============================================================
// 函数名称: sub_41975c
// 虚拟地址: 0x41975c
// WARP GUID: 0885fe43-5fc7-556d-bda9-f3fef19fcf65
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LineTo
// [内部子函数调用]: sub_419c14
// [被调用的父级函数]: sub_43450c, sub_491e20
// ============================================================

int32_t __convention("regparm")sub_41975c(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: (*(*arg1 + 0x10))()
    (*(*arg1 + 0x10))()
    sub_419c14(arg1, 0xd)
    LineTo(arg1[1], arg2, arg3)
    return (*(*arg1 + 0xc))()
}
