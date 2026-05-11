// ============================================================
// 函数名称: sub_4cbf78
// 虚拟地址: 0x4cbf78
// WARP GUID: e14724e9-cfe2-5a32-b5f6-bb69180fa4ca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d36c4, sub_4d3e30
// [被调用的父级函数]: sub_4c9488
// ============================================================

int16_t __convention("regparm")sub_4cbf78(int32_t arg1)
{
    // 第一条实际指令: void var_b0
    void var_b0
    __builtin_memcpy(&var_b0, arg1, 0xa0)
    int32_t i = 1
    void* edi = &var_b0
    void* var_10 = &data_546ee0
    
    do
        void* edx
        edx.b = 1
        sub_4d36c4(i, edx.b, 6)
        int32_t ebx_1 = 0
        void* esi_1 = edi
        
        do
            sub_4d3e30(sx.d(*esi_1), ebx_1.b, i, 0xffffffff)
            ebx_1 += 1
            esi_1 += 2
        while (ebx_1.b != 7)
        
        *var_10 = sx.w(*(edi + 0xe))
        *(var_10 + 0x50) = sx.w(*(edi + 0xf))
        i += 1
        var_10 += 0x174e0
        edi += 0x10
    while (i != 0xb)
    
    char var_5
    int16_t result
    result.b = var_5
    return result
}
