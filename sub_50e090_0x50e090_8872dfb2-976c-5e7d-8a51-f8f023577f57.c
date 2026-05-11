// ============================================================
// 函数名称: sub_50e090
// 虚拟地址: 0x50e090
// WARP GUID: 8872dfb2-976c-5e7d-8a51-f8f023577f57
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50deb4, sub_40401c, sub_403010
// [被调用的父级函数]: sub_50e11c
// ============================================================

int32_t __convention("regparm")sub_50e090(void* arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 s>= 0 && arg2 s< *(arg1 + 0x90e0) && *(arg1 + 0x1215c) != 0)
        int32_t edi_1 = arg2 * 0x17
        bool o_1 = unimplemented  {imul edi, esi, 0x17}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t eax = *(arg1 + (edi_1 << 3) + 0x90e4)
        *(arg1 + 0x58) = eax
        *(*data_530454 + 8) = eax
        sub_40401c(arg3, arg1 + (edi_1 << 3) + 0x90f4)
        sub_50deb4(arg1, 0, arg2)
        esp = &var_8
        *(arg1 + 0x1b1f6) = 5
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_50e111
    return 0
}
