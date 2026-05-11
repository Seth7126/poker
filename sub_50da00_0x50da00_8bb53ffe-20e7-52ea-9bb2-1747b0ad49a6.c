// ============================================================
// 函数名称: sub_50da00
// 虚拟地址: 0x50da00
// WARP GUID: 8bb53ffe-20e7-52ea-9bb2-1747b0ad49a6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_51038c, sub_408e1c, sub_403e1c
// [被调用的父级函数]: sub_50e8e4
// ============================================================

int32_t __convention("regparm")sub_50da00(int32_t* arg1, char arg2)
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
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_8
    int32_t edi
    
    if (arg2 == 0)
        int32_t var_34_1 = 0
        int32_t var_38_1 = 0
        int32_t var_14
        int32_t* var_3c_1 = &var_14
        int32_t var_40_1 = arg1[0xe]
        void* const var_44_1 = "?ACTION=CREATE&PARAM1="
        sub_408e1c(arg1[0x16], &var_1c)
        int32_t var_48_1 = var_1c
        char* var_18
        sub_404138(&var_18, 3)
        sub_51038c(arg1, var_18, 6, arg1, edi, var_8, var_4)
    else
        int32_t var_34 = 0
        int32_t var_38 = 2
        int32_t* var_3c = &var_8
        int32_t var_40 = arg1[0xe]
        void* const var_44 = "?ACTION=CREATE&PARAM1="
        int32_t var_10
        sub_408e1c(arg1[0x16], &var_10)
        int32_t var_48 = var_10
        char* var_c
        sub_404138(&var_c, 3)
        sub_51038c(arg1, var_c, 6, arg1, edi, var_8, var_4)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_50dab9
    return sub_403e1c(&var_1c, 6)
}
