// ============================================================
// 函数名称: sub_49292c
// 虚拟地址: 0x49292c
// WARP GUID: 74ecfdc4-36dd-50ad-af87-711ce543a9a8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_403828, sub_4032ac, sub_402d00, sub_40b4b0, sub_4936dc, sub_4318d0, sub_40423c, sub_491c5c, sub_4939e0, sub_493a70, sub_4936a0, sub_493848, sub_403df8, sub_492b8c, sub_493b3c, sub_4937f0
// [被调用的父级函数]: sub_51a68f, sub_491a24, sub_51a454
// ============================================================

char** __convention("regparm")sub_49292c(uint32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_30 = ebx
    int32_t esi
    int32_t var_34 = esi
    char* var_2c = nullptr
    int32_t* var_38 = &var_4
    int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t dwParam2
    int32_t ecx = sub_402d00(&dwParam2, 0x14, 0)
    
    if (*(arg1 + 0x2c9) != 0)
        sub_492b8c(arg1, 0x14, ecx)
    
    dwParam2 = 0
    int32_t eax_2
    eax_2.b = *(arg1 + 0x2dc)
    int32_t var_10 = (&data_52f5cc)[eax_2]
    int32_t var_c = sub_40423c(*(arg1 + 0x300))
    *(arg1 + 0x2d0) = 0
    
    if (*(arg1 + 0x2d6) == 0)
        *(arg1 + 0x2d0) = 2
    else
        if (*(arg1 + 0x2d4) != 0)
            *(arg1 + 0x2d0) = 2
        
        *(arg1 + 0x2d6) = 0
    
    if (*(arg1 + 0x2d7) != 0)
        if (*(arg1 + 0x2d5) != 0)
            *(arg1 + 0x2d0) |= 1
        
        *(arg1 + 0x2d7) = 0
    
    if (*(arg1 + 0x2dc) == 0)
        *(arg1 + 0x2d0) |= 0x200
    else
        *(arg1 + 0x2d0) |= 0x2000
    
    if (*(arg1 + 0x307) != 0)
        *(arg1 + 0x2d0) |= 0x100
    
    dwParam2 = sub_4318d0(arg1)
    uint32_t eax_9 = mciSendCommandA(0, 0x803, *(arg1 + 0x2d0), &dwParam2)
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    *(arg1 + 0x2ec) = eax_9
    
    if (eax_9 != 0)
        sub_493b3c(arg1, &var_2c)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(0x491348, edx_1, var_2c)
        sub_403828()
        noreturn
    
    *(arg1 + 0x2c9) = 1
    int16_t var_14
    eax_9.w = var_14
    *(arg1 + 0x2da) = eax_9.w
    *(arg1 + 0x2e8) = divs.dp.d(sx.q(sub_4939e0(arg1)), 0xa)
    sub_493848(arg1)
    
    if (*(arg1 + 0x2cf) != 0)
        sub_4936dc(arg1, *(arg1 + 0x2f4))
        int32_t var_28
        sub_4937f0(arg1, &var_28)
        int32_t var_20
        *(arg1 + 0x2f8) = var_20 - var_28
        int32_t var_24
        int32_t var_1c
        *(arg1 + 0x2fc) = var_1c - var_24
    
    uint32_t eax_16
    eax_16.b = *(arg1 + 0x2dc)
    
    if (eax_16.b == 2 || eax_16.b == 0xb)
        sub_4936a0(arg1, 0xa)
    
    eax_16.w = 0x18
    *(arg1 + 0x28e) = 0x18
    
    if (*(arg1 + 0x2cc) != 0)
        eax_16.w = 0x60
        eax_16.w = 0x60 | *(arg1 + 0x28e)
        *(arg1 + 0x28e) = eax_16.w
    
    if (*(arg1 + 0x2cb) != 0)
        *(arg1 + 0x28e) |= 1
    
    if (*(arg1 + 0x2ce) != 0)
        *(arg1 + 0x28e) |= 0x80
    
    if (*(arg1 + 0x2cd) != 0)
        *(arg1 + 0x28e) |= 0x100
    
    if (sub_493a70(arg1) == 2)
        uint32_t ebx_1
        ebx_1.w = 0xffb6
        sub_4032ac(arg1, 0)
        void var_8
        esp = &var_8
    
    sub_491c5c(arg1)
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_492b7e
    char** result = &var_2c
    sub_403df8(result)
    return result
}
