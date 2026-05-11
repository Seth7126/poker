// ============================================================
// 函数名称: sub_424134
// 虚拟地址: 0x424134
// WARP GUID: 2fd1b629-671d-5577-8723-f02183e02145
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_424134(int32_t* arg1)
{
    // 第一条实际指令: int32_t wParam
    int32_t wParam
    int32_t lParam
    SendMessageA(sub_4318d0(arg1), 0xb0, &wParam, &lParam)
    return lParam - wParam
}
