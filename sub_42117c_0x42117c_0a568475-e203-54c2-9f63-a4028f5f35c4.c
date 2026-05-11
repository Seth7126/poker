// ============================================================
// 函数名称: sub_42117c
// 虚拟地址: 0x42117c
// WARP GUID: 0a568475-e203-54c2-9f63-a4028f5f35c4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42117c(char* arg1, char* arg2, int32_t arg3, int32_t arg4 @ esi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp1 = *arg1
    *arg1 += arg1.b
    char* var_4 = arg1
    int32_t var_8 = arg3
    char* var_c = arg2
    int32_t entry_ebx
    int32_t var_10 = entry_ebx
    int32_t* var_14 = &var_10
    int32_t var_1c = arg4
    int32_t edi
    int32_t var_20 = edi
    arg1.b = adc.b(arg1.b, *arg2, temp1 + arg1.b u< temp1)
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp2 = *arg1
    *arg1 += arg1.b
    int32_t* var_24 = &var_20
    arg1.b = adc.b(arg1.b, *arg2, temp2 + arg1.b u< temp2)
    *arg3
    char temp3 = *arg1
    *arg1 += arg1.b
    *arg2 = adc.b(*arg2, arg1.b, temp3 + arg1.b u< temp3)
    var_24:1.b += &var_24:1
    int32_t eflags
    char* eax
    eax.b = __in_al_dx(arg2.w, eflags)
    int32_t ebp = *arg1
    *eax += (arg3 + 2).b
    void* eax_1 = eax ^ *eax
    *(eax_1 + arg4 + 0x40) += eax_1:1.b
    *(eax_1 + 0x30) += entry_ebx:1.b
    *(arg3 + 2 + ebp - 0x2b47ffbd) += (eax_1 + 1).b
    *(eax_1 + 1) += arg2.b + 2
    undefined
}
