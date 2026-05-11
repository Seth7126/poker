// ============================================================
// 函数名称: sub_51801c
// 虚拟地址: 0x51801c
// WARP GUID: be453c79-9568-50ca-9f93-ae76b94af943
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517fb4, sub_517f30, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void* __convention("regparm")sub_51801c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1 = sx.d(arg1[0xa6].w)
    int32_t eax_1 = sx.d(arg1[0xa6].w)
    
    if (add_overflow(eax_1, 0xffffffff))
        sub_403010()
        noreturn
    
    if (eax_1 - 1 s> 0)
        int32_t i_5 = eax_1 - 1
        int32_t i
        
        do
            int32_t esi_2 = sx.d(arg1[0xa6].w)
            int32_t j_5 = esi_2 - 1
            
            if (add_overflow(esi_2, 0xffffffff))
                sub_403010()
                noreturn
            
            if (j_5 s> 0)
                int32_t* ebx_1 = arg1
                int32_t j
                
                do
                    long double x87_r7_1 = fconvert.t(*((sx.d(*ebx_1) << 3) + &data_7a7ee8))
                    long double temp11_1 = fconvert.t(*((sx.d(ebx_1[1].b) << 3) + &data_7a7ee8))
                    x87_r7_1 - temp11_1
                    int32_t eax_4
                    eax_4.w = (x87_r7_1 < temp11_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp11_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_4:1.b, 0))
                        sub_517fb4(ebx_1, &ebx_1[1])
                    
                    ebx_1 = &ebx_1[1]
                    j = j_5
                    j_5 -= 1
                while (j != 1)
            
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    if (arg2 != 0xa)
        int32_t eax_19 = sx.d(arg1[0xa6].w)
        
        if (add_overflow(eax_19, 0xffffffff))
            sub_403010()
            noreturn
        
        if (eax_19 - 1 s> 0)
            void* i_8 = eax_19 - 1
            void* i_1
            
            do
                int32_t esi_8 = sx.d(arg1[0xa6].w)
                int32_t j_8 = esi_8 - 1
                
                if (add_overflow(esi_8, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (j_8 s> 0)
                    void* ebx_6 = arg1 + 1
                    int32_t j_1
                    
                    do
                        void* eax_20
                        eax_20.b = *ebx_6
                        
                        if (eax_20.b s> *(ebx_6 + 4)
                                && (arg2 == 0xa || *(ebx_6 - 1) != 4 || *(ebx_6 + 3) == 4))
                            sub_517fb4(ebx_6 - 1, ebx_6 + 3)
                        
                        ebx_6 += 4
                        j_1 = j_8
                        j_8 -= 1
                    while (j_1 != 1)
                
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
    else
        sub_517f30(arg2)
        int32_t eax_10 = sx.d(arg1[0xa6].w)
        
        if (add_overflow(eax_10, 0xffffffff))
            sub_403010()
            noreturn
        
        if (eax_10 - 1 s> 0)
            int32_t i_6 = eax_10 - 1
            int32_t i_2
            
            do
                int32_t esi_4 = sx.d(arg1[0xa6].w)
                int32_t j_6 = esi_4 - 1
                
                if (add_overflow(esi_4, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (j_6 s> 0)
                    int32_t* ebx_2 = arg1
                    int32_t j_2
                    
                    do
                        long double x87_r7_2 = fconvert.t(*((sx.d(*ebx_2) << 3) + &data_7a7ee8))
                        long double temp17_1 = fconvert.t(*((sx.d(ebx_2[1].b) << 3) + &data_7a7ee8))
                        x87_r7_2 - temp17_1
                        int32_t eax_13
                        eax_13.w = (x87_r7_2 < temp17_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, temp17_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == temp17_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_13:1.b, 0))
                            sub_517fb4(ebx_2, &ebx_2[1])
                        
                        ebx_2 = &ebx_2[1]
                        j_2 = j_6
                        j_6 -= 1
                    while (j_2 != 1)
                
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
        
        int32_t eax_16 = sx.d(arg1[0xa6].w)
        
        if (add_overflow(eax_16, 0xffffffff))
            sub_403010()
            noreturn
        
        if (eax_16 - 1 s> 0)
            void* i_7 = eax_16 - 1
            void* i_3
            
            do
                int32_t esi_6 = sx.d(arg1[0xa6].w)
                int32_t j_7 = esi_6 - 1
                
                if (add_overflow(esi_6, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (j_7 s> 0)
                    void* ebx_4 = arg1 + 1
                    int32_t j_3
                    
                    do
                        void* eax_17
                        eax_17.b = *ebx_4
                        
                        if (eax_17.b s> *(ebx_4 + 4))
                            sub_517fb4(ebx_4 - 1, ebx_4 + 3)
                        
                        ebx_4 += 4
                        j_3 = j_7
                        j_7 -= 1
                    while (j_3 != 1)
                
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
        
        sub_517f30(0xb)
    
    void* result = arg2 - 5
    
    if (arg2 - 1 u< 4)
        int32_t eax_24 = sx.d(arg1[0xa6].w)
        result = eax_24 - 1
        
        if (add_overflow(eax_24, 0xffffffff))
            sub_403010()
            noreturn
        
        if (result s> 0)
            void* var_c_1 = result
            void* i_4
            
            do
                int32_t esi_10 = sx.d(arg1[0xa6].w)
                int32_t j_9 = esi_10 - 1
                
                if (add_overflow(esi_10, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (j_9 s> 0)
                    void* ebx_8 = arg1 + 5
                    int32_t j_4
                    
                    do
                        result = arg2 - 5
                        
                        if (arg2 - 1 u< 4)
                            result = sx.d(*ebx_8)
                            
                            if (arg2 == result)
                                result = sx.d(*(ebx_8 - 4))
                                
                                if (arg2 != result && *(ebx_8 - 5) != 4)
                                    result = ebx_8 - 5
                                    sub_517fb4(result, ebx_8 - 1)
                        
                        ebx_8 += 4
                        j_4 = j_9
                        j_9 -= 1
                    while (j_4 != 1)
                
                i_4 = var_c_1
                var_c_1 -= 1
            while (i_4 != 1)
    
    return result
}
