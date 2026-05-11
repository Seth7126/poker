// ============================================================
// 函数名称: sub_41e04c
// 虚拟地址: 0x41e04c
// WARP GUID: 3c2f6b61-5763-5b43-87e6-840d70e732a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41ce4c, sub_41e2f0
// [被调用的父级函数]: sub_41fc28, sub_41932c, sub_4375ac, sub_41dd80, sub_437168, sub_437e28, sub_4377d0, sub_419592, sub_4b4f8c, sub_41e21c, sub_41f1b0, sub_44bb04
// ============================================================

int32_t __convention("regparm")sub_41e04c(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[9] == 0)
    if (arg1[9] == 0)
        sub_41e2f0(arg1)
        int32_t edx_1
        edx_1.b = 1
        int32_t* eax_1 = sub_41ce4c(&data_41ccd4, edx_1, arg1)
        arg1[9] = eax_1
        eax_1[0xb] = arg1
        eax_1[0xa] = *(*arg1 + 0x10)
        eax_1[0xd] = arg1
        eax_1[0xc] = sub_41dd34
    
    return arg1[9]
}
