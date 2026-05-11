// ============================================================
// 函数名称: sub_47c01b
// 虚拟地址: 0x47c01b
// WARP GUID: f671e563-326d-5c4e-b289-630293c76c34
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_402e28, sub_402bdc, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_47c01b(char* arg1, char* arg2, int32_t* arg3, int32_t* arg4 @ ebp)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg2 += arg3.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    sub_402e28(&arg4[-0x40], arg4[2])
    bool o = unimplemented  {imul eax, esi, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul ecx, edi, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t ecx_1
    ecx_1.b = 0x19
    int32_t result =
        sub_402bdc(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0xf0, &arg4[-0x40], ecx_1.b)
    *arg4
    return result
}
