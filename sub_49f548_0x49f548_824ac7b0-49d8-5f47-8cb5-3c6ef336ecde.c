// ============================================================
// 函数名称: sub_49f548
// 虚拟地址: 0x49f548
// WARP GUID: 824ac7b0-49d8-5f47-8cb5-3c6ef336ecde
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408b34, sub_404078, sub_404138, sub_403e4c, sub_403e1c, sub_403df8, sub_404280, sub_49f478, sub_403010
// [被调用的父级函数]: sub_49f1c0, sub_49f520
// ============================================================

int32_t __convention("regparm")sub_49f548(int32_t* arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x1c)
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_1
    
    if (arg2 s>= 0)
        eax_1 = (*(*arg1 + 0x14))()
        esp = &var_8
    
    if (arg2 s< 0 || arg2 s>= eax_1)
        sub_403df8(var_8)
    else
        void* const var_10
        int32_t ebx_2
        ebx_2, ebp_1 = sub_49f478(arg1, arg2, &var_10)
        (*(*arg1 + 0xc))(ebp_1[-1])
        var_10 = ebp_1[-4]
        int32_t eax_7 = sub_404078(ebp_1[-3])
        
        if (add_overflow(eax_7, 2))
            sub_403010()
            noreturn
        
        sub_404280(0x7fffffff, eax_7 + 2, var_10)
        esp = &var_8
        
        if (*(arg1 + 0x35) != 0)
            while (true)
                int32_t temp1_1 = ebx_2
                ebx_2 += 1
                
                if (add_overflow(temp1_1, 1))
                    sub_403010()
                    noreturn
                
                if (ebx_2 == (*(*arg1 + 0x14))())
                    break
                
                (*(*arg1 + 0xc))()
                char* eax_12
                eax_12.b = *ebp_1[-2]
                char temp2_1 = eax_12.b
                eax_12.b -= 9
                
                if (temp2_1 != 9)
                    char temp3_1 = eax_12.b
                    eax_12.b -= 0x17
                    
                    if (temp3_1 != 0x17)
                        break
                
                sub_408b34(*ebp_1[-1], &ebp_1[-5])
                int32_t var_c_2 = ebp_1[-5]
                var_10 = &data_49f680
                sub_408b34(ebp_1[-2], &ebp_1[-6])
                int32_t var_14_1 = ebp_1[-6]
                sub_404138(ebp_1[-1], 3)
                esp = &var_8
    
    sub_408b34(*ebp_1[-1], &ebp_1[-7])
    sub_403e4c(ebp_1[-1], ebp_1[-7])
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_49f66f
    return sub_403e1c(&ebp_1[-7], 6)
}
