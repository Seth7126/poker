// ============================================================
// 函数名称: sub_413f0c
// 虚拟地址: 0x413f0c
// WARP GUID: 8057daa9-ab60-53f2-b382-9d9e589bf10a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4103c8, sub_413cb8, sub_4038c8, sub_413dc8, sub_413e68, sub_410580, sub_403e1c, sub_41512c
// [被调用的父级函数]: sub_414154
// ============================================================

int32_t (* __convention("regparm")sub_413f0c(int32_t* arg1))(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_2c = ebx
    int32_t esi
    int32_t var_30 = esi
    int32_t edi
    int32_t var_34 = edi
    int32_t* var_18 = nullptr
    int32_t (* var_1c)() = nullptr
    int32_t edx
    int32_t var_c = edx
    int32_t* var_38 = &var_4
    int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_41512c(arg1, &var_1c, 
        sub_41512c(arg1, &var_18, (*(*arg1 + 0x24))(ExceptionList, var_3c, var_38)))
    int32_t* var_24 = arg1[0xb]
    int32_t eax_6 = arg1[7]
    int32_t* ExceptionList_3 = &var_4
    int32_t (* result)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList_2
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    ExceptionList_2 = ExceptionList_3
    char var_5
    
    if (ExceptionList_2 == 0)
        if ((var_5 & 1) == 0)
            var_18 = &var_4
            sub_413cb8(var_18)
            esp = &ExceptionList_2
        else
            var_18 = &var_4
            sub_413e68(var_18)
            esp = &ExceptionList_2
    
    if (ExceptionList_2 != 0)
        var_18 = &var_4
        var_1c = j_sub_40353c
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_1
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_4 = ExceptionList_2
        ExceptionList_4->__offset(0x20).w |= 1
        
        if ((var_5 & 1) == 0)
            var_24 = &var_4
            sub_413dc8(var_24)
        
        struct _EXCEPTION_REGISTRATION_RECORD* var_8
        
        if (ExceptionList_2 == 0)
            fsbase->NtTib.ExceptionList = ExceptionList_1
            sub_4038c8(ExceptionList_2, result)
            fsbase->NtTib.ExceptionList = var_8
            __return_addr = &data_4140d8
            return sub_403e1c(&var_1c, 2)
        
        if ((ExceptionList_2->__offset(0x21).b & 2) != 0)
            *(result + 0x1c) = ExceptionList_2
        
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_5 = ExceptionList_2
        ExceptionList_5->__offset(0x20).w |= 2
        ExceptionList_2->Next->__offset(0x14).d()
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_6 = ExceptionList_2
        ExceptionList_6->__offset(0x20).w &= 0xfffd
        
        if ((var_5 & 2) != 0)
            int32_t ebx_1
            ebx_1.w = 0xfffa
            sub_4032ac(*(result + 0x2c), ExceptionList_2, ExceptionList_1)
        
        if ((var_5 & 1) != 0 || (ExceptionList_2->__offset(0x21).b & 2) != 0)
            if (sub_410580(*(result + 0x34), ExceptionList_2) s< 0)
                sub_4103c8(*(result + 0x34), ExceptionList_2)
        else
            sub_4103c8(*(result + 0x34), ExceptionList_2)
        
        esp = &var_8
        fsbase->NtTib.ExceptionList = ExceptionList_2
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = 0x4140b6
    *(result + 0x2c) = var_24
    *(result + 0x1c) = eax_6
    return result
}
