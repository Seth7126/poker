// ============================================================
// 函数名称: sub_4a36bc
// 虚拟地址: 0x4a36bc
// WARP GUID: 2e604677-d74d-5189-b140-0c1344bfbec9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_493fc0, sub_403b60
// [被调用的父级函数]: 无
// ============================================================

voidsub_4a36bc()
{
    // 第一条实际指令: int32_t temp0 = data_532588
    int32_t temp0 = data_532588
    data_532588 -= 1
    
    if (temp0 u>= 1)
        return 
    
    sub_403b60(sub_4a3628)
    int32_t edx_1
    edx_1.b = 1
    data_53258c = sub_493fc0(sub_493cfc+0x1d4, edx_1)
}
