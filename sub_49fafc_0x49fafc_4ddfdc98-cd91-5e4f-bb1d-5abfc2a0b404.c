// ============================================================
// 函数名称: sub_49fafc
// 虚拟地址: 0x49fafc
// WARP GUID: 4ddfdc98-cd91-5e4f-bb1d-5abfc2a0b404
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49fa84, sub_4030d0
// [被调用的父级函数]: sub_4a0cf7
// ============================================================

int32_t __fastcallsub_49fafc(struct _EXCEPTION_REGISTRATION_RECORD* arg1, void* arg2)
{
    // 第一条实际指令: int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* var_4)(void* arg1, void* arg2) = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    void* ebx_1 = arg2
    arg2.b = 1
    int32_t eax
    ExceptionList = (*(eax + 0x2c))()
    __return_addr = &var_4
    var_4 = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebp_1 = sub_49fa84(ExceptionList, ebx_1, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = sub_49fb47
    return sub_4030d0(*(ebp_1 - 4))
}
