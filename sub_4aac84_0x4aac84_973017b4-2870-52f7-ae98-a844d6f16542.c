// ============================================================
// 函数名称: sub_4aac84
// 虚拟地址: 0x4aac84
// WARP GUID: 973017b4-2870-52f7-ae98-a844d6f16542
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410c00, sub_403e4c, sub_403248
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aac84(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, 0x4a9b30) == 0)
    if (sub_403248(arg2, 0x4a9b30) == 0)
        sub_410c00(arg1, arg2)
        noreturn
    
    sub_403e4c(&arg2[1], arg1[1])
    sub_403e4c(&arg2[2], arg1[2])
    sub_403e4c(&arg2[3], arg1[3])
    arg2[4].b = arg1[4].b
    *(arg2 + 0x11) = *(arg1 + 0x11)
    arg2[6].b = arg1[6].b
    arg2[5] = arg1[5]
    sub_403e4c(&arg2[7], arg1[7])
    return sub_403e4c(&arg2[8], arg1[8])
}
