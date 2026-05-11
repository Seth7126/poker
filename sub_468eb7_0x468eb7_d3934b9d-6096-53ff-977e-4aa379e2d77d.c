// ============================================================
// 函数名称: sub_468eb7
// 虚拟地址: 0x468eb7
// WARP GUID: d3934b9d-6096-53ff-977e-4aa379e2d77d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_468d90, sub_4040c4, sub_405f88, sub_468e30, sub_405f4c, sub_402824, sub_402bdc, sub_4062e1, sub_403e1c, sub_403df8, sub_405e46, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_468eb7(char* arg1, char* arg2, int32_t* arg3, void* arg4 @ ebp)
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
    int32_t var_264 = ebx
    int32_t esi
    int32_t var_268 = esi
    int32_t edi
    int32_t var_26c = edi
    *(arg4 - 0x260) = 0
    *(arg4 - 0x25c) = 0
    *(arg4 - 0x258) = 0
    *(arg4 - 0x254) = 0
    *(arg4 - 0x150) = 0
    void* var_270 = arg4
    int32_t (* var_274)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0x4668) = 0
    sub_4040c4(arg4 - 0x150, *(arg1 + 0xa64), "\data\local\fragments.txt")
    sub_405e46(arg4 - 0x14c, *(arg4 - 0x150))
    sub_402824(sub_4062e1())
    int32_t temp4_1
    
    do
        uint32_t eax_15
        void* edx_8
        eax_15, edx_8 = sub_405f88(arg4 - 0x14c)
        sub_402824(eax_15)
        
        if (eax_15.b != 0)
            sub_402824(sub_405f4c(arg4 - 0x14c))
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t (* var_270_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_46907b
            sub_403e1c(arg4 - 0x260, 4)
            sub_403df8(arg4 - 0x150)
            return arg4 - 0x150
        
        *(arg1 + 0x4668)
        *(arg1 + 0x4668)
        bool o_1 = unimplemented  {imul eax, dword [esi+0x4668], 0x1b}
        
        if (o_1)
            sub_403010()
            noreturn
        
        void* var_27c_1 = arg4
        void* ebp
        char* edi_2
        ebp, edi_2 = sub_468d90(arg4 - 0x254, edx_8)
        sub_404054(ebp - 0x250, *(ebp - 0x254), 0xff)
        sub_402bdc(edi_2, ebp - 0x250, 0x20)
        void* eax_8
        void* edx_5
        eax_8, edx_5 = sub_468e30(ebp)
        *(edi_2 + 0x24) = eax_8
        int32_t ebx_1 = *(arg1 + 0x1358)
        
        if (add_overflow(ebx_1, 0xffffffff))
            sub_403010()
            noreturn
        
        if (ebx_1 - 1 s> 0)
            int32_t i
            
            do
                void* var_27c_3 = ebp
                edx_5, i, ebp = sub_468d90(ebp - 0x258, edx_5)
            while (i != 1)
        
        void* var_27c_4 = ebp
        void* edi_3
        arg4, edi_3 = sub_468d90(ebp - 0x25c, edx_5)
        sub_404054(arg4 - 0x250, *(arg4 - 0x25c), 0xff)
        char* edx_7 = arg4 - 0x250
        sub_402bdc(edi_3 + 0x28, edx_7, 0x40)
        int32_t ebx_4 = *(arg1 + 0x1358)
        
        if (add_overflow(ebx_4, 0xffffffff))
            sub_403010()
            noreturn
        
        if (ebx_4 - 1 s<= 0)
            int32_t i_1
            
            do
                void* var_27c_5 = arg4
                edx_7, i_1, arg4 = sub_468d90(arg4 - 0x260, edx_7)
            while (i_1 != 0)
        
        temp4_1 = *(arg1 + 0x4668)
        *(arg1 + 0x4668) += 1
    while (not(add_overflow(temp4_1, 1)))
    sub_403010()
    noreturn
}
