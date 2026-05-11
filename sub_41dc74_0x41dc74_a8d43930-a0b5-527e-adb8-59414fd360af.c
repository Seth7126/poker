// ============================================================
// 函数名称: sub_41dc74
// 虚拟地址: 0x41dc74
// WARP GUID: a8d43930-a0b5-527e-adb8-59414fd360af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41e5a0, sub_41d214, sub_41e2e0, sub_41d870
// [被调用的父级函数]: sub_41ee44, sub_41ee98, sub_41efec, sub_41f154, sub_41ed0c, sub_41dfd0, sub_41e4f8
// ============================================================

int32_t __fastcallsub_41dc74(HPALETTE arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4)
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
    void var_60
    __builtin_memcpy(&var_60, arg4, 0x54)
    sub_41e2e0(arg3)
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t* var_70_1 = &var_4
    int32_t (* var_74)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    HPALETTE var_c_1
    
    if (arg1 != data_531654)
        var_c_1 = sub_41d870(arg1)
    else
        var_c_1 = arg1
    
    void* var_7c = &var_60
    HPALETTE eax_5 = sub_41d214(arg2, *(arg3 + 0x24))
    void* eax_6
    eax_6.b = *(*(arg3 + 0x20) + 0x70)
    int32_t* ebp_1 = sub_41e5a0(arg3, eax_5, var_c_1, nullptr, eax_6.b, &var_60)
    int32_t var_1c
    fsbase->NtTib.ExceptionList = var_1c
    *ebp_1
    return 0
}
