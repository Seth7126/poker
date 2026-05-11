// ============================================================
// 函数名称: sub_42a78b
// 虚拟地址: 0x42a78b
// WARP GUID: 38fdfaf6-a21d-59f1-8700-bff956a65569
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403260, sub_42b778, sub_404188, sub_4368f0, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_42a78b(char* arg1, int16_t arg2, void* arg3 @ ebp, int32_t* arg4 @ edi)
{
    // 第一条实际指令: *arg4 += 1
    *arg4 += 1
    *arg1 += arg1.b
    char temp0 = *0x25282073
    *0x25282073 += arg1:1.b
    struct _EXCEPTION_REGISTRATION_RECORD** esp
    TEB* fsbase
    char* entry_ebx
    bool cond:0
    
    if (temp0 + arg1:1.b u>= temp0)
        arg1:1.b = 0xf
        char temp1_1 = *arg1
        *arg1 += arg1.b
        cond:0 = temp1_1 == neg.b(arg1.b)
    label_42a7c7:
        *(esp - 4) = *(arg3 - 4)
        int32_t* eax_4 = *(entry_ebx + 0x10)
        sub_403260(eax_4, &data_436278)
        sub_404188(*(esp - 4), eax_4[0x15])
        int32_t eax_6
        
        if (cond:0)
            eax_6.b = 1
    else
        *(arg3 - 0x75) += arg2.b
        int32_t eflags
        arg1.b = __in_al_dx(arg2, eflags)
        int32_t var_4_1 = 0
        char* var_8_1 = entry_ebx
        entry_ebx = arg1
        void* var_c_1 = arg3
        int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_4037f0
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        esp = &ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        char eax_1 = sub_4368f0(entry_ebx)
        cond:0 = eax_1 == 0
        
        if (eax_1 != 0)
            *(entry_ebx + 0x18)
            int32_t ecx
            sub_42b778(ecx, arg3 - 4)
            goto label_42a7c7
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_42a806
    sub_403df8(arg3 - 4)
    return arg3 - 4
}
