// ============================================================
// 函数名称: sub_468afc
// 虚拟地址: 0x468afc
// WARP GUID: e1a2fcb0-3edb-58e9-8bae-67ae3bed679a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_403e90, sub_4040c4, sub_404188, sub_405f88, sub_4689cc, sub_405f4c, sub_402824, sub_468a6c, sub_402bdc, sub_4062e1, sub_403e1c, sub_405e46, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_468afc(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_278 = ebx
    int32_t esi
    int32_t var_27c = esi
    int32_t edi
    int32_t var_280 = edi
    int32_t var_274 = 0
    int32_t var_270 = 0
    int32_t var_26c = 0
    int32_t var_268 = 0
    int32_t var_164
    __builtin_memset(&var_164, 0, 0x14)
    void* edi_1 = arg1
    int32_t* var_284 = &var_4
    int32_t (* var_288)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(edi_1 + 0x604c) = 0
    char* var_154
    sub_4040c4(&var_154, *(edi_1 + 0xa64), "\data\local\messages.txt")
    void var_150
    sub_405e46(&var_150, var_154)
    sub_402824(sub_4062e1())
    int32_t temp4_1
    
    do
        uint32_t eax_20
        void* edx_11
        eax_20, edx_11 = sub_405f88(&ebp_1[-0x53])
        sub_402824(eax_20)
        
        if (eax_20.b != 0)
            sub_402824(sub_405f4c(&ebp_1[-0x53]))
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t (* var_284_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_468d41
            sub_403e1c(&ebp_1[-0x9c], 4)
            return sub_403e1c(&ebp_1[-0x58], 5)
        
        *(edi_1 + 0x604c)
        bool o_1 = unimplemented  {imul eax, dword [edi+0x604c], 0x17}
        
        if (o_1)
            sub_403010()
            noreturn
        
        void* esi_1 = edi_1 + *(edi_1 + 0x604c) * 0xb8 + 0x466c
        int32_t* var_290_1 = ebp_1
        void* ebp_2
        void* edi_2
        ebp_2, edi_2 = sub_4689cc(&ebp_1[-0x56], edx_11)
        sub_403e90(ebp_2 - 0x154, *(ebp_2 - 0x158))
        *(esi_1 + 4) = 0
        sub_404188(*(ebp_2 - 0x154), "mb_ok")
        *(esi_1 + 4) = 0
        sub_404188(*(ebp_2 - 0x154), "mb_yesno")
        *(esi_1 + 4) = 4
        void* eax_8
        void* edx_4
        eax_8, edx_4 = sub_468a6c(ebp_2)
        *esi_1 = eax_8
        int32_t ebx_1 = *(edi_2 + 0x1358)
        
        if (add_overflow(ebx_1, 0xffffffff))
            sub_403010()
            noreturn
        
        if (ebx_1 - 1 s> 0)
            int32_t i
            
            do
                void* var_290_3 = ebp_2
                void* edx_5
                void* ebp_3
                edx_5, ebp_3 = sub_4689cc(ebp_2 - 0x15c, edx_4)
                void* var_290_4 = ebp_3
                edx_4, i, ebp_2 = sub_4689cc(ebp_3 - 0x160, edx_5)
            while (i != 1)
        
        void* var_290_5 = ebp_2
        void* ebp_4 = sub_4689cc(ebp_2 - 0x264, edx_4)
        sub_404054(ebp_4 - 0x260, *(ebp_4 - 0x264), 0xff)
        sub_402bdc(esi_1 + 8, ebp_4 - 0x260, 0x20)
        void* var_290_6 = ebp_4
        ebp_1, edi_1 = sub_4689cc(ebp_4 - 0x268, ebp_4 - 0x260)
        sub_404054(&ebp_1[-0x98], ebp_1[-0x9a], 0xff)
        char* edx_9 = &ebp_1[-0x98]
        sub_402bdc(esi_1 + 0x29, edx_9, 0x8c)
        int32_t ebx_4 = *(edi_1 + 0x1358)
        
        if (add_overflow(ebx_4, 0xffffffff))
            sub_403010()
            noreturn
        
        if (ebx_4 - 1 s<= 0)
            int32_t i_1
            
            do
                int32_t* var_290_7 = ebp_1
                void* edx_10
                void* ebp_5
                edx_10, ebp_5 = sub_4689cc(&ebp_1[-0x9b], edx_9)
                void* var_290_8 = ebp_5
                edx_9, i_1, ebp_1, edi_1 = sub_4689cc(ebp_5 - 0x270, edx_10)
            while (i_1 != 0)
        
        temp4_1 = *(edi_1 + 0x604c)
        *(edi_1 + 0x604c) += 1
    while (not(add_overflow(temp4_1, 1)))
    sub_403010()
    noreturn
}
