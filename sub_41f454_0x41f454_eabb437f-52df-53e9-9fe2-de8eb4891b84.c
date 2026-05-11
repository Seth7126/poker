// ============================================================
// 函数名称: sub_41f454
// 虚拟地址: 0x41f454
// WARP GUID: eabb437f-52df-53e9-9fe2-de8eb4891b84
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41d214, sub_41e2f0, sub_41d870
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_41f454(struct HPALETTE__** arg1, int16_t* arg2, void* arg3 @ eax, struct HPALETTE__** arg4)
{
    // 第一条实际指令: *arg2 = 2
    *arg2 = 2
    sub_41e2f0(arg3)
    void* esi = *(arg3 + 0x20)
    void var_5c
    __builtin_memcpy(&var_5c, esi + 0x18, 0x54)
    int32_t var_44 = 0
    int32_t var_48 = 0
    void* var_6c_1 = &var_5c
    *(esi + 0x10)
    *arg1 = sub_41d214(*(esi + 8), *(arg3 + 0x24))
    int32_t __saved_ebp
    int32_t* var_6c_2 = &__saved_ebp
    int32_t (* var_70_1)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *arg4 = sub_41d870(*(*(arg3 + 0x20) + 0x10))
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
