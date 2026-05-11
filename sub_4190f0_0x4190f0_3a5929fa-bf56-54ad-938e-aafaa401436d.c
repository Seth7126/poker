// ============================================================
// 函数名称: sub_4190f0
// 虚拟地址: 0x4190f0
// WARP GUID: 3a5929fa-bf56-54ad-938e-aafaa401436d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateBrushIndirect
// [内部子函数调用]: sub_417d38, sub_417d2c, sub_41842c
// [被调用的父级函数]: sub_445106, sub_432634, sub_4351dc, sub_44374c, sub_42c0ac, sub_41d214, sub_42fbc4, sub_42f448, sub_419d0c, sub_419720
// ============================================================

int32_t __convention("regparm")sub_4190f0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = *(arg1 + 0x10)
    
    if (var_8->__offset(0x8).d != 0)
        return var_8->__offset(0x8).d
    
    sub_417d2c(data_5316a8)
    int32_t __saved_ebp
    int32_t* var_18 = &__saved_ebp
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (var_8->__offset(0x8).d == 0)
        int32_t* eax_5 = var_8->__offset(0x18).d
        int32_t var_14
        
        if (eax_5 == 0)
            int32_t var_c_2 = 0
            struct _EXCEPTION_REGISTRATION_RECORD* eax_9
            eax_9.b = var_8->__offset(0x1c).b
            char temp0_1 = eax_9.b
            
            if (temp0_1 u< 1)
                var_14 = 0
            else if (temp0_1 == 1)
                var_14 = 1
            else
                var_14 = 2
                void* var_c_3 = (eax_9 & 0x7f) - 2
        else
            var_14 = 3
            int32_t edx
            edx.b = 1
            (*(*eax_5 + 0x68))()
            esp_1 = &var_8
            int32_t var_c_1 = (*(*var_8->__offset(0x18).d + 0x60))()
        
        int32_t var_10_1 = sub_41842c(var_8->__offset(0x14).d)
        *(esp_1 - 4) = &var_14
        var_8->__offset(0x8).d = CreateBrushIndirect()
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = 0x4191c4
    return sub_417d38(data_5316a8)
}
