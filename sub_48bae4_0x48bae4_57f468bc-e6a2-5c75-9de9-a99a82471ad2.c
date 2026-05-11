// ============================================================
// 函数名称: sub_48bae4
// 虚拟地址: 0x48bae4
// WARP GUID: 57f468bc-e6a2-5c75-9de9-a99a82471ad2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_402b4c, sub_48b5c0, sub_403010
// [被调用的父级函数]: sub_488509, sub_484e24
// ============================================================

int32_t __fastcallsub_48bae4(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t edi = arg4
    int32_t edi = arg4
    (*data_53006c)(0xde1)
    (*data_53006c)(0xb50)
    (*data_530034)(0xbe2)
    (*data_530334)(0x302, 0x303)
    
    if (edi s> 0)
        int32_t temp2_1 = edi
        edi -= 1
        
        if (add_overflow(temp2_1, 0xffffffff))
            sub_403010()
            noreturn
    
    bool o_2 = unimplemented  {imul edi}
    
    if (o_2)
        sub_403010()
        noreturn
    
    int32_t eax_10
    int32_t edx
    eax_10, edx = sub_402b4c(float.t(arg5 * edi))
    
    if (eax_10 s>> 0x1f != edx)
        sub_403008()
        noreturn
    
    if (add_overflow(edi, 1))
        sub_403010()
        noreturn
    
    bool o_4 = unimplemented  {imul edi, dword [ebp+0x1c]}
    
    if (o_4)
        sub_403010()
        noreturn
    
    int32_t eax_13
    int32_t edx_1
    eax_13, edx_1 = sub_402b4c(float.t((edi + 1) * arg5))
    
    if (eax_13 s>> 0x1f != edx_1)
        sub_403008()
        noreturn
    
    if (add_overflow(eax_10, 5))
        sub_403010()
        noreturn
    
    int32_t __saved_ebp
    sub_48b5c0(0, 4, 1, 0, 5, eax_10 + 5, arg1, &__saved_ebp)
    
    if (add_overflow(arg1, 0xffffffde))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_10, arg2))
        sub_403010()
        noreturn
    
    sub_48b5c0(8, 2, 0, 1, 0x27, 5, arg1 - 0x22, &__saved_ebp)
    
    if (add_overflow(arg1, 0xffffffde))
        sub_403010()
        noreturn
    
    int32_t eax_24 = eax_13 - eax_10
    
    if (add_overflow(eax_13, neg.d(eax_10)))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_24, 0xfffffff0))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_10, arg2))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_10 + arg2, 8))
        sub_403010()
        noreturn
    
    sub_48b5c0(0, 0, 1, 0, 5, eax_24 - 0x10, arg1 - 0x22, &__saved_ebp)
    
    if (add_overflow(arg1, 0xffffffde))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_13, arg2))
        sub_403010()
        noreturn
    
    sub_48b5c0(0xfffffff8, 3, 1, 1, 0x27, 5, arg1 - 0x22, &__saved_ebp)
    int32_t eax_30 = arg7 - eax_13
    
    if (add_overflow(arg7, neg.d(eax_13)))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_30, 0xfffffffb))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_13 + arg2, 5))
        sub_403010()
        noreturn
    
    sub_48b5c0(0, 2, 1, 0, 5, eax_30 - 5, arg1, &__saved_ebp)
    
    if (add_overflow(arg7, arg2))
        sub_403010()
        noreturn
    
    sub_48b5c0(0, 0, 1, 1, arg6, 5, arg1, &__saved_ebp)
    
    if (add_overflow(arg1, arg6))
        sub_403010()
        noreturn
    
    if (add_overflow(arg2, 5))
        sub_403010()
        noreturn
    
    sub_48b5c0(0, 0, 0, 0, 5, arg7, arg1 + arg6, &__saved_ebp)
    sub_48b5c0(0, 0, 0, 1, arg6, 5, arg1, &__saved_ebp)
    
    if (*(arg3 + 0xcf4) == 0)
        (*data_530034)(0xb50)
    
    (*data_53006c)(0xbe2)
    return (*data_530034)(0xde1)
}
