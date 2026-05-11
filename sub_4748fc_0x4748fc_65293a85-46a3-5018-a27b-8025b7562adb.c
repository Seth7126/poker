// ============================================================
// 函数名称: sub_4748fc
// 虚拟地址: 0x4748fc
// WARP GUID: 65293a85-46a3-5018-a27b-8025b7562adb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_404054, sub_47ab08, sub_40422c, sub_4040c4, sub_404078, sub_4837ec, sub_4702a8, sub_4836b0, sub_402bdc, sub_46910c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4ed7a0, sub_4e6659, sub_50fa27, sub_513ae4, sub_48e9e4, sub_508844, sub_4702a8, sub_5223e8, sub_4746a0, sub_4d7b54, sub_4ee958, sub_515de8, sub_50f7b8, sub_520a94, sub_52afe4, sub_529818, sub_4c27e4, sub_4e649b
// ============================================================

void* __convention("regparm")sub_4748fc(void* arg1, void* arg2, void* arg3, int32_t arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_124 = ebx
    int32_t esi
    int32_t var_128 = esi
    int32_t edi
    int32_t var_12c = edi
    int32_t var_11c = 0
    int32_t var_120 = 0
    int32_t var_114 = 0
    int32_t var_118 = 0
    void* ebx_1 = arg1
    sub_40422c(arg2)
    sub_40422c(arg3)
    sub_40422c(arg5)
    int32_t* var_130 = &var_4
    int32_t (* var_134)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg4 == 0x65)
        bool o = unimplemented  {imul eax, eax, 0x1038}
        
        if (o)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 2) = 0x172
        bool o_1 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 6) = 0x1a4
        bool o_2 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_2)
            sub_403010()
            noreturn
        
        int32_t edx_4 = *(ebx_1 + 0xa04) - 1
        
        if (edx_4 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_3 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_3)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_4 + 1) * 0x118 - 0xf6) = 0x7d
    else if (arg4 == 0x64)
        bool o_4 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_4)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 2) = 0x172
        bool o_5 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_5)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 6) = 0x1a4
        bool o_6 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_6)
            sub_403010()
            noreturn
        
        int32_t edx_11 = *(ebx_1 + 0xa04) - 1
        
        if (edx_11 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_7 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_7)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_11 + 1) * 0x118 - 0xf6) = 0x7d
    else if (arg4 != 1)
        bool o_12 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_12)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 2) = 0x64
        bool o_13 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_13)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 6) = 0x258
        bool o_14 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_14)
            sub_403010()
            noreturn
        
        int32_t edx_25 = *(ebx_1 + 0xa04) - 1
        
        if (edx_25 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_15 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_15)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_25 + 1) * 0x118 - 0xf6) = 0xe1
    else
        bool o_8 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_8)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 2) = 0x64
        bool o_9 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_9)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 6) = 0x258
        bool o_10 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_10)
            sub_403010()
            noreturn
        
        int32_t edx_18 = *(ebx_1 + 0xa04) - 1
        
        if (edx_18 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_11 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_11)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_18 + 1) * 0x118 - 0xf6) = 0xe1
    
    bool o_16 = unimplemented  {imul eax, eax, 0x1038}
    
    if (o_16)
        sub_403010()
        noreturn
    
    int32_t eax_33 = *(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0
    
    if (arg4 s>= 0x64)
        int32_t edx_30 = *(ebx_1 + 0x9f8) - 1
        
        if (edx_30 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_17 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_17)
            sub_403010()
            noreturn
        
        *(eax_33 + (edx_30 + 1) * 0x118 - 0xf4) = 0x17
        int32_t edx_34 = *(ebx_1 + 0x9f8) - 1
        
        if (edx_34 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_18 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_18)
            sub_403010()
            noreturn
        
        *(eax_33 + (edx_34 + 1) * 0x118 - 0xf6) = 0xa
        int32_t edx_38 = *(ebx_1 + 0x9f8) - 1
        
        if (edx_38 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_19 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_19)
            sub_403010()
            noreturn
        
        *(eax_33 + (edx_38 + 1) * 0x118 - 0x9c) = 0x30
    else if (arg6 != 1)
        int32_t edx_54 = *(ebx_1 + 0x9f8) - 1
        
        if (edx_54 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_23 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_23)
            sub_403010()
            noreturn
        
        *(eax_33 + (edx_54 + 1) * 0x118 - 0xf6) = 0x14
        int32_t edx_58 = *(ebx_1 + 0x9f8) - 1
        
        if (edx_58 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_24 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_24)
            sub_403010()
            noreturn
        
        *(eax_33 + (edx_58 + 1) * 0x118 - 0xf4) = 0x3c
        int32_t edx_62 = *(ebx_1 + 0x9f8) - 1
        
        if (edx_62 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_25 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_25)
            sub_403010()
            noreturn
        
        *(eax_33 + (edx_62 + 1) * 0x118 - 0x9c) = 0x41
    else
        int32_t edx_42 = *(ebx_1 + 0x9f8) - 1
        
        if (edx_42 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_20 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_20)
            sub_403010()
            noreturn
        
        *(eax_33 + (edx_42 + 1) * 0x118 - 0xf6) = 0x14
        int32_t edx_46 = *(ebx_1 + 0x9f8) - 1
        
        if (edx_46 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_21 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_21)
            sub_403010()
            noreturn
        
        *(eax_33 + (edx_46 + 1) * 0x118 - 0xf4) = 0x32
        int32_t edx_50 = *(ebx_1 + 0x9f8) - 1
        
        if (edx_50 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_22 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_22)
            sub_403010()
            noreturn
        
        *(eax_33 + (edx_50 + 1) * 0x118 - 0x9c) = 0x41
    
    if (arg6 u< 2)
        bool o_26 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_26)
            sub_403010()
            noreturn
        
        int32_t edx_67 = *(ebx_1 + 0x9fc) - 1
        
        if (edx_67 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_27 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_27)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_67 + 1) * 0x118 - 0xf1) = 0
        bool o_28 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_28)
            sub_403010()
            noreturn
        
        int32_t edx_72 = *(ebx_1 + 0xa00) - 1
        
        if (edx_72 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_29 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_29)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_72 + 1) * 0x118 - 0xf1) = 0
        bool o_30 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_30)
            sub_403010()
            noreturn
        
        int32_t edx_77 = *(ebx_1 + 0xa04) - 1
        
        if (edx_77 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_31 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_31)
            sub_403010()
            noreturn
        
        void* esi_1 = *(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_77 + 1) * 0x118 - 0xf8
        *(esi_1 + 7) = 1
        *(esi_1 + 8) = 0x4b4f2103
        
        if (arg5 != 0)
            char var_110[0x104]
            sub_404054(&var_110, arg5, 0xff)
            sub_402bdc(esi_1 + 8, &var_110, 0x19)
        
        *(ebx_1 + 0xa14) = 1
    else if (arg6 == 4)
        bool o_32 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_32)
            sub_403010()
            noreturn
        
        int32_t edx_84 = *(ebx_1 + 0x9fc) - 1
        
        if (edx_84 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_33 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_33)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_84 + 1) * 0x118 - 0xf1) = 1
        void* ebp_2
        void* esi_3
        ebp_2, esi_3 = sub_46910c(ebx_1, "f_ja", &var_118)
        sub_4040c4(ebp_2 - 0x110, U"!", *(ebp_2 - 0x114))
        sub_404054(ebp_2 - 0x10c, *(ebp_2 - 0x110), 0xff)
        sub_402bdc(esi_3 + 8, ebp_2 - 0x10c, 0x19)
        *(ebx_1 + 0xa0c) = 6
        bool o_34 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_34)
            sub_403010()
            noreturn
        
        int32_t edx_91 = *(ebx_1 + 0xa00) - 1
        
        if (edx_91 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_35 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_35)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_91 + 1) * 0x118 - 0xf1) = 1
        void* esi_5
        ebp_1, esi_5 = sub_46910c(ebx_1, "f_nein", ebp_2 - 0x11c)
        sub_4040c4(&ebp_1[-0x46], U"!", ebp_1[-0x47])
        sub_404054(&ebp_1[-0x43], ebp_1[-0x46], 0xff)
        sub_402bdc(esi_5 + 8, &ebp_1[-0x43], 0x19)
        *(ebx_1 + 0xa10) = 7
        bool o_36 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_36)
            sub_403010()
            noreturn
        
        int32_t edx_98 = *(ebx_1 + 0xa04) - 1
        
        if (edx_98 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_37 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_37)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_98 + 1) * 0x118 - 0xf1) = 0
    
    int32_t edi_1 = 0
    int32_t esi_6 = 0
    int32_t i_4 = sub_404078(ebp_1[-1])
    
    if (i_4 s> 0)
        ebp_1[-3] = 1
        int32_t i
        
        do
            int32_t temp30_1 = esi_6
            esi_6 += 1
            
            if (add_overflow(temp30_1, 1))
                sub_403010()
                noreturn
            
            bool o_39 = unimplemented  {imul edx, edx, 0x1038}
            
            if (o_39)
                sub_403010()
                noreturn
            
            int32_t edx_105 = *(ebx_1 + 0x9f8) - 1
            
            if (edx_105 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_40 = unimplemented  {imul edx, edx, 0x23}
            
            if (o_40)
                sub_403010()
                noreturn
            
            int32_t edx_108 =
                *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_105 + 1) * 0x118 - 0x9c)
            
            if (add_overflow(edx_108, 0xfffffffa))
                sub_403010()
                noreturn
            
            if (esi_6 s> edx_108 - 6)
                esi_6 = 0
                int32_t temp56_1 = edi_1
                edi_1 += 1
                
                if (add_overflow(temp56_1, 1))
                    sub_403010()
                    noreturn
            
            void* ecx_9 = ebp_1[-1]
            int32_t edx_111 = ebp_1[-3] - 1
            
            if (edx_111 u>= *(ecx_9 - 4))
                sub_403008()
                noreturn
            
            if (*(ecx_9 + edx_111 + 1 - 1) == 0xd)
                esi_6 = 0
                int32_t temp62_1 = edi_1
                edi_1 += 1
                
                if (add_overflow(temp62_1, 1))
                    sub_403010()
                    noreturn
            
            ebp_1[-3] += 1
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    if (ebp_1[3] s>= 0x64)
        if (edi_1 s<= 1)
            bool o_44 = unimplemented  {imul eax, eax, 0x1038}
            
            if (o_44)
                sub_403010()
                noreturn
            
            int32_t edx_115 = *(ebx_1 + 0x9f8) - 1
            
            if (edx_115 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_45 = unimplemented  {imul edx, edx, 0x23}
            
            if (o_45)
                sub_403010()
                noreturn
            
            *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + (edx_115 + 1) * 0x118 - 0xf4) = 0xf
        
        bool o_46 = unimplemented  {imul edx, edx, 0x1038}
        
        if (o_46)
            sub_403010()
            noreturn
        
        int32_t eax_68 = edi_1 * 0x16
        bool o_47 = unimplemented  {imul eax, edi, 0x16}
        
        if (o_47)
            sub_403010()
            noreturn
        
        if (add_overflow(eax_68, 0x96))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_68 + 0x96, 0xf))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_68 + 0xa5, 0xffffffe2))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_68 + 0x87, 0xffffffe2))
            sub_403010()
            noreturn
        
        if (eax_68 + 0x8069 u> 0xffff)
            sub_403008()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 8) = (eax_68 + 0x8069).w - 0x8000
        
        if (add_overflow(0x1c2, neg.d(eax_68)))
            sub_403010()
            noreturn
        
        if (add_overflow(0x1c2 - eax_68, 0x22))
            sub_403010()
            noreturn
        
        if (0x1c2 - eax_68 + 0x8022 u> 0xffff)
            sub_403008()
            noreturn
        
        bool o_54 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_54)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 4) = (0x1c2 - eax_68 + 0x8022).w - 0x8000
        int32_t edx_124 = *(ebx_1 + 0xa04)
        int32_t eax_71 = *(ebx_1 + 0xa00)
        
        if (eax_71 s>= edx_124)
            int32_t i_5 = eax_71 - edx_124 + 1
            int32_t i_1
            
            do
                bool o_55 = unimplemented  {imul ecx, ecx, 0x1038}
                
                if (o_55)
                    sub_403010()
                    noreturn
                
                if (edx_124 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_56 = unimplemented  {imul ecx, edx, 0x23}
                
                if (o_56)
                    sub_403010()
                    noreturn
                
                int32_t ecx_17 = edi_1 * 0x16
                bool o_57 = unimplemented  {imul ecx, edi, 0x16}
                
                if (o_57)
                    sub_403010()
                    noreturn
                
                if (add_overflow(ecx_17, 0x5f))
                    sub_403010()
                    noreturn
                
                if (add_overflow(ecx_17 + 0x5f, 2))
                    sub_403010()
                    noreturn
                
                if (add_overflow(ecx_17 + 0x61, 0xffffffd8))
                    sub_403010()
                    noreturn
                
                if (ecx_17 + 0x8039 u> 0xffff)
                    sub_403008()
                    noreturn
                
                *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + edx_124 * 0x118 - 0xf4) =
                    (ecx_17 + 0x8039).w - 0x8000
                edx_124 += 1
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
    else if (ebp_1[5] != 1)
        bool o_74 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_74)
            sub_403010()
            noreturn
        
        int32_t ecx_40 = edi_1 * 0x16
        bool o_75 = unimplemented  {imul ecx, edi, 0x16}
        
        if (o_75)
            sub_403010()
            noreturn
        
        if (add_overflow(ecx_40, 0x96))
            sub_403010()
            noreturn
        
        if (add_overflow(ecx_40 + 0x96, 0xf))
            sub_403010()
            noreturn
        
        if (ecx_40 + 0x80a5 u> 0xffff)
            sub_403008()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 8) = (ecx_40 + 0x80a5).w - 0x8000
        int32_t eax_82 = edi_1 * 0xb
        bool o_78 = unimplemented  {imul eax, edi, 0xb}
        
        if (o_78)
            sub_403010()
            noreturn
        
        if (add_overflow(0xe6, neg.d(eax_82)))
            sub_403010()
            noreturn
        
        if (0xe6 - eax_82 + 0x8000 u> 0xffff)
            sub_403008()
            noreturn
        
        bool o_80 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_80)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 4) = (0xe6 - eax_82 + 0x8000).w - 0x8000
        int32_t edx_138 = *(ebx_1 + 0xa04)
        int32_t eax_85 = *(ebx_1 + 0xa00)
        
        if (eax_85 s>= edx_138)
            int32_t i_7 = eax_85 - edx_138 + 1
            int32_t i_2
            
            do
                bool o_81 = unimplemented  {imul ecx, ecx, 0x1038}
                
                if (o_81)
                    sub_403010()
                    noreturn
                
                if (edx_138 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_82 = unimplemented  {imul ecx, edx, 0x23}
                
                if (o_82)
                    sub_403010()
                    noreturn
                
                int32_t ecx_51 = edi_1 * 0x16
                bool o_83 = unimplemented  {imul ecx, edi, 0x16}
                
                if (o_83)
                    sub_403010()
                    noreturn
                
                if (add_overflow(ecx_51, 0x5f))
                    sub_403010()
                    noreturn
                
                if (add_overflow(ecx_51 + 0x5f, 0x14))
                    sub_403010()
                    noreturn
                
                if (ecx_51 + 0x8073 u> 0xffff)
                    sub_403008()
                    noreturn
                
                *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + edx_138 * 0x118 - 0xf4) =
                    (ecx_51 + 0x8073).w - 0x8000
                edx_138 += 1
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
    else
        bool o_61 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_61)
            sub_403010()
            noreturn
        
        int32_t ecx_23 = edi_1 * 0x16
        bool o_62 = unimplemented  {imul ecx, edi, 0x16}
        
        if (o_62)
            sub_403010()
            noreturn
        
        if (add_overflow(ecx_23, 0x96))
            sub_403010()
            noreturn
        
        if (add_overflow(ecx_23 + 0x96, 0xf))
            sub_403010()
            noreturn
        
        if (add_overflow(ecx_23 + 0xa5, 0xffffffe2))
            sub_403010()
            noreturn
        
        if (ecx_23 + 0x8087 u> 0xffff)
            sub_403008()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 8) = (ecx_23 + 0x8087).w - 0x8000
        int32_t eax_75 = edi_1 * 0xb
        bool o_66 = unimplemented  {imul eax, edi, 0xb}
        
        if (o_66)
            sub_403010()
            noreturn
        
        if (add_overflow(0x1c2, neg.d(eax_75)))
            sub_403010()
            noreturn
        
        if (0x1c2 - eax_75 + 0x8000 u> 0xffff)
            sub_403008()
            noreturn
        
        bool o_68 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_68)
            sub_403010()
            noreturn
        
        *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + 4) = (0x1c2 - eax_75 + 0x8000).w - 0x8000
        int32_t edx_131 = *(ebx_1 + 0xa04)
        int32_t eax_78 = *(ebx_1 + 0xa00)
        
        if (eax_78 s>= edx_131)
            int32_t i_6 = eax_78 - edx_131 + 1
            int32_t i_3
            
            do
                bool o_69 = unimplemented  {imul ecx, ecx, 0x1038}
                
                if (o_69)
                    sub_403010()
                    noreturn
                
                if (edx_131 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_70 = unimplemented  {imul ecx, edx, 0x23}
                
                if (o_70)
                    sub_403010()
                    noreturn
                
                int32_t ecx_35 = edi_1 * 0x16
                bool o_71 = unimplemented  {imul ecx, edi, 0x16}
                
                if (o_71)
                    sub_403010()
                    noreturn
                
                if (add_overflow(ecx_35, 0x5f))
                    sub_403010()
                    noreturn
                
                if (add_overflow(ecx_35 + 0x5f, 2))
                    sub_403010()
                    noreturn
                
                if (ecx_35 + 0x8061 u> 0xffff)
                    sub_403008()
                    noreturn
                
                *(*(ebx_1 + 0xab0) + *(ebx_1 + 0x9f0) * 0x81c0 + edx_131 * 0x118 - 0xf4) =
                    (ecx_35 + 0x8061).w - 0x8000
                edx_131 += 1
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
    
    long double x87_r0
    
    if (ebp_1[-2] != 0)
        ebx_1 = sub_47ab08(ebx_1, *(ebx_1 + 0x9f0), 1, x87_r0, ebp_1[-2])
    
    if (ebp_1[3] s>= 0x64)
        ebx_1 = sub_47ab08(ebx_1, *(ebx_1 + 0x9f0), 1, x87_r0, nullptr)
    
    float ebx_2 = sub_47ab08(ebx_1, *(ebx_1 + 0x9f0), *(ebx_1 + 0x9f8), x87_r0, ebp_1[-1])
    
    if (ebp_1[2].b == 0)
        sub_4836b0(ebx_2, *(ebx_2 i+ 0x9f0))
    else
        sub_4837ec(ebx_2, *(ebx_2 i+ 0x9f0), true)
    
    *(ebx_2 i+ 0xabd) = 1
    
    while (true)
        int32_t edx_145
        edx_145.b = 1
        void* ebp_3 = sub_4702a8(ebx_2, edx_145.b)
        
        if (*(ebx_2 i+ 0xabd) != 0)
            bool o_86 = unimplemented  {imul eax, eax, 0x1038}
            
            if (o_86)
                break
            
            if (*(*(ebx_2 i+ 0xab0) + *(ebx_2 i+ 0x9f0) * 0x81c0 + 1) != 0 && *(ebx_2 i+ 0xa2c) != 3)
                continue
        
        *(ebx_2 i+ 0xabd) = 0
        *(ebx_2 i+ 0xa08)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t (__stdcall* var_130_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_475578
        sub_403e1c(ebp_3 - 0x11c, 4)
        sub_403e1c(ebp_3 - 8, 2)
        sub_403df8(ebp_3 + 0x10)
        return ebp_3 + 0x10
    
    sub_403010()
    noreturn
}
