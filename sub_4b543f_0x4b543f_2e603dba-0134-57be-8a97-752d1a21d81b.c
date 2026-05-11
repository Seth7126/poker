// ============================================================
// 函数名称: sub_4b543f
// 虚拟地址: 0x4b543f
// WARP GUID: 2e603dba-0134-57be-8a97-752d1a21d81b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b4488, sub_4b4e2c, sub_403df8, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b543f(char* arg1, int32_t* arg2, int32_t* arg3, void* arg4 @ ebp, char* arg5 @ edi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    int32_t entry_ebx
    *arg5 += entry_ebx:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t var_4 = 0
    int32_t var_8 = 0
    int32_t var_c = entry_ebx
    int32_t esi
    int32_t var_10 = esi
    void* var_14 = arg4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg2)
    sub_4b4e2c(arg1, arg4 - 4)
    
    if (*(arg4 - 4) != 0)
        sub_4b4e2c(arg1, arg4 - 8)
        sub_4b4488(*(arg1 + 0x238), *(arg4 - 8), arg2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_4b54b6
    return sub_403e1c(arg4 - 8, 2)
}
