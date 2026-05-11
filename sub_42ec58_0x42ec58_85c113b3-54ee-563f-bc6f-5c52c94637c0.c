// ============================================================
// 函数名称: sub_42ec58
// 虚拟地址: 0x42ec58
// WARP GUID: 85c113b3-54ee-563f-bc6f-5c52c94637c0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateWindowExA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4243ec, sub_444722
// ============================================================

HWND __convention("regparm")sub_42ec58(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: HWND result = CreateWindowExA(arg2[2], &arg2[0x13], *arg2, arg2[1], arg2[3], arg2[4], arg2[5], arg2[6], arg2[7], nullptr, arg2[0xd], arg2[8])
    HWND result = CreateWindowExA(arg2[2], &arg2[0x13], *arg2, arg2[1], arg2[3], arg2[4], arg2[5], 
        arg2[6], arg2[7], nullptr, arg2[0xd], arg2[8])
    *(arg1 + 0x14c) = result
    return result
}
