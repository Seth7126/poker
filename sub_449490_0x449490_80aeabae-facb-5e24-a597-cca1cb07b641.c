// ============================================================
// 函数名称: sub_449490
// 虚拟地址: 0x449490
// WARP GUID: 80aeabae-facb-5e24-a597-cca1cb07b641
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA, GetCapture
// [内部子函数调用]: sub_40b3d8, sub_403248, sub_40b214, sub_449678, sub_40b22c
// [被调用的父级函数]: sub_448cc1, sub_43d917, sub_4462c8, sub_44293e, sub_4428ca, sub_447d2e, sub_445f30, sub_445b91, sub_4962c3, sub_42f06d
// ============================================================

int32_t __convention("regparm")sub_449490(int32_t arg1)
{
    // 第一条实际指令: if (GetCapture() != 0)
    if (GetCapture() != 0)
        SendMessageA(GetCapture(), 0x1f, 0, 0)
    
    if (sub_403248(sub_40b214(), 0x407d24) == 0)
        int32_t var_c_1 = sub_40b22c()
        sub_40b214()
        return sub_40b3d8()
    
    char result = sub_403248(sub_40b214(), 0x407d8c)
    
    if (result != 0)
        return result
    
    if (*(arg1 + 0xba) == 0)
        return sub_449678(arg1, sub_40b214())
    
    sub_40b214()
    *(arg1 + 0xbc)
    return (*(arg1 + 0xb8))()
}
