// ============================================================
// 函数名称: sub_46d884
// 虚拟地址: 0x46d884
// WARP GUID: 286e841f-825a-5d43-9149-cd9bd2cf08dc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408fd0, sub_4040c4, sub_404138, sub_408e1c, sub_409144, sub_408f48, sub_46f000, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_46d882, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_46d884(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t var_14 = 0
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4040c4(&var_c, *(arg1 + 0xa64), "\data\settings\indexes.txt")
    sub_409144(var_c)
    sub_4040c4(&var_10, *(arg1 + 0xa64), "\data\settings\indexes.txt")
    sub_408fd0(sub_408f48(var_10))
    int32_t esi_1 = *(arg1 + 0x10d4)
    int32_t esi_2 = esi_1 + 1
    
    if (add_overflow(esi_1, 1))
        sub_403010()
        noreturn
    
    int32_t edi_1 = *(arg1 + 0xab4)
    
    if (edi_1 s>= esi_2)
        int32_t i_1 = edi_1 - esi_2 + 1
        int32_t i
        
        do
            *(esp - 4) = *(arg1 + 0xa64)
            *(esp - 8) = "\data\settings\di_"
            sub_408e1c(esi_2, &var_14)
            *(esp - 0xc) = var_14
            *(esp - 0x10) = &data_46d9a4
            sub_404138(&var_8, 4)
            esp = &esp[9]
            sub_46f000(arg1, esi_2, var_8, esi_2, i_1)
            esi_2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_46d952
    return sub_403e1c(&var_14, 4)
}
