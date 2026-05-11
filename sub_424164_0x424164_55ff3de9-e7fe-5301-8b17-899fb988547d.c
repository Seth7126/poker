// ============================================================
// 函数名称: sub_424164
// 虚拟地址: 0x424164
// WARP GUID: 55ff3de9-e7fe-5301-8b17-899fb988547d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_424164(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: WPARAM wParam
    WPARAM wParam
    LPARAM lParam
    SendMessageA(sub_4318d0(arg1), 0xb0, &wParam, &lParam)
    lParam = arg2 + wParam
    SendMessageA(sub_4318d0(arg1), 0xb1, wParam, lParam)
    return SendMessageA(sub_4318d0(arg1), 0xb7, 0, 0)
}
