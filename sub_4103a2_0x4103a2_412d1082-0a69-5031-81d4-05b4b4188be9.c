// ============================================================
// 函数名称: sub_4103a2
// 虚拟地址: 0x4103a2
// WARP GUID: 412d1082-0a69-5031-81d4-05b4b4188be9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_403420
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4103a2(char* arg1, int32_t arg2)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    sub_403430(arg1, arg2)
    int32_t result = (*(*arg1 + 8))()
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
