// ============================================================
// 函数名称: sub_43014c
// 虚拟地址: 0x43014c
// WARP GUID: caa9dabb-8c71-5ad3-a9d3-f9b305161583
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43014c(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_10 = arg3
    int32_t var_10 = arg3
    var_10.b = 1
    
    if (*(arg1 + 0x1e2) != 0)
        *(arg1 + 0x1e4)
        (*(arg1 + 0x1e0))(&var_10, arg2)
    
    char eax_2
    
    if (var_10.b == 0)
        eax_2 = 0
    else
        sub_42c754(arg1, arg3)
        eax_2 = 1
    
    var_10.b = eax_2
    return var_10.b
}
