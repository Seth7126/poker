// ============================================================
// 函数名称: sub_468af3
// 虚拟地址: 0x468af3
// WARP GUID: 6768f6b0-d679-58e9-8e81-2581325b59a8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_403e90, sub_4040c4, sub_404188, sub_405f88, sub_4689cc, sub_405f4c, sub_402824, sub_468a6c, sub_402bdc, sub_4062e1, sub_403e1c, sub_405e46, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_468af3(char* arg1, char* arg2, int32_t* arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg2 += arg3.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t ebx
    int32_t var_274 = ebx
    int32_t esi
    int32_t var_278 = esi
    int32_t edi
    int32_t var_27c = edi
    *(arg4 - 0x270) = 0
    *(arg4 - 0x26c) = 0
    *(arg4 - 0x268) = 0
    *(arg4 - 0x264) = 0
    __builtin_memset(arg4 - 0x160, 0, 0x14)
    char* edi_1 = arg1
    void* var_280 = arg4
    int32_t (* var_284)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(edi_1 + 0x604c) = 0
    sub_4040c4(arg4 - 0x150, *(edi_1 + 0xa64), "\data\local\messages.txt")
    sub_405e46(arg4 - 0x14c, *(arg4 - 0x150))
    sub_402824(sub_4062e1())
    int32_t temp4_1
    
    do
        uint32_t eax_21
        void* edx_11
        eax_21, edx_11 = sub_405f88(arg4 - 0x14c)
        sub_402824(eax_21)
        
        if (eax_21.b != 0)
            sub_402824(sub_405f4c(arg4 - 0x14c))
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t (* var_280_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_468d41
            sub_403e1c(arg4 - 0x270, 4)
            return sub_403e1c(arg4 - 0x160, 5)
        
        *(edi_1 + 0x604c)
        bool o_1 = unimplemented  {imul eax, dword [edi+0x604c], 0x17}
        
        if (o_1)
            sub_403010()
            noreturn
        
        void* esi_1 = &edi_1[*(edi_1 + 0x604c) * 0xb8 + 0x466c]
        void* var_28c_1 = arg4
        void* ebp
        void* edi_2
        ebp, edi_2 = sub_4689cc(arg4 - 0x158, edx_11)
        sub_403e90(ebp - 0x154, *(ebp - 0x158))
        *(esi_1 + 4) = 0
        sub_404188(*(ebp - 0x154), "mb_ok")
        *(esi_1 + 4) = 0
        sub_404188(*(ebp - 0x154), "mb_yesno")
        *(esi_1 + 4) = 4
        void* eax_9
        void* edx_4
        eax_9, edx_4 = sub_468a6c(ebp)
        *esi_1 = eax_9
        int32_t ebx_1 = *(edi_2 + 0x1358)
        
        if (add_overflow(ebx_1, 0xffffffff))
            sub_403010()
            noreturn
        
        if (ebx_1 - 1 s> 0)
            int32_t i
            
            do
                void* var_28c_3 = ebp
                void* edx_5
                void* ebp_1
                edx_5, ebp_1 = sub_4689cc(ebp - 0x15c, edx_4)
                void* var_28c_4 = ebp_1
                edx_4, i, ebp = sub_4689cc(ebp_1 - 0x160, edx_5)
            while (i != 1)
        
        void* var_28c_5 = ebp
        void* ebp_2 = sub_4689cc(ebp - 0x264, edx_4)
        sub_404054(ebp_2 - 0x260, *(ebp_2 - 0x264), 0xff)
        sub_402bdc(esi_1 + 8, ebp_2 - 0x260, 0x20)
        void* var_28c_6 = ebp_2
        arg4, edi_1 = sub_4689cc(ebp_2 - 0x268, ebp_2 - 0x260)
        sub_404054(arg4 - 0x260, *(arg4 - 0x268), 0xff)
        char* edx_9 = arg4 - 0x260
        sub_402bdc(esi_1 + 0x29, edx_9, 0x8c)
        int32_t ebx_4 = *(edi_1 + 0x1358)
        
        if (add_overflow(ebx_4, 0xffffffff))
            sub_403010()
            noreturn
        
        if (ebx_4 - 1 s<= 0)
            int32_t i_1
            
            do
                void* var_28c_7 = arg4
                void* edx_10
                void* ebp_3
                edx_10, ebp_3 = sub_4689cc(arg4 - 0x26c, edx_9)
                void* var_28c_8 = ebp_3
                edx_9, i_1, arg4, edi_1 = sub_4689cc(ebp_3 - 0x270, edx_10)
            while (i_1 != 0)
        
        temp4_1 = *(edi_1 + 0x604c)
        *(edi_1 + 0x604c) += 1
    while (not(add_overflow(temp4_1, 1)))
    sub_403010()
    noreturn
}
