// ============================================================
// 函数名称: sub_411380
// 虚拟地址: 0x411380
// WARP GUID: 3325b31c-7715-5dc9-8753-bac25772ebdf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_403248, sub_41131c, sub_410fd0, sub_4104b0
// [被调用的父级函数]: sub_410e44
// ============================================================

int32_t** __convention("regparm")sub_411380(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, arg1[1]) == 0)
    if (sub_403248(arg2, arg1[1]) == 0)
        sub_4104b0(0, data_5305e0)
        noreturn
    
    sub_4103c8(arg1[2], arg2)
    arg2[1] = arg1
    arg2[2] = arg1[4]
    arg1[4] += 1
    (*(*arg1 + 0xc))()
    sub_410fd0(arg1)
    return sub_41131c(arg1)
}
