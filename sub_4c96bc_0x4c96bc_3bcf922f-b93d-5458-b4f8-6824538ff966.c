// ============================================================
// 函数名称: sub_4c96bc
// 虚拟地址: 0x4c96bc
// WARP GUID: 3bcf922f-b93d-5458-b4f8-6824538ff966
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_51f90c, sub_4c2b1c, sub_47a1c0, sub_404138, sub_4b740c, sub_40401c, sub_402bdc, sub_4c585c, sub_511764, sub_513e4c, sub_403e1c, sub_403010, sub_4c2f80, sub_4c5614, sub_4ca008, sub_402d20, sub_50918c, sub_4d36c4, sub_4c9540, sub_529170, sub_514cc4, sub_4c94dc, sub_47ab08, sub_4040c4, sub_408e1c, sub_4c1090, sub_4c094c, sub_4c92f0, sub_508998, sub_5075fc, sub_507860, sub_4c2f1c, sub_4c2de8, sub_4c0924
// [被调用的父级函数]: sub_528320
// ============================================================

int32_t __convention("regparm")sub_4c96bc(char arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_10 = 8
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_10
        i_10 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_10
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg2
    *(esp_2 - 0x10) = arg3
    void* edi = data_530454
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x1c
    *(esp_2 - 0x20) = 0
    int80_t x87_r0
    sub_47ab08(*data_530304, *data_530040, 2, x87_r0)
    void* esp_11 = esp_2 - 0x1c
    *data_530794 = sub_402d20(0xa)
    *data_52ffa4 = 0
    *data_5305f4 = 0
    
    if (arg1 != 0)
        void* esi_1 = data_52fed4 + 4
        int32_t i_1
        
        do
            *(esp_11 - 4) = 0
            i_1 = sub_47ab08(*data_530304, *data_530a74, *esi_1, x87_r0)
            esi_1 += 4
        while (i_1 != 1)
        *(*data_5301f4 + 0x4584) = 0
        *(*data_5301f4 + 0x10148) = 0
        
        if (sub_4c094c() != 0)
            *(*edi + 0x270) = 0xffffffff
            sub_4ca008()
            sub_4c92f0()
            *(data_5301b0 + 0x69954) = 0
            *(data_5301b0 + 0x72668) = 0
        
        sub_4d36c4(9, 0, 6)
        sub_4d36c4(0xa, 0, 6)
        arg2 = *data_5300d0
        
        if (arg2 s> 0)
            int32_t ebx_2 = 1
            int32_t i_2
            
            do
                sub_4d36c4(ebx_2, 0, 6)
                ebx_2 += 1
                i_2 = arg2
                arg2 -= 1
            while (i_2 != 1)
        
        int32_t i_11 = 8
        void* eax_17 = data_5304fc + 0x174dc
        int32_t i_3
        
        do
            *eax_17 = 0
            eax_17 += 0x174e0
            i_3 = i_11
            i_11 -= 1
        while (i_3 != 1)
        int32_t ebx_4 = *data_5300d0
        int32_t i_4 = ebx_4 + 1
        
        if (add_overflow(ebx_4, 1))
            sub_403010()
            noreturn
        
        if (i_4 s<= 8)
            bool o_2 = unimplemented  {imul eax, ebx, 0x2e9c}
            
            if (o_2)
                sub_403010()
                noreturn
            
            void* eax_19 = data_5304fc + i_4 * 0x174e0 - 0xa8
            
            do
                *eax_19 = 0
                i_4 += 1
                eax_19 += 0x174e0
            while (i_4 != 9)
    
    if (sub_4c0924() != 0)
        if (*(*edi + 0x1e2) == 0)
            *(*edi + 0x9c) = 0
        
        void var_10
        ebp_1 = sub_507860(&var_10)
        sub_404054(*edi + 0xa0, ebp_1[-3], 0xff)
        sub_513e4c(*edi, 0)
        
        if (*(ebp_1 - 1) != 0)
            arg2 = *data_5300d0
            
            if (arg2 s> 0)
                int32_t ebx_5 = 1
                int32_t i_5
                
                do
                    bool o_3 = unimplemented  {imul eax, ebx, 0xe9}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    *(*edi + ebx_5 * 0x3a4 + 0x18c) = 0
                    ebx_5 += 1
                    i_5 = arg2
                    arg2 -= 1
                while (i_5 != 1)
    
    if (sub_4c0924() == 0)
        *(*edi + 0x1b4) = 0
    
    sub_4c9540()
    sub_408e1c(sub_4c2de8(0), &ebp_1[-5])
    struct _EXCEPTION_REGISTRATION_RECORD* ecx_6
    int32_t edx_9
    ecx_6, edx_9 = sub_4040c4(&ebp_1[-4], "pknewgame", ebp_1[-5])
    void* ebp_2 = sub_4c2b1c(ebp_1[-4], edx_9, ecx_6)
    
    if (*(ebp_2 - 1) != 0)
        *(*data_5301f4 + 0x21128) = 0
    
    *(*data_5301f4 + 0x1026c) = 0
    *(*data_5301f4 + 0x10884) = 1
    *(*data_5301f4 + 0x20064) = 0
    *(data_530258 + 0x10) = 0
    sub_4b740c(*data_530380, 0)
    
    if (*(ebp_2 - 1) != 0)
        sub_50918c(0, sub_4c585c())
    
    sub_4c94dc()
    
    if (sub_4c0924() == 0)
        sub_51f90c(*data_5301f4)
    
    sub_4c5614()
    void* edx_11
    
    if (sub_4c0924() != 0)
        if (*(ebp_2 - 1) != 0)
            *(*edi + 0x9c) = 1
        
        if (sub_4c2f1c(1) != 0)
            *(*edi + 0x9c) = 1
        
        if (sub_4c094c() != 0)
            *(esp_11 - 4) = "----------------to>"
            sub_408e1c(*(*data_5301f4 + 0xfff0), ebp_2 - 0x1c)
            *(esp_11 - 8) = *(ebp_2 - 0x1c)
            *(esp_11 - 0xc) = "> akspi:"
            sub_408e1c(*(*data_5301f4 + 0x10020), ebp_2 - 0x20)
            *(esp_11 - 0x10) = *(ebp_2 - 0x20)
            *(esp_11 - 0x14) = ", d,sb,bb:"
            sub_408e1c(*(*data_5301f4 + 0x200a4), ebp_2 - 0x24)
            *(esp_11 - 0x18) = *(ebp_2 - 0x24)
            *(esp_11 - 0x1c) = &data_4c9f48
            sub_408e1c(*(*data_5301f4 + 0x2009c), ebp_2 - 0x28)
            *(esp_11 - 0x20) = *(ebp_2 - 0x28)
            *(esp_11 - 0x24) = &data_4c9f48
            sub_408e1c(*(*data_5301f4 + 0x200a0), ebp_2 - 0x2c)
            *(esp_11 - 0x28) = *(ebp_2 - 0x2c)
            sub_404138(ebp_2 - 0x18, 0xa)
            sub_514cc4(*edi, *(ebp_2 - 0x18))
            void* ebp_3 = sub_507860(ebp_2 - 0x30)
            sub_404054(*edi + 0xa0, *(ebp_3 - 0x30), 0xff)
            int32_t ecx_8 = sub_408e1c(*(*data_5301f4 + 0x4584), ebp_3 - 0x38)
            *(esp_11 - 0x20) = *(ebp_3 - 0x38)
            *(esp_11 - 0x24) = ". CHECKSUM:"
            sub_40401c(ecx_8, *edi + 0xa0)
            *(esp_11 - 0x28) = *(ebp_3 - 0x3c)
            sub_404138(ebp_3 - 0x34, 3)
            esp_11 -= 0x1c
            sub_514cc4(*edi, *(ebp_3 - 0x34))
            void* eax_78 = *edi
            *(eax_78 + 0x350)
            bool o_4 = unimplemented  {imul eax, dword [eax+0x350], 0xe9}
            
            if (o_4)
                sub_403010()
                noreturn
            
            sub_402bdc(*edi + *(eax_78 + 0x350) * 0x3a4 + 0x198, *edi + 0xa0, 0x20)
        
        sub_508998(1, arg2, edi)
        *(*data_530304 + 0x1334) = 1
        *(*edi + 0x9c) = 0
        edx_11, ebp_2 = sub_5075fc()
    else
        sub_4c92f0()
    
    if (*(*edi + 0x1e3) != 0)
        *(*data_5301f4 + 0xfff0) = 0
        *(*data_5301f4 + 0xffec) = 5
    else
        if (sub_4c0924() != 0)
            sub_51f90c(*data_5301f4)
        
        *(*data_5301f4 + 0x111fb) = 0
        *data_52ffb8 = 0
        
        if (sub_4c0924() != 0)
            sub_511764(*edi, 0x14)
        
        if (*(ebp_2 - 1) != 0)
            sub_4d36c4(9, 0, 6)
            sub_4d36c4(0xa, 0, 6)
            int32_t i_13 = *data_5300d0
            
            if (i_13 s> 0)
                int32_t ebx_6 = 1
                int32_t i_6
                
                do
                    sub_4d36c4(ebx_6, 0, 6)
                    ebx_6 += 1
                    i_6 = i_13
                    i_13 -= 1
                while (i_6 != 1)
            
            int32_t i_12 = 8
            void* eax_95 = data_5304fc + 0x174dc
            int32_t i_7
            
            do
                *eax_95 = 0
                eax_95 += 0x174e0
                i_7 = i_12
                i_12 -= 1
            while (i_7 != 1)
            int32_t ebx_8 = *data_5300d0
            int32_t i_8 = ebx_8 + 1
            
            if (add_overflow(ebx_8, 1))
                sub_403010()
                noreturn
            
            if (i_8 s<= 8)
                bool o_6 = unimplemented  {imul eax, ebx, 0x2e9c}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                void* eax_97 = data_5304fc + i_8 * 0x174e0 - 0xa8
                
                do
                    *eax_97 = 0
                    i_8 += 1
                    eax_97 += 0x174e0
                while (i_8 != 9)
        
        *(*data_5301f4 + 0x2111c) = 0
        *(*data_5301f4 + 0x20060) = 1
        
        if (*(ebp_2 - 1) != 0)
            if (*(*data_5301f4 + 0x2006c) != 1)
                int32_t eax_112 = *(*data_5301f4 + 0x2006c)
                
                if (add_overflow(eax_112, 0xffffffff))
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + 0x10034) = eax_112 - 1
            else
                int32_t eax_106 = *(*data_5301f4 + 0x456c)
                
                if (add_overflow(eax_106, 0xffffffff))
                    sub_403010()
                    noreturn
                
                int32_t eax_108 = sub_402d20(eax_106 - 1)
                
                if (add_overflow(eax_108, 2))
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + 0x10034) = eax_108 + 2
            
            *(*data_5301f4 + 0x10020) = *(*data_5301f4 + 0x10034)
        
        int32_t i_14 = *data_5300d0
        
        if (i_14 s> 0)
            int32_t ebx_9 = 1
            *(ebp_2 - 8) = data_530208 + 4
            int32_t i_9
            
            do
                if (*(ebp_2 - 1) != 0)
                    if (sub_4c0924() == 0)
                        bool o_10 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_10)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + ebx_9 * 0x208 + 0x1fea0) = 1
                    
                    bool o_11 = unimplemented  {imul eax, ebx, 0x41}
                    
                    if (o_11)
                        sub_403010()
                        noreturn
                    
                    *(*data_5301f4 + ebx_9 * 0x208 + 0x20090) = 0
                
                int32_t eax_122 = ebx_9 * 0x41
                bool o_12 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + (eax_122 << 3) + 0x1fea0) != 0)
                    char* edi_1 = *data_5301f4 + (eax_122 << 3) + 0x1fea0
                    edi_1[2] = 0xb
                    *edi_1 = 1
                    edi_1[0xe] = 0
                    edi_1[0x1e5] = 0
                    *(edi_1 + 0x1ec) = 0
                    edi_1[0xc] = 0
                    edi_1[0xd] = 0
                    *(esp_11 - 4) = 1
                    sub_47a1c0(**(ebp_2 - 8), *data_530a74, *data_530304)
                    *(edi_1 + 0x200) = 0
                    *(edi_1 + 0x1fc) = 0
                    *(edi_1 + 0x204) = 0
                
                ebx_9 += 1
                *(ebp_2 - 8) += 4
                i_9 = i_14
                i_14 -= 1
            while (i_9 != 1)
        
        if (*(ebp_2 - 1) == 0)
            edx_11.b = 1
            sub_4c2f80(0)
            sub_408e1c(sub_4c2de8(0), ebp_2 - 0x44)
            struct _EXCEPTION_REGISTRATION_RECORD* ecx_14
            int32_t edx_43
            ecx_14, edx_43 = sub_4040c4(ebp_2 - 0x40, "pokraus", *(ebp_2 - 0x44))
            ebp_2 = sub_4c2b1c(*(ebp_2 - 0x40), edx_43, ecx_14)
        
        if (*(ebp_2 - 1) != 0 && sub_4c1090() != 0)
            int32_t eax_132 = *(*data_5301f4 + 0x11204)
            
            if (eax_132 != 1)
                data_5301f4
                
                if (eax_132 != 2)
                    data_5301f4
                    
                    if (eax_132 != 3)
                        data_5301f4
                        
                        if (eax_132 == 4)
                            sub_529170(*data_5302c4, 0x13, 8)
                    else
                        sub_529170(*data_5302c4, 9, 8)
                else
                    sub_529170(*data_5302c4, 7, 6)
            else
                sub_529170(*data_5302c4, 4, 6)
    
    *(esp_11 + 8)
    fsbase->NtTib.ExceptionList = *esp_11
    *(esp_11 + 8) = sub_4c9ee1
    return sub_403e1c(ebp_2 - 0x44, 0xf)
}
