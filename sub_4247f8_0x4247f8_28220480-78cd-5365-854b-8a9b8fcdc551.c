// ============================================================
// 函数名称: sub_4247f8
// 虚拟地址: 0x4247f8
// WARP GUID: 28220480-78cd-5365-854b-8a9b8fcdc551
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_403ee0, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_4247f8(void* arg1, WPARAM arg2, char** arg3)
{
    // 第一条实际指令: void* lParam = arg1
    void* lParam = arg1
    lParam.w = 0x1000
    sub_403ee0(arg3, &lParam, SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xc4, arg2, &lParam))
    return arg3
}
