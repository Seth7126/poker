// ============================================================
// 函数名称: sub_411804
// 虚拟地址: 0x411804
// WARP GUID: ad258f2b-24b3-514e-a307-a2a7367ea5ca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4115f8, sub_4116b4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_411804(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t __saved_edx
    int32_t __saved_edx_4 = __saved_edx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4115f8(arg1)
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0xc))(ExceptionList, var_34, var_30, ExceptionList_1, var_28, var_24)
    int32_t var_c = (*(*arg1 + 0x18))(arg1)
    (*(*arg1 + 0xc))()
    (*(*arg1 + 0x20))()
    (*(*arg1 + 0x18))()
    (*(*arg1 + 0x24))()
    (*(*arg1 + 0x20))()
    (*(*arg1 + 0x24))()
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4118c1
    return sub_4116b4(arg1)
}
