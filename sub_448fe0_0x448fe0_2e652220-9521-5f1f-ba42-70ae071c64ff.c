// ============================================================
// 函数名称: sub_448fe0
// 虚拟地址: 0x448fe0
// WARP GUID: 2e652220-9521-5f1f-ba42-70ae071c64ff
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: TranslateMDISysAccel
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449184
// ============================================================

int32_t __convention("regparm")sub_448fe0(void* arg1, MSG* arg2)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x38)
    void* esi = *(arg1 + 0x38)
    
    if (esi == 0 || *(esi + 0x217) != 2 || *(data_5317dc + 0x60) == 0
            || *(*(data_5317dc + 0x60) + 0x217) != 1)
        return 0
    
    BOOL eax_2 = TranslateMDISysAccel(*(esi + 0x23c), arg2)
    int32_t eax_3 = neg.d(eax_2)
    return neg.d(sbb.d(eax_3, eax_3, eax_2 != 0))
}
