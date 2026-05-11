// ============================================================
// 函数名称: sub_43d03c
// 虚拟地址: 0x43d03c
// WARP GUID: cd8a335f-a823-5da5-a1ac-d358bcc46563
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_43d03c(void* arg1)
{
    // 第一条实际指令: arg1.b = *(arg1 + 0x35)
    arg1.b = *(arg1 + 0x35)
    arg1.b ^= 1
    return arg1
}
