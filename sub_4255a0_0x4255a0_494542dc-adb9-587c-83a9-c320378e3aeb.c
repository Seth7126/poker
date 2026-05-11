// ============================================================
// 函数名称: sub_4255a0
// 虚拟地址: 0x4255a0
// WARP GUID: 494542dc-adb9-587c-83a9-c320378e3aeb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_403828, sub_4318d0, sub_40423c, sub_405ae8, sub_403df8, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_4255a0(void* arg1, WPARAM arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    LPARAM lParam = sub_40423c(arg3)
    
    if (SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0x181, arg2, lParam) s>= 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) =
            sub_42561a
        char** result = &var_8
        sub_403df8(result)
        return result
    
    sub_405ae8(data_5301ac, &var_8)
    int32_t edx_1
    edx_1.b = 1
    sub_40b4b0(sub_40eacb+0x21, edx_1, var_8)
    sub_403828()
    noreturn
}
