// ============================================================
// 函数名称: sub_432b1c
// 虚拟地址: 0x432b1c
// WARP GUID: ff9684aa-73cd-5517-92c7-64c4cab1e5b4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowDC, DrawEdge, ReleaseDC
// [内部子函数调用]: sub_40faac, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_432b1c(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    HDC eax_2 = GetWindowDC(sub_4318d0(arg1))
    int32_t* var_20_1 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void qrc
    sub_40faac(arg1[0xe], 0, 0, &qrc, arg1[0xf])
    DrawEdge(eax_2, &qrc, BDR_RAISEDOUTER, BF_RECT)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_20_2)(int32_t* arg1 @ ebp) = sub_432b96
    ExceptionList = sub_4318d0(arg1)
    return ReleaseDC(ExceptionList, eax_2)
}
