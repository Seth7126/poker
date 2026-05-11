// ============================================================
// 函数名称: sub_4307a0
// 虚拟地址: 0x4307a0
// WARP GUID: c55c7b6a-4ae1-5c17-87b0-68ac743bf57a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_407800, sub_42c754
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4307a0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 + 0xc) = 0
    *(arg2 + 0xc) = 0
    int32_t var_14
    sub_407800(*(arg2 + 8), &var_14)
    int32_t edx_1
    edx_1.b = *(arg2 + 4)
    int32_t ebx
    ebx.w = 0xffc6
    char result = sub_4032ac(arg1, edx_1, sx.d(*(arg2 + 6)), &var_14)
    
    if (result == 0)
        void* ebx_1 = arg1[9]
        
        if (ebx_1 != 0)
            *(arg2 + 4)
            result = sub_42c754(ebx_1, *(arg2 + 8))
            *(arg2 + 0xc) = 0
    else
        *(arg2 + 0xc) = 1
    
    return result
}
