// ============================================================
// 函数名称: sub_4107e0
// 虚拟地址: 0x4107e0
// WARP GUID: a1add866-14d2-5218-858f-798adb246c86
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteCriticalSection
// [内部子函数调用]: sub_410948, sub_4030d0, sub_4108e4, sub_403430, sub_4030c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4107e0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    sub_403430(arg1, arg2)
    char var_9 = arg2.b
    sub_4108e4(arg1)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    int32_t edx
    ecx, edx = sub_4030d0(arg1[1])
    edx.b = var_9
    edx.b &= 0xfc
    sub_4030c0(ecx, edx)
    fsbase->NtTib.ExceptionList = ExceptionList
    void (__stdcall* var_10_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_410849
    sub_410948(arg1)
    return DeleteCriticalSection(&arg1[2])
}
