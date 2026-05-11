// ============================================================
// 函数名称: sub_4b16d0
// 虚拟地址: 0x4b16d0
// WARP GUID: 946595ee-7253-5592-83dd-7bcd001105f6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_404078
// [被调用的父级函数]: sub_4b0427, sub_4b008c
// ============================================================

int32_t** __convention("regparm")sub_4b16d0(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = ExceptionList_2
    int32_t edi
    int32_t var_18 = edi
    int32_t* var_c = nullptr
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(**(*(arg1 + 0xc) + 8) + 0x40))(ExceptionList, var_20, var_1c)
    var_c = 0xffffffff
    (*(**(arg1 + 4) + 0x70))(&var_c, var_c)
    var_c = &var_4
    int32_t (* var_10_2)() = j_sub_403668
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    
    while (sub_404078(var_c) s> 0)
        (*(**(*(arg1 + 0xc) + 8) + 0x34))()
        (*(**(arg1 + 4) + 0x70))(&var_c, 0xffffffff)
    
    fsbase->NtTib.ExceptionList = ExceptionList_1
    (*(**(arg1 + 0xc) + 0xc))(arg1)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4b17af
    int32_t** result = &var_c
    sub_403df8(result)
    return result
}
