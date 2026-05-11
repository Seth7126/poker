// ============================================================
// 函数名称: sub_453dde
// 虚拟地址: 0x453dde
// WARP GUID: 396e6bfa-29ac-5a1c-931b-af8f66568808
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_45380c
// [被调用的父级函数]: sub_453acc
// ============================================================

int32_tsub_453dde(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_4030d0(arg1[-4])
    fsbase->NtTib.ExceptionList = arg3
    fsbase->NtTib.ExceptionList = arg5
    int32_t result = sub_45380c(&arg1[-0x9f])
    *arg1
    return result
}
