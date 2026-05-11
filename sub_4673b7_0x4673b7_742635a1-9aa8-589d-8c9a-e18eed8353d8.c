// ============================================================
// 函数名称: sub_4673b7
// 虚拟地址: 0x4673b7
// WARP GUID: 742635a1-9aa8-589d-8c9a-e18eed8353d8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404780
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4673b7(char* arg1, int16_t arg2, int32_t* arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg3 += arg2:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    void* var_4 = arg4
    int32_t var_8 = 0x4673fc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_5320b4
    data_5320b4 += 1
    
    if (temp1 == 0xffffffff)
        sub_404780(&data_52f47c, sub_4010c0, 2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
