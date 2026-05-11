// ============================================================
// 函数名称: sub_4b3bf6
// 虚拟地址: 0x4b3bf6
// WARP GUID: 0ec42fa4-e5b5-5731-9566-70ff6c806c59
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b3b74
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b3bf6(char* arg1, int32_t arg2, char arg3, void* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: int32_t var_4 = arg2
    int32_t var_4 = arg2
    int32_t entry_ebx
    arg1[9] += entry_ebx.b
    int32_t var_8 = entry_ebx
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg5 + (arg6 << 3)) += arg3
    int32_t var_c = arg2
    arg1[0x52ff] += arg2.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    void* var_10 = arg4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_532d0c
    data_532d0c += 1
    
    if (temp1 == 0xffffffff)
        sub_4b3b74()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
