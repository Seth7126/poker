// ============================================================
// 函数名称: sub_412410
// 虚拟地址: 0x412410
// WARP GUID: dc6cda05-1d21-58f8-9580-2dc205183626
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980, sub_404868, sub_4117ac
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412410(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s< 0 || arg2 s>= arg1[4])
    if (arg2 s< 0 || arg2 s>= arg1[4])
        sub_4117ac(arg2, data_5307e4)
        noreturn
    
    (*(*arg1 + 0x74))()
    arg1[3]
    sub_404868()
    arg1[4] -= 1
    int32_t eax_4 = arg1[4]
    
    if (arg2 s< eax_4)
        sub_402980(arg1[3] + (arg2 << 3) + 8, arg1[3] + (arg2 << 3), (eax_4 - arg2) << 3)
    
    return (*(*arg1 + 0x70))()
}
