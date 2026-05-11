// ============================================================
// 函数名称: sub_43600c
// 虚拟地址: 0x43600c
// WARP GUID: b101d6f6-b92f-5f68-93f3-8eef8ad41476
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetVersion
// [内部子函数调用]: sub_435eac
// [被调用的父级函数]: 无
// ============================================================

voidsub_43600c()
{
    // 第一条实际指令: int32_t temp0 = data_531758
    int32_t temp0 = data_531758
    data_531758 -= 1
    
    if (temp0 u< 1)
        data_531754 = zx.w(GetVersion()) u>= 4
        sub_435eac()
}
