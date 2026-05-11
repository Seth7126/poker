// ============================================================
// 函数名称: sub_51d170
// 虚拟地址: 0x51d170
// WARP GUID: 6b3427f0-6e2a-5b8a-a2f0-3a63cc3b7a48
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_403e90, sub_40422c, sub_404078, sub_4088f0, sub_403e1c, sub_404280, sub_403010
// [被调用的父级函数]: sub_51d270
// ============================================================

int32_t __convention("regparm")sub_51d170(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    void* var_14 = nullptr
    void* var_10 = nullptr
    void* var_c = arg2
    void* var_8 = arg1
    sub_40422c(var_8)
    sub_40422c(var_c)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4088f0(var_8, &var_10)
    sub_403e90(&var_8, var_10)
    sub_4088f0(var_c, &var_14)
    sub_403e90(&var_c, var_14)
    int32_t esi_1 = 0
    
    for (void* i = sub_40c024(var_8, var_c); i s> 0; i = sub_40c024(var_8, var_c))
        int32_t temp0_1 = esi_1
        esi_1 += 1
        
        if (add_overflow(temp0_1, 1))
            sub_403010()
            noreturn
        
        int32_t eax_9 = sub_404078(var_c)
        int32_t eax_11 = sub_404078(var_8)
        
        if (add_overflow(eax_9, neg.d(eax_11)))
            sub_403010()
            noreturn
        
        void* eax_13 = sub_404078(var_8)
        void* edx_6 = eax_13 + i
        
        if (add_overflow(eax_13, i))
            sub_403010()
            noreturn
        
        if (add_overflow(edx_6, 1))
            sub_403010()
            noreturn
        
        sub_404280(eax_9 - eax_11, edx_6 + 1, var_c, &var_c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2 @ esi, int32_t arg3, int32_t arg4) =
        sub_51d267
    return sub_403e1c(&var_14, 4)
}
