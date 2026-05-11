// ============================================================
// 函数名称: sub_41fdd8
// 虚拟地址: 0x41fdd8
// WARP GUID: e0d1f9cb-6f17-5368-9fdd-fb1755ef8e0d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject, DeleteCriticalSection
// [内部子函数调用]: sub_41cd24, sub_4030d0, sub_404780
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_41fdd8()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_531658
    data_531658 += 1
    
    if (temp1 == 0xffffffff)
        sub_4030d0(data_5316b0)
        sub_4030d0(data_52e620)
        sub_4030d0(data_52e61c)
        sub_41cd24()
        sub_4030d0(data_52e624)
        sub_4030d0(data_5316ac)
        sub_4030d0(data_5316a0)
        sub_4030d0(data_5316a4)
        sub_4030d0(data_5316a8)
        DeleteObject(data_531654)
        DeleteCriticalSection(&data_531670)
        DeleteCriticalSection(&data_531688)
        sub_404780(0x52e53c, 0x40fa74, 0x12)
        sub_404780(0x52e3ec, 0x40fa74, 0x2a)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
