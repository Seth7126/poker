// ============================================================
// 函数名称: sub_42563c
// 虚拟地址: 0x42563c
// WARP GUID: ec3a96dd-f151-5560-9160-032338a0ae53
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4116b4, sub_4115f8, sub_425af0, sub_425b2c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42563c(int32_t* arg1, WPARAM arg2, WPARAM arg3)
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
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4115f8(arg1)
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0xc))(ExceptionList, var_34, var_30, ExceptionList_1, var_28, var_24)
    int32_t ebx_1
    ebx_1.w = 0xffb6
    int32_t eax_4 = sub_4032ac(arg1[3], arg2)
    (*(*arg1 + 0xc))(arg1)
    (*(*arg1 + 0x20))()
    int32_t ebx_3
    ebx_3.w = 0xffb6
    int32_t eax_9 = sub_4032ac(arg1[3], arg3)
    ebx_3.w = 0xffb5
    sub_4032ac(arg1[3], arg2, eax_9)
    (*(*arg1 + 0x20))()
    int32_t ebx_4
    ebx_4.w = 0xffb5
    sub_4032ac(arg1[3], arg3, eax_4)
    
    if (arg2 != sub_425af0(arg1[3]))
        if (arg3 == sub_425af0(arg1[3]))
            sub_425b2c(arg1[3], arg2)
    else
        sub_425b2c(arg1[3], arg3)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_42574f
    return sub_4116b4(arg1)
}
