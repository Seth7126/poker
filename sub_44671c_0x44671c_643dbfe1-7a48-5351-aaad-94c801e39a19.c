// ============================================================
// 函数名称: sub_44671c
// 虚拟地址: 0x44671c
// WARP GUID: 643dbfe1-7a48-5351-aaad-94c801e39a19
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ac88, sub_447c14
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_44671c(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[9] != 0)
    if (arg1[9] != 0)
        return sub_42ac88(arg1)
    
    return sub_447c14(data_5317dc)
}
