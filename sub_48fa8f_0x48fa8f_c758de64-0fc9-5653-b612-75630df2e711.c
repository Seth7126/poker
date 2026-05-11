// ============================================================
// 函数名称: sub_48fa8f
// 虚拟地址: 0x48fa8f
// WARP GUID: c758de64-0fc9-5653-b612-75630df2e711
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408968
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_48fa8f(char* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4 @ ebp)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    __builtin_memcpy(&arg4[-8], arg2, 0x10)
    __builtin_memcpy(&arg4[-4], arg1, 0x10)
    int32_t result = sub_408968(&arg4[-4], &arg4[-8], 0x10)
    *arg4
    return result
}
