// ============================================================
// 函数名称: sub_4c4150
// 虚拟地址: 0x4c4150
// WARP GUID: ebd14093-470a-59f8-a5b5-44bef6ee5620
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d38, sub_51ad40, sub_402d20, sub_4cd498, sub_403010, sub_4c4ab8, sub_4c4904, sub_403df8, sub_4c39c8
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_t*sub_4c4150()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_260 = ebx
    int32_t esi
    int32_t var_264 = esi
    int32_t edi
    int32_t var_268 = edi
    int32_t var_25c = 0
    void* edi_1 = data_5301f4
    int32_t* var_26c = &var_4
    int32_t (* var_270)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_6 = *data_5300d0
    void var_d
    
    if (i_6 s> 0)
        void* eax_1 = &var_d
        int32_t i
        
        do
            *eax_1 = 1
            eax_1 += 1
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    sub_4c4904(&var_d)
    void* eax_3
    eax_3.b = *(*edi_1 + 0x2028d)
    int32_t ecx = 1
    int32_t ebx_3 = *data_5300d0
    
    if (ebx_3 s>= 2)
        int32_t i_7 = ebx_3 - 1
        esi = 2
        int32_t i_1
        
        do
            bool o_1 = unimplemented  {imul eax, esi, 0x41}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(*edi_1 + esi * 0x208 + 0x20085) != 0)
                int32_t temp9_1 = ecx
                ecx += 1
                
                if (add_overflow(temp9_1, 1))
                    sub_403010()
                    noreturn
            
            esi += 1
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
    
    int32_t var_14 = 0
    
    if (eax_3.b != 0)
        int32_t temp0_1 = divs.dp.d(sx.q(*(*edi_1 + 0x21100)), ecx)
        void* edx_3 = *edi_1
        int32_t eax_9 = temp0_1 - *(edx_3 + 0x200ac)
        
        if (add_overflow(temp0_1, neg.d(*(edx_3 + 0x200ac))))
            sub_403010()
            noreturn
        
        if (eax_9 s< *(*edi_1 + 0x20070))
        label_4c422f:
            int32_t edx_8 = *(*edi_1 + 0x20070)
            
            if (edx_8 s< 0)
                edx_8 += 3
            
            if (eax_9 s< edx_8 s>> 2)
            label_4c4262:
                int32_t edx_13 = *(*edi_1 + 0x20070)
                
                if (edx_13 s< 0)
                    edx_13 += 7
                
                if (eax_9 s< edx_13 s>> 3)
                label_4c4293:
                    
                    if (eax_9 s> 0)
                        var_14 = 1
                else
                    void* edx_15 = *edi_1
                    *(edx_15 + 0x21108)
                    bool o_6 = unimplemented  {imul edx, dword [edx+0x21108], 0x2}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    if (eax_9 s< *(edx_15 + 0x21108) * 2)
                        goto label_4c4293
                    
                    var_14 = 2
            else
                void* edx_10 = *edi_1
                *(edx_10 + 0x21108)
                bool o_5 = unimplemented  {imul edx, dword [edx+0x21108], 0x4}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                if (eax_9 s< *(edx_10 + 0x21108) * 4)
                    goto label_4c4262
                
                var_14 = 3
        else
            void* edx_5 = *edi_1
            *(edx_5 + 0x21108)
            bool o_4 = unimplemented  {imul edx, dword [edx+0x21108], 0x8}
            
            if (o_4)
                sub_403010()
                noreturn
            
            if (eax_9 s< *(edx_5 + 0x21108) * 8)
                goto label_4c422f
            
            var_14 = 4
    
    sub_4c39c8(ecx, &var_25c, esi, edi_1)
    int32_t var_18 = 0
    int32_t i_8 = *data_5300d0
    
    if (i_8 s> 0)
        int32_t esi_1 = 1
        int32_t i_2
        
        do
            int32_t eax_11 = esi_1 * 0x41
            bool o_7 = unimplemented  {imul eax, esi, 0x41}
            
            if (o_7)
                sub_403010()
                noreturn
            
            if (*(*edi_1 + (eax_11 << 3) + 0x1fea0) == 1 && *(*edi_1 + (eax_11 << 3) + 0x20085) != 0)
                int32_t temp15_1 = var_18
                var_18 += 1
                
                if (add_overflow(temp15_1, 1))
                    sub_403010()
                    noreturn
            
            esi_1 += 1
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
    
    char ebx_6 = 0
    char var_1a = 0
    char var_258
    sub_4c4ab8(1, &var_258)
    char var_154
    sub_4cd498(&var_258, 0, &var_154)
    int32_t eax_13
    eax_13.b = var_154
    eax_13.b -= 4
    char temp6 = eax_13.b
    eax_13.b -= 7
    char var_254
    int32_t var_48
    int32_t var_44
    
    if (temp6 u< 7)
        if ((sx.d(var_258) == var_48 && *(*edi_1 + 0x2029c) != 0)
                || (sx.d(var_254) == var_48 && *(*edi_1 + 0x2029d) != 0)
                || (sx.d(var_258) == var_44 && *(*edi_1 + 0x2029c) != 0))
            ebx_6 = 1
        else if (sx.d(var_254) == var_44 && *(*edi_1 + 0x2029d) != 0)
            ebx_6 = 1
    
    if (var_154 == 1)
    label_4c43a4:
        eax_13.b = var_258
        eax_13.b -= 5
        char temp10_1 = eax_13.b
        eax_13.b -= 2
        
        if (temp10_1 u>= 2)
            char temp11_1 = eax_13.b
            eax_13.b -= 1
            
            if (temp11_1 != 1)
                eax_13.b = var_254
                eax_13.b -= 5
                char temp14_1 = eax_13.b
                eax_13.b -= 2
                
                if (temp14_1 u>= 2)
                    char temp16_1 = eax_13.b
                    eax_13.b -= 1
                    
                    if (temp16_1 != 1)
                        var_1a = 1
    else if (*(*edi_1 + 0x2029c) == 0 && *(*edi_1 + 0x2029d) == 0)
        goto label_4c43a4
    
    *data_52ffa4 = ebx_6
    *data_5305f4 = var_1a
    void* eax_20
    eax_20.b = *(*edi_1 + 0x2028d)
    eax_20.b ^= 1
    
    if ((eax_20.b & ebx_6) != 0)
        int32_t edx_23 = *(*edi_1 + 0x20070)
        
        if (edx_23 s< 0)
            edx_23 += 3
        
        if (*(*edi_1 + 0x200ac) s>= edx_23 s>> 2)
            void* edx_25 = *edi_1
            *(edx_25 + 0x21108)
            bool o_9 = unimplemented  {imul edx, dword [edx+0x21108], 0x2}
            
            if (o_9)
                sub_403010()
                noreturn
            
            if (*(*edi_1 + 0x200ac) s>= *(edx_25 + 0x21108) * 2 && *(*edi_1 + 0x200a8) == 1)
                var_14 = 0xfffffffe
    
    void* eax_26
    eax_26.b = *(*edi_1 + 0x2028d)
    eax_26.b ^= 1
    eax_26.b &= var_1a
    
    if (eax_26.b != 0 && divs.dp.d(sx.q(*(*edi_1 + 0x20070)), 3) s<= *(*edi_1 + 0x200ac))
        void* edx_29 = *edi_1
        *(edx_29 + 0x21108)
        bool o_10 = unimplemented  {imul edx, dword [edx+0x21108], 0x4}
        
        if (o_10)
            sub_403010()
            noreturn
        
        if (*(*edi_1 + 0x200ac) s>= *(edx_29 + 0x21108) * 4 && *(*edi_1 + 0x200a8) == 1)
            var_14 = 0xffffffff
    
    int32_t var_24 = 0
    int32_t i_9 = *data_5300d0
    
    if (i_9 s> 0)
        int32_t esi_2 = 1
        int32_t i_3
        
        do
            bool o_11 = unimplemented  {imul eax, esi, 0x41}
            
            if (o_11)
                sub_403010()
                noreturn
            
            if (*(*edi_1 + esi_2 * 0x208 + 0x1fea0) == 1)
                int32_t temp22_1 = var_24
                var_24 += 1
                
                if (add_overflow(temp22_1, 1))
                    sub_403010()
                    noreturn
            
            esi_2 += 1
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
    
    int32_t eax_34
    
    if (var_24 s>= 2)
        int32_t i_10 = *data_5300d0
        
        if (i_10 s> 0)
            int32_t esi_3 = 1
            int32_t i_4
            
            do
                bool o_13 = unimplemented  {imul eax, esi, 0x41}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                if (*(*edi_1 + esi_3 * 0x208 + 0x1fea0) == 1)
                    sub_4c4ab8(esi_3, &var_258)
                    sub_4cd498(&var_258, 0, &var_154)
                    
                    if (var_154 != 1)
                        eax_34 = esi_3 * 0x41
                        bool o_14 = unimplemented  {imul eax, esi, 0x41}
                        
                        if (o_14)
                            sub_403010()
                            noreturn
                        
                        if (*(*edi_1 + (eax_34 << 3) + 0x20094) != 0
                                || *(*edi_1 + (eax_34 << 3) + 0x20095) != 0)
                            var_24 = 0
                
                esi_3 += 1
                i_4 = i_10
                i_10 -= 1
            while (i_4 != 1)
    
    if (var_24 s>= 3)
        var_14 = 0xfffffffc
    else if (var_24 == 2)
        long double st0_1 = sub_402d38()
        long double temp20_1 = fconvert.t(0.5f)
        st0_1 - temp20_1
        eax_34.w = (st0_1 < temp20_1 ? 1 : 0) << 8 | (is_unordered.t(st0_1, temp20_1) ? 1 : 0) << 0xa
            | (st0_1 == temp20_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_34:1.b, 0))
            var_14 = 0xfffffffc
    
    int32_t var_20 = 0
    int32_t var_24_1 = 0
    int32_t i_11 = *data_5300d0
    
    if (i_11 s> 0)
        int32_t esi_4 = 1
        int32_t i_5
        
        do
            bool o_15 = unimplemented  {imul eax, esi, 0x41}
            
            if (o_15)
                sub_403010()
                noreturn
            
            if (*(*edi_1 + esi_4 * 0x208 + 0x1fea0) == 1)
                int32_t temp26_1 = var_24_1
                var_24_1 += 1
                
                if (add_overflow(temp26_1, 1))
                    sub_403010()
                    noreturn
                
                sub_4c4ab8(esi_4, &var_258)
                sub_4cd498(&var_258, 0, &var_154)
                int32_t eax_40 = 0
                bool o_17 = unimplemented  {imul edx, esi, 0x41}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                if (*(*edi_1 + esi_4 * 0x208 + 0x20094) != 0)
                    eax_40 = 1
                    
                    if (add_overflow(0, 1))
                        sub_403010()
                        noreturn
                
                bool o_19 = unimplemented  {imul edx, esi, 0x41}
                
                if (o_19)
                    sub_403010()
                    noreturn
                
                if (*(*edi_1 + esi_4 * 0x208 + 0x20095) != 0)
                    int32_t temp31_1 = eax_40
                    eax_40 += 1
                    
                    if (add_overflow(temp31_1, 1))
                        sub_403010()
                        noreturn
                
                int32_t edx_39
                char temp32_1
                
                if (eax_40 == 2)
                    edx_39.b = var_154
                    edx_39.b -= 8
                    temp32_1 = edx_39.b
                    edx_39.b -= 3
                
                if (eax_40 != 2 || temp32_1 u>= 3)
                    char temp33_1
                    
                    if (eax_40 == 1)
                        edx_39.b = var_154
                        edx_39.b -= 8
                        temp33_1 = edx_39.b
                        edx_39.b -= 3
                    
                    if (eax_40 == 1 && temp33_1 u< 3)
                        int32_t temp37_1 = var_20
                        var_20 += 4
                        
                        if (add_overflow(temp37_1, 4))
                            sub_403010()
                            noreturn
                    else if (eax_40 == 2 && var_154 == 7)
                        int32_t temp38_1 = var_20
                        var_20 += 4
                        
                        if (add_overflow(temp38_1, 4))
                            sub_403010()
                            noreturn
                    else if (eax_40 == 2 && var_154 == 6)
                        int32_t temp40_1 = var_20
                        var_20 += 2
                        
                        if (add_overflow(temp40_1, 2))
                            sub_403010()
                            noreturn
                    else if (eax_40 == 2 && var_154 == 5)
                        int32_t temp41_1 = var_20
                        var_20 += 2
                        
                        if (add_overflow(temp41_1, 2))
                            sub_403010()
                            noreturn
                    else if (eax_40 == 1 && var_154 == 7)
                        int32_t temp42_1 = var_20
                        var_20 += 1
                        
                        if (add_overflow(temp42_1, 1))
                            sub_403010()
                            noreturn
                else
                    int32_t temp34_1 = var_20
                    var_20 += 7
                    
                    if (add_overflow(temp34_1, 7))
                        sub_403010()
                        noreturn
            
            esi_4 += 1
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
    
    if (var_20 s>= 4 && var_24_1 s>= 2)
        var_14 = 0xfffffffd
    
    if (*(*edi_1 + 0x111f9) != 0)
        var_14 = 0
    
    if (var_14 == 0xfffffffc)
        int32_t var_c_1 = 0
        int32_t eax_43 = sub_402d20(4)
        
        if (add_overflow(eax_43, 0x29))
            sub_403010()
            noreturn
        
        sub_51ad40(*data_5303b8, eax_43 + 0x29)
    else if (var_14 != 0xfffffffd)
        if (var_14 == 0xffffffff)
            int32_t var_c_4 = 0
            int32_t eax_51 = sub_402d20(2)
            
            if (add_overflow(eax_51, 0x29))
                sub_403010()
                noreturn
            
            sub_51ad40(*data_5303b8, eax_51 + 0x29)
        else if (var_14 == 0xfffffffe)
            int32_t var_c_5 = 0
            sub_51ad40(*data_5303b8, 0x28)
        else if (var_18 s< 2)
        label_4c482a:
            
            if (var_14 == 1)
                int32_t var_c_7 = 0
                sub_51ad40(*data_5303b8, 0x19)
            else if (var_14 == 2)
                int32_t var_c_8 = 0
                sub_51ad40(*data_5303b8, 0x1a)
            else if (var_14 == 3)
                int32_t var_c_9 = 0
                sub_51ad40(*data_5303b8, 0x1b)
            else if (var_14 == 4)
                int32_t var_c_10 = 0
                int32_t eax_72 = sub_402d20(1)
                
                if (add_overflow(eax_72, 0x11))
                    sub_403010()
                    noreturn
                
                sub_51ad40(*data_5303b8, eax_72 + 0x11)
        else
            if (divs.dp.d(sx.q(*(*edi_1 + 0x20070)), 3) s> *(*edi_1 + 0x21100))
                goto label_4c482a
            
            void* edx_48 = *edi_1
            *(edx_48 + 0x21108)
            bool o_30 = unimplemented  {imul edx, dword [edx+0x21108], 0x4}
            
            if (o_30)
                sub_403010()
                noreturn
            
            if (*(*edi_1 + 0x21100) s< *(edx_48 + 0x21108) * 4 || *(*edi_1 + 0x111f9) != 0)
                goto label_4c482a
            
            int32_t var_c_6 = 0
            int32_t eax_63 = sub_402d20(3)
            
            if (add_overflow(eax_63, 0x22))
                sub_403010()
                noreturn
            
            sub_51ad40(*data_5303b8, eax_63 + 0x22)
    else if (var_20 s< 7)
        int32_t var_c_3 = 0
        int32_t eax_48 = sub_402d20(3)
        
        if (add_overflow(eax_48, 0x22))
            sub_403010()
            noreturn
        
        sub_51ad40(*data_5303b8, eax_48 + 0x22)
    else
        int32_t var_c_2 = 0
        sub_51ad40(*data_5303b8, 0x25)
    
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4c48cd
    int32_t* result = &var_25c
    sub_403df8(result)
    return result
}
