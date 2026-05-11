// ============================================================
// 函数名称: sub_40ff80
// 虚拟地址: 0x40ff80
// WARP GUID: cc1430f6-ef78-5d43-a532-bbf80a1c597f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41085c, sub_40ff48
// [被调用的父级函数]: sub_435eac, sub_41feac
// ============================================================

int32_t __convention("regparm")sub_40ff80(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_10 = arg2
    int32_t var_10 = arg2
    arg2.b = 1
    int32_t eax = sub_40ff48(arg1, arg2, "\tTIntConst", arg3, var_10)
    return sub_41085c(data_53162c, eax)
}
