// ============================================================
// 函数名称: sub_47a8a3
// 虚拟地址: 0x47a8a3
// WARP GUID: 9cbf1822-7b29-5e3c-a010-02b1e4745f11
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403e4c, sub_469d58, sub_40401c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_47a8a3(char* arg1, int32_t arg2, int32_t* arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg2:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t ebx
    int32_t var_208 = ebx
    int32_t esi
    int32_t var_20c = esi
    int32_t edi
    int32_t var_210 = edi
    *(arg4 - 4) = arg3
    int32_t* result_1 = *(arg4 + 8)
    bool o = unimplemented  {imul eax, edi, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t edx_2 = *(arg4 - 4) - 1
    
    if (edx_2 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul edx, edx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t ecx
    int32_t* ebp
    ecx, ebp = sub_469d58(arg1, arg4 - 0x104, 0xff, arg4 - 0x204, 
        sx.d(*(*(arg1 + 0xab0) + arg2 * 0x81c0 + (edx_2 + 1) * 0x118 - 0x84)), *(arg4 - 4), arg2)
    int32_t* result = result_1
    sub_40401c(sub_40401c(ecx, &ebp[-0x81]), &ebp[-0x41])
    
    if (ebp[3].b != 0 && *result_1 == 0)
        result = sub_403e4c(result_1, U"0")
    
    *ebp
    return result
}
