// ============================================================
// 函数名称: sub_404f24
// 虚拟地址: 0x404f24
// WARP GUID: cd04e501-fa6c-5e81-a089-04bd3fef74b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404c50, sub_404cec
// [被调用的父级函数]: sub_404f44
// ============================================================

int32_t __convention("regparm")sub_404f24(int16_t* arg1, void* arg2)
{
    // 第一条实际指令: BSTR eax_1 = sub_404c50(*(arg2 + 8))
    BSTR eax_1 = sub_404c50(*(arg2 + 8))
    int32_t result = sub_404cec(arg1)
    *arg1 = 8
    *(arg1 + 8) = eax_1
    return result
}
