// ============================================================
// 函数名称: sub_493b3c
// 虚拟地址: 0x493b3c
// WARP GUID: 064aa22a-1460-5ce0-a440-8f6e5f1e5bce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciGetErrorStringA
// [内部子函数调用]: sub_403ee0, sub_405ae8, sub_4093b0
// [被调用的父级函数]: sub_49292c
// ============================================================

char** __convention("regparm")sub_493b3c(void* arg1, char** arg2)
{
    // 第一条实际指令: void* pszText = arg1
    void* pszText = arg1
    
    if (mciGetErrorStringA(*(arg1 + 0x2ec), &pszText, 0x1000) == 0)
        return sub_405ae8(data_530690, arg2)
    
    sub_403ee0(arg2, &pszText, sub_4093b0(&pszText))
    return arg2
}
