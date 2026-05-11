// ============================================================
// 函数名称: sub_4c4ceb
// 虚拟地址: 0x4c4ceb
// WARP GUID: 3e959d0e-35bd-53f1-a9f8-5671f8e69621
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_404138, sub_4c1d64, sub_408e1c, sub_5207dc, sub_52070c, sub_402bdc, sub_46910c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4c4ceb(void* arg1 @ ebp)
{
    // 第一条实际指令: sub_403df8(*(arg1 - 4))
    sub_403df8(*(arg1 - 4))
    sub_403df8(*(arg1 - 4))
    
    if (*(*data_5301f4 + 0x111f8) == 0)
        sub_4c1d64()
    
    void* edi = 1
    int32_t esi = 1
    int32_t eax_5 = *(*data_5301f4 + 0xffcc)
    int32_t i = 1
    void* const* esp
    
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
        
        esp = &__return_addr
        
        if (eax_5 s>= *(*data_5301f4 + 0x4240 + i * 0xd4 + 0x25f34))
            break
        
        int32_t i_1 = i
        i += 1
        
        if (add_overflow(i_1, 1))
            sub_403010()
            noreturn
    
    if (i s<= 0xa && eax_5 s> 0)
        *data_530500 = i
        void* var_8
        
        if (i s<= 9)
            *(arg1 - 8) = i
            
            do
                bool o_5 = unimplemented  {imul eax, edi, 0x636}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                bool o_6 = unimplemented  {imul edx, esi, 0x212}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                int32_t edx_7 = 9 - *(arg1 - 8)
                
                if (add_overflow(9, neg.d(*(arg1 - 8))))
                    sub_403010()
                    noreturn
                
                if (add_overflow(edx_7, i))
                    sub_403010()
                    noreturn
                
                bool o_9 = unimplemented  {imul edx, edx, 0x35}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                int32_t eax_10 =
                    *data_5301f4 + edi * 0x31b0 + esi * 0x1090 + (edx_7 + i) * 0xd4 + 0x25f30
                bool o_10 = unimplemented  {imul eax, edi, 0x636}
                
                if (o_10)
                    sub_403010()
                    noreturn
                
                bool o_11 = unimplemented  {imul edx, esi, 0x212}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                int32_t eax_13 = *data_5301f4 + edi * 0x31b0 + esi * 0x1090
                int32_t edx_13 = 0xa - *(arg1 - 8)
                
                if (add_overflow(0xa, neg.d(*(arg1 - 8))))
                    sub_403010()
                    noreturn
                
                if (add_overflow(edx_13, i))
                    sub_403010()
                    noreturn
                
                bool o_14 = unimplemented  {imul edx, edx, 0x35}
                
                if (o_14)
                    sub_403010()
                    noreturn
                
                var_8 = edi
                __builtin_memcpy(eax_13 + (edx_13 + i) * 0xd4 + 0x25f30, eax_10, 0xd4)
                edi = var_8
                *(arg1 - 8) += 1
            while (*(arg1 - 8) != 0xa)
        
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
        
        *(arg1 - 0xc) = *data_5301f4 + edi * 0x31b0 + esi * 0x1090 + i * 0xd4 + 0x25f30
        *(*(arg1 - 0xc) + 4) = *(*data_5301f4 + 0xffcc)
        int32_t ecx
        ecx.b = 0x64
        sub_402bdc(*(arg1 - 0xc) + 0x6d, *data_5301f4 + 0x6299, ecx.b)
        char* var_4_5 = nullptr
        var_8 = arg1 - 0x110
        sub_5207dc(*data_5301f4, 1, 0, var_8, var_4_5)
        sub_404054(arg1 - 0x10c, *(arg1 - 0x110), 0xff)
        sub_402bdc(*(arg1 - 0xc) + 8, arg1 - 0x10c, 0x64)
        **(arg1 - 0xc) = i.b
        *(*(arg1 - 0xc) + 0xd2) = 0
        int32_t var_c_1 = **(arg1 - 4)
        void* ebp = sub_46910c(*data_530304, "f_high1", arg1 - 0x114)
        int32_t var_10_1 = *(ebp - 0x114)
        sub_408e1c(*(*(ebp - 0xc) + 4), ebp - 0x118)
        int32_t var_14_1 = *(ebp - 0x118)
        void* ebp_1 = sub_46910c(*data_530304, "f_high2", ebp - 0x11c)
        int32_t var_18_1 = *(ebp_1 - 0x11c)
        sub_408e1c(sx.d(**(ebp_1 - 0xc)), ebp_1 - 0x120)
        int32_t var_1c_1 = *(ebp_1 - 0x120)
        void* ebp_2
        int32_t esi_2
        ebp_2, esi_2 = sub_46910c(*data_530304, "f_high3", ebp_1 - 0x124)
        int32_t var_20_1 = *(ebp_2 - 0x124)
        sub_404138(*(ebp_2 - 4), 6)
        esp = &var_8
        arg1 = sub_52070c(*data_5301f4)
        *data_53060c = edi
        *data_53060c = 1
        *data_5309e0 = esi_2
    
    esp[2]
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4c4ffd
    return sub_403e1c(arg1 - 0x124, 6)
}
