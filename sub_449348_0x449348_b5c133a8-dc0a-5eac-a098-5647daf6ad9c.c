// ============================================================
// 函数名称: sub_449348
// 虚拟地址: 0x449348
// WARP GUID: b5c133a8-dc0a-5eac-a098-5647daf6ad9c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4318ac, sub_403248
// [被调用的父级函数]: sub_52de46, _start
// ============================================================

int32_t __convention("regparm")sub_449348(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t* eax_1 = (*(arg2 - 0xc))()
    *arg3 = eax_1
    int32_t __saved_ebp
    int32_t* var_18 = &__saved_ebp
    int32_t (* var_1c)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*eax_1 + 0x2c))(ExceptionList, var_1c, var_18)
    char result = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    
    if (*(arg1 + 0x38) == 0)
        result = sub_403248(eax_1, &data_43f864)
        
        if (result != 0)
            result = sub_4318ac(eax_1)
            *(arg1 + 0x38) = eax_1
    
    return result
}
