// ============================================================
// 函数名称: sub_432ee0
// 虚拟地址: 0x432ee0
// WARP GUID: 49a984ee-9625-501a-afee-7b56366e901f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowRect, ClientToScreen
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_433134, sub_4330ac
// ============================================================

int32_t __fastcallsub_432ee0(int32_t arg1, int32_t arg2, HWND arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: POINT point
    POINT point
    point.x = arg2
    point.y = arg1
    ClientToScreen(arg3, &point)
    RECT rect
    GetWindowRect(arg3, &rect)
    *arg4 = point.x - rect.left
    int32_t result = point.y - rect.top
    arg4[1] = result
    return result
}
