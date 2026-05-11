// ============================================================
// 函数名称: sub_4140e4
// 虚拟地址: 0x4140e4
// WARP GUID: 5dc5736a-d449-51db-b62d-8bb29ce40f15
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_4138b8, sub_4139fc, sub_414154
// [被调用的父级函数]: sub_416184
// ============================================================

void* __convention("regparm")sub_4140e4(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t* arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3)
{
    // 第一条实际指令: struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg3
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg3
    int32_t* ebx = arg2
    ExceptionList = arg1
    
    if (ExceptionList->__offset(0x30).d != 0)
        return sub_414154(arg3, ebx)
    
    arg2.b = 1
    int32_t eax_2
    int32_t ecx
    eax_2, ecx = sub_4030a0(arg3, arg2)
    ExceptionList->__offset(0x30).d = eax_2
    int32_t __saved_ebp
    __return_addr = &__saved_ebp
    int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_414154(ecx, ebx)
    sub_4138b8(ExceptionList)
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = &data_414150
    return sub_4139fc(ExceptionList)
}
