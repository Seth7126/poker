// ============================================================
// 函数名称: sub_51a68f
// 虚拟地址: 0x51a68f
// WARP GUID: 14af8cf8-58e0-5235-9ca8-302308d49281
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49292c, sub_492c54, sub_4030d0, sub_403e4c, sub_51a748, sub_4318d0, sub_51a3a8, sub_42da10
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_51a68f(void* arg1 @ ebp)
{
    // 第一条实际指令: sub_4030d0(*(*(arg1 - 4) + 4))
    sub_4030d0(*(*(arg1 - 4) + 4))
    int32_t eax_3
    int32_t edx
    eax_3, edx = sub_4318d0(*data_530304)
    edx.b = 1
    int32_t* eax_4 = sub_42da10(sub_491396+0xe, edx, eax_3)
    *(*(arg1 - 4) + 4) = eax_4
    void* var_4 = arg1
    int32_t (* var_8)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    eax_4[0xb1] = *(arg1 - 4)
    eax_4[0xb0] = sub_51a7f4
    void* ebp = sub_51a3a8(*(*(arg1 - 4) + 0x968), *(*(arg1 - 4) + 0x964), arg1 - 0x24)
    sub_403e4c(*(*(ebp - 4) + 4) + 0x300, *(ebp - 0x24))
    int32_t* ebp_1 = sub_49292c(*(*(ebp - 4) + 4))
    *(ebp_1[-1] + 0x978) = 1
    sub_492c54(*(ebp_1[-1] + 4))
    fsbase->NtTib.ExceptionList = ExceptionList
    return sub_51a748(ebp_1) __tailcall
}
