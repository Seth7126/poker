// ============================================================
// 函数名称: sub_507dbc
// 虚拟地址: 0x507dbc
// WARP GUID: a40b4cbd-baad-51e2-92fa-0f0178b1e2e2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50d2f4, sub_50d9e0, sub_50e368, sub_50e22c
// [被调用的父级函数]: sub_4e6659, sub_513ae4, sub_50a598, sub_4d6ac0, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_507dbc(int32_t arg1)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    *(*data_530454 + 0x1c8) = 0
    char eax_5
    
    if (*data_530084 != 0)
        eax_5 = sub_50d9e0(*data_530084)
    
    if (*data_530084 != 0 && eax_5 != 0)
        if (arg1 == 1)
            return sub_50e368(*data_530084, 0, nullptr)
        
        if (arg1 == 2)
            sub_50e22c(*data_530084)
        else if (arg1 == 3)
            return sub_50e368(*data_530084, 1, "Internetspiel starten..")
    else if (*data_530084 != 0)
        *data_530454
        
        if (sub_50d2f4() != 0 && arg1 == 2)
            *(*data_530084 + 0x1b1f6) = 0
            sub_50e22c(*data_530084)
    
    return entry_result
}
