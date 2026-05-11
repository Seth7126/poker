// ============================================================
// 函数名称: sub_4137d4
// 虚拟地址: 0x4137d4
// WARP GUID: e11816df-de0e-50f6-aa21-1e343c909848
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_413600, sub_403330
// [被调用的父级函数]: 无
// ============================================================

void** __convention("regparm")sub_4137d4(void* arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: char var_10c[0x100]
    char var_10c[0x100]
    sub_404054(&var_10c, arg3, 0xff)
    void** result = sub_403330(*arg2, &var_10c)
    bool var_110 = result == 0
    
    if (*(arg1 + 0x3a) != 0)
        *(arg1 + 0x3c)
        (*(arg1 + 0x38))(&var_110, &result)
    
    if (var_110 == 0)
        return result
    
    sub_413600()
    noreturn
}
