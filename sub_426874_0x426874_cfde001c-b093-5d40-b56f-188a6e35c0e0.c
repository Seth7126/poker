// ============================================================
// 函数名称: sub_426874
// 虚拟地址: 0x426874
// WARP GUID: cfde001c-b093-5d40-b56f-188a6e35c0e0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetClipboardData
// [内部子函数调用]: sub_42663c, sub_426610
// [被调用的父级函数]: sub_426940
// ============================================================

int32_t __convention("regparm")sub_426874(BOOL arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    sub_42663c(arg1)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    GetClipboardData(2)
    HANDLE eax_2
    int32_t edx
    eax_2, edx = GetClipboardData(9)
    edx.w = 2
    (*(*arg2 + 0x58))(eax_2, ExceptionList, var_1c, var_18)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4268d3
    return sub_426610(arg1)
}
