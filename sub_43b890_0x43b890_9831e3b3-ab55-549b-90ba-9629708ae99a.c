// ============================================================
// 函数名称: sub_43b890
// 虚拟地址: 0x43b890
// WARP GUID: 9831e3b3-ab55-549b-90ba-9629708ae99a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnableMenuItem
// [内部子函数调用]: sub_43a014, sub_43b964
// [被调用的父级函数]: sub_443ce0, sub_43994c, sub_43bf0c
// ============================================================

void __convention("regparm")sub_43b890(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x2d))
    if (arg2 == *(arg1 + 0x2d))
        return 
    
    *(arg1 + 0x2d) = arg2
    int32_t eax_2
    
    if (*data_530a60 == 2)
        eax_2 = sub_43b964(arg1)
    
    void* edi_1
    
    if (*data_530a60 != 2 || eax_2 == 0)
        edi_1 = arg1[0x16]
    
    if ((*data_530a60 == 2 && eax_2 != 0) || (edi_1 != 0 && *(edi_1 + 0x60) != 0))
        (*(*arg1 + 0x38))()
        return 
    
    void* edi_2 = arg1[0x16]
    
    if (edi_2 != 0 && (arg1[8].b & 2) == 0)
        int32_t eax_4
        eax_4.b = arg2
        EnableMenuItem(sub_43a014(edi_2), zx.d(arg1[0x11].w), *((eax_4 << 2) + &data_52e8f0))
    
    (*(*arg1 + 0x38))()
}
