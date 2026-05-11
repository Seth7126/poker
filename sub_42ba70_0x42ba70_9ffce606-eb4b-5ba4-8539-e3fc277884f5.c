// ============================================================
// 函数名称: sub_42ba70
// 虚拟地址: 0x42ba70
// WARP GUID: 9ffce606-eb4b-5ba4-8539-e3fc277884f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IntersectClipRect, SetViewportOrgEx
// [内部子函数调用]: sub_403828, sub_405ae8, sub_403df8, sub_40b4ec
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_42ba70(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t var_10 = 0
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    POINT* var_c
    int32_t var_8
    
    if (*(arg1 + 0x24) == 0)
        var_c = *(arg1 + 8)
        var_8.b = 0xb
        int32_t* var_28 = &var_c
        sub_405ae8(data_530724, &var_10)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4ec(sub_40eacb+0x7d, edx_1, var_10, 0)
        sub_403828()
        noreturn
    
    HDC hdc = (*(**(arg1 + 0x24) + 0x44))()
    var_c = nullptr
    var_10 = *(arg1 + 0x34)
    SetViewportOrgEx(hdc, *(arg1 + 0x30), var_10, var_c)
    var_c = *(arg1 + 0x3c)
    var_10 = *(arg1 + 0x38)
    IntersectClipRect(hdc, 0, 0, var_10, var_c)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_42bb0d
    int32_t* result = &var_10
    sub_403df8(result)
    return result
}
