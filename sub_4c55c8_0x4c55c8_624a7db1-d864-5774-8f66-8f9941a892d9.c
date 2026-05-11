// ============================================================
// 函数名称: sub_4c55c8
// 虚拟地址: 0x4c55c8
// WARP GUID: 624a7db1-d864-5774-8f66-8f9941a892d9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e4c, sub_4c39c8
// [被调用的父级函数]: sub_5223e8
// ============================================================

char** __fastcallsub_4c55c8(int32_t arg1, char** arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi
    int32_t edi
    sub_4c39c8(arg1, &var_8, esi, edi)
    sub_403e4c(arg2, var_8)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4c560f
    char** result = &var_8
    sub_403df8(result)
    return result
}
