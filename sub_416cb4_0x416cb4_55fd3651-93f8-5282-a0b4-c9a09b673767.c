// ============================================================
// 函数名称: sub_416cb4
// 虚拟地址: 0x416cb4
// WARP GUID: 55fd3651-93f8-5282-a0b4-c9a09b673767
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteCriticalSection
// [内部子函数调用]: sub_4030d0, sub_40fe28, sub_41589c, sub_4134b8, sub_416c40, sub_406c44, sub_405984, sub_40c9e0
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_416cb4()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_531620
    data_531620 += 1
    
    if (temp1 == 0xffffffff)
        sub_40fe28(data_5314dc)
        sub_40c9e0(data_531618)
        sub_416c40()
        sub_4030d0(data_531624)
        sub_4030d0(data_531628)
        sub_4134b8(0, nullptr)
        sub_4030d0(data_531630)
        data_531630 = 0
        sub_4030d0(*(sub_406c44() + 0xc))
        sub_41589c()
        sub_4030d0(data_531618)
        data_531618 = 0
        sub_405984()
        DeleteCriticalSection(&data_531634)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
