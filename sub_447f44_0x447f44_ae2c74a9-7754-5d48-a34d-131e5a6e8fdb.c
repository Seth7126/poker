// ============================================================
// 函数名称: sub_447f44
// 虚拟地址: 0x447f44
// WARP GUID: ae2c74a9-7754-5d48-a34d-131e5a6e8fdb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: OemToCharA, CharLowerA, GetModuleFileNameA, LoadIconA
// [内部子函数调用]: sub_4481cc, sub_447f54, sub_404028, sub_409418, sub_403428, sub_41f53c, sub_41f90c, sub_40c1f0, sub_40c218
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_447f44(char* arg1, int32_t arg2, void* arg3, int32_t* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: void* const* var_4 = &__return_addr
    void* const* var_4 = &__return_addr
    int32_t eflags
    
    if (not(add_overflow(arg3, 1)))
        uint8_t* edi
        uint8_t temp0
        temp0, edi = __insb(arg6, arg2.w, eflags)
        *edi = temp0
        *arg1 += arg1.b
        *arg1 += arg1.b
        return sub_447f54(arg1, arg2) __tailcall
    
    arg2:1.b += arg1.b
    uint8_t* edi_1
    uint8_t temp0_1
    temp0_1, edi_1 = __insb(arg6, arg2.w, eflags)
    *edi_1 = temp0_1
    void* entry_ebx
    *(entry_ebx + 1) += arg5
    *(arg3 + 0x43c77044) = ror.b(*(arg3 + 0x43c77044), 0x64)
    int32_t ecx_2
    int16_t es
    ecx_2, es = __les_gprz_memp(*(arg3 + 1))
    *arg1 += arg1.b
    *(entry_ebx + 0x79) = 0
    *(entry_ebx + 0x8e) = 1
    arg2.b = 1
    int32_t* eax_1 = sub_41f53c(sub_41799a+0x222, arg2)
    *(entry_ebx + 0x89) = eax_1
    LoadIconA(*data_53027c, &data_4480e0)
    sub_41f90c(eax_1)
    void* eax_6 = *(entry_ebx + 0x89)
    *(eax_6 + 0xc) = entry_ebx + 1
    *(eax_6 + 8) = sub_449b10
    GetModuleFileNameA(*data_53027c, arg4 - 0x101, 0x100)
    void* eax_13 = sub_40c1f0(OemToCharA(arg4 - 0x101, arg4 - 0x101), 0x5c)
    
    if (eax_13 != 0)
        sub_409418(arg4 - 0x101, eax_13 + 1)
    
    void* eax_16 = sub_40c218(arg4 - 0x101, 0x2e)
    
    if (eax_16 != 0)
        *eax_16 = 0
    
    CharLowerA(&arg4[-0x40])
    void* const** esp = &var_4
    sub_404028(entry_ebx + 0x7d, arg4 - 0x101, 0x100)
    
    if (*data_52fef4 == 0)
        arg4 = sub_4481cc(entry_ebx + 1)
    
    *(entry_ebx + 0x4a) = 1
    *(entry_ebx + 0x4b) = 1
    *(entry_ebx + 0x4c) = 1
    *(entry_ebx + 0x8f) = 1
    *(entry_ebx + 0x91) = 0
    
    if (*(arg4 - 1) != 0)
        sub_403428(entry_ebx + 1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = var_4
        void arg_c
        esp = &arg_c
    
    *esp
    esp[1]
    *arg4
    return entry_ebx + 1
}
