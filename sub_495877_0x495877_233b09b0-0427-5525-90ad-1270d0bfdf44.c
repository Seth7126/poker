// ============================================================
// 函数名称: sub_495877
// 虚拟地址: 0x495877
// WARP GUID: 233b09b0-0427-5525-90ad-1270d0bfdf44
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: getpeername, inet_ntoa
// [内部子函数调用]: sub_494e64, sub_4038c8, sub_4953dc, sub_403df8, sub_4953e8, sub_403fb0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_495877(char* arg1, void* arg2 @ ebp, void* arg3 @ edi, int32_t arg4, void* arg5, int32_t arg6, int32_t* arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    *entry_ebx -= 1
    *arg1 += arg1.b
    char temp1 = *(arg3 + 0x65)
    *(arg3 + 0x65) += arg1:1.b
    int32_t ecx
    char* edx
    struct _EXCEPTION_REGISTRATION_RECORD** esp
    TEB* fsbase
    
    if (temp1 != neg.b(arg1:1.b) && temp1 + arg1:1.b u>= temp1)
        int32_t eflags
        int16_t* edi_1
        int16_t temp0_1
        temp0_1, edi_1 = __insd(__return_addr, arg7.w, eflags)
        *edi_1 = temp0_1
        int32_t gsbase
        *(gsbase + arg5 - 0x75) += arg7.b
        int32_t eax
        eax.b = __in_al_dx(arg7.w, eflags)
        arg4 = arg6
        *(arg5 - 4) = eax
        sub_4953dc(*(arg5 - 4))
        __return_addr = arg5
        int32_t (* var_4_1)(void* arg1, void* arg2) = j_sub_4037f0
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        sub_403df8(arg7)
        
        if (*(*(arg5 - 4) + 8) == 0)
            int32_t result = sub_4038c8(ExceptionList, var_4_1)
            *arg5
            return result
        
        *(arg5 - 8) = 0x10
        arg2 = sub_494e64(getpeername(*(*(arg5 - 4) + 4), arg5 - 0x18, arg5 - 8))
        char* eax_9
        eax_9, ecx = inet_ntoa(*(arg2 - 0x14))
        esp = &ExceptionList
        edx = eax_9
    
    sub_403fb0(ecx, edx)
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = &data_495914
    return sub_4953e8(*(arg2 - 4))
}
