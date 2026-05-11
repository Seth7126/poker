// ============================================================
// 函数名称: sub_49110f
// 虚拟地址: 0x49110f
// WARP GUID: 088dfaa9-8704-5893-83c6-12061bbb9efd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49110f(char* arg1, uint16_t arg2, void* arg3, void* arg4 @ ebp, void* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *0x45000000 -= 1
    *0x45000000 -= 1
    *(arg3 + 0x6e) &= arg3:1.b
    *(arg5 + 0x6a) &= arg1:1.b
    int32_t eflags
    uint8_t* edi_1
    uint8_t temp0
    temp0, edi_1 = __insb(arg6 - 1, arg2, eflags)
    *edi_1 = temp0
    int32_t gsbase
    arg1[gsbase]
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    arg1.b = __in_al_dx(arg2, eflags)
    void* var_4 = arg4
    int32_t (* var_8)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_532124 += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
