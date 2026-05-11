// ============================================================
// 函数名称: sub_46dce0
// 虚拟地址: 0x46dce0
// WARP GUID: 62f6cb2f-d712-577d-964e-a8d492d4d0a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e1c, sub_409040, sub_46f698, sub_4040c4
// [被调用的父级函数]: sub_46de48
// ============================================================

int32_t __convention("regparm")sub_46dce0(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    char* var_c = nullptr
    char* var_10 = nullptr
    char* var_14 = nullptr
    char* var_18 = nullptr
    int32_t ebx
    int32_t var_1c = ebx
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4040c4(&var_8, *(arg1 + 0xa64), "\data\openvc\ovcopt.dco")
    int32_t esi
    int32_t edi
    
    if (sub_409040(var_8) == 0)
        int32_t var_2c_2 = 0
        sub_4040c4(&var_14, *(arg1 + 0xa64), "\ovcopt.dco")
        *(arg1 + 0x10d0)
        sub_46f698(var_14, esi, edi)
        int32_t var_2c_3 = 0
        sub_4040c4(&var_18, *(arg1 + 0xa64), "\ovcgraph.dco")
        *(arg1 + 0x10d4)
        sub_46f698(var_18, esi, edi)
    else
        int32_t var_2c = 0
        sub_4040c4(&var_c, *(arg1 + 0xa64), "\data\openvc\ovcopt.dco")
        *(arg1 + 0x10d0)
        sub_46f698(var_c, esi, edi)
        int32_t var_2c_1 = 0
        sub_4040c4(&var_10, *(arg1 + 0xa64), "\data\openvc\ovcgraph.dco")
        *(arg1 + 0x10d4)
        sub_46f698(var_10, esi, edi)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_20_1)(int32_t* arg1 @ ebp) = sub_46ddd2
    return sub_403e1c(&var_18, 5)
}
