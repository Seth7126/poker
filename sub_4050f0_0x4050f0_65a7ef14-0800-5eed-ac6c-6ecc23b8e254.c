// ============================================================
// 函数名称: sub_4050f0
// 虚拟地址: 0x4050f0
// WARP GUID: 65a7ef14-0800-5eed-ac6c-6ecc23b8e254
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404d30
// [被调用的父级函数]: sub_404dcc, sub_4048a0
// ============================================================

void __convention("regparm")sub_4050f0(int16_t* arg1)
{
    // 第一条实际指令: if (*arg1 u< 8)
    if (*arg1 u< 8)
        return 
    
    int32_t var_4_1 = *(arg1 + 0xc)
    int32_t var_8_1 = *(arg1 + 8)
    int32_t var_c_1 = *(arg1 + 4)
    int32_t var_10 = *arg1
    *arg1 = 0
    sub_404d30(arg1, &var_10)
}
