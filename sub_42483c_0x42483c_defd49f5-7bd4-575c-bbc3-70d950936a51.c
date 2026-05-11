// ============================================================
// 函数名称: sub_42483c
// 虚拟地址: 0x42483c
// WARP GUID: defd49f5-7bd4-575c-bbc3-70d950936a51
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_40423c, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_42483c(void* arg1, WPARAM arg2, int32_t arg3)
{
    // 第一条实际指令: LRESULT wParam = SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xbb, arg2, 0)
    LRESULT wParam = SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xbb, arg2, 0)
    
    if (wParam s< 0)
        return wParam
    
    LPARAM lParam = SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xc1, wParam, 0) + wParam
    SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xb1, wParam, lParam)
    LPARAM lParam_1 = sub_40423c(arg3)
    return SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xc2, 0, lParam_1)
}
