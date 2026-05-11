// ============================================================
// 函数名称: sub_41e300
// 虚拟地址: 0x41e300
// WARP GUID: 7e2f6a75-4afa-59ed-ad46-26765369817b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetObjectA
// [内部子函数调用]: sub_402d00, sub_41d870, sub_41e2f0, sub_41d8d4, sub_41842c, sub_41e5a0, sub_41e2e0
// [被调用的父级函数]: sub_41932c
// ============================================================

int32_t __convention("regparm")sub_41e300(int32_t arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_64 = ebx
    int32_t esi
    int32_t var_68 = esi
    int32_t edi
    int32_t var_6c = edi
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t* var_70 = &var_4
    int32_t (* var_74)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_41e2e0(arg1)
    sub_41e2f0(arg1)
    COLORREF eax_3 = sub_41842c(arg2)
    void* esi_1 = *(arg1 + 0x20)
    BOOL h = sub_41d8d4(*(esi_1 + 8), *(esi_1 + 0x10), eax_3)
    void pv
    sub_402d00(&pv, 0x54, 0)
    GetObjectA(h, 0x54, &pv)
    HGDIOBJ eax_8 = *(*(arg1 + 0x20) + 0x10)
    HPALETTE var_c_1
    
    if (eax_8 != data_531654)
        var_c_1 = sub_41d870(eax_8)
    else
        var_c_1 = eax_8
    
    void* eax_10
    eax_10.b = *(*(arg1 + 0x20) + 0x70)
    int32_t* ebx_2
    int32_t* ebp_1
    ebx_2, ebp_1 = sub_41e5a0(arg1, h, var_c_1, nullptr, eax_10.b, &pv)
    int32_t var_1c
    fsbase->NtTib.ExceptionList = var_1c
    int32_t result = (*(*ebx_2 + 0x10))()
    *ebp_1
    return result
}
