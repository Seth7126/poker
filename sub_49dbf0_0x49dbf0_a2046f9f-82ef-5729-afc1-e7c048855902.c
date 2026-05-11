// ============================================================
// 函数名称: sub_49dbf0
// 虚拟地址: 0x49dbf0
// WARP GUID: a2046f9f-82ef-5729-afc1-e7c048855902
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078, sub_408ad8, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_49cb30
// ============================================================

char** __convention("regparm")sub_49dbf0(void* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    char* var_10 = nullptr
    void* i_3 = arg3
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c = 0
    void* eax_1 = sub_404078(arg1)
    
    if (i_3 == 0xffffffff)
        i_3 = sub_404078(arg2)
    
    int32_t eax_5 = sub_404078(arg2)
    void* eax_6 = eax_5 - eax_1
    
    if (add_overflow(eax_5, neg.d(eax_1)))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_6, 1))
        sub_403010()
        noreturn
    
    void* i_2
    
    if (i_3 s>= eax_6 + 1)
        int32_t eax_9 = sub_404078(arg2)
        void* eax_10 = eax_9 - eax_1
        
        if (add_overflow(eax_9, neg.d(eax_1)))
            sub_403010()
            noreturn
        
        i_2 = eax_10 + 1
        
        if (add_overflow(eax_10, 1))
            sub_403010()
            noreturn
    else
        i_2 = i_3
    
    void* i = i_2
    
    if (i s>= 1)
        do
            sub_404280(eax_1, i, arg2, &var_10)
            
            if (sub_408ad8(var_10, arg1) != 0)
                void* i_1 = i
                break
            
            i -= 1
        while (i != 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_49dcb8
    char** result = &var_10
    sub_403df8(result)
    return result
}
