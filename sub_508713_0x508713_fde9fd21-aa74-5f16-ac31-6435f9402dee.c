// ============================================================
// 函数名称: sub_508713
// 虚拟地址: 0x508713
// WARP GUID: fde9fd21-aa74-5f16-ac31-6435f9402dee
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_508713(char* arg1, int16_t arg2, int32_t* arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg3 += arg3:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    arg1[9] = 1
    int32_t* result = *(arg4 + 8)
    *result = 0
    return result
}
