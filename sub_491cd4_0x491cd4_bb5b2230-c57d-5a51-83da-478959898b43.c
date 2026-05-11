// ============================================================
// 函数名称: sub_491cd4
// 虚拟地址: 0x491cd4
// WARP GUID: bb5b2230-c57d-5a51-83da-478959898b43
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_491d6c, sub_491d44
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_491cd4(int32_t* arg1, int16_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8.w = arg2
    int32_t* esi = arg1
    arg1.w = var_8.w
    esi[0xa2].w = arg1.w
    int32_t eax = 0
    
    do
        bool c_1 = eax.b u< 0xf
        
        if (eax.b == 0xf || c_1)
            c_1 = test_bit(esi[0xa2], eax & 0x7f)
        
        int32_t edx
        edx.b = c_1
        int32_t ecx_1
        ecx_1.b = eax.b
        esi[ecx_1 * 4 + 0x7e].b = edx.b
        eax += 1
    while (eax.b != 9)
    
    if ((esi[8].b & 0x40) == 0)
        return sub_491d6c(esi)
    
    int32_t eax_2 = sub_491d44(esi)
    esi[0xa9] = divs.dp.d(sx.q(esi[0xe] - 1), eax_2) + 1
    return (*(*esi + 0x74))(var_8)
}
