// ============================================================
// 函数名称: sub_475d3c
// 虚拟地址: 0x475d3c
// WARP GUID: 4de7e0c5-8439-5d4a-81a8-26275341af77
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_48380c, sub_47a1c0, sub_404078, sub_404188, sub_4088f0, sub_40892c, sub_404080, sub_477c08, sub_4836b0, sub_403e1c, sub_47a9e0, sub_403fa0, sub_404280, sub_403010
// [被调用的父级函数]: sub_47d208
// ============================================================

int32_t __convention("regparm")sub_475d3c(void* arg1, int32_t arg2, int16_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_18
    __builtin_memset(&var_18, 0, 0x14)
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax
    eax.w = *arg3
    int32_t eax_1
    eax_1.w = (eax - 0x60).w - 0xa
    
    if ((eax - 0x60).w u< 0xa)
        uint32_t eax_2 = zx.d(*arg3)
        
        if (add_overflow(eax_2, 0xffffffd0))
            sub_403010()
            noreturn
        
        if (eax_2 - 0x30 u> 0xffff)
            sub_403008()
            noreturn
        
        *arg3 = (eax_2 - 0x30).w
    
    eax_1.w = *arg3
    
    if (eax_1.w - 0x6a u< 6)
        if (*arg3 == 0x6b)
            *arg3 = 0xbb
        
        if (*arg3 == 0x6a)
            *arg3 = 0xbb
            arg4 = 1
        
        if (*arg3 == 0x6e)
            *arg3 = 0x2d
        
        if (*arg3 == 0x6d)
            *arg3 = 0xbd
        
        if (*arg3 == 0x6f)
            *arg3 = 0x37
            arg4 = 1
    
    arg2.w = *arg3
    sub_403fa0()
    char* var_10
    sub_404080(arg1 + 0xcfc, var_10)
    int32_t eax_7 = sub_404078(*(arg1 + 0xcfc))
    
    if (add_overflow(eax_7, 0xfffffffe))
        sub_403010()
        noreturn
    
    sub_404280(3, eax_7 - 2, *(arg1 + 0xcfc), arg1 + 0xcfc)
    void* var_14
    sub_4088f0(*(arg1 + 0xcfc), &var_14)
    sub_404188(var_14, 0x47611c)
    
    if (eax_7 == 2)
        *(arg1 + 0xce8) ^= 1
    
    if (*(arg1 + 0xce0) != 0)
        if ((arg4 & 1) != 0)
            if (*arg3 == 0xdc)
                int32_t eax_12 = *(arg1 + 0x10d0)
                bool o_3 = unimplemented  {imul edx, eax, 0x1038}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                if (*(*(arg1 + 0xab0) + eax_12 * 0x81c0 + 1) == 0)
                    sub_47a9e0(*(arg1 + 0x11b0), eax_12, arg1, 1)
                    sub_4836b0(arg1, *(arg1 + 0x10d0))
                else
                    sub_48380c(arg1, eax_12)
            
            if ((*arg3).b == 0x31)
                *(arg1 + 0xce8) ^= 1
            
            if ((*arg3).b == 0x32)
                *(arg1 + 0xce9) ^= 1
            
            char eax_11
            
            if ((*arg3).b == 0x33)
                eax_11 = *(arg1 + 0xcea) ^ 1
                *(arg1 + 0xcea) = eax_11
                
                if (eax_11 != 0)
                    *(arg1 + 0xce9) = 1
                
                if (*(arg1 + 0xcea) == 0)
                    *(arg1 + 0xce9) = 0
            
            if ((*arg3).b == 0x34)
                *(arg1 + 0xceb) ^= 1
            
            if ((*arg3).b == 0x35)
                *(arg1 + 0xcec) ^= 1
            
            if ((*arg3).b == 0x36)
                int32_t temp5_1 = *(arg1 + 0xcf0)
                *(arg1 + 0xcf0) += 1
                
                if (add_overflow(temp5_1, 1))
                    sub_403010()
                    noreturn
            
            if (*(arg1 + 0xcf0) s> 3)
                *(arg1 + 0xcf0) = 0
            
            if ((*arg3).b == 0x37)
                *(arg1 + 0xced) ^= 1
            
            if ((*arg3).b == 0x38)
                *(arg1 + 0xcf4) ^= 1
            
            if ((*arg3).b == 0x39)
                *(arg1 + 0xcf5) ^= 1
            
            if ((*arg3).b == 0x30)
                *(arg1 + 0xcf6) ^= 1
            
            if ((*arg3).b == 0x51)
                *(arg1 + 0xcf7) ^= 1
            
            if ((*arg3).b == 0x57)
                eax_11 = *(arg1 + 0xcf8) ^ 1
                *(arg1 + 0xcf8) = eax_11
                *(arg1 + 0xcf7) = eax_11
            
            if ((*arg3).b == 0x53)
                eax_11 = *(arg1 + 0xcf9) ^ 1
                *(arg1 + 0xcf9) = eax_11
                *(arg1 + 0xcf7) = eax_11
            
            if ((*arg3).b == 0x44)
                eax_11 = *(arg1 + 0xcf9) ^ 1
                *(arg1 + 0xcf9) = eax_11
                *(arg1 + 0xcf7) = eax_11
                *(arg1 + 0xced) = *(arg1 + 0xcf9)
        
        if (*arg3 == 0x20)
            *(arg1 + 0x1224) ^= 1
    
    sub_47a1c0(*(arg1 + 0x10e8), *(arg1 + 0x10d8), arg1, *(arg1 + 0xce8))
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    bool o_5 = unimplemented  {imul eax, eax, 0x1038}
    
    if (o_5)
        sub_403010()
        noreturn
    
    if (*(*(arg1 + 0xab0) + *(arg1 + 0xab8) * 0x81c0 + 0x8134) != 0)
        int32_t eax_18
        eax_18.w = *arg3
        struct _EXCEPTION_REGISTRATION_RECORD* var_8
        var_8:3.b = eax_18.b
        eax_18.b = (arg4 & 1) != 0
        void* edx_9
        
        if (eax_18.b == 0)
            edx_9.b = var_8:3.b
            sub_403fa0()
            void* var_c
            sub_40892c(var_18, &var_c)
            edx_9 = var_c
            
            if (0 u>= *(edx_9 - 4))
                sub_403008()
                noreturn
            
            var_8:3.b = *edx_9
        
        edx_9.b = var_8:3.b
        void* var_34_2 = edx_9
        edx_9.b = (arg4 & 1) != 0
        void* var_38_1 = edx_9
        int32_t eax_21 = *(arg1 + 0xab8)
        bool o_6 = unimplemented  {imul edx, eax, 0x1038}
        
        if (o_6)
            sub_403010()
            noreturn
        
        long double x87_r0
        sub_477c08(arg1, eax_21, sx.d(*(*(arg1 + 0xab0) + eax_21 * 0x81c0 + 0x8134)), arg3, 
            arg1 + 0xce8, x87_r0)
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_476105
    return sub_403e1c(&var_18, 4)
}
