// ============================================================
// 函数名称: sub_42eac0
// 虚拟地址: 0x42eac0
// WARP GUID: 4b267539-c57d-5704-bde6-641159c2b1ff
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegisterClassA, GetClassInfoA, UnregisterClassA
// [内部子函数调用]: sub_403828, sub_4032ac, sub_40b4ec, sub_403248, sub_42c754, sub_4095f8, sub_4318d0, sub_405ae8, sub_418900, sub_431bd8, sub_40c7bc, sub_403df8
// [被调用的父级函数]: sub_425e67, sub_4251d2, sub_425e70, sub_424464, sub_441bc0, sub_4b28bf
// ============================================================

int32_t* __convention("regparm")sub_42eac0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebx
    int32_t* var_c8 = ebx
    int32_t esi
    int32_t var_cc = esi
    char* var_c4 = nullptr
    int32_t* var_d0 = &var_4
    int32_t (* var_d4)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x90))(ExceptionList, var_d4, var_d0)
    char var_89
    int32_t var_74
    
    if (var_74 == 0 && (var_89 & 0x40) != 0)
        ebx = arg1[1]
        char eax_2
        
        if (ebx != 0 && (ebx[8].b & 2) != 0)
            eax_2 = sub_403248(ebx, 0x427f2c)
        
        if (ebx == 0 || (ebx[8].b & 2) == 0 || eax_2 == 0)
            int32_t var_c0 = arg1[2]
            char var_bc = 0xb
            int32_t* var_c = &var_c0
            int32_t var_10 = 0
            sub_405ae8(data_530724, &var_c4)
            int32_t edx_1
            edx_1.b = 1
            sub_40b4ec(sub_40eacb+0x7d, edx_1, var_c4, var_10)
            sub_403828()
            noreturn
        
        int32_t var_74_1 = sub_4318d0(ebx)
    
    WNDCLASSA wndClass_1
    arg1[0x4f] = wndClass_1.lpfnWndProc
    WNDCLASSA wndClass
    void className
    BOOL eax_9 = GetClassInfoA(wndClass_1.hInstance, &className, &wndClass)
    int32_t eax_10 = neg.d(eax_9)
    char eax_12 = (neg.d(sbb.d(eax_10, eax_10, eax_9 != 0))).b
    
    if (eax_12 == 0 || sub_4288d8 != wndClass.lpfnWndProc)
        if (eax_12 != 0)
            UnregisterClassA(&className, wndClass_1.hInstance)
        
        wndClass_1.lpfnWndProc = sub_4288d8
        wndClass_1.lpszClassName = &className
        
        if (RegisterClassA(&wndClass_1) == 0)
            sub_40c7bc()
            noreturn
    
    data_52e740 = arg1
    (*(*arg1 + 0x94))()
    
    if (arg1[0x53] == 0)
        sub_40c7bc()
        noreturn
    
    sub_4095f8(arg1[0x15])
    arg1[0x15] = 0
    sub_431bd8(arg1)
    int32_t var_c_4 = 1
    int32_t eax_19
    void* ebp_1
    eax_19, ebp_1 = sub_418900(arg1[0x16])
    sub_42c754(arg1, var_c_4)
    
    if (arg1[0x13].b != 0)
        ebx.w = 0xffef
        sub_4032ac(arg1)
    
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_42ec52
    sub_403df8(ebp_1 - 0xc0)
    return ebp_1 - 0xc0
}
