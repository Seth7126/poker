// ============================================================
// 函数名称: sub_4ab06a
// 虚拟地址: 0x4ab06a
// WARP GUID: c092402e-79c9-56db-961b-8e45f02813e2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403844, sub_403898, sub_4a90cc, sub_4ab224
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4ab06a(int32_t* arg1, void* arg2, int32_t arg3, void* arg4 @ ebp, struct _EXCEPTION_REGISTRATION_RECORD* arg5 @ esi)
{
    // 第一条实际指令: *arg1 += arg1
    *arg1 += arg1
    char temp1 = *arg1
    *arg1 += arg1.b
    void* esp_1
    void* entry_ebx
    
    if (temp1 == neg.b(arg1.b))
        *(arg4 - 0x75) += arg2.b
        int32_t eflags
        void* eax_1
        eax_1.b = __in_al_dx(arg2.w, eflags)
        int32_t var_4_1 = arg3
        void* var_8_1 = entry_ebx
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg5
        int32_t edi
        int32_t var_10_1 = edi
        *(arg4 - 4) = eax_1
        sub_4a90cc(*(arg4 - 4), arg2, arg3, *(arg4 + 8), *(arg4 + 0xc), *(arg4 + 0x10), *(arg4 + 0x14), 
            *(arg4 + 0x18))
        *(arg4 - 4)
        (*(**(arg4 - 4) + 0x5c))()
        void* var_4_2 = arg4
        int32_t (* var_8_2)() = j_sub_403668
        TEB* fsbase
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        *(arg4 - 4)
        sub_4ab224()
        esp_1 = &__return_addr
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        arg5->__offset(0xffffffffffffffb0).b += (arg2.w - 1):1.b
        *(entry_ebx - 0x477f03bb) += arg3.b
        arg1.b = 0
        *arg1 = *arg1
        *(arg4 + 5) += (arg2.w - 2):1.b
        sub_403844()
        void arg_24
        esp_1 = &arg_24
        sub_403898(arg_24)
    void* result = *(arg4 - 4)
    
    if (*(result + 0xb0) == 0)
        result = (*(**(arg4 - 4) + 0x74))()
    
    *esp_1
    *(esp_1 + 4)
    *(esp_1 + 8)
    *(esp_1 + 0xc)
    *(esp_1 + 0x10)
    return result
}
