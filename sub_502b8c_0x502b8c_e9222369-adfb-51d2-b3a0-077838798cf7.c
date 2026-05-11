// ============================================================
// 函数名称: sub_502b8c
// 虚拟地址: 0x502b8c
// WARP GUID: e9222369-adfb-51d2-b3a0-077838798cf7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52c4bc, sub_52bf20, sub_404138, sub_44cde0, sub_408e1c, sub_4f1e48, sub_404688, sub_403df8, sub_52c1b4, sub_404780, sub_4f1460, sub_403e1c, sub_503984, sub_403010
// [被调用的父级函数]: sub_4ee958, sub_4c62e8
// ============================================================

void* __convention("regparm")sub_502b8c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ esi, int32_t arg5 @ edi, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_8 = arg1
    int32_t* esp_1 = &var_8
    int32_t i_7 = 0x11
    int32_t i
    
    do
        esp_1[-0x400] = i_7
        esp_1 = &esp_1[-0x400]
        i = i_7
        i_7 -= 1
    while (i != 1)
    int32_t eax = var_8
    int32_t entry_ebx
    esp_1[-0x2c4] = entry_ebx
    esp_1[-0x2c5] = arg4
    esp_1[-0x2c6] = arg5
    int32_t var_11b10 = 0
    int32_t var_11b14 = 0
    int32_t var_11b08 = 0
    int32_t var_11b0c = 0
    int32_t var_2c = 0
    var_8 = eax
    char var_8df0[0x8978]
    sub_404688(&var_8df0, 0x48ec68)
    char var_11b04[0x8978]
    sub_404688(&var_11b04, 0x48ec68)
    esp_1[-0x2c7] = &var_4
    esp_1[-0x2c8] = j_sub_4037f0
    TEB* fsbase
    esp_1[-0x2c9] = fsbase->NtTib.ExceptionList
    void* esp_9 = &esp_1[-0x2c9]
    fsbase->NtTib.ExceptionList = esp_9
    int32_t ebx = var_8
    data_7a7d60 = 0
    data_7a7d5c = 0
    
    if (arg6 == 0)
        bool o_1 = unimplemented  {imul eax, dword [ebp-0x2c], 0x2345}
        
        if (o_1)
            sub_403010()
            noreturn
        
        arg6 = *(data_5301b0 + arg7 * 0x8d14 - 0x39c)
    
    bool o_2 = unimplemented  {imul eax, dword [ebp-0x2c], 0x2345}
    
    if (o_2)
        sub_403010()
        noreturn
    
    if (add_overflow(arg6, neg.d(arg3)))
        sub_403010()
        noreturn
    
    bool o_4 = unimplemented  {imul edx, edx, 0x35}
    
    if (o_4)
        sub_403010()
        noreturn
    
    int32_t esi = ebx * 0x2345
    bool o_5 = unimplemented  {imul esi, ebx, 0x2345}
    
    if (o_5)
        sub_403010()
        noreturn
    
    int32_t eax_10
    int32_t ecx_1
    eax_10, ecx_1 = sub_4f1460(data_5301b0 + (esi << 2) - 0x8d14, 
        data_5301b0 + arg7 * 0x8d14 + (arg6 - arg3) * 0xd4 - 0x8de8, 1)
    int32_t edi = eax_10
    
    if (ebx s> 1)
        edi = 1
    
    if (arg2 s< 1)
        int32_t i_12 = arg2
        
        if (i_12 s> 0)
            int32_t var_1c_2 = 1
            int32_t i_1
            
            do
                if (ebp_1[-2] s<= 1)
                    int32_t eax_79 = ebp_1[-6]
                    int32_t eax_80 = eax_79 + edi
                    
                    if (add_overflow(eax_79, edi))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_80, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    *(esp_9 - 4) = eax_80 - 1
                    *(esp_9 - 8) = 1
                    *(esp_9 - 0xc) = 2
                    *(esp_9 - 0x10) = 3
                    *(esp_9 - 0x14) = fconvert.s(fconvert.t(0f) + fconvert.t(ebp_1[4]))
                    *(esp_9 - 0x18) = 0
                    *(esp_9 - 0x1c) = 0
                    esp_9 -= 0x1c
                    ebp_1[-0xb]
                    bool o_62 = unimplemented  {imul eax, dword [ebp-0x2c], 0x2345}
                    
                    if (o_62)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_56 = *(data_5301b0 + ebp_1[-0xb] * 0x8d14 - 0x39c)
                    
                    if (add_overflow(edx_56, 1))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(edx_56 + 1, neg.d(ebp_1[-6])))
                        sub_403010()
                        noreturn
                    
                    if (neg.d(ebx) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    ecx_1, ebp_1 = sub_503984(ebp_1[-0xb], edx_56 + 1 - ebp_1[-6], neg.d(ebx))
                else
                    int32_t eax_71 = ebp_1[-6]
                    int32_t eax_72 = eax_71 + edi
                    
                    if (add_overflow(eax_71, edi))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_72, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    *(esp_9 - 4) = eax_72 - 1
                    *(esp_9 - 8) = 1
                    *(esp_9 - 0xc) = 2
                    *(esp_9 - 0x10) = 3
                    *(esp_9 - 0x14) = fconvert.s(fconvert.t(0f) + fconvert.t(ebp_1[4]))
                    int32_t eax_74 = ebp_1[-2]
                    int32_t eax_75 = eax_74 - ebp_1[-6]
                    
                    if (add_overflow(eax_74, neg.d(ebp_1[-6])))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_75, 1))
                        sub_403010()
                        noreturn
                    
                    *(esp_9 - 0x18) = eax_75 + 1
                    *(esp_9 - 0x1c) = 0
                    esp_9 -= 0x1c
                    ebp_1[-0xb]
                    bool o_56 = unimplemented  {imul eax, dword [ebp-0x2c], 0x2345}
                    
                    if (o_56)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_52 = *(data_5301b0 + ebp_1[-0xb] * 0x8d14 - 0x39c)
                    
                    if (add_overflow(edx_52, 1))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(edx_52 + 1, neg.d(ebp_1[-6])))
                        sub_403010()
                        noreturn
                    
                    if (neg.d(ebx) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    ecx_1, ebp_1 = sub_503984(ebp_1[-0xb], edx_52 + 1 - ebp_1[-6], neg.d(ebx))
                
                ebp_1[-6] += 1
                i_1 = i_12
                i_12 -= 1
            while (i_1 != 1)
        
        int32_t esi_8 = ebx * 0x2345
        bool o_66 = unimplemented  {imul esi, ebx, 0x2345}
        
        if (o_66)
            sub_403010()
            noreturn
        
        int32_t eax_85 = *(data_5301b0 + (esi_8 << 2) - 0x39c)
        
        if (add_overflow(eax_85, ebp_1[-2]))
            sub_403010()
            noreturn
        
        *(data_5302e4 + (esi_8 << 2) - 0x39c) = eax_85 + ebp_1[-2]
        bool o_68 = unimplemented  {imul eax, ebx, 0x2345}
        
        if (o_68)
            sub_403010()
            noreturn
        
        *(esp_9 - 4) = fconvert.s(float.t(*(data_5302e4 + ebx * 0x8d14 - 0x39c)))
        sub_4f1e48(ecx_1, 0, data_5302e4 + (esi_8 << 2) - 0x8d14)
        ebp_1[-5] = edi
        int32_t i_13 = *(data_5301b0 + (esi_8 << 2) - 0x39c)
        
        if (i_13 s> 0)
            ebp_1[-6] = 1
            void* edi_9 = data_5301b0 + 0xd4
            ebp_1[-0xc] = data_5302e4 + 0xd4
            int32_t i_2
            
            do
                if (ebp_1[-6] s< ebp_1[-5])
                    bool o_69 = unimplemented  {imul eax, ebx, 0x2345}
                    
                    if (o_69)
                        sub_403010()
                        noreturn
                    
                    bool o_70 = unimplemented  {imul edx, ebx, 0x2345}
                    
                    if (o_70)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-0xc] + ebx * 0x8d14 - 0x8de8) = *(edi_9 + ebx * 0x8d14 - 0x8de8)
                    *(esp_9 - 4) = ebp_1[-6]
                    *(esp_9 - 8) = 0
                    *(esp_9 - 0xc) = 2
                    *(esp_9 - 0x10) = 1
                    *(esp_9 - 0x14) = fconvert.s(fconvert.t(0f) + fconvert.t(ebp_1[4]))
                    *(esp_9 - 0x18) = 0
                    *(esp_9 - 0x1c) = 0
                    esp_9 -= 0x1c
                    
                    if (neg.d(ebx) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    ebp_1 = sub_503984(ebx, ebp_1[-6], neg.d(ebx))
                else if (ebp_1[-6] s>= ebp_1[-5])
                    bool o_72 = unimplemented  {imul eax, ebx, 0x2345}
                    
                    if (o_72)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_101 = *(edi_9 + ebx * 0x8d14 - 0x8de8)
                    bool o_73 = unimplemented  {imul edx, ebx, 0x2345}
                    
                    if (o_73)
                        sub_403010()
                        noreturn
                    
                    *(esp_9 - 4) = data_5302e4 + ebx * 0x8d14
                    int32_t edx_66 = ebp_1[-6]
                    
                    if (add_overflow(edx_66, ebp_1[-2]))
                        sub_403010()
                        noreturn
                    
                    bool o_75 = unimplemented  {imul edx, edx, 0x35}
                    
                    if (o_75)
                        sub_403010()
                        noreturn
                    
                    *(*(esp_9 - 4) + (edx_66 + ebp_1[-2]) * 0xd4 - 0x8de8) = eax_101
                    int32_t eax_102 = ebp_1[-6]
                    
                    if (add_overflow(eax_102, ebp_1[-2]))
                        sub_403010()
                        noreturn
                    
                    *(esp_9 - 4) = eax_102 + ebp_1[-2]
                    *(esp_9 - 8) = 0
                    *(esp_9 - 0xc) = 2
                    *(esp_9 - 0x10) = 1
                    *(esp_9 - 0x14) = fconvert.s(fconvert.t(0f) + fconvert.t(ebp_1[4]))
                    *(esp_9 - 0x18) = 0
                    *(esp_9 - 0x1c) = 0
                    esp_9 -= 0x1c
                    
                    if (neg.d(ebx) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    ebp_1 = sub_503984(ebx, ebp_1[-6], neg.d(ebx))
                
                ebp_1[-6] += 1
                ebp_1[-0xc] += 0xd4
                edi_9 += 0xd4
                i_2 = i_13
                i_13 -= 1
            while (i_2 != 1)
    else
        if (arg7 == 0xb)
            *(esp_9 - 4) = 1
            bool o_6 = unimplemented  {imul eax, dword [ebp-0x2c], 0x2345}
            
            if (o_6)
                sub_403010()
                noreturn
            
            int32_t edx_8 = arg6 - arg2
            
            if (add_overflow(arg6, neg.d(arg2)))
                sub_403010()
                noreturn
            
            if (add_overflow(edx_8, 1))
                sub_403010()
                noreturn
            
            if (add_overflow(edx_8 + 1, neg.d(arg3)))
                sub_403010()
                noreturn
            
            sub_52c1b4(arg2, edx_8 + 1 - arg3, data_5301b0 + arg7 * 0x8d14 - 0x8d14)
        
        int32_t var_478_1 = 0
        int32_t var_918c_1 = 0
        int32_t i_14 = *(data_5301b0 + (esi << 2) - 0x39c)
        
        if (i_14 s> 0)
            int32_t i_8 = i_14
            int32_t var_20_1 = 1
            void* edi_2 = data_5301b0 + 0xd4
            int32_t i_3
            
            do
                int32_t eax_14 = ebx * 0x2345
                bool o_10 = unimplemented  {imul eax, ebx, 0x2345}
                
                if (o_10)
                    sub_403010()
                    noreturn
                
                int32_t edx_11 = ebx * 0x32
                bool o_11 = unimplemented  {imul edx, ebx, 0x32}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                if (add_overflow(edx_11, var_20_1))
                    sub_403010()
                    noreturn
                
                *(edi_2 + (eax_14 << 2) - 0x8d9c) = edx_11 + var_20_1
                sub_52c4bc(&var_11b04, edi_2 + (eax_14 << 2) - 0x8de8, 0)
                var_20_1 += 1
                edi_2 += 0xd4
                i_3 = i_8
                i_8 -= 1
            while (i_3 != 1)
        
        if (add_overflow(arg3, 1))
            sub_403010()
            noreturn
        
        int32_t esi_2 = arg2 + arg3
        
        if (add_overflow(arg2, arg3))
            sub_403010()
            noreturn
        
        if (esi_2 s>= arg3 + 1)
            int32_t i_9 = esi_2 - (arg3 + 1) + 1
            int32_t var_20_2 = arg3 + 1
            int32_t i_4
            
            do
                int32_t edi_3 = arg7 * 0x2345
                bool o_15 = unimplemented  {imul edi, dword [ebp-0x2c], 0x2345}
                
                if (o_15)
                    sub_403010()
                    noreturn
                
                int32_t eax_19 = *(data_5301b0 + (edi_3 << 2) - 0x39c)
                
                if (add_overflow(eax_19, 1))
                    sub_403010()
                    noreturn
                
                int32_t eax_21 = eax_19 + 1 - var_20_2
                
                if (add_overflow(eax_19 + 1, neg.d(var_20_2)))
                    sub_403010()
                    noreturn
                
                int32_t edx_14 = arg7 * 0x32
                bool o_18 = unimplemented  {imul edx, dword [ebp-0x2c], 0x32}
                
                if (o_18)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_21, edx_14))
                    sub_403010()
                    noreturn
                
                if (add_overflow(arg6, 1))
                    sub_403010()
                    noreturn
                
                if (add_overflow(arg6 + 1, neg.d(var_20_2)))
                    sub_403010()
                    noreturn
                
                bool o_22 = unimplemented  {imul ecx, ecx, 0x35}
                
                if (o_22)
                    sub_403010()
                    noreturn
                
                *(data_5301b0 + (edi_3 << 2) + (arg6 + 1 - var_20_2) * 0xd4 - 0x8d9c) = eax_21 + edx_14
                bool o_23 = unimplemented  {imul eax, dword [ebp-0x2c], 0x2345}
                
                if (o_23)
                    sub_403010()
                    noreturn
                
                if (add_overflow(arg6, 1))
                    sub_403010()
                    noreturn
                
                if (add_overflow(arg6 + 1, neg.d(var_20_2)))
                    sub_403010()
                    noreturn
                
                bool o_26 = unimplemented  {imul edx, edx, 0x35}
                
                if (o_26)
                    sub_403010()
                    noreturn
                
                int32_t ecx_6
                ecx_6.b = 1
                sub_52c4bc(&var_8df0, 
                    data_5301b0 + arg7 * 0x8d14 + (arg6 + 1 - var_20_2) * 0xd4 - 0x8de8, ecx_6.b)
                
                if (add_overflow(arg6, 1))
                    sub_403010()
                    noreturn
                
                if (add_overflow(arg6 + 1, neg.d(var_20_2)))
                    sub_403010()
                    noreturn
                
                bool o_29 = unimplemented  {imul edx, edx, 0x35}
                
                if (o_29)
                    sub_403010()
                    noreturn
                
                sub_52c4bc(&var_11b04, 
                    data_5301b0 + (edi_3 << 2) + (arg6 + 1 - var_20_2) * 0xd4 - 0x8de8, 1)
                var_20_2 += 1
                i_4 = i_9
                i_9 -= 1
            while (i_4 != 1)
        
        if (var_8 == 1)
            *(esp_9 - 4) = 0
            sub_52c1b4(0, 0, &var_11b04)
        
        int32_t ecx_9 = sub_403df8(&var_2c)
        
        if (add_overflow(arg3, 1))
            sub_403010()
            noreturn
        
        int32_t esi_5 = arg2 + arg3
        
        if (add_overflow(arg2, arg3))
            sub_403010()
            noreturn
        
        if (esi_5 s>= arg3 + 1)
            int32_t i_10 = esi_5 - (arg3 + 1) + 1
            int32_t var_1c_1 = arg3 + 1
            int32_t i_5
            
            do
                int32_t edi_4 = ebp_1[2]
                
                if (add_overflow(edi_4, 1))
                    sub_403010()
                    noreturn
                
                int32_t edi_6 = edi_4 + 1 - ebp_1[-6]
                
                if (add_overflow(edi_4 + 1, neg.d(ebp_1[-6])))
                    sub_403010()
                    noreturn
                
                if (ebp_1[-1] != 1)
                    int32_t eax_37 = ebp_1[-6]
                    
                    if (add_overflow(eax_37, neg.d(ebp_1[-3])))
                        sub_403010()
                        noreturn
                    
                    ebp_1[-9] = eax_37 - ebp_1[-3]
                else
                    ebp_1[-0xb]
                    bool o_34 = unimplemented  {imul eax, dword [ebp-0x2c], 0x2345}
                    
                    if (o_34)
                        sub_403010()
                        noreturn
                    
                    bool o_35 = unimplemented  {imul edx, edi, 0x35}
                    
                    if (o_35)
                        sub_403010()
                        noreturn
                    
                    void* eax_36
                    eax_36, ebp_1 = sub_52bf20(
                        data_5301b0 + ebp_1[-0xb] * 0x8d14 + edi_6 * 0xd4 - 0x8de8, &ebp_1[-0x46c0], 
                        i_10, edi_6)
                    ebp_1[-9] = eax_36
                
                *(esp_9 - 4) = ebp_1[-0xa]
                *(esp_9 - 8) = &data_5034f0
                sub_408e1c(edi_6, &ebp_1[-0x46c1])
                *(esp_9 - 0xc) = ebp_1[-0x46c1]
                *(esp_9 - 0x10) = &data_5034fc
                sub_408e1c(ebp_1[-9], &ebp_1[-0x46c2])
                *(esp_9 - 0x14) = ebp_1[-0x46c2]
                *(esp_9 - 0x18) = &data_503508
                sub_404138(&ebp_1[-0xa], 6)
                ebp_1[-0xb]
                bool o_37 = unimplemented  {imul eax, dword [ebp-0x2c], 0x2345}
                
                if (o_37)
                    sub_403010()
                    noreturn
                
                bool o_38 = unimplemented  {imul edx, edi, 0x35}
                
                if (o_38)
                    sub_403010()
                    noreturn
                
                if (*(data_5301b0 + ebp_1[-0xb] * 0x8d14 + edi_6 * 0xd4 - 0x8de8) s> 8)
                    void* eax_45
                    eax_45.b = *(*data_5301f4 + 4)
                    char temp77_1 = eax_45.b
                    eax_45.b -= 3
                    
                    if (temp77_1 u< 3)
                        sub_44cde0()
                
                *(esp_9 - 4) = ebp_1[-9]
                *(esp_9 - 8) = 1
                *(esp_9 - 0xc) = 2
                *(esp_9 - 0x10) = 3
                *(esp_9 - 0x14) = fconvert.s(fconvert.t(0f) + fconvert.t(ebp_1[4]))
                int32_t eax_48 = ebp_1[-2]
                int32_t eax_49 = eax_48 - ebp_1[-6]
                
                if (add_overflow(eax_48, neg.d(ebp_1[-6])))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_49, 1))
                    sub_403010()
                    noreturn
                
                *(esp_9 - 0x18) = eax_49 + 1
                *(esp_9 - 0x1c) = 0
                esp_9 -= 0x1c
                
                if (neg.d(ebx) == 0x80000000)
                    sub_403010()
                    noreturn
                
                ecx_9, ebp_1 = sub_503984(ebp_1[-0xb], edi_6, neg.d(ebx))
                ebp_1[-6] += 1
                i_5 = i_10
                i_10 -= 1
            while (i_5 != 1)
        
        int32_t esi_7 = ebx * 0x2345
        bool o_42 = unimplemented  {imul esi, ebx, 0x2345}
        
        if (o_42)
            sub_403010()
            noreturn
        
        int32_t eax_53 = *(data_5301b0 + (esi_7 << 2) - 0x39c)
        
        if (add_overflow(eax_53, ebp_1[-2]))
            sub_403010()
            noreturn
        
        *(data_5302e4 + (esi_7 << 2) - 0x39c) = eax_53 + ebp_1[-2]
        
        if (ebx != 0xf)
            bool o_44 = unimplemented  {imul eax, ebx, 0x2345}
            
            if (o_44)
                sub_403010()
                noreturn
            
            *(esp_9 - 4) = fconvert.s(float.t(*(data_5302e4 + ebx * 0x8d14 - 0x39c)))
            sub_4f1e48(ecx_9, 0, data_5302e4 + (esi_7 << 2) - 0x8d14)
            int32_t i_15 = *(data_5301b0 + (esi_7 << 2) - 0x39c)
            
            if (i_15 s> 0)
                int32_t i_11 = i_15
                ebp_1[-7] = 1
                int32_t i_6
                
                do
                    int32_t edi_7 = ebp_1[-7]
                    bool o_45 = unimplemented  {imul eax, ebx, 0x2345}
                    
                    if (o_45)
                        sub_403010()
                        noreturn
                    
                    bool o_46 = unimplemented  {imul edx, edi, 0x35}
                    
                    if (o_46)
                        sub_403010()
                        noreturn
                    
                    void* eax_62
                    void* ebp_2
                    eax_62, ebp_2 = sub_52bf20(data_5301b0 + ebx * 0x8d14 + edi_7 * 0xd4 - 0x8de8, 
                        &ebp_1[-0x46c0], i_11, edi_7)
                    *(ebp_2 - 0x24) = eax_62
                    *(esp_9 - 4) = *(ebp_2 - 0x28)
                    *(esp_9 - 8) = &data_503534
                    sub_408e1c(edi_7, ebp_2 - 0x11b0c)
                    *(esp_9 - 0xc) = *(ebp_2 - 0x11b0c)
                    *(esp_9 - 0x10) = &data_5034fc
                    sub_408e1c(*(ebp_2 - 0x24), ebp_2 - 0x11b10)
                    *(esp_9 - 0x14) = *(ebp_2 - 0x11b10)
                    *(esp_9 - 0x18) = &data_503508
                    sub_404138(ebp_2 - 0x28, 6)
                    bool o_47 = unimplemented  {imul eax, ebx, 0x2345}
                    
                    if (o_47)
                        sub_403010()
                        noreturn
                    
                    bool o_48 = unimplemented  {imul edx, edi, 0x35}
                    
                    if (o_48)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_68 = *(data_5301b0 + ebx * 0x8d14 + edi_7 * 0xd4 - 0x8de8)
                    bool o_49 = unimplemented  {imul edx, ebx, 0x2345}
                    
                    if (o_49)
                        sub_403010()
                        noreturn
                    
                    *(esp_9 - 4) = data_5302e4 + ebx * 0x8d14
                    *(ebp_2 - 0x24)
                    bool o_50 = unimplemented  {imul edx, dword [ebp-0x24], 0x35}
                    
                    if (o_50)
                        sub_403010()
                        noreturn
                    
                    *(*(esp_9 - 4) + *(ebp_2 - 0x24) * 0xd4 - 0x8de8) = eax_68
                    *(esp_9 - 4) = *(ebp_2 - 0x24)
                    *(esp_9 - 8) = 0
                    *(esp_9 - 0xc) = 2
                    *(esp_9 - 0x10) = 1
                    *(esp_9 - 0x14) = fconvert.s(fconvert.t(0f) + fconvert.t(*(ebp_2 + 0x10)))
                    *(esp_9 - 0x18) = 0
                    *(esp_9 - 0x1c) = 0
                    esp_9 -= 0x1c
                    
                    if (neg.d(ebx) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    ebp_1 = sub_503984(ebx, edi_7, neg.d(ebx))
                    ebp_1[-7] += 1
                    i_6 = i_11
                    i_11 -= 1
                while (i_6 != 1)
    
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_5034d9
    sub_403e1c(&ebp_1[-0x46c4], 4)
    sub_404780(&ebp_1[-0x46c0], 0x48ec68, 2)
    sub_403df8(&ebp_1[-0xa])
    return &ebp_1[-0xa]
}
