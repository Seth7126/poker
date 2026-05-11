// ============================================================
// 函数名称: sub_515920
// 虚拟地址: 0x515920
// WARP GUID: 3e78eadd-15b8-5214-a5db-26c523a60d8b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_511e08, sub_512df4, sub_4040c4, sub_50d520, sub_495f94, sub_4953dc, sub_51300c, sub_40401c, sub_4953e8, sub_514cc4, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_514068, sub_514178, sub_51431c, sub_514ef8, sub_515d34, sub_513f7c, sub_514468, sub_514784, sub_514e80, sub_5143f0, sub_51497c, sub_5140f8, sub_513ffc, sub_5148a0, sub_513e4c, sub_514290
// ============================================================

int32_t __convention("regparm")sub_515920(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_1b0 = ebx
    int32_t esi
    int32_t var_1b4 = esi
    int32_t edi
    int32_t var_1b8 = edi
    int32_t var_1ac
    __builtin_memset(&var_1ac, 0, 0x18)
    int32_t var_90 = 0
    int32_t var_94 = 0
    void var_8c
    int32_t edi_1 = __builtin_memcpy(&var_8c, arg2, 0x84)
    int32_t* esi_2 = arg3
    int32_t* var_1bc_1 = &var_4
    int32_t (* var_1c0)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    char var_86
    
    if ((*(arg1 + 0x344) != 0 || *(arg1 + 0x345) != 0) && *(arg1 + 0x1e3) == 0)
        if (var_86 != 3 || esi_2 == 0)
            int32_t eax_5 = sub_511e08(arg1) - 1
            int32_t eax_6
            char temp1_1
            
            if (eax_5 u< 2)
                char var_88
                eax_6.b = var_88
                temp1_1 = (eax_6 - 1).b
                eax_6.b = (eax_6 - 1).b - 2
            
            void var_194
            
            if (eax_5 u>= 2 || temp1_1 u< 2)
                int32_t* var_1c8_2 = &var_4
                int32_t (* var_1cc_1)() = j_sub_40353c
                struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                
                if (*(arg1 + 0x344) == 0)
                    sub_4953dc(*(*(arg1 + 0x94) + 0x80))
                    int32_t ecx_13
                    void* ebp_4
                    ecx_13, ebp_4 = sub_51300c(&var_194, &var_8c, esi_2, edi_1)
                    sub_40401c(ecx_13, ebp_4 - 0x190)
                    sub_4040c4(ebp_4 - 0x1a4, "send_msg ", *(ebp_4 - 0x1a8))
                    sub_514cc4(arg1, *(ebp_4 - 0x1a4))
                    ebp_1 = sub_495f94(*(*(arg1 + 0x94) + 0x80), ebp_4 - 0x88, 0x7c)
                    sub_4953e8(*(*(arg1 + 0x94) + 0x80))
                    int32_t eax_44 = *(arg1 + 0x350)
                    
                    if (eax_44 s> 0 && eax_44 s<= 8)
                        uint32_t eax_45 = GetTickCount()
                        *(arg1 + 0x350)
                        bool o_7 = unimplemented  {imul edx, dword [ebx+0x350], 0xe9}
                        
                        if (o_7)
                            sub_403010()
                            noreturn
                        
                        *(arg1 + *(arg1 + 0x350) * 0x3a4 + 0x350) = eax_45
                else
                    eax_6.b = var_86
                    char temp2_1 = eax_6.b
                    eax_6.b -= 2
                    
                    if (temp2_1 u< 2)
                        for (int32_t i = 1; i != 9; i += 1)
                            bool o_1 = unimplemented  {imul eax, edi, 0xe9}
                            
                            if (o_1)
                                sub_403010()
                                noreturn
                            
                            if (*(arg1 + i * 0x3a4 - 0x50) == 1)
                                if (*(ebp_1 - 0x82) == 0)
                                label_515ab7:
                                    bool o_3 = unimplemented  {imul eax, edi, 0xe9}
                                    
                                    if (o_3)
                                        sub_403010()
                                        noreturn
                                    
                                    ebp_1[-3] = *(arg1 + i * 0x3a4 + 0x194)
                                    sub_50d520(*(arg1 + 0xc), &ebp_1[-0x22])
                                    int32_t ecx_7
                                    void* ebp_2
                                    ecx_7, ebp_2 = sub_51300c(&ebp_1[-0x64], &ebp_1[-0x22], esi_2, i)
                                    sub_40401c(ecx_7, ebp_2 - 0x190)
                                    sub_4040c4(ebp_2 - 0x194, "send_msg ", *(ebp_2 - 0x198))
                                    sub_514cc4(arg1, *(ebp_2 - 0x194))
                                    bool o_4 = unimplemented  {imul eax, edi, 0xe9}
                                    
                                    if (o_4)
                                        sub_403010()
                                        noreturn
                                    
                                    sub_4953dc(*(arg1 + i * 0x3a4 + 0x194))
                                    bool o_5 = unimplemented  {imul eax, edi, 0xe9}
                                    
                                    if (o_5)
                                        sub_403010()
                                        noreturn
                                    
                                    ebp_1, esi_2 =
                                        sub_495f94(*(arg1 + i * 0x3a4 + 0x194), ebp_2 - 0x88, 0x7c)
                                    bool o_6 = unimplemented  {imul eax, edi, 0xe9}
                                    
                                    if (o_6)
                                        sub_403010()
                                        noreturn
                                    
                                    sub_4953e8(*(arg1 + i * 0x3a4 + 0x194))
                                else
                                    bool o_2 = unimplemented  {imul eax, edi, 0xe9}
                                    
                                    if (o_2)
                                        sub_403010()
                                        noreturn
                                    
                                    if (esi_2 != *(arg1 + i * 0x3a4 + 0x194))
                                        goto label_515ab7
                    else if (esi_2 != 0)
                        sub_4953dc(esi_2)
                        int32_t ecx_10
                        void* ebp_3
                        ecx_10, ebp_3 = sub_51300c(&var_194, &var_8c, esi_2, edi_1)
                        sub_40401c(ecx_10, ebp_3 - 0x190)
                        sub_4040c4(ebp_3 - 0x19c, "send_msg ", *(ebp_3 - 0x1a0))
                        sub_514cc4(arg1, *(ebp_3 - 0x19c))
                        void* esi_4
                        ebp_1, esi_4 = sub_495f94(esi_2, ebp_3 - 0x88, 0x7c)
                        sub_4953e8(esi_4)
                
                *(ebp_1 - 1) = 1
                fsbase->NtTib.ExceptionList = ExceptionList
            else
                sub_512df4(&var_8c, arg1 + 0x3640, esi_2)
                int32_t ecx_3
                ecx_3, ebp_1 = sub_51300c(&var_194, &var_8c, esi_2, edi_1)
                sub_40401c(ecx_3, &ebp_1[-0x64])
                sub_4040c4(&ebp_1[-0x23], "cache_msg ", ebp_1[-0x24])
                sub_514cc4(arg1, ebp_1[-0x23])
        else
            sub_4953dc(esi_2)
            void* esi_3
            ebp_1, esi_3 = sub_495f94(esi_2, &var_8c, 0x7c)
            sub_4953e8(esi_3)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_1bc_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_515d00
    sub_403e1c(&ebp_1[-0x6a], 6)
    return sub_403e1c(&ebp_1[-0x24], 2)
}
