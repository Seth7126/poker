// ============================================================
// 函数名称: sub_43327c
// 虚拟地址: 0x43327c
// WARP GUID: 306fe69f-10c8-5521-8ce3-6f3ddecb59a7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42f900
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_43327c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: arg1[0x11].w |= 0x100
    arg1[0x11].w |= 0x100
    BOOL result = sub_42f900(arg1, arg2)
    arg1[0x11].w &= 0xfeff
    return result
}
