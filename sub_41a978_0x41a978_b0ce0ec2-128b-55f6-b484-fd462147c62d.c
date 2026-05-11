// ============================================================
// 函数名称: sub_41a978
// 虚拟地址: 0x41a978
// WARP GUID: b0ce0ec2-128b-55f6-b484-fd462147c62d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDeviceCaps, GetSystemMetrics, ReleaseDC, GetDC
// [内部子函数调用]: sub_419e3c, sub_40886c
// [被调用的父级函数]: sub_41f6b4
// ============================================================

int32_t __convention("regparm")sub_41a978(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: HDC hDC_1
    HDC hDC_1
    HDC hDC = hDC_1
    int32_t ebx
    int32_t var_78 = ebx
    int32_t esi
    int32_t var_7c = esi
    int32_t edi
    int32_t var_80 = edi
    int32_t var_c = arg2
    int32_t* ExceptionList_1 = arg1
    int32_t var_14 = sub_40886c(arg3 << 4)
    int32_t* var_84 = &hDC
    int32_t (* var_88)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*ExceptionList_1 + 4))(ExceptionList, var_88, var_84)
    
    if ((*arg5 | arg5[1]) != 0)
        *arg4 = *arg5
        arg4[1] = arg5[1]
    else
        *arg4 = GetSystemMetrics(SM_CXICON)
        arg4[1] = GetSystemMetrics(SM_CYICON)
    
    HDC hdc = GetDC(nullptr)
    
    if (hdc == 0)
        sub_419e3c()
        noreturn
    
    __return_addr = &hDC
    hDC = j_sub_4037f0
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int16_t ebx_2 = GetDeviceCaps(hdc, 0xe) * GetDeviceCaps(hdc, 0xc)
    
    if (ebx_2 u<= 8)
        int32_t var_20_1 = 1 << ebx_2.b
    else
        int32_t var_20 = 0x7fffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList_1
    hDC = hdc
    ExceptionList_1 = nullptr
    return ReleaseDC(ExceptionList_1, hDC)
}
