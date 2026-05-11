// ============================================================
// 函数名称: sub_43ce08
// 虚拟地址: 0x43ce08
// WARP GUID: 0befd820-5634-580b-8e6f-fd1e705c4a26
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43d69c
// ============================================================

void* __convention("regparm")sub_43ce08(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x34) == 0 && *(arg1 + 0x3c) == 0)
    if (*(arg1 + 0x34) == 0 && *(arg1 + 0x3c) == 0)
        return 0
    
    arg1.b = 1
    return arg1
}
