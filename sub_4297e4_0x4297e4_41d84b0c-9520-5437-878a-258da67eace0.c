// ============================================================
// 函数名称: sub_4297e4
// 虚拟地址: 0x4297e4
// WARP GUID: 41d84b0c-9520-5437-878a-258da67eace0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4296ec
// [被调用的父级函数]: sub_429f30, sub_4298b4
// ============================================================

int32_t __convention("regparm")sub_4297e4(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = *(data_531764 + 4)
    int32_t esi = *(data_531764 + 4)
    
    if (esi == 0)
        return 0
    
    LRESULT eax_5 = sub_4296ec(data_531764, arg1, *(data_531764 + 8), data_531764 + 0xc, esi)
    int32_t eax_6 = neg.d(eax_5)
    return neg.d(sbb.d(eax_6, eax_6, eax_5 != 0))
}
