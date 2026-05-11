// ============================================================
// 函数名称: sub_49c840
// 虚拟地址: 0x49c840
// WARP GUID: 0fc98400-910d-5738-af64-ee6e85aeab5c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_49af78, sub_405ae8, sub_403e1c, sub_409ae0
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_49c840(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t __saved_eax
    int32_t __saved_eax_1 = __saved_eax
    char* var_8 = nullptr
    char* var_c = nullptr
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp
    
    if (arg2 != 0x2af9)
        ebp_1 = sub_49af78(arg1, arg2)
        esp = &var_8
    else
        sub_405ae8(data_530550, arg1)
        sub_405ae8(data_52ff00, &var_c)
        char* eax_4 = var_c
        int32_t var_1c = arg2
        char var_18_1 = 0
        int32_t var_14_1 = *arg1
        char var_10_1 = 0xb
        sub_409ae0(1, &var_1c, eax_4, &var_8)
        esp = &ExceptionList
        sub_403e4c(arg1, var_8)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_49c8e8
    return sub_403e1c(&ebp_1[-2], 2)
}
