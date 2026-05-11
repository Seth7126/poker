// ============================================================
// 函数名称: sub_42d4b8
// 虚拟地址: 0x42d4b8
// WARP GUID: 5943106a-40d4-51a8-9ac2-5aa69de37ca6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_436d38, sub_403248, sub_436c1c, sub_436b6c, sub_436aac, sub_42b778, sub_410c00, sub_403df8
// [被调用的父级函数]: sub_4323b0
// ============================================================

void** __convention("regparm")sub_42d4b8(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_403248(arg2, &data_436278) == 0)
        sub_410c00(arg1, arg2)
        noreturn
    
    sub_436b6c(arg2, (*(*arg1 + 0x4c))())
    sub_42b778(sub_436c1c(arg2, arg1[0x1c]), &var_8)
    sub_436aac(arg2, var_8)
    int32_t edx_5
    edx_5.b = *(arg1 + 0x47)
    sub_436d38(arg2, edx_5)
    (*(*arg2 + 0x34))(arg1[0x42], arg1[0x43])
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_42d558
    void** result = &var_8
    sub_403df8(result)
    return result
}
