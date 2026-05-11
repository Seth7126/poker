// ============================================================
// 函数名称: sub_514178
// 虚拟地址: 0x514178
// WARP GUID: 9cf25044-97c9-5f22-a3b3-70d4d3f0719b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_50d2f4, sub_403010, sub_515920, sub_50d52c
// [被调用的父级函数]: sub_511fd8
// ============================================================

int32_t __convention("regparm")sub_514178(void* arg1)
{
    // 第一条实际指令: void var_8c
    void var_8c
    int32_t ecx
    sub_50d52c(ecx, &var_8c)
    int32_t __saved_ebp
    int32_t* var_9c = &__saved_ebp
    int32_t (* var_a0)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_88 = 9
    char var_85 = 1
    int32_t var_68
    __builtin_strncpy(&var_68, "\nREF", 4)
    void var_64
    void* edi = &var_64
    void* const esi = "RESHMSG"
    *edi = *esi
    void* edi_1 = edi + 4
    void* esi_1 = esi + 4
    *edi_1 = *esi_1
    *(edi_1 + 2) = *(esi_1 + 2)
    char var_87 = 2
    char var_86 = 4
    
    if (sub_50d2f4() != 0)
        int32_t eax_5 = *(*data_530084 + 0x48)
        
        if (eax_5 != 3 && eax_5 != 7)
            char var_81_1 = (*(data_530598 + 0x14)).b
            char var_80_1 = (*(data_530598 + 0x18)).b
            char var_7f_1 = (*(data_530598 + 0x1c)).b
            char var_7e_1 = (*(*data_5301f4 + 0x20084)).b
    
    int32_t result = sub_515920(arg1, &var_8c, nullptr)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t eax_19 = *(arg1 + 0x350)
    
    if (eax_19 s> 0 && eax_19 s<= 8)
        uint32_t eax_20 = GetTickCount()
        *(arg1 + 0x350)
        bool o_1 = unimplemented  {imul edx, dword [edx+0x350], 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(arg1 + *(arg1 + 0x350) * 0x3a4 + 0x350) = eax_20
    
    return result
}
