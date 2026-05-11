// ============================================================
// 函数名称: sub_4a3d84
// 虚拟地址: 0x4a3d84
// WARP GUID: 27bce290-ba12-5fbe-bb29-e65922a2132f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4103c8, sub_4030d0, sub_4a3090, sub_4030a0, sub_405ae8, sub_40b4b0
// [被调用的父级函数]: sub_4a3e6c
// ============================================================

int32_t __convention("regparm")sub_4a3d84(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = ExceptionList_2
    char* var_10 = nullptr
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(*(arg2 - 4) + 0x10) == 0)
        sub_405ae8(data_530640, &var_10)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(0x4989a8, edx_1, var_10)
        sub_403828()
        noreturn
    
    int32_t ecx
    int32_t var_c = sub_4030a0(ecx, 1)
    int32_t* var_c_1 = &var_4
    var_10 = j_sub_4037f0
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4103c8(var_c_1, *(*(arg2 - 4) + 0xc))
    sub_4a3090(0, (*(**data_5308e0 + 0x50))(arg1, 0, ExceptionList_1, var_10, var_c_1) != 1)
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4a3e44
    return sub_4030d0(var_c_1)
}
