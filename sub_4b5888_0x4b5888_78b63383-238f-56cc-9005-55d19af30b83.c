// ============================================================
// 函数名称: sub_4b5888
// 虚拟地址: 0x4b5888
// WARP GUID: 78b63383-238f-56cc-9005-55d19af30b83
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b5888(char* arg1, int32_t arg2, int16_t arg3, void* arg4 @ ebp, int80_t arg5 @ st0)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    arg5 f- fconvert.t(*(entry_ebx + (arg2 << 1)))
    arg3:1.b += arg3.b
    *arg1 += 1
    char temp1 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp1 + entry_ebx.b u< temp1)
    arg2:1.b += arg3.b
    *arg1 += 1
    char temp2 = arg1:1.b
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x53, temp2 + entry_ebx.b u< temp2)
    entry_ebx:1.b += arg3.b
    *arg1 += 1
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    void* var_4 = arg4
    int32_t (* var_8)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_532ee8 += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
