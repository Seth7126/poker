// ============================================================
// 函数名称: sub_423db4
// 虚拟地址: 0x423db4
// WARP GUID: adb16ab8-b9a8-50b7-a71e-31fabe27d62e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42b778, sub_403df8, sub_440e70
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_423db4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1[0x4a] != 0)
        char eax_1
        int32_t ecx_1
        eax_1, ecx_1 = (*(*arg1 + 0x4c))()
        esp = &var_8
        
        if (eax_1 != 0 && arg1[0x4c].b != 0)
            char** eax_3
            int32_t ecx_2
            eax_3, ecx_2 = sub_42b778(ecx_1, &var_8)
            eax_3.w = *(arg2 + 4)
            char eax_4
            eax_4, ebp_1 = sub_440e70(ecx_2, var_8)
            
            if (eax_4 != 0)
                int32_t* esi_1 = arg1[0x4a]
                int32_t* ebx_1
                ebx_1.w = 0xffbc
                
                if (sub_4032ac(esi_1) != 0)
                    (*(*esi_1 + 0xb0))()
                    *(arg2 + 0xc) = 1
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_423e48
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
