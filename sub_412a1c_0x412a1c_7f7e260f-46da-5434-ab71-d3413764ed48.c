// ============================================================
// 函数名称: sub_412a1c
// 虚拟地址: 0x412a1c
// WARP GUID: 7f7e260f-46da-5434-ab71-d3413764ed48
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41302c, sub_414da8, sub_4030d0
// [被调用的父级函数]: sub_4100b4
// ============================================================

int32_t __convention("regparm")sub_412a1c(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t* ebx_1 = arg2
    arg2.b = 1
    int32_t* eax = sub_41302c(arg1, arg2, &data_40f6d8, 0x1000)
    int32_t* var_14_1 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_2
    void* ebp_1
    int32_t esi
    int32_t edi
    eax_2, ebp_1 = sub_414da8(eax, ebx_1, esi, edi)
    *(ebp_1 - 4) = eax_2
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_412a73
    return sub_4030d0(*(ebp_1 - 8))
}
