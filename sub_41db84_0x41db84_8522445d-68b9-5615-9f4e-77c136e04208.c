// ============================================================
// 函数名称: sub_41db84
// 虚拟地址: 0x41db84
// WARP GUID: 8522445d-68b9-5615-9f4e-77c136e04208
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection, EnterCriticalSection
// [内部子函数调用]: sub_402d00, sub_403248, sub_410b1c, sub_41d044, sub_41d040, sub_41e5a0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41db84(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
    int32_t ecx
    
    if (arg2 != 0 && sub_403248(arg2, 0x417a7c) == 0)
        return sub_410b1c(ecx, arg2)
    EnterCriticalSection(&data_531670)
    int32_t __saved_ebp
    int32_t* var_68_1 = &__saved_ebp
    int32_t (* var_6c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 == 0)
        void var_5c
        sub_402d00(&var_5c, 0x54, 0)
        int32_t var_78_1 = 0
        int32_t var_7c_1 = 0
        sub_41e5a0(var_8, 0, 0, nullptr, 0, &var_5c)
        esp_1 = &var_8
    else
        sub_41d040(arg2[8])
        sub_41d044(var_8->__offset(0x20).d)
        var_8->__offset(0x20).d = arg2[8]
        int32_t eax_5
        eax_5.b = *(arg2 + 0x19)
        var_8->__offset(0x19).b = eax_5.b
        var_8->__offset(0x2c).d = arg2[0xb]
        int32_t eax_6
        eax_6.b = arg2[0xc].b
        var_8->__offset(0x30).b = eax_6.b
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = 0x41dc43
    esp_1[1] = &data_531670
    return LeaveCriticalSection()
}
