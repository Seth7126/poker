// ============================================================
// 函数名称: sub_49c144
// 虚拟地址: 0x49c144
// WARP GUID: 27043dd5-1d98-5cdb-b5bc-402dfb885ebd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_403df8, sub_408e80
// [被调用的父级函数]: 无
// ============================================================

int32_t* __fastcallsub_49c144(int32_t arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = nullptr
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_4 = (*data_530150)(sub_40423c(arg2), 0, ExceptionList, var_28, var_24)
    
    if (eax_4 == 0)
        int32_t* var_c_1 = &var_4
        int32_t (* var_10_1)() = j_sub_403668
        ExceptionList_1 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_1
        sub_408e80(arg2)
        fsbase->NtTib.ExceptionList = ExceptionList_1
    else
        eax_4.w = *(eax_4 + 8)
        (*data_5302f4)(eax_4)
    
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_49c218
    int32_t* result = &ExceptionList_1
    sub_403df8(result)
    return result
}
