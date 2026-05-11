// ============================================================
// 函数名称: sub_429194
// 虚拟地址: 0x429194
// WARP GUID: 75dab2aa-5fdf-5773-851d-06b15d57460a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_429018, sub_403248
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_429194(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_429018(arg1, arg2)
    sub_429018(arg1, arg2)
    char result = sub_403248(arg2, 0x426f44)
    
    if (result == 0)
        return result
    
    *(arg1 + 0x54) = arg2[0x15].b
    *(arg1 + 0x58) = arg2[0x16]
    int32_t edx_2
    edx_2.b = arg2[0x1b].b
    *(arg1 + 0x6c) = edx_2.b
    __builtin_memcpy(arg1 + 0x44, &arg2[0x11], 0x10)
    int32_t* var_10_2 = arg2
    __builtin_memcpy(arg1 + 0x5c, &arg2[0x17], 0x10)
    arg2[0x10]
    return (*(**(arg1 + 0x40) + 8))()
}
