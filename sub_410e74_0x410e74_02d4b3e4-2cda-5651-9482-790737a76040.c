// ============================================================
// 函数名称: sub_410e74
// 虚拟地址: 0x410e74
// WARP GUID: 02d4b3e4-2cda-5651-9482-790737a76040
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410d4c, sub_410618, sub_410d28
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_410e74(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = sub_410d4c(arg1)
    int32_t result = sub_410d4c(arg1)
    
    if (result s< 0 || arg2 == result)
        return result
    
    sub_410618(*(*(arg1 + 4) + 8), result, arg2)
    return sub_410d28(arg1, 1)
}
