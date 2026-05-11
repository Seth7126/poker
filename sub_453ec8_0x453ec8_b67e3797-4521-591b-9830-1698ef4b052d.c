// ============================================================
// 函数名称: sub_453ec8
// 虚拟地址: 0x453ec8
// WARP GUID: b67e3797-4521-591b-9830-1698ef4b052d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreatePalette
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453ff8
// ============================================================

HPALETTE __convention("regparm")sub_453ec8(void* arg1)
{
    // 第一条实际指令: LOGPALETTE plpal
    LOGPALETTE plpal
    plpal.palVersion = 0x300
    int16_t i_4 = *(arg1 + 0x80)
    plpal.palNumEntries = i_4
    var_408
    
    if (*(arg1 + 0x28) != 1)
        if (zx.d(i_4) - 1 s>= 0)
            int32_t i_3 = zx.d(i_4)
            int32_t ecx_2 = 0
            void* edx_1 = &var_408
            int32_t i
            
            do
                char* eax_3
                eax_3.b = (*(*(arg1 + 0x84) + 8))[ecx_2]
                *edx_1 = eax_3.b
                char* eax_5
                eax_5.b = (*(*(arg1 + 0x84) + 4))[ecx_2]
                *(edx_1 + 1) = eax_5.b
                char* eax_7
                eax_7.b = (**(arg1 + 0x84))[ecx_2]
                *(edx_1 + 2) = eax_7.b
                *(edx_1 + 3) = 0
                ecx_2 += 1
                edx_1 += 4
                i = i_3
                i_3 -= 1
            while (i != 1)
    else if (zx.d(i_4) - 1 s>= 0)
        int32_t i_2 = zx.d(i_4)
        int32_t ecx_1 = 0
        void* edx = &var_408
        int32_t i_1
        
        do
            char* eax_1
            eax_1.b = (**(arg1 + 0x84))[ecx_1]
            *edx = eax_1.b
            *(edx + 1) = eax_1.b
            *(edx + 2) = eax_1.b
            *(edx + 3) = 0
            ecx_1 += 1
            edx += 4
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    return CreatePalette(&plpal)
}
