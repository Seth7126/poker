// ============================================================
// 函数名称: sub_4a597c
// 虚拟地址: 0x4a597c
// WARP GUID: d5ba115a-231f-58f4-ac94-c9dd41fea073
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_415df8, sub_403df8, sub_40301c, sub_40b4b0, sub_409ae0
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_4a597c(void** arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_118 = ebx
    char* var_8 = nullptr
    char* var_114 = nullptr
    int32_t* var_11c = &var_4
    int32_t (* var_120)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    for (void* i = arg2; i != 0; i = *(i + 0x28))
        if (arg1 == i)
            void var_110
            sub_40301c(*arg1, &var_110)
            void* var_10 = &var_110
            char var_c = 4
            sub_405ae8(data_53078c, &var_114)
            sub_409ae0(0, &var_10, var_114, &var_8)
            int32_t edx_3
            edx_3.b = 1
            sub_40b4b0(0x4a5648, edx_3, var_8)
            sub_403828()
            noreturn
    
    arg1[0xa] = arg2
    
    if (arg2 != 0)
        sub_415df8(arg2, arg1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_11c_1)(int32_t* arg1 @ ebp) = sub_4a5a3e
    sub_403df8(&var_114)
    char** result = &var_8
    sub_403df8(result)
    return result
}
