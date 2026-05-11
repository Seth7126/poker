// ============================================================
// 函数名称: sub_45324c
// 虚拟地址: 0x45324c
// WARP GUID: 34bf6cf3-16c6-53cf-bd77-abe0dbfd7603
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_45324c(char* arg1, int32_t arg2, void* arg3 @ ebp, char* arg4 @ esi, int32_t arg5 @ edi, int80_t arg6 @ st0)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    arg6 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    *(arg5 * 9) += arg1:1.b
    *arg1 += arg1.b
    arg6 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    char temp1 = *0xdc0000ff
    *0xdc0000ff += arg1:1.b
    arg1.b = adc.b(arg1.b, 0x53, temp1 + arg1:1.b u< temp1)
    *arg4 += arg1:1.b
    *arg1 += 1
    *(arg3 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    void* var_4 = arg3
    int32_t (* var_8)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_532080 += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
