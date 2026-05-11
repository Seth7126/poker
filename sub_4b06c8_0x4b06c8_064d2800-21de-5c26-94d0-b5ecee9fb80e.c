// ============================================================
// 函数名称: sub_4b06c8
// 虚拟地址: 0x4b06c8
// WARP GUID: 064d2800-21de-5c26-94d0-b5ecee9fb80e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ae554, sub_40cc98, sub_4030a0, sub_4b08d0, sub_49f1c0, sub_4ae0d4, sub_4ae4e8, sub_403010
// [被调用的父级函数]: sub_4b0427, sub_4b008c
// ============================================================

int32_t __convention("regparm")sub_4b06c8(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t var_18 = 0
    int32_t var_14 = 0
    void* esi_1 = arg3
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_8 = nullptr
    int32_t var_c = 0
    int32_t* var_34 = &var_4
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0xe0) == 0 && *(arg1 + 0xec) != 0)
        arg2.b = 1
        arg3, arg2 = sub_4b08d0(arg1, sub_4ae0d4(sub_4adf9c+0x48, arg2))
        *(arg1 + 0xe4) = 1
    
    if (*(arg1 + 0xe0) != 0)
        arg2.b = 1
        int32_t* eax_3
        int32_t ecx_1
        int32_t edx_1
        eax_3, ecx_1, edx_1 = sub_4030a0(arg3, arg2)
        var_8 = eax_3
        edx_1.b = 1
        int32_t eax_5 = sub_4030a0(ecx_1, edx_1)
        sub_49f1c0(*(esi_1 + 8), "Set-cookie", var_8)
        sub_49f1c0(*(esi_1 + 8), sub_4b087b+5, eax_5)
        int32_t i_4 = (*(*var_8 + 0x14))()
        esp = &var_8
        
        if (add_overflow(i_4, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_4 - 1 s>= 0)
            int32_t i_2 = i_4
            int32_t var_10_1 = 0
            int32_t i
            
            do
                ebp_1[-3]
                (*(*ebp_1[-1] + 0xc))()
                ebp_1 = sub_4ae4e8(*(arg1 + 0xe0), ebp_1[-4], *(*(arg1 + 0x104) + 0x18))
                ebp_1[-3] += 1
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        int32_t i_5 = (*(*ebp_1[-2] + 0x14))()
        
        if (add_overflow(i_5, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_5 - 1 s>= 0)
            int32_t i_3 = i_5
            ebp_1[-3] = 0
            int32_t i_1
            
            do
                ebp_1[-3]
                (*(*ebp_1[-2] + 0xc))()
                ebp_1 = sub_4ae554(*(arg1 + 0xe0), ebp_1[-5], *(*(arg1 + 0x104) + 0x18))
                ebp_1[-3] += 1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4b0839
    sub_40cc98(&ebp_1[-1])
    return sub_40cc98(&ebp_1[-2])
}
