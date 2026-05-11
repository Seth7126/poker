// ============================================================
// 函数名称: sub_4240f0
// 虚拟地址: 0x4240f0
// WARP GUID: dd152389-2483-557d-b476-385938035e47
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4240f0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t wParam = arg3
    int32_t wParam = arg3
    SendMessageA(sub_4318d0(arg1), 0xb0, &wParam, 0)
    return wParam
}
