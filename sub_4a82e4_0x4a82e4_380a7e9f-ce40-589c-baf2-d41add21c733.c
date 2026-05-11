// ============================================================
// 函数名称: sub_4a82e4
// 虚拟地址: 0x4a82e4
// WARP GUID: 380a7e9f-ce40-589c-baf2-d41add21c733
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_409040, sub_4030d0, sub_4128c0, sub_412ac8, sub_405ae8, sub_403e1c, sub_40b4b0, sub_409ae0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a82e4(int32_t* arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    char* var_10 = nullptr
    char* var_14 = nullptr
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    char eax_1
    int32_t edx
    eax_1, edx = sub_409040(arg2)
    
    if (eax_1 == 0)
        int32_t* var_38_2 = &var_10
        sub_405ae8(data_53032c, &var_14)
        char* eax_14 = var_14
        int32_t var_1c = arg2
        char var_18 = 0xb
        sub_409ae0(0, &var_1c, eax_14, var_38_2)
        int32_t edx_6
        edx_6.b = 1
        sub_40b4b0(sub_4a6faf+0x27d, edx_6, var_10)
        sub_403828()
        noreturn
    
    if (*data_530570 != 0 && arg1[0x1c] == 0 && arg3 != 0 && arg1[0x29] != 0)
        *(*(arg1[0x29] + 0x68) + 0xc)
        fsbase->NtTib.ExceptionList = (*data_530570)()
        __return_addr = sub_4a840e
        return sub_403e1c(&var_14, 2)
    
    edx.b = 1
    int32_t* eax_7
    int32_t ecx_1
    eax_7, ecx_1 = sub_412ac8(arg2, edx, sub_40f1d9+0xcf, 0x20)
    int32_t* var_38_1 = &var_4
    int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ecx_1.b = 1
    (*(*arg1 + 0x80))(0, 0, ExceptionList, var_3c, var_38_1)
    fsbase->NtTib.ExceptionList = sub_4128c0(eax_7)
    __return_addr = &data_4a83ec
    return sub_4030d0(eax_7)
}
