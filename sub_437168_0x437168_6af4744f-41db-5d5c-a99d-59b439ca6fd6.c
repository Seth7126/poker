// ============================================================
// 函数名称: sub_437168
// 虚拟地址: 0x437168
// WARP GUID: 6af4744f-41db-5d5c-a99d-59b439ca6fd6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC, CreateCompatibleBitmap, GetDC
// [内部子函数调用]: sub_41ec48, sub_41e04c, sub_4190bc, sub_40faac, sub_419720
// [被调用的父级函数]: sub_43709c, sub_43722c
// ============================================================

int32_t __convention("regparm")sub_437168(void* arg1)
{
    // 第一条实际指令: void* hDC_2
    void* hDC_2
    void* hDC = hDC_2
    int32_t ebx
    int32_t var_20 = ebx
    HDC hdc = GetDC(nullptr)
    int32_t* var_24_1 = &hDC
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx_1 = *(arg1 + 0x44)
    sub_41ec48(ebx_1, CreateCompatibleBitmap(hdc, *(arg1 + 0x28), *(arg1 + 0x24)))
    sub_4190bc(*(sub_41e04c(ebx_1) + 0x14))
    void var_1c
    void var_10
    sub_40faac((*(*ebx_1 + 0x2c))(&var_1c, (*(*ebx_1 + 0x20))(ExceptionList, var_28, var_24_1)), 0, 0, 
        var_10, hdc)
    void* hDC_1 = &var_1c
    sub_419720(sub_41e04c(ebx_1), hDC_1)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_437210
    hDC = hDC_1
    return ReleaseDC(nullptr, hDC)
}
