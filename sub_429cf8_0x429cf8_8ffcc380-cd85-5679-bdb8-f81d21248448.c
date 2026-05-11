// ============================================================
// 函数名称: sub_429cf8
// 虚拟地址: 0x429cf8
// WARP GUID: 8ffcc380-cd85-5679-bdb8-f81d21248448
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos, GetWindowRect
// [内部子函数调用]: sub_4032ac, sub_42b2f0, sub_403248, sub_40fa94, sub_4318d0, sub_428ff4, sub_429b88, sub_429100
// [被调用的父级函数]: sub_42bdf4
// ============================================================

int32_t __convention("regparm")sub_429cf8(int32_t* arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: data_531760 = arg1
    data_531760 = arg1
    int32_t __saved_ebp
    int32_t* var_34 = &__saved_ebp
    int32_t (* var_38)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_c = nullptr
    data_531768 = 0
    int32_t edx_1
    int32_t ebx
    
    if (*(arg1 + 0x8b) != 0)
        ebx.w = 0xffe5
        sub_4032ac(arg1, &var_c)
        
        if (data_531760 != 0)
            if (var_c == 0)
                int32_t edx_4
                edx_4.b = 1
                var_c = sub_429100(sub_426ee9+0x5b, edx_4)
                data_531768 = 1
            
            int32_t* ebx_1 = var_c[0xe]
            
            if (sub_403248(ebx_1, 0x427f2c) == 0)
                int32_t* ebx_2 = var_c[0xe]
                char eax_13
                
                if (ebx_2[9] == 0)
                    eax_13 = sub_403248(ebx_2, 0x427f2c)
                
                int32_t var_1c
                int32_t var_18
                
                if (ebx_2[9] != 0 || eax_13 != 0)
                    void var_24
                    sub_40fa94(0, 0, &var_24)
                    sub_42b2f0(ebx_2, &var_24, &var_1c)
                    int32_t* eax_16 = var_c
                    eax_16[0x11] = var_1c
                    eax_16[0x12] = var_18
                else
                    POINT point
                    GetCursorPos(&point)
                    int32_t* eax_14 = var_c
                    eax_14[0x11] = point.x
                    eax_14[0x12] = point.y
                
                int32_t* ebx_3 = var_c
                int32_t esi_1 = var_c[0xe]
                sub_40fa94(ebx_3[0x11] + *(esi_1 + 0x38), ebx_3[0x12] + *(esi_1 + 0x3c), &var_1c)
                int32_t* eax_20 = var_c
                eax_20[0x13] = var_1c
                eax_20[0x14] = var_18
            else
                GetWindowRect(sub_4318d0(ebx_1), &var_c[0x11])
            
            int32_t* eax_21 = var_c
            __builtin_memcpy(&eax_21[0x17], &eax_21[0x11], 0x10)
        label_429e8d:
            edx_1.b = arg2
            sub_429b88(var_c, edx_1.b, arg3)
            fsbase->NtTib.ExceptionList = ExceptionList
        else
            fsbase->NtTib.ExceptionList = ExceptionList
    else
        ebx.w = 0xffe1
        sub_4032ac(arg1, &var_c)
        
        if (data_531760 != 0)
            if (var_c == 0)
                edx_1.b = 1
                int32_t* eax_1
                eax_1, edx_1 = sub_428ff4(sub_426e74+0x48, edx_1, arg1)
                var_c = eax_1
                data_531768 = 1
            
            goto label_429e8d
        
        fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
