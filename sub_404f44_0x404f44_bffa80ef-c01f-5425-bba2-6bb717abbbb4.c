// ============================================================
// 函数名称: sub_404f44
// 虚拟地址: 0x404f44
// WARP GUID: bffa80ef-c01f-5425-bba2-6bb717abbbb4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404ef4, sub_404d30, sub_404f24, sub_404cec, sub_404e50
// [被调用的父级函数]: sub_405038, sub_4b5e24
// ============================================================

int16_t* __convention("regparm")sub_404f44(int16_t* arg1, int16_t* arg2, enum VARENUM arg3)
{
    // 第一条实际指令: int16_t* var_18 = arg1
    int16_t* var_18 = arg1
    arg1.w = *arg2
    
    if (arg3.w == arg1.w)
        return sub_404d30(var_18, arg2)
    
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
    int16_t var_14[0x8]
    int32_t __saved_ebp
    TEB* fsbase
    
    if (arg1.w == 0x100)
        if (arg3.w != 8)
            var_14[0] = 0
            sub_404f24(&var_14, arg2)
            int32_t* var_20 = &__saved_ebp
            int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            sub_404e50(var_18, &var_14, arg3)
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = ExceptionList
            fsbase->NtTib.ExceptionList = ExceptionList_1
            return sub_404cec(&var_14, ExceptionList_1, var_20, 0x405033)
        
        return sub_404f24(var_18, arg2)
    
    if (arg3.w != 0x100 || arg1.w == 0x101)
        return sub_404e50(var_18, arg2, arg3)
    
    if (arg1.w == 8)
        return sub_404ef4(var_18, arg2, arg3)
    
    var_14[0] = 0
    arg3.w = 8
    int32_t ecx_2 = sub_404e50(&var_14, arg2, arg3)
    int32_t* var_20_2 = &__saved_ebp
    int32_t (* var_24_1)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_404ef4(var_18, &var_14, ecx_2)
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList_2
    return sub_404cec(&var_14, ExceptionList_2, var_20_2, 0x405033)
}
