// ============================================================
// 函数名称: sub_43a014
// 虚拟地址: 0x43a014
// WARP GUID: abb7cc9c-1c29-5a2e-ab91-11f4ecd725bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreatePopupMenu, CreateMenu
// [内部子函数调用]: sub_4391ac, sub_439e08, sub_403248
// [被调用的父级函数]: sub_43b83c, sub_439b68, sub_4445ed, sub_43b890, sub_439f30, sub_43cbe0, sub_43e014, sub_443c64
// ============================================================

int32_t __convention("regparm")sub_43a014(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x28) == 0)
    if (*(arg1 + 0x28) == 0)
        if (sub_403248(*(arg1 + 4), 0x438e1c) == 0)
            *(arg1 + 0x28) = CreateMenu()
        else
            *(arg1 + 0x28) = CreatePopupMenu()
        
        if (*(arg1 + 0x28) == 0)
            sub_4391ac(data_530044)
            noreturn
        
        sub_439e08(arg1)
    
    return *(arg1 + 0x28)
}
