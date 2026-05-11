// ============================================================
// 函数名称: sub_412628
// 虚拟地址: 0x412628
// WARP GUID: e14fd0f0-27ac-5bec-a5cb-955275be938d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_412670, sub_4117ac
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412628(int32_t* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: if (arg1[6].b != 0)
    if (arg1[6].b != 0)
        sub_4117ac(0, data_5303c4)
        noreturn
    
    if (arg2 s>= 0 && arg2 s<= arg1[4])
        return sub_412670(arg1, arg2, arg3)
    
    sub_4117ac(arg2, data_5307e4)
    noreturn
}
