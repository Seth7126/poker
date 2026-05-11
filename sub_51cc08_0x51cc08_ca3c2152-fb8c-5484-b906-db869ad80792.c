// ============================================================
// 函数名称: sub_51cc08
// 虚拟地址: 0x51cc08
// WARP GUID: ca3c2152-fb8c-5484-b906-db869ad80792
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4837ec, sub_4c1108, sub_40401c, sub_403010, sub_402b90, sub_403df8, sub_51d840, sub_4d9f6c, sub_402bc0
// [被调用的父级函数]: sub_4ed7a0, sub_51f90c, sub_51f880
// ============================================================

char** __fastcallsub_51cc08(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_40 = ebx
    int32_t esi
    int32_t var_44 = esi
    char* var_8 = nullptr
    int32_t* var_48 = &var_4
    int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *data_52ffa4 = 0
    *data_5305f4 = 0
    
    if (arg2 != 0)
        bool o_1 = unimplemented  {imul eax, eax, 0x33}
        
        if (o_1)
            sub_403010()
            noreturn
        
        char var_3c[0x34]
        sub_402bc0(&var_3c, data_530940 + zx.d(*(*data_5301f4 + 4)) * 0x33)
        sub_40401c(sub_402b90(&var_3c, 0x51d128, 0x33), &var_3c)
        sub_51d840(*data_530888, var_8)
    
    void* eax_10 = data_530658
    *eax_10
    bool o_2 = unimplemented  {imul eax, dword [eax], 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    int32_t ebx_1 = *(*data_530304 + 0xab0) + *eax_10 * 0x81c0
    void* eax_13
    eax_13.b = *(*data_5301f4 + 4)
    
    if (eax_13.b != 7)
        data_5301f4
        char temp3_1 = eax_13.b
        eax_13.b -= 6
        
        if (temp3_1 != 6)
            void* eax_50 = data_5300b0
            *eax_50
            bool o_44 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_44)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_50 * 0x118 - 0x9c) = 0x4b
            void* eax_52 = data_530110
            *eax_52
            bool o_45 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_45)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_52 * 0x118 - 0x9c) = 0x4b
            void* eax_54 = data_530920
            *eax_54
            bool o_46 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_46)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_54 * 0x118 - 0x9c) = 0x4b
            void* eax_56 = data_530648
            *eax_56
            bool o_47 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_47)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_56 * 0x118 - 0x9c) = 0x4b
            void* eax_58 = data_5300b0
            *eax_58
            bool o_48 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_48)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_58 * 0x118 - 0xf6) = 0
            void* eax_60 = data_530110
            *eax_60
            bool o_49 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_49)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_60 * 0x118 - 0xf6) = 0x50
            void* eax_62 = data_530920
            *eax_62
            bool o_50 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_50)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_62 * 0x118 - 0xf6) = 0xa0
            void* eax_64 = data_530648
            *eax_64
            bool o_51 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_51)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_64 * 0x118 - 0xf6) = 0xf0
        else
            void* eax_34 = data_5300b0
            *eax_34
            bool o_36 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_36)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_34 * 0x118 - 0x9c) = 0x69
            void* eax_36 = data_530110
            *eax_36
            bool o_37 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_37)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_36 * 0x118 - 0x9c) = 0x69
            void* eax_38 = data_530920
            *eax_38
            bool o_38 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_38)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_38 * 0x118 - 0x9c) = 0x69
            void* eax_40 = data_530648
            *eax_40
            bool o_39 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_39)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_40 * 0x118 - 0x9c) = 0x69
            void* eax_42 = data_5300b0
            *eax_42
            bool o_40 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_40)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_42 * 0x118 - 0xf6) = 0xffb0
            void* eax_44 = data_530110
            *eax_44
            bool o_41 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_41)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_44 * 0x118 - 0xf6) = 0x1e
            void* eax_46 = data_530920
            *eax_46
            bool o_42 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_42)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_46 * 0x118 - 0xf6) = 0x8c
            void* eax_48 = data_530648
            *eax_48
            bool o_43 = unimplemented  {imul eax, dword [eax], 0x23}
            
            if (o_43)
                sub_403010()
                noreturn
            
            *(ebx_1 + *eax_48 * 0x118 - 0xf6) = 0xfa
    else
        sub_4c1108()
        void* eax_24 = data_5300b0
        *eax_24
        bool o_20 = unimplemented  {imul eax, dword [eax], 0x23}
        
        if (o_20)
            sub_403010()
            noreturn
        
        *(ebx_1 + *eax_24 * 0x118 - 0x9c) = 0x50
        void* eax_26 = data_530110
        *eax_26
        bool o_21 = unimplemented  {imul eax, dword [eax], 0x23}
        
        if (o_21)
            sub_403010()
            noreturn
        
        *(ebx_1 + *eax_26 * 0x118 - 0x9c) = 0x6e
        void* eax_28 = data_530920
        *eax_28
        bool o_22 = unimplemented  {imul eax, dword [eax], 0x23}
        
        if (o_22)
            sub_403010()
            noreturn
        
        *(ebx_1 + *eax_28 * 0x118 - 0x9c) = 0x6e
        void* eax_30 = data_530648
        *eax_30
        bool o_23 = unimplemented  {imul eax, dword [eax], 0x23}
        
        if (o_23)
            sub_403010()
            noreturn
        
        *(ebx_1 + *eax_30 * 0x118 - 0x9c) = 0x50
        
        if (add_overflow(0x8c, 0xffffff9c))
            sub_403010()
            noreturn
        
        if (add_overflow(0x28, 0xffffffec))
            sub_403010()
            noreturn
        
        void* edx_14 = data_5300b0
        *edx_14
        bool o_26 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_26)
            sub_403010()
            noreturn
        
        *(ebx_1 + *edx_14 * 0x118 - 0xf6) = 0x14
        
        if (add_overflow(0x8c, 0xa))
            sub_403010()
            noreturn
        
        if (add_overflow(0x96, 0xffffffd8))
            sub_403010()
            noreturn
        
        void* edx_16 = data_530110
        *edx_16
        bool o_29 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_29)
            sub_403010()
            noreturn
        
        *(ebx_1 + *edx_16 * 0x118 - 0xf6) = 0x6e
        
        if (add_overflow(0x8c, 0x96))
            sub_403010()
            noreturn
        
        if (add_overflow(0x122, 0xffffffc4))
            sub_403010()
            noreturn
        
        void* edx_18 = data_530920
        *edx_18
        bool o_32 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_32)
            sub_403010()
            noreturn
        
        *(ebx_1 + *edx_18 * 0x118 - 0xf6) = 0xe6
        
        if (add_overflow(0x8c, 0x14a))
            sub_403010()
            noreturn
        
        if (add_overflow(0x1d6, 0xffffffb0))
            sub_403010()
            noreturn
        
        void* eax_32 = data_530648
        *eax_32
        bool o_35 = unimplemented  {imul eax, dword [eax], 0x23}
        
        if (o_35)
            sub_403010()
            noreturn
        
        *(ebx_1 + *eax_32 * 0x118 - 0xf6) = 0x186
    
    *data_530304
    sub_4d9f6c()
    
    if (*(*data_5301f4 + 0x111f8) != 0)
        sub_4837ec(*data_530304, *data_5307c8, true)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_48_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_51d121
    char** result = &var_8
    sub_403df8(result)
    return result
}
