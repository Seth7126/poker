// ============================================================
// 函数名称: sub_4a0cf7
// 虚拟地址: 0x4a0cf7
// WARP GUID: e407db67-441d-57fc-83c5-aff45c86351d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a0cb0, sub_4a0c80, sub_4040c4, sub_404138, sub_49fafc, sub_49f714, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4a0cf7(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, void* arg3 @ ebp, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: *arg1 -= 1
    *arg1 -= 1
    *arg1 += arg1.b
    char temp0 = *(arg1 + 0x61)
    *(arg1 + 0x61) += arg2.b
    bool c = temp0 + arg2.b u< temp0
    void* entry_ebx
    
    if (c)
        if (temp0 == neg.b(arg2.b) || c)
            if (not(c))
                *arg1 += arg1.b
                *arg1 += arg1.b
                void* var_4 = arg3
                sub_49f714(arg1[3], "Username", arg2)
                return 
            
            *(entry_ebx - 0x3974f33c) += arg1.b
        
        return 
    
    *(arg3 - 0x75) = rlc.b(*(arg3 - 0x75), 0xec, c)
    int32_t var_4_1 = 0
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    void* var_14 = entry_ebx
    int32_t esi
    int32_t var_18 = esi
    void* var_1c = arg3
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4a0cb0(arg1)
    int32_t var_28 = *(arg3 - 0xc)
    void* const var_2c = &data_4a0e0c
    sub_4a0c80(arg1)
    int32_t var_30 = *(arg3 - 0x10)
    sub_404138(arg3 - 8, 3)
    sub_49fafc(arg3 - 4, *(arg3 - 8))
    sub_4040c4(arg2, sub_4a0e13+5, *(arg3 - 4))
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4a0dfe
    sub_403e1c(arg3 - 0x10, 4)
}
