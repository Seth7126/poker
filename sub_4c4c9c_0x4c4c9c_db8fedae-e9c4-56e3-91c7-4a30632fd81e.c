// ============================================================
// 函数名称: sub_4c4c9c
// 虚拟地址: 0x4c4c9c
// WARP GUID: db8fedae-e9c4-56e3-91c7-4a30632fd81e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_404138, sub_4c1d64, sub_408e1c, sub_5207dc, sub_52070c, sub_402bdc, sub_46910c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_51fd8c
// ============================================================

int32_t __convention("regparm")sub_4c4c9c(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_12c = ebx
    int32_t esi
    int32_t var_130 = esi
    int32_t edi
    int32_t var_134 = edi
    int32_t var_128
    __builtin_memset(&var_128, 0, 0x18)
    int32_t* var_8 = arg1
    int32_t* var_138 = &var_4
    int32_t (* var_13c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *data_5300d0
    sub_403df8(var_8)
    
    if (*(*data_5301f4 + 0x111f8) == 0)
        sub_4c1d64()
    
    int32_t eax_6 = *(*data_5301f4 + 0xffcc)
    int32_t i = 1
    
    while (i s<= 0xa)
        bool o_2 = unimplemented  {imul edx, edi, 0x636}
        
        if (o_2)
            sub_403010()
            noreturn
        
        bool o_3 = unimplemented  {imul edx, esi, 0x212}
        
        if (o_3)
            sub_403010()
            noreturn
        
        bool o_4 = unimplemented  {imul edx, ebx, 0x35}
        
        if (o_4)
            sub_403010()
            noreturn
        
        esp = &ExceptionList
        
        if (eax_6 s>= *(*data_5301f4 + 0x4240 + i * 0xd4 + 0x25f34))
            break
        
        int32_t i_2 = i
        i += 1
        
        if (add_overflow(i_2, 1))
            sub_403010()
            noreturn
    
    if (i s<= 0xa && eax_6 s> 0)
        *data_530500 = i
        
        if (i s<= 9)
            int32_t i_1 = i
            
            do
                bool o_5 = unimplemented  {imul eax, edi, 0x636}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                bool o_6 = unimplemented  {imul edx, esi, 0x212}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                if (add_overflow(9, neg.d(i_1)))
                    sub_403010()
                    noreturn
                
                if (add_overflow(9 - i_1, i))
                    sub_403010()
                    noreturn
                
                bool o_9 = unimplemented  {imul edx, edx, 0x35}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                bool o_10 = unimplemented  {imul eax, edi, 0x636}
                
                if (o_10)
                    sub_403010()
                    noreturn
                
                bool o_11 = unimplemented  {imul edx, esi, 0x212}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                if (add_overflow(0xa, neg.d(i_1)))
                    sub_403010()
                    noreturn
                
                if (add_overflow(0xa - i_1, i))
                    sub_403010()
                    noreturn
                
                bool o_14 = unimplemented  {imul edx, edx, 0x35}
                
                if (o_14)
                    sub_403010()
                    noreturn
                
                __builtin_memcpy(*data_5301f4 + 0x4240 + (0xa - i_1 + i) * 0xd4 + 0x25f30, 
                    *data_5301f4 + 0x4240 + (9 - i_1 + i) * 0xd4 + 0x25f30, 0xd4)
                i_1 += 1
            while (i_1 != 0xa)
        
        bool o_15 = unimplemented  {imul eax, edi, 0x636}
        
        if (o_15)
            sub_403010()
            noreturn
        
        bool o_16 = unimplemented  {imul edx, esi, 0x212}
        
        if (o_16)
            sub_403010()
            noreturn
        
        bool o_17 = unimplemented  {imul edx, ebx, 0x35}
        
        if (o_17)
            sub_403010()
            noreturn
        
        char* eax_15 = *data_5301f4 + 0x4240 + i * 0xd4 + 0x25f30
        *(eax_15 + 4) = *(*data_5301f4 + 0xffcc)
        int32_t ecx
        ecx.b = 0x64
        sub_402bdc(&eax_15[0x6d], *data_5301f4 + 0x6299, ecx.b)
        void* var_114
        sub_5207dc(*data_5301f4, 1, 0, &var_114, nullptr)
        char var_110[0xf0]
        sub_404054(&var_110, var_114, 0xff)
        sub_402bdc(&eax_15[8], &var_110, 0x64)
        *eax_15 = i.b
        eax_15[0xd2] = 0
        int32_t var_c_1 = *var_8
        int32_t var_118
        void* ebp_2 = sub_46910c(*data_530304, "f_high1", &var_118)
        int32_t var_10_2 = *(ebp_2 - 0x114)
        sub_408e1c(*(*(ebp_2 - 0xc) + 4), ebp_2 - 0x118)
        int32_t var_14_1 = *(ebp_2 - 0x118)
        void* ebp_3 = sub_46910c(*data_530304, "f_high2", ebp_2 - 0x11c)
        int32_t var_18_1 = *(ebp_3 - 0x11c)
        sub_408e1c(sx.d(**(ebp_3 - 0xc)), ebp_3 - 0x120)
        int32_t var_1c_1 = *(ebp_3 - 0x120)
        void* ebp_4
        int32_t esi_2
        ebp_4, esi_2 = sub_46910c(*data_530304, "f_high3", ebp_3 - 0x124)
        int32_t var_20_1 = *(ebp_4 - 0x124)
        sub_404138(*(ebp_4 - 4), 6)
        esp = &var_8
        ebp_1 = sub_52070c(*data_5301f4)
        *data_53060c = 1
        *data_53060c = 1
        *data_5309e0 = esi_2
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4c4ffd
    return sub_403e1c(&ebp_1[-0x49], 6)
}
