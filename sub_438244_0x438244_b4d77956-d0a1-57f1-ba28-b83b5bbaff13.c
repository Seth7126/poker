// ============================================================
// 函数名称: sub_438244
// 虚拟地址: 0x438244
// WARP GUID: b4d77956-d0a1-57f1-ba28-b83b5bbaff13
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_437925, sub_438056
// ============================================================

void __convention("regparm")sub_438244(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0x14] s> 0)
    if (arg1[0x14] s> 0)
        arg1[0x14] -= 1
    
    if (arg1[0x13].b == 0)
        return 
    
    arg1[0x13].b = 0
    int32_t ebx
    ebx.w = 0xfff0
    sub_4032ac(arg1)
}
