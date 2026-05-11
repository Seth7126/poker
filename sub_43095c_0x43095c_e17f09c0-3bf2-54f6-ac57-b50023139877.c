// ============================================================
// 函数名称: sub_43095c
// 虚拟地址: 0x43095c
// WARP GUID: e17f09c0-3bf2-54f6-ac57-b50023139877
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_43095c(void* arg1, char arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_18 = *arg3
    int32_t var_18 = *arg3
    void var_14
    var_14.d = arg3[1]
    char var_1c = arg2
    char var_10 = 0
    
    if (*(arg1 + 0x1d2) != 0)
        arg3.b = var_1c
        *(arg1 + 0x1d4)
        (*(arg1 + 0x1d0))(&var_10, &var_18)
    
    arg1.b = var_10
    return arg1
}
