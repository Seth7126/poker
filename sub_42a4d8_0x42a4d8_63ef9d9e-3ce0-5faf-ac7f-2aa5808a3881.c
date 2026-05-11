// ============================================================
// 函数名称: sub_42a4d8
// 虚拟地址: 0x42a4d8
// WARP GUID: 63ef9d9e-3ce0-5faf-ac7f-2aa5808a3881
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC
// [内部子函数调用]: sub_419bc0, sub_4108f8
// [被调用的父级函数]: sub_42a358, sub_42a404, sub_42a29c, sub_42a50c
// ============================================================

void __convention("regparm")sub_42a4d8(int32_t arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x5c) == 0)
    if (*(arg1 + 0x5c) == 0)
        return 
    
    sub_419bc0(arg1, 0)
    void* ebx_1 = sub_4108f8(data_531790)
    ReleaseDC(*(ebx_1 + 0x60), *(ebx_1 + 0x5c))
    *(ebx_1 + 0x5c) = 0
}
