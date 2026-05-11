// ============================================================
// 函数名称: sub_4ecdcc
// 虚拟地址: 0x4ecdcc
// WARP GUID: c6d1a54e-3560-5b34-9a74-7c20c7095e1a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_403e90, sub_404078, sub_4042c0, sub_405f88, sub_403e4c, sub_405f4c, sub_402824, sub_4ecd3c, sub_403010, sub_404280, sub_4062e1, sub_403e1c, sub_405e46, sub_408e80
// [被调用的父级函数]: sub_4ecb3c
// ============================================================

int32_t __convention("regparm")sub_4ecdcc(char* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_17c = ebx
    int32_t esi
    int32_t var_180 = esi
    int32_t edi
    int32_t var_184 = edi
    int32_t var_178
    __builtin_memset(&var_178, 0, 0x20)
    sub_40422c(arg1)
    int32_t* var_188 = &var_4
    int32_t (* var_18c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_7a7644 = 0
    data_7a7640 = 0
    void var_154
    sub_405e46(&var_154, arg1)
    sub_402824(sub_4062e1())
    int32_t temp3_1
    
    do
        uint32_t eax_38
        void* edx_5
        eax_38, edx_5 = sub_405f88(&ebp_1[-0x54])
        sub_402824(eax_38)
        
        if (eax_38.b != 0)
            sub_402824(sub_405f4c(&ebp_1[-0x54]))
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t (* var_188_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4ed036
            return sub_403e1c(&ebp_1[-0x5d], 9)
        
        int32_t* var_194_1 = ebp_1
        void* ebp_2 = sub_4ecd3c(&ebp_1[-0x57], edx_5)
        sub_403e90(ebp_2 - 0x158, *(ebp_2 - 0x15c))
        
        while (sub_404078(*(ebp_2 - 0x158)) s> 0)
            char* eax_8
            eax_8.b = **(ebp_2 - 0x158)
            eax_8.b -= 0x30
            char temp1_1 = eax_8.b
            eax_8.b -= 0xa
            
            if (temp1_1 u< 0xa)
                break
            
            sub_4042c0(ebp_2 - 0x158, 1, 1)
        
        sub_404280(1, 1, *(ebp_2 - 0x158), ebp_2 - 0x160)
        char eax_12 = sub_408e80(*(ebp_2 - 0x160))
        void* edx_3 = data_7a7640
        *(&data_7a6eb8 + (edx_3 << 3)) = eax_12
        *((data_7a7640 << 3) + &data_7a6eb9) = 0xff
        *((data_7a7640 << 3) + 0x7a6eba) = 0xff
        
        if (sub_404078(*(ebp_2 - 0x158)) s> 1)
            edx_3 = sub_404280(1, 2, *(ebp_2 - 0x158), ebp_2 - 0x164)
            char* eax_20
            eax_20.b = **(ebp_2 - 0x164)
            eax_20.b -= 0x31
            char temp2_1 = eax_20.b
            eax_20.b -= 9
            
            if (temp2_1 u< 9)
                sub_404280(1, 2, *(ebp_2 - 0x158), ebp_2 - 0x168)
                char eax_24 = sub_408e80(*(ebp_2 - 0x168))
                edx_3 = data_7a7640
                *((edx_3 << 3) + &data_7a6eb9) = eax_24
        
        if (sub_404078(*(ebp_2 - 0x158)) s> 2)
            edx_3 = sub_404280(1, 3, *(ebp_2 - 0x158), ebp_2 - 0x16c)
            char* eax_29
            eax_29.b = **(ebp_2 - 0x16c)
            eax_29.b -= 0x31
            char temp4_1 = eax_29.b
            eax_29.b -= 9
            
            if (temp4_1 u< 9)
                sub_404280(1, 3, *(ebp_2 - 0x158), ebp_2 - 0x170)
                char eax_33 = sub_408e80(*(ebp_2 - 0x170))
                edx_3 = data_7a7640
                *((edx_3 << 3) + 0x7a6eba) = eax_33
        
        void* var_194_7 = ebp_2
        ebp_1 = sub_4ecd3c(ebp_2 - 0x174, edx_3)
        sub_403e4c((data_7a7640 << 3) + 0x7a6ebc, ebp_1[-0x5d])
        temp3_1 = data_7a7640
        data_7a7640 += 1
    while (not(add_overflow(temp3_1, 1)))
    sub_403010()
    noreturn
}
