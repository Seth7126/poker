// ============================================================
// 函数名称: sub_4746a0
// 虚拟地址: 0x4746a0
// WARP GUID: 4edf0869-7e43-595b-89d9-17f2580b98ef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404308, sub_4748fc, sub_40c024, sub_40422c, sub_4042c0, sub_4690a8, sub_40401c, sub_403df8, sub_403e1c
// [被调用的父级函数]: sub_4ce8e2, sub_52452c, sub_50fa27, sub_4cdec4, sub_4ce5b4, sub_52c0c8, sub_51fdc8, sub_4ce88a, sub_40e8c2, sub_517a38, sub_4e649b, sub_52c000, sub_4e6659, sub_4c1e70, sub_4ceed4, sub_514ef8, sub_50b624, sub_5179dc, sub_4c329c, sub_4c62e8, sub_50f7b8, sub_509a28, sub_50d988, sub_5075fc, sub_4ce832, sub_4b77e0
// ============================================================

void* __fastcallsub_4746a0(void* arg1, int32_t arg2, void* arg3 @ eax, char* arg4, char* arg5)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_2e0 = ebx
    int32_t esi
    int32_t var_2e4 = esi
    int32_t edi
    int32_t var_2e8 = edi
    void* var_2dc = nullptr
    void* var_2d8 = nullptr
    void* var_c = nullptr
    void* var_10 = nullptr
    int32_t var_14 = 0
    int32_t ecx
    ecx.b = *arg4
    char var_219[0x100]
    __builtin_memcpy(&var_219, arg4, ecx + 1)
    int32_t ecx_3
    ecx_3.b = *arg5
    char var_119[0x100]
    __builtin_memcpy(&var_119, arg5, ecx_3 + 1)
    sub_40422c(arg1)
    void* arg_c
    sub_40422c(arg_c)
    int32_t __saved_ebp
    int32_t* var_2ec_2 = &__saved_ebp
    int32_t (* var_2f0)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_19 = 0
    void* var_18 = nullptr
    sub_403df8(&var_14)
    void var_2d4
    char var_2cc[0x21]
    char var_2ab[0x92]
    sub_40401c(sub_40401c(sub_4690a8(arg3, arg2, &var_2d4), &var_2cc), &var_2ab)
    sub_403df8(&var_14)
    void* eax_5 = sub_40c024(0x4748d4, var_c)
    
    if (eax_5 s> 0)
        sub_4042c0(&var_c, eax_5, 2)
        sub_404308(arg1, &var_c, eax_5)
    
    void* eax_8 = sub_40c024(0x4748d4, var_10)
    
    if (eax_8 s> 0)
        sub_4042c0(&var_10, eax_8, 2)
        sub_404308(arg1, &var_10, eax_8)
    
    void* eax_11 = sub_40c024(0x4748e0, var_c)
    
    if (eax_11 s> 0)
        sub_4042c0(&var_c, eax_11, 2)
        sub_404308(arg_c, &var_c, eax_11)
    
    void* eax_14 = sub_40c024(0x4748ec, var_c)
    
    if (eax_14 s> 0)
        sub_40401c(sub_4042c0(&var_c, eax_14, 2), &var_119)
        sub_404308(var_2d8, &var_c, eax_14)
    
    void* eax_17 = sub_40c024(0x4748f8, var_c)
    
    if (eax_17 s> 0)
        sub_40401c(sub_4042c0(&var_c, eax_17, 2), &var_219)
        sub_404308(var_2dc, &var_c, eax_17)
    
    int32_t var_2d0
    int32_t var_2f8 = var_2d0
    void* eax_21
    eax_21.b = var_19
    void* result = sub_4748fc(arg3, var_c, var_10, eax_21, var_18, var_14)
    fsbase->NtTib.ExceptionList = eax_21
    sub_403e1c(&var_2dc, 2)
    sub_403e1c(&var_14, 4)
    sub_403df8(&arg_c)
    return result
}
