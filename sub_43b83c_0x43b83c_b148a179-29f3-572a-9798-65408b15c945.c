// ============================================================
// 函数名称: sub_43b83c
// 虚拟地址: 0x43b83c
// WARP GUID: b148a179-29f3-572a-9798-65408b15c945
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CheckMenuItem
// [内部子函数调用]: sub_43a014, sub_43b7f4
// [被调用的父级函数]: sub_43992c, sub_43b7f4, sub_43bf0c
// ============================================================

void __convention("regparm")sub_43b83c(uint32_t arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x2c))
    if (arg2 == *(arg1 + 0x2c))
        return 
    
    *(arg1 + 0x2c) = arg2
    void* edi_1 = *(arg1 + 0x58)
    
    if (edi_1 != 0 && (*(arg1 + 0x20) & 2) == 0)
        int32_t eax
        eax.b = arg2
        CheckMenuItem(sub_43a014(edi_1), zx.d(*(arg1 + 0x44)), *((eax << 2) + &data_52e8e8))
    
    if (arg2 != 0 && *(arg1 + 0x31) != 0)
        sub_43b7f4(arg1)
}
