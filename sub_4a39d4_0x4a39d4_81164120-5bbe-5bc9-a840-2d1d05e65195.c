// ============================================================
// 函数名称: sub_4a39d4
// 虚拟地址: 0x4a39d4
// WARP GUID: 81164120-5bbe-5bc9-a840-2d1d05e65195
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49adfc, sub_4a3f84
// [被调用的父级函数]: sub_4a90cc
// ============================================================

char** __convention("regparm")sub_4a39d4(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    arg2.b = 1
    (*(*arg1 + 0x1c))()
    
    if (arg1[4].b != 0)
        sub_4a3f84(arg1, 1)
    
    char** result = sub_49adfc(*data_5308e0, esi, arg3)
    arg1[3] = result
    arg1[4].b = 1
    return result
}
