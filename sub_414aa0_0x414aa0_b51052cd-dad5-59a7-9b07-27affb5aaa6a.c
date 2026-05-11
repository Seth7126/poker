// ============================================================
// 函数名称: sub_414aa0
// 虚拟地址: 0x414aa0
// WARP GUID: b51052cd-dad5-59a7-9b07-27affb5aaa6a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4148a8, sub_40e150, sub_413b08, sub_414820, sub_40e360, sub_415168, sub_413a50, sub_403e1c, sub_413b8c, sub_4135e8, sub_413618, sub_414868, sub_40e44c, sub_414430, sub_41504c, sub_40e0dc, sub_41449c, sub_414330, sub_40e334, sub_40e484, sub_415210, sub_414224
// [被调用的父级函数]: sub_41464c
// ============================================================

int32_t __convention("regparm")sub_414aa0(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_30 = ebx
    char* var_2c = nullptr
    char* var_28 = nullptr
    char* var_24 = nullptr
    char* var_20 = nullptr
    char* var_1c = nullptr
    int32_t* var_8 = arg1
    int32_t* var_34 = &var_4
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg3[2] == 0)
        sub_4135e8(data_53072c)
        noreturn
    
    char* ebx_1 = **arg3
    int32_t eax_4
    eax_4.b = *ebx_1
    int80_t var_48
    
    switch (eax_4)
        case 1
            char eax_6
            int32_t ecx
            eax_6, ecx = sub_413a50(var_8)
            
            if (eax_6 != 7)
                sub_40e150(arg2, arg3, sub_414430(var_8))
            else
                sub_414330(var_8, &var_1c, ecx)
                sub_414820(arg2, arg3)
        case 2
            char eax_13
            eax_13, ebp_1 = sub_413b08(var_8)
            esp = &var_8
            int32_t ecx_3
            ecx_3.b = eax_13
            sub_40e150(ebp_1[-2], ebp_1[-3], ecx_3)
        case 3
            sub_414330(var_8, &var_20, arg3)
            sub_40e150(arg2, arg3, sub_413618())
        case 4
            int32_t ecx_5
            int80_t st0_1
            st0_1, ecx_5 = sub_414224(var_8)
            sub_40e360(ecx_5, arg3, arg2, st0_1)
            esp = &ExceptionList
        case 5, 0xa, 0xb
            sub_415168(var_8, &var_24, arg3)
            sub_40e334(var_24, arg3)
        case 6
            int32_t* eax_24
            eax_24, ebp_1 = sub_41504c(var_8, ebx_1)
            sub_40e150(ebp_1[-2], ebp_1[-3], eax_24)
        case 7
            char eax_27
            int32_t ecx_8
            eax_27, ecx_8 = sub_413a50(var_8)
            
            if (eax_27 == 0xd)
                sub_415210(ecx_8)
                sub_40e150(arg2, arg3, 0)
            else if (eax_27 == 0xe)
                sub_415210(ecx_8)
                int32_t* eax_32 = sub_40e0dc(arg2, arg3)
                sub_413b8c(var_8, eax_32)
            else
                var_48:8.d = &var_4
                sub_414330(var_8, &var_28, ecx_8)
                sub_414868(arg2, arg3, var_28)
                esp = &ExceptionList
        case 8
            char eax_37
            int32_t ecx_11
            eax_37, ecx_11 = sub_413a50(var_8)
            
            if (eax_37 != 0xd)
                sub_414330(var_8, &var_2c, ecx_11)
                var_8[6]
                esp = &var_8
                int32_t var_18 = (*(*var_8 + 0x18))()
                int32_t var_14_1 = var_8[6]
                
                if (var_18 != 0)
                    sub_40e44c(arg2, arg3, &var_18)
            else
                sub_415210(ecx_11)
                sub_40e44c(arg2, arg3, &data_52e31c[4])
        case 0xc
            var_48:8.d = &var_4
            ebp_1 = sub_4148a8()
            esp = &ExceptionList
        case 0x10
            int32_t eax_48
            int32_t ecx_15
            int32_t edx_21
            eax_48, ecx_15, edx_21 = sub_41449c(var_8)
            var_48:8.d = edx_21
            var_48:4.d = eax_48
            sub_40e484(ecx_15, arg3, arg2)
            esp = &ExceptionList
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_414d33
    return sub_403e1c(&ebp_1[-0xa], 5)
}
