// ============================================================
// 函数名称: sub_4af561
// 虚拟地址: 0x4af561
// WARP GUID: 8eb3a41c-c022-5109-b809-aeb87b1254ce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_403430, sub_4ac698, sub_40cc98
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4af561(char* arg1, int32_t arg2, void* arg3 @ ebp)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg3 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    sub_403430(arg1, arg2)
    sub_40cc98(&arg1[0x108])
    sub_40cc98(&arg1[0x104])
    sub_40cc98(&arg1[0x10c])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_4ac698(arg1, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
