// ============================================================
// 函数名称: sub_4078fa
// 虚拟地址: 0x4078fa
// WARP GUID: 82a82856-4418-5c32-9ce2-d01a6f20c6ad
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_4078fa(char* arg1 @ eax, uint16_t arg2, int32_t arg3, uint16_t* arg4, void* arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t eflags
    uint16_t temp0
    temp0, temp0 = __insb(__return_addr.w, arg2, eflags)
    void* const edi
    edi.w = temp0
    *edi = temp0
    uint8_t* edi_1
    uint8_t temp0_1
    temp0_1, edi_1 = __insb(edi, arg2, eflags)
    *edi_1 = temp0_1
    void* ExceptionList_1
    void* ExceptionList_3 = ExceptionList_1
    void* ExceptionList_2 = arg5
    int32_t arg_34
    int16_t edx_1 = arg_34.w
    char ecx = arg6.b
    int32_t eax = arg7
    uint16_t* esi_1 = __outsb(edx_1, *arg4, arg4, eflags)
    *(ExceptionList_3 + 0x53) &= ecx
    arg7 = arg3
    *(eax - 1) += (eax - 1).b
    *(eax - 1) += (eax - 1).b
    __outsd(edx_1, *esi_1, esi_1, eflags)
    TEB* fsbase
    
    if (ExceptionList_3 != 0xffffffff)
        *(ExceptionList_2 + 0x5314e82d) = rol.b(*(ExceptionList_2 + 0x5314e82d), 0)
        arg_34 = ExceptionList_3 + 1
        arg5 = &arg_34:3
        int32_t (* arg_2f)(void* arg1, void* arg2) = j_sub_4037f0
        ExceptionList_1 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_1:3
        data_5314ec += 1
        fsbase->NtTib.ExceptionList = ExceptionList_1
        arg5 = sub_4079bc
        return 0
    
    int32_t edx_2 = arg6
    *(eax - 1) += (eax - 1).b
    arg6 = ExceptionList_2
    arg_34 = arg3
    arg_34 = edx_2
    *(ExceptionList_3 + 0x54) += ecx
    arg5 = ExceptionList_2
    ExceptionList_1 = ExceptionList_2
    arg4 = ExceptionList_3 + 3
    arg3 = eax - 4
    int32_t arg_1c = eax - 4
    int32_t arg_18 = edx_2
    arg2:3.d = &arg_18:3
    arg2:3.d = ExceptionList_2
    *(eax - 4) += (eax - 4).b
    *(eax - 4) += (eax - 4).b
    int32_t ExceptionList_4 = ExceptionList_2
    ExceptionList_4 = ExceptionList_2
    int32_t arg_f = edx_2
    void* arg_c = ExceptionList_2 + 1
    *(eax - 5) += (eax - 5).b
    *(eax - 5) += (eax - 5).b
    void* arg_8 = ExceptionList_3 + 1
    void** arg_4 = &arg_8
    __return_addr = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_5314e8 += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
