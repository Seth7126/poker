// ============================================================
// 函数名称: sub_42c620
// 虚拟地址: 0x42c620
// WARP GUID: bff711a2-404a-50bf-bfa4-e0cfb51ea3a8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c680
// [被调用的父级函数]: sub_42cc28
// ============================================================

int32_t __convention("regparm")sub_42c620(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_10 = arg3
    int32_t* var_10 = arg3
    int32_t result = (*(*arg1 + 0x30))(arg3)
    
    if (result.b != 0)
        sub_42c680(arg1, arg2, arg3)
    
    return result
}
