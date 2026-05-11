// ============================================================
// 函数名称: sub_43d744
// 虚拟地址: 0x43d744
// WARP GUID: d5b209c0-d1b3-5f83-80b6-4b2d4d7700e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43d044
// [被调用的父级函数]: sub_43d234, sub_43d768, sub_43df80, sub_43d790
// ============================================================

void __convention("regparm")sub_43d744(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == arg1[9].b)
    if (arg2 == arg1[9].b)
        return 
    
    arg1[9].b = arg2
    *(arg1 + 0x35) = 0
    sub_43d044(arg1)
}
