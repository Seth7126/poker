// ============================================================
// 函数名称: sub_428d48
// 虚拟地址: 0x428d48
// WARP GUID: ccc6389c-58e6-5135-9c6b-90497b28b4fa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_4105a0, sub_428d20, sub_402754, sub_428cec
// [被调用的父级函数]: sub_429540
// ============================================================

int32_t __convention("regparm")sub_428d48(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_402754(8)
    int32_t* eax = sub_402754(8)
    *eax = arg2
    int32_t __saved_ebp
    HWND eax_2 = sub_428d20(&__saved_ebp)
    eax[1] = eax_2
    int32_t var_c
    
    if (sub_428cec(arg1, eax_2, &var_c) == 0)
        return sub_4103c8(arg1, eax)
    
    return sub_4105a0(arg1, var_c, eax)
}
