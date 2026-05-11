// ============================================================
// 函数名称: sub_404cec
// 虚拟地址: 0x404cec
// WARP GUID: 2ae877d8-fc4a-51bb-af65-d74415323a7e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VariantClear
// [内部子函数调用]: sub_403df8
// [被调用的父级函数]: sub_404ef4, sub_4148a8, sub_4050e8, sub_404f24, sub_4b64a4, sub_4b624c, sub_404f44, sub_405074, sub_404e50, sub_4050b4
// ============================================================

void __convention("regparm")sub_404cec(int16_t* arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    edx.w = *arg1
    
    if ((edx & 0x4000) != 0 || edx u< 8)
        *arg1 = 0
        return 
    
    if (edx == 0x100)
        *arg1 = 0
        return sub_403df8(&arg1[4]) __tailcall
    
    if (edx == 0x101)
        jump(data_5313e8)
    
    VariantClear(arg1)
}
