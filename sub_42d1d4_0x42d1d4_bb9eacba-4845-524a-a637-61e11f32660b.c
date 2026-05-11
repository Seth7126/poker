// ============================================================
// 函数名称: sub_42d1d4
// 虚拟地址: 0x42d1d4
// WARP GUID: bb9eacba-4845-524a-a637-61e11f32660b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40fac8, sub_42b2f0, sub_40fa94, sub_42b1a0
// [被调用的父级函数]: sub_42d260
// ============================================================

int32_tsub_42d1d4(void* arg1)
{
    // 第一条实际指令: void var_14
    void var_14
    sub_40fa94(*(*(arg1 - 4) + 0x30), *(*(arg1 - 4) + 0x34), &var_14)
    int32_t var_c
    sub_42b2f0(*(*(arg1 - 4) + 0x24), &var_14, &var_c)
    int32_t* ebx = *(*(arg1 - 8) + 8) + 0x44
    int32_t* esi = *(*(arg1 - 4) + 0x24)
    void var_24
    int32_t var_8
    sub_40fac8(ebx[2] - *ebx + esi[0xe] - *(*(arg1 - 4) + 0x38), esi[0xd] + ebx[1] - var_8, 
        esi[0xc] + *ebx - var_c, &var_24, ebx[3] - ebx[1] + esi[0xf] - *(*(arg1 - 4) + 0x3c))
    return sub_42b1a0(esi, &var_24)
}
