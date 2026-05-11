// ============================================================
// 函数名称: sub_4b19b0
// 虚拟地址: 0x4b19b0
// WARP GUID: e25d2487-65b4-56df-938e-69513bf72a0a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e90, sub_4b1dd8, sub_403248, sub_404078, sub_4b1da8, sub_403e4c, sub_4b17c4, sub_4b1964, sub_4afaf8, sub_403df8, sub_4b0fd8, sub_4b1160, sub_4b18e4
// [被调用的父级函数]: sub_4b0427, sub_4b008c
// ============================================================

void* __convention("regparm")sub_4b19b0(struct _EXCEPTION_REGISTRATION_RECORD* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    int32_t ecx
    
    if (sub_4b1964(0, 0, ecx, &var_4) != 0)
        char var_9_1 = 2
        char ebx_1 = 0
        int32_t eax_5
        eax_5, ebp_1 = sub_4b1160(var_8->__offset(0xc).d)
        int32_t temp0_1 = divs.dp.d(sx.q(eax_5), 0x64)
        int32_t eax_10
        
        if (temp0_1 == 3)
            eax_10, ebp_1 = sub_4b1160(*(ebp_1[-1] + 0xc))
        
        int32_t eax_14
        
        if (temp0_1 != 3 || eax_10 == 0x130)
            eax_14 = sub_404078(*(*(ebp_1[-1] + 0xc) + 0x50))
        
        if ((temp0_1 != 3 || eax_10 == 0x130) && eax_14 s<= 0)
            if (*(*(ebp_1[-1] + 4) + 0x74) != 0)
                char eax_49
                
                if ((*(**(ebp_1[-1] + 4) + 0x54))() == 0)
                    eax_49 = 1
                else if (sub_403248(*(*(ebp_1[-1] + 4) + 0x74), 0x4a9e20) == 0)
                    eax_49 = 1
                else
                    eax_49, ebp_1 = sub_4b0fd8(*(ebp_1[-1] + 0xc))
                    
                    eax_49 = eax_49 == 0 ? 1 : 0
                
                *(*(ebp_1[-1] + 0xc) + 0x74) = eax_49
            
            if (temp0_1 != 2)
                *(ebp_1 - 5) = 0
                int32_t eax_57
                eax_57, ebp_1 = sub_4b1160(*(ebp_1[-1] + 0xc))
                
                if (eax_57 == 0x191)
                    int32_t eax_62 = sub_4b1da8(*(ebp_1[-1] + 4))
                    int32_t* esi_2 = *(ebp_1[-1] + 4)
                    char eax_66
                    
                    if (eax_62 s< esi_2[0x3a])
                        *(ebp_1[-1] + 0xc)
                        *(ebp_1[-1] + 8)
                        eax_66 = (*(*esi_2 + 0x9c))()
                    
                    if (eax_62 s>= esi_2[0x3a] || eax_66 == 0)
                        int32_t* eax_69 = *(*(ebp_1[-1] + 8) + 0x84)
                        
                        if (eax_69 != 0)
                            (*(*eax_69 + 0x20))()
                        
                        sub_4b17c4(ebp_1)
                        noreturn
                    
                    if ((*(*(ebp_1[-1] + 4) + 0x101) & 1) != 0)
                        ebx_1 = 1
                else
                    if (eax_57 != 0x197)
                        sub_4b17c4(ebp_1)
                        noreturn
                    
                    int32_t eax_74 = sub_4b1dd8(*(ebp_1[-1] + 4))
                    int32_t* esi_4 = *(ebp_1[-1] + 4)
                    char eax_78
                    
                    if (eax_74 s< esi_4[0x3a])
                        *(ebp_1[-1] + 0xc)
                        *(ebp_1[-1] + 8)
                        eax_78 = (*(*esi_4 + 0xa0))()
                    
                    if (eax_74 s>= esi_4[0x3a] || eax_78 == 0)
                        void* eax_81 = *(*(ebp_1[-1] + 4) + 0x10c)
                        
                        if (*(eax_81 + 4) != 0)
                            (*(**(eax_81 + 4) + 0x20))()
                            sub_403df8(eax_81 + 0x14)
                            sub_403df8(eax_81 + 8)
                        
                        sub_4b17c4(ebp_1)
                        noreturn
                    
                    if ((*(*(ebp_1[-1] + 4) + 0x101) & 1) != 0)
                        ebx_1 = 1
            
            esp = &var_8
            
            if ((*(**(ebp_1[-1] + 4) + 0x54))() != 0)
                if (ebx_1 == 0)
                    int32_t eax_96
                    eax_96, ebp_1 = sub_4b1160(*(ebp_1[-1] + 0xc))
                    
                    if (eax_96 == 0xcc)
                        *(ebp_1 - 5) = 1
                    else
                        sub_4afaf8(*(ebp_1[-1] + 4), *(ebp_1[-1] + 0xc))
                        *(ebp_1 - 5) = 1
                else
                    void* eax_91 = *(ebp_1[-1] + 4)
                    ebp_1[-3] = *(eax_91 + 0x94)
                    *(eax_91 + 0x94) = 0xfa0
                    int32_t* var_c_2 = ebp_1
                    int32_t (* var_10_2)() = j_sub_40353c
                    ExceptionList_1 = fsbase->NtTib.ExceptionList
                    fsbase->NtTib.ExceptionList = &ExceptionList_1
                    ebp_1 = sub_4b18e4(ebp_1)
                    esp = &var_8
                    fsbase->NtTib.ExceptionList = ExceptionList_1
                    *(*(ebp_1[-1] + 4) + 0x94) = ebp_1[-3]
                    *(ebp_1 - 5) = 4
        else
            sub_403e90(&ebp_1[-4], *(*(ebp_1[-1] + 0xc) + 0x50))
            void* eax_17 = *(ebp_1[-1] + 4)
            
            if (*(eax_17 + 0x100) == 0 || *(eax_17 + 0xf8) s>= *(eax_17 + 0xfc))
                void* eax_30
                eax_30.b = *(*(ebp_1[-1] + 8) + 0x90)
                *(ebp_1 - 0x11) = eax_30.b
                *(ebp_1 - 5) = 1
                int32_t* ebx_4 = *(ebp_1[-1] + 4)
                
                if ((*(*ebx_4 + 0xa4))(ebx_4[0x3e]) == 0)
                    sub_4b17c4(ebp_1)
                    noreturn
                
                sub_403e4c(*(ebp_1[-1] + 0xc) + 0x50, ebp_1[-4])
            else
                void* eax_19
                eax_19.b = *(*(ebp_1[-1] + 8) + 0x90)
                *(ebp_1 - 0x11) = eax_19.b
                int32_t* ebx_2 = *(ebp_1[-1] + 4)
                
                if ((*(*ebx_2 + 0xa4))(ebx_2[0x3e]) == 0)
                    sub_4b17c4(ebp_1)
                    noreturn
                
                *(ebp_1 - 5) = 0
                sub_403e4c(*(ebp_1[-1] + 8) + 0x8c, ebp_1[-4])
                *(*(ebp_1[-1] + 8) + 0x90) = *(ebp_1 - 0x11)
            
            esp = &var_8
            
            if ((*(**(ebp_1[-1] + 4) + 0x54))() != 0)
                void* eax_42 = *(ebp_1[-1] + 4)
                ebp_1[-3] = *(eax_42 + 0x94)
                *(eax_42 + 0x94) = 0xfa0
                int32_t* var_c_1 = ebp_1
                int32_t (* var_10_1)() = j_sub_40353c
                ExceptionList_1 = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList_1
                ebp_1 = sub_4b18e4(ebp_1)
                esp = &var_8
                fsbase->NtTib.ExceptionList = ExceptionList_1
                *(*(ebp_1[-1] + 4) + 0x94) = ebp_1[-3]
    else
        *(var_8->__offset(0xc).d + 0x74) = 0
        char var_9 = 1
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4b1d9d
    sub_403df8(&ebp_1[-4])
    return &ebp_1[-4]
}
