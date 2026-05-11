// ============================================================
// 函数名称: sub_468ec0
// 虚拟地址: 0x468ec0
// WARP GUID: b255a61e-25ad-5c04-9e3d-c1f748bbfbba
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_468d90, sub_4040c4, sub_405f88, sub_468e30, sub_405f4c, sub_402824, sub_402bdc, sub_4062e1, sub_403e1c, sub_403df8, sub_405e46, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void* __convention("regparm")sub_468ec0(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_268 = ebx
    int32_t esi
    int32_t var_26c = esi
    int32_t edi
    int32_t var_270 = edi
    int32_t var_264 = 0
    int32_t var_260 = 0
    int32_t var_25c = 0
    int32_t var_258 = 0
    char* var_154 = nullptr
    int32_t* var_274 = &var_4
    int32_t (* var_278)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0x4668) = 0
    sub_4040c4(&var_154, *(arg1 + 0xa64), "\data\local\fragments.txt")
    void var_150
    sub_405e46(&var_150, var_154)
    sub_402824(sub_4062e1())
    int32_t temp4_1
    
    do
        uint32_t eax_14
        void* edx_8
        eax_14, edx_8 = sub_405f88(&ebp_1[-0x53])
        sub_402824(eax_14)
        
        if (eax_14.b != 0)
            sub_402824(sub_405f4c(&ebp_1[-0x53]))
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t (* var_274_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_46907b
            sub_403e1c(&ebp_1[-0x98], 4)
            sub_403df8(&ebp_1[-0x54])
            return &ebp_1[-0x54]
        
        *(arg1 + 0x4668)
        *(arg1 + 0x4668)
        bool o_1 = unimplemented  {imul eax, dword [esi+0x4668], 0x1b}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t* var_280_1 = ebp_1
        void* ebp_2
        char* edi_2
        ebp_2, edi_2 = sub_468d90(&ebp_1[-0x95], edx_8)
        sub_404054(ebp_2 - 0x250, *(ebp_2 - 0x254), 0xff)
        sub_402bdc(edi_2, ebp_2 - 0x250, 0x20)
        void* eax_7
        void* edx_5
        eax_7, edx_5 = sub_468e30(ebp_2)
        *(edi_2 + 0x24) = eax_7
        int32_t ebx_1 = *(arg1 + 0x1358)
        
        if (add_overflow(ebx_1, 0xffffffff))
            sub_403010()
            noreturn
        
        if (ebx_1 - 1 s> 0)
            int32_t i
            
            do
                void* var_280_3 = ebp_2
                edx_5, i, ebp_2 = sub_468d90(ebp_2 - 0x258, edx_5)
            while (i != 1)
        
        void* var_280_4 = ebp_2
        void* edi_3
        ebp_1, edi_3 = sub_468d90(ebp_2 - 0x25c, edx_5)
        sub_404054(&ebp_1[-0x94], ebp_1[-0x97], 0xff)
        char* edx_7 = &ebp_1[-0x94]
        sub_402bdc(edi_3 + 0x28, edx_7, 0x40)
        int32_t ebx_4 = *(arg1 + 0x1358)
        
        if (add_overflow(ebx_4, 0xffffffff))
            sub_403010()
            noreturn
        
        if (ebx_4 - 1 s<= 0)
            int32_t i_1
            
            do
                int32_t* var_280_5 = ebp_1
                edx_7, i_1, ebp_1 = sub_468d90(&ebp_1[-0x98], edx_7)
            while (i_1 != 0)
        
        temp4_1 = *(arg1 + 0x4668)
        *(arg1 + 0x4668) += 1
    while (not(add_overflow(temp4_1, 1)))
    sub_403010()
    noreturn
}
