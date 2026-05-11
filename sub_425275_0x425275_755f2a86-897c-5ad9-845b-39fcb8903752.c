// ============================================================
// 函数名称: sub_425275
// 虚拟地址: 0x425275
// WARP GUID: 755f2a86-897c-5ad9-845b-39fcb8903752
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_430df8, sub_42b778, sub_4252e5, sub_440e70
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_425275(char* arg1, void* arg2, void* arg3 @ ebp)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg3 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t var_4 = 0
    int32_t entry_ebx
    int32_t var_8 = entry_ebx
    void* var_14 = arg3
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** eax_1
    int32_t ecx
    int32_t ecx_1
    eax_1, ecx_1 = sub_42b778(ecx, arg3 - 4)
    eax_1.w = *(arg2 + 4)
    char eax_2
    void* ebp
    int32_t* esi_1
    eax_2, ebp, esi_1 = sub_440e70(ecx_1, *(arg3 - 4))
    char eax_4
    
    if (eax_2 != 0)
        entry_ebx.w = 0xffbc
        eax_4 = sub_4032ac(esi_1)
    
    if (eax_2 == 0 || eax_4 == 0)
        sub_430df8()
    else
        entry_ebx.w = 0xffec
        sub_4032ac(esi_1)
        *(arg2 + 0xc) = 1
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4252f5
    return sub_4252e5(ebp) __tailcall
}
