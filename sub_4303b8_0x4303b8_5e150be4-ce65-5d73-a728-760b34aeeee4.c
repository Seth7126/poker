// ============================================================
// 函数名称: sub_4303b8
// 虚拟地址: 0x4303b8
// WARP GUID: 5e150be4-ce65-5d73-a728-760b34aeeee4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MapWindowPoints
// [内部子函数调用]: sub_4032ac, sub_42e3a0, sub_42e3a8, sub_4318d0
// [被调用的父级函数]: sub_44c2b0, sub_44c3b6
// ============================================================

void* __convention("regparm")sub_4303b8(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    
    if (*(arg2 + 0xc) != 0)
        return arg2
    
    POINT var_1c[0x2]
    __builtin_memcpy(&var_1c, *(arg2 + 4) + 0x44, 0x10)
    uint32_t cPoints = 2
    POINT (* lpPoints)[0x2] = &var_1c
    HWND ExceptionList = sub_4318d0(arg1)
    MapWindowPoints(nullptr, ExceptionList, lpPoints, cPoints)
    sub_42e3a0(arg1)
    cPoints = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx
    ebx.w = 0xffd1
    sub_4032ac(*(*(arg2 + 4) + 0x38), arg1, &var_1c, ExceptionList, var_30, cPoints)
    
    if (arg1[0x5f].b != 0 && arg1[0x52] != 0)
        void* eax_12 = *(arg2 + 4)
        int32_t ecx_1
        ecx_1.b = *(eax_12 + 0x54)
        *(eax_12 + 0x38)
        (*(*arg1[0x52] + 0x18))(*(eax_12 + 0x58))
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_430484
    return sub_42e3a8(arg1)
}
