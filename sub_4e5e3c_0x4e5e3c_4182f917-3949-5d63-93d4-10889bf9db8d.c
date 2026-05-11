// ============================================================
// 函数名称: sub_4e5e3c
// 虚拟地址: 0x4e5e3c
// WARP GUID: 4182f917-3949-5d63-93d4-10889bf9db8d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_40422c, sub_4030d0, sub_404078, sub_403e4c, sub_4670a8, sub_467044, sub_467208, sub_403df8, sub_46738c, sub_404280, sub_466fa4, sub_403010
// [被调用的父级函数]: sub_4e649b
// ============================================================

void* __convention("regparm")sub_4e5e3c(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t var_14 = 0
    int32_t edx
    int32_t var_c = edx
    sub_40422c(arg1)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_403df8(&var_14)
    int32_t* var_30 = &var_4
    int32_t (* var_34)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx_1
    edx_1.b = 1
    int32_t* eax_2 = sub_466fa4(0x466f20, edx_1)
    sub_467044(eax_2, 0x80000002)
    
    if (sub_46738c() != 0)
        ebp_1 = sub_4670a8(eax_2, "\SOFTWARE\Tchibo\Poker3d")
        sub_467208(ebp_1[-3], ebp_1[-1], &ebp_1[-4])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t* var_30_1 = ebp_1
    int32_t (* var_34_1)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4030d0(ebp_1[-3])
    fsbase->NtTib.ExceptionList = ExceptionList
    
    if (ebp_1[-4] != 0)
        void* eax_9 = sub_40c024(0x4e6008, ebp_1[-4])
        
        if (eax_9 s> 0)
            if (add_overflow(eax_9, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_404280(eax_9 - 1, 1, ebp_1[-4], &ebp_1[-4])
        
        if (sub_404078(ebp_1[-4]) s>= 0x16)
            sub_404280(0x16, 1, ebp_1[-4], &ebp_1[-4])
        
        int32_t i_1 = sub_404078(ebp_1[-4])
        
        if (i_1 s> 0)
            int32_t ebx_2 = 1
            int32_t i
            
            do
                int32_t edx_7
                edx_7.b = *(ebp_1[-4] + ebx_2 - 1)
                edx_7.b -= 0x28
                bool c_1 = edx_7.b u< 0xd7
                
                if (edx_7.b == 0xd7 || c_1)
                    c_1 = test_bit(0xfe03ff20, edx_7 & 0xff)
                
                if (not(c_1))
                    sub_403df8(&ebp_1[-4])
                    break
                
                ebx_2 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    sub_403e4c(ebp_1[-2], ebp_1[-4])
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4e5fd5
    sub_403df8(&ebp_1[-4])
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
