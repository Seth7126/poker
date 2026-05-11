// ============================================================
// 函数名称: sub_456060
// 虚拟地址: 0x456060
// WARP GUID: 2578592d-14e2-59d9-85e4-781095067b25
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453830, sub_4545b0
// ============================================================

int32_t __convention("regparm")sub_456060(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x14) == 0)
    if (*(arg1 + 0x14) == 0)
        void* eax_1 = (**(arg1 + 4))()
        *(arg1 + 0x14) = eax_1
        *(eax_1 + 0x20) = (**(arg1 + 4))()
    
    int32_t* ebx_3 = *(arg1 + 0x14)
    ebx_3[2] = sub_455fb4
    ebx_3[3] = sub_455fc0
    ebx_3[4] = sub_456030
    ebx_3[5] = sub_4600bc
    ebx_3[6] = sub_45605c
    ebx_3[7] = arg2
    ebx_3[1] = 0
    *ebx_3 = 0
    return 0
}
