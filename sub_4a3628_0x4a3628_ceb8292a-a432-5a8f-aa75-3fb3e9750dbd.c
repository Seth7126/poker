// ============================================================
// 函数名称: sub_4a3628
// 虚拟地址: 0x4a3628
// WARP GUID: ceb8292a-a432-5a8f-aa75-3fb3e9750dbd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404780
// [被调用的父级函数]: sub_4a36bc
// ============================================================

int32_t __convention("regparm")sub_4a3628(int32_t* arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: *arg1 |= arg1
    *arg1 |= arg1
    char temp1 = *arg1
    *arg1 += arg1.b
    arg1.b = sbb.b(arg1.b, 0xfc, temp1 + arg1.b u< temp1)
    int32_t var_4 = arg2
    char* entry_ebx
    *(entry_ebx + arg1 - 0x3e7ffad) += arg1.b
    int32_t var_8 = arg2
    *(entry_ebx + arg1 - 0x3ebffad) += arg1.b
    int32_t var_c = arg2
    *(entry_ebx + arg1 - 0x3efffad) += arg1.b
    int32_t var_10 = arg2
    *(entry_ebx + arg1 - 0x3f3ffad) += arg1.b
    int32_t var_14 = arg2
    void arg_3f
    *(&arg_3f + arg1) += entry_ebx.b
    *arg1 += arg3
    int32_t var_18 = arg2
    arg1[0x10014c2].b += arg1.b
    int32_t var_1c = arg2
    arg1:1.b += arg1.b
    *entry_ebx += arg2.b
    arg1:1.b += entry_ebx:1.b
    int32_t var_20 = arg2
    *arg1 += arg2:1.b
    int32_t var_24 = arg2
    arg1[0x143f14d5].b += entry_ebx:1.b
    int32_t* var_28 = &var_24
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp2 = data_532588
    data_532588 += 1
    
    if (temp2 == 0xffffffff)
        sub_404780(&data_52fbfc, sub_4010c0, 9)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
