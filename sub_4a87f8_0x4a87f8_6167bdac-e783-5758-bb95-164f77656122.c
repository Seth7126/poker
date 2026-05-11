// ============================================================
// 函数名称: sub_4a87f8
// 虚拟地址: 0x4a87f8
// WARP GUID: 6167bdac-e783-5758-bb95-164f77656122
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4128c0, sub_403ee0, sub_405ae8, sub_403df8, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_4a87f8(int32_t* arg1, int32_t arg2, char** arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
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
    
    if (arg2 s> sub_4128c0(arg1))
        sub_405ae8(data_5300fc, &var_8)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(sub_4a6faf+0xf9, edx_1, var_8)
        sub_403828()
        noreturn
    
    sub_403ee0(arg3, arg1[1], arg2)
    (*(*arg1 + 0x18))()
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4a8872
    char** result = &var_8
    sub_403df8(result)
    return result
}
