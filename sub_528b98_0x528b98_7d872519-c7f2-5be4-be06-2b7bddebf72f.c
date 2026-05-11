// ============================================================
// 函数名称: sub_528b98
// 虚拟地址: 0x528b98
// WARP GUID: 7d872519-c7f2-5be4-be06-2b7bddebf72f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_5286dc, sub_404138, sub_408e1c, sub_404080, sub_5289d0, sub_40401c, sub_46910c, sub_4cda5c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4c9168
// ============================================================

int32_t __convention("regparm")sub_528b98(void* arg1, int32_t arg2, char** arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_678 = ebx
    int32_t esi
    int32_t var_67c = esi
    int32_t edi
    int32_t var_680 = edi
    int32_t var_674
    __builtin_memset(&var_674, 0, 0x20)
    char** edi_1 = arg3
    int32_t* var_684 = &var_4
    int32_t (* var_688)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_5289d0(arg1)
    int32_t var_c = sub_5286dc(arg1)
    sub_403df8(edi_1)
    
    if (arg2 == 1)
        int32_t var_658
        void* ebp_2 = sub_46910c(*data_530304, "f_imturnier", &var_658)
        int32_t var_690_1 = *(ebp_2 - 0x654)
        void* const var_694_1 = &data_528e00
        sub_408e1c(*(ebp_2 - 8), ebp_2 - 0x658)
        int32_t var_698_1 = *(ebp_2 - 0x658)
        void* ebp_3 = sub_46910c(*data_530304, "f_von", ebp_2 - 0x65c)
        int32_t var_69c_1 = *(ebp_3 - 0x65c)
        int32_t eax_10 = *(*(ebp_3 - 4) + 0xbefc)
        
        if (add_overflow(eax_10, 1))
            sub_403010()
            noreturn
        
        void* edx_1 = *(ebp_3 - 4)
        *(edx_1 + 0xbf00)
        bool o_2 = unimplemented  {imul dword [edx+0xbf00]}
        
        if (o_2)
            sub_403010()
            noreturn
        
        sub_408e1c((eax_10 + 1) * *(edx_1 + 0xbf00), ebp_3 - 0x660)
        int32_t var_6a0_1 = *(ebp_3 - 0x660)
        ebp_1 = sub_46910c(*data_530304, "f_spielern", ebp_3 - 0x664)
        int32_t var_6a4_1 = ebp_1[-0x199]
        sub_404138(edi_1, 6)
        esp = &ExceptionList
    
    if (arg2 == 2)
        int32_t i = 0
        void* ebx_2 = &ebp_1[-0x194]
        
        do
            if (i s< ebp_1[-2])
                *(esp - 4) = *edi_1
                
                if (add_overflow(i, 1))
                    sub_403010()
                    noreturn
                
                sub_408e1c(i + 1, &ebp_1[-0x19a])
                *(esp - 8) = ebp_1[-0x19a]
                *(esp - 0xc) = &data_528e30
                *ebx_2
                bool o_4 = unimplemented  {imul edx, dword [ebx], 0x112}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                *(esp - 0x10) = ebp_1[-1] + *ebx_2 * 0x890
                *(ebx_2 + 0x324)
                bool o_5 = unimplemented  {imul edx, dword [ebx+0x324], 0x22}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                int32_t ecx_4 = *(esp - 0x10)
                sub_40401c(ecx_4, ecx_4 + *(ebx_2 + 0x324) * 0x110 + 0xa20)
                *(esp - 0x10) = ebp_1[-0x19b]
                sub_404138(edi_1, 4)
                esp[1] = *edi_1
                *esp = &data_528e3c
                *ebx_2
                bool o_6 = unimplemented  {imul eax, dword [ebx], 0x112}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                *(ebx_2 + 0x324)
                bool o_7 = unimplemented  {imul edx, dword [ebx+0x324], 0x22}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                ebp_1, edi_1 = sub_4cda5c(
                    *(ebp_1[-1] + *ebx_2 * 0x890 + *(ebx_2 + 0x324) * 0x110 + 0xa1c), 0, &ebp_1[-0x19c])
                *(esp - 4) = ebp_1[-0x19c]
                *(esp - 8) = &data_528e48
                sub_404138(edi_1, 4)
                esp = &esp[4]
                sub_404080(edi_1, "\n\r")
            
            i += 1
            ebx_2 += 4
        while (i != 5)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_528dda
    return sub_403e1c(&ebp_1[-0x19c], 8)
}
