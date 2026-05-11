// ============================================================
// 函数名称: sub_42f1d4
// 虚拟地址: 0x42f1d4
// WARP GUID: e57fa3a5-d007-5aea-ad7b-9009faa81301
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCapture
// [内部子函数调用]: sub_42c754, sub_4318d0, sub_407814, sub_407800, sub_42f140
// [被调用的父级函数]: sub_42f268, sub_425f68, sub_430da8
// ============================================================

int32_t __convention("regparm")sub_42f1d4(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const ebx_1
    void* const ebx_1
    
    if (sub_4318d0(arg1) != GetCapture())
        int32_t var_14
        sub_407800(arg2[2], &var_14)
        sub_42f140(arg1, 0)
        ebx_1 = nullptr
    else
        ebx_1 = nullptr
        
        if (data_52e800 != 0 && arg1 == *(data_52e800 + 0x24))
            ebx_1 = data_52e800
    
    int32_t result = 0
    
    if (ebx_1 != 0)
        int32_t var_1c = sx.d(arg2[2].w) - *(ebx_1 + 0x30)
        int32_t var_18_1 = sx.d(*(arg2 + 0xa)) - *(ebx_1 + 0x34)
        int32_t eax_11 = sub_407814(&var_1c)
        arg2[1]
        *arg2
        sub_42c754(ebx_1, eax_11)
        arg2[3] = 0
        result.b = 1
    
    return result
}
