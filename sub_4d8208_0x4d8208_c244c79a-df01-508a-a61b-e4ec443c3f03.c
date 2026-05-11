// ============================================================
// 函数名称: sub_4d8208
// 虚拟地址: 0x4d8208
// WARP GUID: c244c79a-df01-508a-a61b-e4ec443c3f03
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_404138, sub_4042c0, sub_47b5b8, sub_47b650, sub_404280, sub_403e1c, sub_403010, sub_404308, sub_403e90, sub_404078, sub_483950, sub_404188, sub_404080, sub_478234, sub_47b488, sub_40422c, sub_4040c4, sub_46fd7c, sub_403fa0, sub_403df8, sub_40c688, sub_4088f0, sub_404410, sub_47b0c8
// [被调用的父级函数]: sub_51d580, sub_51d270, sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4d8208(char* arg1, void* arg2, char* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi, void* arg6)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    char* i_5 = arg3
    int32_t* esp_1 = &i_5
    char* i_3 = 0xa
    char* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_3
        i_3 -= 1
    while (i != 1)
    *(esp_1 - 4) = i_3
    char* i_6 = i_5
    i_5 = i_3
    int32_t entry_ebx
    *(esp_1 - 8) = entry_ebx
    *(esp_1 - 0xc) = arg4
    *(esp_1 - 0x10) = arg5
    char* i_7 = i_6
    i_5 = arg1
    sub_40422c(arg2)
    sub_40422c(i_7)
    void* arg_8
    sub_40422c(arg_8)
    sub_40422c(arg6)
    int32_t* edi = &data_61c8c8
    *(esp_1 - 0x14) = &var_4
    *(esp_1 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0x1c
    sub_483950(data_61c8c8, data_61cb28)
    *(esp_1 - 0x20) = 1
    sub_47b488(data_61cb3c, data_61cb28, data_61c8c8)
    data_61cb28
    bool o = unimplemented  {imul eax, dword [0x61cb28], 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    data_61cb3c
    bool o_1 = unimplemented  {imul edx, dword [0x61cb3c], 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    *(*(data_61c8c8 + 0xab0) + data_61cb28 * 0x81c0 + data_61cb3c * 0x118 - 0x7a) = 1
    char* i_8 = i_7
    
    if (i_8 != 0)
        sub_4040c4(&i_7, ": ", i_7)
    
    *(esp_1 - 0x20) = 0
    *(esp_1 - 0x24) = &data_4d8838
    *(esp_1 - 0x28) = arg2
    *(esp_1 - 0x2c) = i_7
    char* var_38
    sub_404138(&var_38, 3)
    sub_47b650(data_61c8c8, data_61cb3c, var_38)
    void var_1c
    sub_403df8(&var_1c)
    void var_20
    sub_403df8(&var_20)
    void* var_3c
    *(esp_1 - 0x24) = &var_3c
    sub_404280(1, 1, arg_8)
    void* esp_18 = esp_1 - 0x20
    sub_404188(var_3c, 0x4d8844)
    
    if (i_8 == 0)
        sub_4042c0(&arg_8, 1, 1)
    
    int32_t i_1 = 0
    
    while (i_1 s< sub_404078(ebp_1[3]))
        int32_t i_4 = i_1
        i_1 += 1
        
        if (add_overflow(i_4, 1))
            sub_403010()
            noreturn
        
        entry_ebx.b = *(ebp_1[3] + i_1 - 1)
        
        if (entry_ebx.b != 0xd)
            sub_403fa0()
            sub_404080(&ebp_1[-6], ebp_1[-0xf])
            int32_t edx_9
            edx_9.b = *(ebp_1[3] + i_1 - 1)
            sub_403fa0()
            sub_404080(&ebp_1[-7], ebp_1[-0x10])
        
        entry_ebx = 0
        int32_t eax_21
        eax_21.b = *(ebp_1[3] + i_1 - 1)
        char temp8_1 = eax_21.b
        eax_21.b -= 0xd
        char temp10_1
        
        if (temp8_1 != 0xd)
            temp10_1 = eax_21.b
            eax_21.b -= 0x13
        
        if (temp8_1 == 0xd || temp10_1 == 0x13)
            ebp_1, edi = sub_46fd7c(*edi, ebp_1[-6])
            unimplemented  {fmul st0, dword [0x4d8848]}
            data_61cb28
            bool o_3 = unimplemented  {imul eax, dword [0x61cb28], 0x1038}
            
            if (o_3)
                sub_403010()
                noreturn
            
            data_61cb3c
            bool o_4 = unimplemented  {imul edx, dword [0x61cb3c], 0x23}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t eax_25 = *(*(*edi + 0xab0) + data_61cb28 * 0x81c0 + data_61cb3c * 0x118 - 0x9c)
            
            if (add_overflow(eax_25, 0xffffffec))
                sub_403010()
                noreturn
            
            ebp_1[-0x11] = eax_25 - 0x14
            unimplemented  {fild st0, dword [ebp-0x44]}
            unimplemented  {fcompp } f- unimplemented  {fcompp }
            bool c0_1 = unimplemented  {fcompp } f< unimplemented  {fcompp }
            bool c2_1 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
            bool c3_1 = unimplemented  {fcompp } f== unimplemented  {fcompp }
            unimplemented  {fcompp }
            unimplemented  {fcompp }
            int16_t top = top + 1
            int32_t eax_26
            eax_26.w =
                (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
            
            if (test_bit(eax_26:1.b, 6) || test_bit(eax_26:1.b, 0))
                entry_ebx.b = 1
                
                if (*(ebp_1[3] + i_1 - 1) == 0xd)
                    sub_404080(&ebp_1[-6], u" ")
                    
                    if (add_overflow(i_1, 1))
                        sub_403010()
                        noreturn
                    
                    sub_404308(0x4d8844, &ebp_1[3], i_1 + 1)
                    
                    if (add_overflow(i_1, 1))
                        sub_403010()
                        noreturn
                    
                    sub_404308(0x4d8844, &ebp_1[-9], i_1 + 1)
        
        if (*(ebp_1[3] + i_1 - 1) == 0xd && entry_ebx.b == 0)
            entry_ebx.b = 1
            sub_403df8(&ebp_1[-7])
        
        if (entry_ebx.b != 0)
            int32_t eax_32 = sub_404078(ebp_1[-6])
            int32_t eax_34 = sub_404078(ebp_1[-7])
            
            if (add_overflow(eax_32, neg.d(eax_34)))
                sub_403010()
                noreturn
            
            *(esp_18 - 4) = eax_32 - eax_34
            int32_t eax_36 = sub_404078(ebp_1[-7])
            sub_4042c0(&ebp_1[-6], *(esp_18 - 4), eax_36)
            *(esp_18 - 4) = 0
            esp_18 -= 4
            sub_4040c4(&ebp_1[-0x12], u" ", ebp_1[-6])
            sub_47b650(*edi, data_61cb3c, ebp_1[-0x12])
            sub_403e90(&ebp_1[-6], ebp_1[-7])
        
        if (*(ebp_1[3] + i_1 - 1) == 0x20)
            sub_403df8(&ebp_1[-7])
    
    *(esp_18 - 4) = 0
    void* esp_21 = esp_18 - 4
    sub_47b650(*edi, data_61cb3c, u" ")
    sub_403e90(&ebp_1[-8], ebp_1[2])
    data_61cb28
    bool o_9 = unimplemented  {imul eax, dword [0x61cb28], 0x1038}
    
    if (o_9)
        sub_403010()
        noreturn
    
    data_61cb3c
    bool o_10 = unimplemented  {imul edx, dword [0x61cb3c], 0x23}
    
    if (o_10)
        sub_403010()
        noreturn
    
    ebp_1[-4] = sx.d(*(*(*edi + 0xab0) + data_61cb28 * 0x81c0 + data_61cb3c * 0x118 - 0x14))
    ebp_1[-5] = ebp_1[-4]
    
    if (ebp_1[-4] s> 0)
        int32_t esi = 1
        int32_t i_2
        
        do
            sub_403df8(&ebp_1[-9])
            sub_403df8(&ebp_1[-0xa])
            sub_403df8(&ebp_1[-0xc])
            
            if (esi s> 1)
                if (add_overflow(esi, 0xffffffff))
                    sub_403010()
                    noreturn
                
                *(esp_21 - 4) = esi - 1
                *(esp_21 - 8) = &ebp_1[-0xa]
                *edi
                sub_47b5b8(data_61cb3c, data_61cb28)
            
            if (esi s< ebp_1[-4])
                if (add_overflow(esi, 1))
                    sub_403010()
                    noreturn
                
                *(esp_21 - 4) = esi + 1
                *(esp_21 - 8) = &ebp_1[-0xc]
                *edi
                sub_47b5b8(data_61cb3c, data_61cb28)
            
            *(esp_21 - 4) = esi
            *(esp_21 - 8) = &ebp_1[-0xb]
            *edi
            i_2 = sub_47b5b8(data_61cb3c, data_61cb28)
            *(esp_21 - 4) = &ebp_1[-0xa]
            int32_t eax_66 = sub_404078(ebp_1[-0xa])
            
            if (add_overflow(eax_66, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_404280(eax_66 - 1, 2, ebp_1[-0xa])
            *(esp_21 - 4) = &ebp_1[-0xb]
            int32_t eax_70 = sub_404078(ebp_1[-0xb])
            
            if (add_overflow(eax_70, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_404280(eax_70 - 1, 2, ebp_1[-0xb])
            *(esp_21 - 4) = &ebp_1[-0xc]
            int32_t eax_74 = sub_404078(ebp_1[-0xc])
            
            if (add_overflow(eax_74, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_404280(eax_74 - 1, 2, ebp_1[-0xc])
            *(esp_21 - 4) = ebp_1[-0xa]
            *(esp_21 - 8) = ebp_1[-0xb]
            *(esp_21 - 0xc) = ebp_1[-0xc]
            sub_404138(&ebp_1[-9], 3)
            sub_4088f0(ebp_1[-9], &ebp_1[-0x13])
            *(esp_21 - 4) = ebp_1[-0x13]
            sub_4088f0(ebp_1[-8], &ebp_1[-0x14])
            
            if (sub_40c024(ebp_1[-0x14], *(esp_21 - 4)) s> 0)
                if (add_overflow(esi, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                if (esi - 2 s< ebp_1[-5])
                    ebp_1[-5] = esi - 2
            
            void* eax_81
            eax_81.b = 3
            *(esp_21 - 4) = eax_81
            *(esp_21 - 8) = &ebp_1[-0x15]
            int32_t eax_85
            eax_85.b = 0x23
            sub_404410(eax_85.b, sub_404078(ebp_1[-8]), &ebp_1[-0x16])
            ebp_1[-0x16]
            ebp_1, edi = sub_40c688(ebp_1[-9], ebp_1[-8])
            sub_403e90(&ebp_1[-9], ebp_1[-0x15])
            sub_4042c0(&ebp_1[-9], 1, sub_404078(ebp_1[-0xa]))
            *(esp_21 - 4) = sub_404078(ebp_1[-0xc])
            int32_t eax_94 = sub_404078(ebp_1[-0xb])
            
            if (add_overflow(eax_94, 1))
                sub_403010()
                noreturn
            
            sub_4042c0(&ebp_1[-9], eax_94 + 1, *(esp_21 - 4))
            
            if (esi == 1)
                sub_4042c0(&ebp_1[-9], 1, 1)
            
            *(esp_21 - 4) = esi
            esp_21 -= 4
            sub_47b650(*edi, data_61cb3c, ebp_1[-9])
            esi += 1
        while (i_2 != 1)
    
    *(esp_21 - 4) = ebp_1[-8]
    int32_t* edi_1 = sub_47b0c8(ebp_1[-1], data_61cb28, data_61cb3c)
    data_61cb28
    bool o_18 = unimplemented  {imul eax, dword [0x61cb28], 0x1038}
    
    if (o_18)
        sub_403010()
        noreturn
    
    data_61cb3c
    bool o_19 = unimplemented  {imul edx, dword [0x61cb3c], 0x23}
    
    if (o_19)
        sub_403010()
        noreturn
    
    void* ebx_3 = *(*edi_1 + 0xab0) + data_61cb28 * 0x81c0 + data_61cb3c * 0x118 - 0xf8
    
    if (ebp_1[-8] != 0)
        *(ebx_3 + 0x74) = (ebp_1[-5]).w
        sub_478234(*edi_1, data_61cb28, sx.d(*(ebx_3 + 0x8b)))
        sub_478234(*edi_1, data_61cb28, sx.d(*(ebx_3 + 0x8c)))
    else
        *(ebx_3 + 0x74) = 0xffff
        sub_478234(*edi_1, data_61cb28, sx.d(*(ebx_3 + 0x8c)))
        sub_478234(*edi_1, data_61cb28, sx.d(*(ebx_3 + 0x8b)))
    
    *(esp_21 + 4)
    fsbase->NtTib.ExceptionList = *(esp_21 - 4)
    *(esp_21 + 4) = sub_4d881a
    sub_403e1c(&ebp_1[-0x16], 5)
    sub_403e1c(&ebp_1[-0x10], 0xb)
    sub_403e1c(&ebp_1[-3], 2)
    return sub_403e1c(&ebp_1[2], 2)
}
