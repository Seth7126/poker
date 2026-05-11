// ============================================================
// 函数名称: sub_4b696c
// 虚拟地址: 0x4b696c
// WARP GUID: 923d20c6-8de0-5950-94a9-4cd8c71de0cd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC, SetMapMode, LPtoDP, GetDC
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b6a58, sub_4b69b4
// ============================================================

int32_t __convention("regparm")sub_4b696c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_14 = *arg1
    int32_t var_14 = *arg1
    int32_t var_10 = arg1[1]
    HWND hdc_1 = nullptr
    HDC hdc = GetDC(hdc_1)
    hdc_1 = 3
    SetMapMode(hdc, hdc_1)
    *arg2 = var_14
    arg2[1] = var_10
    arg2[1] = neg.d(arg2[1])
    hdc_1 = 1
    LPtoDP(hdc, arg2, hdc_1)
    hdc_1 = hdc
    return ReleaseDC(nullptr, hdc_1)
}
