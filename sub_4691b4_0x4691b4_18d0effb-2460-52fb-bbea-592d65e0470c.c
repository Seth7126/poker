// ============================================================
// 函数名称: sub_4691b4
// 虚拟地址: 0x4691b4
// WARP GUID: 18d0effb-2460-52fb-bbea-592d65e0470c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406010, sub_405f88, sub_404080, sub_402824, sub_403fa0, sub_403df8
// [被调用的父级函数]: sub_469254, sub_4692db, sub_4692e4
// ============================================================

char** __convention("regparm")sub_4691b4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    char* var_c = nullptr
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg1)
    uint32_t eax_5
    
    do
        uint8_t var_5
        void* eax_2
        int32_t edx_2
        eax_2, edx_2 = sub_406010(arg2 - 0x14c, &var_5)
        sub_402824(eax_2)
        eax_2.b = var_5
        char temp0_1 = eax_2.b
        eax_2.b -= 0xa
        
        if (temp0_1 != 0xa)
            char temp2_1 = eax_2.b
            eax_2.b -= 3
            
            if (temp2_1 != 3)
                char temp4_1 = eax_2.b
                eax_2.b -= 0x16
                
                if (temp4_1 != 0x16)
                    edx_2.b = var_5
                    sub_403fa0()
                    sub_404080(arg1, var_c)
        
        eax_2.b = var_5
        char temp1_1 = eax_2.b
        eax_2.b -= 0xd
        
        if (temp1_1 == 0xd)
            break
        
        char temp3_1 = eax_2.b
        eax_2.b -= 0x16
        
        if (temp3_1 == 0x16)
            break
        
        eax_5 = sub_405f88(arg2 - 0x14c)
        sub_402824(eax_5)
    while (eax_5.b == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_46924c
    char** result = &var_c
    sub_403df8(result)
    return result
}
