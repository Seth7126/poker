// ============================================================
// 函数名称: sub_507860
// 虚拟地址: 0x507860
// WARP GUID: bc03a9b3-879f-5c3f-8073-964e68d8fba1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc6dc, sub_404138, sub_408e1c, sub_404080, sub_50a53c, sub_403df8, sub_403e1c, sub_50a4e0
// [被调用的父级函数]: sub_4e6659, sub_4c96bc, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_507860(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_1c
    __builtin_memset(&var_1c, 0, 0x18)
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg1)
    char* var_8
    sub_408e1c(*(*data_5301f4 + 0x4584), &var_8)
    sub_404080(arg1, var_8)
    sub_404080(arg1, U"_")
    char* var_c
    sub_408e1c(sub_50a53c(*(*data_5301f4 + 0x10020)), &var_c)
    sub_404080(arg1, var_c)
    char* var_10
    sub_408e1c(sub_50a53c(*(*data_5301f4 + 0x200a4)), &var_10)
    sub_404080(arg1, var_10)
    char* var_14
    sub_408e1c(sub_50a53c(*(*data_5301f4 + 0x200a0)), &var_14)
    sub_404080(arg1, var_14)
    char* var_18
    sub_408e1c(sub_50a53c(*(*data_5301f4 + 0x2009c)), &var_18)
    sub_404080(arg1, var_18)
    sub_404080(arg1, U"_")
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t edi_1 = 1
        int32_t i
        
        do
            *(esp - 4) = *arg1
            sub_408e1c(sub_4cc6dc(sub_50a4e0(edi_1)), &var_1c)
            *(esp - 8) = var_1c
            *(esp - 0xc) = &data_5079c8
            sub_404138(arg1, 3)
            esp = &esp[0xb]
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_5079ad
    return sub_403e1c(&var_1c, 6)
}
