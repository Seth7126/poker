// ============================================================
// 函数名称: sub_4359e0
// 虚拟地址: 0x4359e0
// WARP GUID: c2ac9786-80f7-548d-b501-b6f9be4f1c2f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SystemParametersInfoA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_435a60
// ============================================================

int32_t __convention("regparm")sub_4359e0(void* arg1)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    int32_t var_4 = entry_ebx
    int32_t eax_2 = (*data_5302cc)(0x4b)
    char ebx_1 = (neg.d(sbb.d(entry_ebx, entry_ebx, eax_2 != 0))).b
    *(arg1 + 0x20) = ebx_1
    
    if (ebx_1 == 0)
        return neg.d(eax_2)
    
    return SystemParametersInfoA(SPI_GETWHEELSCROLLLINES, 0, arg1 + 0x10, 0)
}
