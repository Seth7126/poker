// ============================================================
// 函数名称: sub_49cb30
// 虚拟地址: 0x49cb30
// WARP GUID: 563ddc39-9983-52fb-9aa3-f86d753697f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e90, sub_4040c4, sub_404078, sub_4042c0, sub_49dbf0, sub_403e4c, sub_403df8, sub_403e1c, sub_49cac4, sub_404280, sub_49df54, sub_403010
// [被调用的父级函数]: sub_49ca70, sub_4ae88c
// ============================================================

int32_t __convention("regparm")sub_49cb30(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x1c)
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = sub_403e4c(&arg1[3], arg2)
    *arg1
    sub_49cac4(ecx, &arg1[3])
    void* var_c
    sub_403e90(&var_c, arg1[3])
    sub_403df8(&arg1[6])
    sub_403df8(&arg1[2])
    sub_403df8(&arg1[5])
    sub_403df8(&arg1[1])
    sub_403df8(&arg1[4])
    sub_403df8(&arg1[7])
    sub_403df8(&arg1[8])
    sub_403df8(&arg1[9])
    sub_403df8(&arg1[0xa])
    int32_t eax_13 = (*data_530000)(ExceptionList, var_34, var_30)
    char** var_10
    char* var_8
    void* ebp_1
    
    if (eax_13 s<= 0)
        void* eax_52 = (*data_530000)()
        char** esi_15
        int32_t edi_5
        
        if (eax_52 s<= 0)
            void* eax_55 = (*data_530000)()
            
            if (eax_55 s<= 0)
                char** eax_57
                eax_57, ebp_1, edi_5 = sub_49dbf0(0x49cf30, var_c, 0xffffffff)
                esi_15 = eax_57
            else
                char** eax_56
                eax_56, ebp_1, edi_5 = sub_49dbf0(0x49cf30, var_c, eax_55)
                esi_15 = eax_56
        else
            char** eax_53
            eax_53, ebp_1, edi_5 = sub_49dbf0(0x49cf30, var_c, eax_52)
            esi_15 = eax_53
        
        var_c = &arg1[5]
        sub_404280(esi_15, 1, *(ebp_1 - 8), var_c)
        
        if (edi_5 s<= 0)
            sub_403e4c(&arg1[1], *(ebp_1 - 8))
        else
            var_c = &arg1[1]
            
            if (add_overflow(edi_5, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_404280(edi_5 - 1, 1, *(ebp_1 - 8), var_c)
            
            if (add_overflow(edi_5, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_4042c0(ebp_1 - 8, 1, edi_5 - 1)
            sub_403e4c(&arg1[0xa], *(ebp_1 - 8))
        
        sub_4042c0(&arg1[1], 1, esi_15)
    else
        var_c = &arg1[2]
        
        if (add_overflow(eax_13, 0xffffffff))
            sub_403010()
            noreturn
        
        sub_404280(eax_13 - 1, 1, var_c, var_c)
        
        if (add_overflow(eax_13, 2))
            sub_403010()
            noreturn
        
        sub_4042c0(&var_c, 1, eax_13 + 2)
        var_c = 1
        var_10 = &var_8
        int32_t ecx_5
        ecx_5.b = 1
        sub_49df54(ecx_5, 0x49cf30, &var_c, var_10, var_c.b)
        int32_t eax_19 = (*data_530000)()
        var_c = &arg1[9]
        
        if (add_overflow(eax_19, 0xffffffff))
            sub_403010()
            noreturn
        
        sub_404280(eax_19 - 1, 1, var_8)
        
        if (eax_19 s> 0)
            sub_4042c0(&var_8, 1, eax_19)
        
        var_c = 1
        var_10 = &var_10
        int32_t ecx_8
        ecx_8.b = 1
        sub_49df54(ecx_8, 0x49cf48, &arg1[9], var_10, var_c.b)
        sub_403e4c(&arg1[8], var_10)
        
        if (sub_404078(arg1[8]) == 0)
            sub_403df8(&arg1[9])
        
        var_c = 1
        char* var_14
        var_10 = &var_14
        int32_t ecx_10
        ecx_10.b = 1
        sub_49df54(ecx_10, 0x49cf48, &var_8, var_10, var_c.b)
        sub_403e4c(&arg1[6], var_14)
        sub_403e4c(&arg1[4], var_8)
        void* eax_32 = (*data_530000)()
        char** esi_10
        int32_t edi_2
        
        if (eax_32 s<= 0)
            void* eax_35 = (*data_530000)()
            
            if (eax_35 s<= 0)
                char** eax_37
                eax_37, ebp_1, edi_2 = sub_49dbf0(0x49cf30, var_c, 0xffffffff)
                esi_10 = eax_37
            else
                char** eax_36
                eax_36, ebp_1, edi_2 = sub_49dbf0(0x49cf30, var_c, eax_35)
                esi_10 = eax_36
        else
            char** eax_33
            eax_33, ebp_1, edi_2 = sub_49dbf0(0x49cf30, var_c, eax_32)
            esi_10 = eax_33
        
        var_c = ebp_1 - 0x14
        sub_404280(esi_10, 1, *(ebp_1 - 8), var_c)
        sub_4040c4(&arg1[5], U"/", *(ebp_1 - 0x14))
        
        if (edi_2 s<= 0)
            sub_403e4c(&arg1[1], *(ebp_1 - 8))
        else
            var_c = &arg1[1]
            
            if (add_overflow(edi_2, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_404280(edi_2 - 1, 1, *(ebp_1 - 8))
            
            if (add_overflow(edi_2, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_4042c0(ebp_1 - 8, 1, edi_2 - 1)
            sub_403e4c(&arg1[0xa], *(ebp_1 - 8))
        
        sub_4042c0(&arg1[1], 1, esi_10)
        sub_403e4c(&arg1[7], arg1[1])
        var_c = 1
        var_10 = ebp_1 - 0x18
        int32_t ecx_20
        ecx_20.b = 1
        sub_49df54(ecx_20, 0x49cf6c, &arg1[7], var_10, var_c.b)
        sub_403e4c(&arg1[1], *(ebp_1 - 0x18))
    
    if (sub_404078(arg1[7]) == 0)
        sub_403e4c(&arg1[7], arg1[0xa])
        var_c = 1
        var_10 = ebp_1 - 0x1c
        int32_t ecx_29
        ecx_29.b = 1
        sub_49df54(ecx_29, 0x49cf6c, &arg1[7], var_10, var_c.b)
        sub_403e4c(&arg1[0xa], *(ebp_1 - 0x1c))
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_49cf13
    return sub_403e1c(ebp_1 - 0x1c, 7)
}
