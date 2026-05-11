// ============================================================
// 函数名称: sub_49b454
// 虚拟地址: 0x49b454
// WARP GUID: 1a79d824-bbb0-5a33-8f32-40f40d0c582f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49b3d8, sub_49b3ac, sub_403e90, sub_49b380, sub_49b404, sub_403e1c, sub_49df54
// [被调用的父级函数]: sub_49c50c, sub_49b6f8
// ============================================================

int32_t __convention("regparm")sub_49b454(int32_t arg1, void* arg2, uint32_t arg3, char* arg4, char* arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_3c = ebx
    int32_t esi
    int32_t var_40 = esi
    int32_t edi
    int32_t var_44 = edi
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x14)
    int32_t* var_48 = &var_4
    int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_d = 0
    char ebx_1 = 0
    char var_29 = 0
    void* var_14
    sub_403e90(&var_14, arg2)
    int32_t ecx
    ecx.b = 1
    char* var_18
    sub_49df54(ecx, 0x49b6f4, &var_14, &var_18, 1)
    int32_t ecx_1
    ecx_1.b = 1
    char* var_1c
    sub_49df54(ecx_1, 0x49b6f4, &var_14, &var_1c, 1)
    int32_t ecx_2
    ecx_2.b = 1
    char* var_20
    sub_49df54(ecx_2, 0x49b6f4, &var_14, &var_20, 1)
    int32_t ecx_3 = sub_403e90(&var_24, var_14)
    uint8_t var_28
    uint8_t var_27
    uint8_t var_26
    uint8_t var_25
    uint32_t eax_6
    char* var_38
    
    if (var_1c == 0)
        if (sub_49b404(ecx_3, &var_38).b != 0)
            var_25 = ((var_38 & 0xff000000) u>> 0x18).b
            var_26 = ((var_38 & 0xff0000) u>> 0x10).b
            var_27 = ((var_38 & 0xff00) u>> 8).b
            var_28 = var_38.b
            ebx_1 = 2
    else if (var_20 == 0)
        int32_t ecx_4
        eax_6, ecx_4 = sub_49b380(ecx_3, &var_25)
        int32_t var_30
        
        if (eax_6.b != 0 && sub_49b3d8(ecx_4, &var_30).b != 0)
            var_26 = ((var_30 & 0xff0000) u>> 0x10).b
            var_27 = ((var_30 & 0xff00) u>> 8).b
            var_28 = var_30.b
            ebx_1 = 1
            var_29 = 1
    else if (var_24 != 0)
        int32_t ecx_7
        eax_6, ecx_7 = sub_49b380(ecx_3, &var_25)
        
        if (eax_6.b != 0)
            int32_t ecx_8
            eax_6, ecx_8 = sub_49b380(ecx_7, &var_26)
            
            if (eax_6.b != 0)
                int32_t ecx_9
                eax_6, ecx_9 = sub_49b380(ecx_8, &var_27)
                
                if (eax_6.b != 0 && sub_49b380(ecx_9, &var_28).b != 0)
                    ebx_1 = 1
                    eax_6.b = var_25
                    char temp0_1 = eax_6.b
                    eax_6.b -= 0x80
                    
                    if (temp0_1 u< 0x80)
                        var_29 = 1
                    else
                        char temp1_1 = eax_6.b
                        eax_6.b -= 0x40
                        
                        if (temp1_1 u< 0x40)
                            var_29 = 2
                        else
                            char temp2_1 = eax_6.b
                            eax_6.b -= 0x20
                            
                            if (temp2_1 u< 0x20)
                                var_29 = 3
                            else
                                char temp3_1 = eax_6.b
                                eax_6.b -= 0x10
                                
                                var_29 = temp3_1 u< 0x10 ? 4 : 5
    else
        int32_t ecx_5
        eax_6, ecx_5 = sub_49b380(ecx_3, &var_25)
        
        if (eax_6.b != 0)
            int32_t ecx_6
            eax_6, ecx_6 = sub_49b380(ecx_5, &var_26)
            int16_t var_32
            
            if (eax_6.b != 0 && sub_49b3ac(ecx_6, &var_32).b != 0)
                eax_6.w = var_32
                eax_6.w &= 0xff00
                var_27 = (zx.d(eax_6.w) u>> 8).b
                eax_6.w = var_32
                eax_6.w &= 0xff
                var_28 = eax_6.b
                ebx_1 = 1
                var_29 = 2
    
    if (ebx_1 != 0)
        if (arg3 != 0)
            *arg3 = var_25
        
        if (arg8 != 0)
            *arg8 = var_26
        
        if (arg7 != 0)
            *arg7 = var_27
        
        if (arg6 != 0)
            *arg6 = var_28
        
        char var_d_1 = 1
    
    if (arg5 != 0)
        *arg5 = ebx_1
    
    if (arg4 != 0)
        eax_6.b = var_29
        *arg4 = eax_6.b
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_48_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_49b6dd
    return sub_403e1c(&var_24, 5)
}
