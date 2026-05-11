// ============================================================
// 函数名称: sub_4af608
// 虚拟地址: 0x4af608
// WARP GUID: e14a4a55-bce4-57f2-b074-68c4d066190f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_4128c0, sub_402980, sub_4030d0, sub_4043ac, sub_404248, sub_4af5b0, sub_4030a0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4af608(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2)
{
    // 第一条实际指令: int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* var_4)(void* arg1, void* arg2) = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t ecx
    int32_t var_c = ecx
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = arg2
    sub_40422c(ExceptionList_1)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    edx.b = 1
    void* eax_2 = sub_4030a0(ecx, edx)
    __return_addr = &var_4
    var_4 = j_sub_4037f0
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    void* ebp_1 = sub_4af5b0(arg1, ExceptionList_1, eax_2)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    __return_addr = sub_4af6b1
    
    if (sub_4128c0(*(ebp_1 - 0xc)) s> 0)
        int32_t eax_7 = sub_4128c0(*(ebp_1 - 0xc))
        sub_4043ac(*(ebp_1 - 8), eax_7)
        var_4 = sub_4128c0(*(ebp_1 - 0xc))
        void* eax_12 = sub_404248(*(ebp_1 - 8))
        sub_402980(*(*(ebp_1 - 0xc) + 4), eax_12, var_4)
    
    return sub_4030d0(*(ebp_1 - 0xc))
}
