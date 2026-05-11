// ============================================================
// 函数名称: sub_426940
// 虚拟地址: 0x426940
// WARP GUID: 3b6ddf42-ba32-5d0a-8ee3-519f2f960e1b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_4268dc, sub_426874, sub_410c00, sub_4267c4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_426940(BOOL arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, 0x4177d8) != 0)
    if (sub_403248(arg2, 0x4177d8) != 0)
        return sub_4267c4(arg1, arg2)
    
    if (sub_403248(arg2, 0x417a7c) != 0)
        return sub_426874(arg1, arg2)
    
    if (sub_403248(arg2, &data_417940) != 0)
        return sub_4268dc(arg1, arg2)
    
    sub_410c00(arg1, arg2)
    noreturn
}
