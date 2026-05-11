// ============================================================
// 函数名称: sub_429018
// 虚拟地址: 0x429018
// WARP GUID: 523e00aa-b1d4-592d-9abc-ff4247b150cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_428e3c, sub_403248
// [被调用的父级函数]: sub_429194
// ============================================================

int32_t __convention("regparm")sub_429018(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_428e3c(arg1, arg2)
    sub_428e3c(arg1, arg2)
    int32_t result = sub_403248(arg2, 0x426e30)
    
    if (result.b != 0)
        result = arg2[0xe]
        *(arg1 + 0x38) = result
    
    return result
}
