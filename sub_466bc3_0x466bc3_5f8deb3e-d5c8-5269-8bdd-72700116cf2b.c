// ============================================================
// 函数名称: sub_466bc3
// 虚拟地址: 0x466bc3
// WARP GUID: 5f8deb3e-d5c8-5269-8bdd-72700116cf2b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_466bc3(int32_t* arg1, int32_t arg2, void* arg3 @ ebp, int32_t arg4 @ esi)
{
    // 第一条实际指令: *(arg1 * 2) -= 1
    *(arg1 * 2) -= 1
    *arg1 += arg1.b
    int32_t* var_4 = arg1
    *arg2
    int32_t* eax = var_4
    *eax += eax.b
    *eax += eax.b
    var_4 = arg3 + 3
    int32_t** var_8 = &var_4
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_532088 += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
