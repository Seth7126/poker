// ============================================================
// 函数名称: sub_4ad8c0
// 虚拟地址: 0x4ad8c0
// WARP GUID: 7ef9e96b-e326-5be0-a9d9-582a04fad477
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_412000, sub_4030d0, sub_404078, sub_403e4c, sub_4030a0, sub_408e80, sub_411a80, sub_4ad714, sub_404280, sub_4ada94, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ad8c0(int32_t* arg1, int32_t* arg2, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_1c
    __builtin_memset(&var_1c, 0, 0x18)
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4ad714(arg1, arg2)
    char* var_14
    sub_411a80(arg2, "CommentURL", &var_14)
    sub_403e4c(&arg1[0x10], var_14)
    int32_t eax_4
    int32_t ecx_2
    int32_t edx_3
    eax_4, edx_3, ecx_2 = (*(*arg2 + 0x50))(arg3)
    arg1[0x11].b = eax_4 != 0xffffffff
    edx_3.b = 1
    int32_t* eax_7 = sub_4030a0(ecx_2, edx_3)
    int32_t* var_2c_1 = &var_4
    int32_t (* var_30_1)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_c
    sub_411a80(arg2, "Port", &var_c)
    
    if (sub_404078(var_c) s<= 0)
        sub_4ada94(arg1, 0, 0x50)
    else if (*var_c == 0x22 && var_c[sub_404078(var_c) - 1] == 0x22)
        char* var_18
        char** var_2c_2 = &var_18
        int32_t eax_15 = sub_404078(var_c)
        
        if (add_overflow(eax_15, 0xfffffffe))
            sub_403010()
            noreturn
        
        sub_404280(eax_15 - 2, 2, var_c, var_2c_2)
        void* ebx_2
        ebx_2, ebp_1 = sub_412000(eax_7, var_18)
        
        if ((*(*ebp_1[-1] + 0x14))() != 0)
            int32_t eax_22 = (*(*ebp_1[-1] + 0x14))()
            
            if (add_overflow(eax_22, 0xffffffff))
                sub_403010()
                noreturn
            
            if (eax_22 - 1 s>= 0)
                ebp_1[-3] = eax_22
                int32_t esi_2 = 0
                int32_t i
                
                do
                    (*(*ebp_1[-1] + 0xc))()
                    sub_4ada94(ebx_2, esi_2, sub_408e80(ebp_1[-6]))
                    esi_2 += 1
                    i = ebp_1[-3]
                    ebp_1[-3] -= 1
                while (i != 1)
        else
            sub_4ada94(ebx_2, 0, 0x50)
    
    fsbase->NtTib.ExceptionList = arg3
    int32_t* (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
        int32_t arg5) = sub_4ada2f
    return sub_4030d0(ebp_1[-1])
}
