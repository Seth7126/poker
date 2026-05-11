// ============================================================
// 函数名称: sub_4cca24
// 虚拟地址: 0x4cca24
// WARP GUID: 307bfd70-55db-5dca-b21d-b88f06941422
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e90, sub_4040c4, sub_404138, sub_4c1108, sub_404188, sub_403e4c, sub_4cc738, sub_403e1c, sub_403df8, sub_404280
// [被调用的父级函数]: sub_4c8aa0
// ============================================================

int32_t __convention("regparm")sub_4cca24(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: struct _EXCEPTION_REGISTRATION_RECORD* ebp
    struct _EXCEPTION_REGISTRATION_RECORD* ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_4 = ebp
    int32_t ebx
    int32_t var_148 = ebx
    int32_t esi
    int32_t var_14c = esi
    int32_t edi
    int32_t var_150 = edi
    void* var_144 = nullptr
    char* var_140 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    void* var_c = nullptr
    char var_13c
    __builtin_memcpy(&var_13c, arg1, 0x130)
    int32_t* var_154 = &var_4
    int32_t (* var_158)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ebx.b = var_13c
    sub_403df8(arg2)
    sub_4c1108()
    
    switch (ebx.b)
        case 1
            sub_403e4c(arg2, "High Card")
        case 2
            sub_403e4c(arg2, "Pair")
        case 3
            sub_403e4c(arg2, "Two Pairs")
        case 4
            sub_403e4c(arg2, "Three Of A Kind")
        case 5
            sub_403e4c(arg2, "Straight")
        case 6
            sub_403e4c(arg2, "Flush")
        case 7
            sub_403e4c(arg2, "Full House")
        case 8
            sub_403e4c(arg2, "Four Of A Kind")
        case 9
            sub_403e4c(arg2, "Straight Flush")
        case 0xa
            sub_403e4c(arg2, "Royal Flush")
    
    int32_t var_30
    int32_t esi_2 = sx.d(sub_4cc738(var_30))
    char eax_23 = ebx.b
    char temp1_1
    
    if (eax_23 != 5)
        temp1_1 = eax_23 - 5
    
    int32_t var_2c
    
    if ((eax_23 == 5 || temp1_1 == 4) && esi_2 == 8 && sub_4cc738(var_2c) == 0xc)
        esi_2 = 0xc
    
    if (ebx.b - 2 u< 3 || ebx.b - 7 u< 2)
        sub_4c1108()
        sub_4040c4(&var_8, *(data_530654 + (esi_2 << 2) + 0xfc), U"s")
        
        if (esi_2 == 0xd)
            sub_4040c4(&var_8, *(data_530654 + (esi_2 << 2) + 0xfc), "es")
    else
        sub_4c1108()
        sub_403e90(&var_8, *(data_530654 + (esi_2 << 2) + 0xfc))
    
    char eax_34 = ebx.b
    char temp5_1
    
    if (eax_34 != 3)
        temp5_1 = eax_34 - 3
    
    if (eax_34 == 3 || temp5_1 == 4)
        int32_t esi_3 = sx.d(sub_4cc738(var_2c))
        sub_4c1108()
        sub_4040c4(&var_c, *(data_530654 + (esi_3 << 2) + 0xfc), U"s")
        
        if (esi_3 == 0xd)
            sub_4040c4(&var_c, *(data_530654 + (esi_3 << 2) + 0xfc), "es")
    
    int32_t eax_44 = *(*data_5301f4 + 0x20088)
    
    if (eax_44 != 2)
        data_5301f4
        
        if (eax_44 == 3)
            char temp6_1 = ebx.b
            ebx.b -= 3
            char temp7_1
            
            if (temp6_1 != 3)
                temp7_1 = ebx.b
                ebx.b -= 4
            
            if (temp6_1 != 3 && temp7_1 != 4)
                void* const var_160_8 = &data_4cd09c
                int32_t var_164_4 = *arg2
                void* const var_168_4 = &data_4cd06c
                void* const var_16c_4 = &data_4cd078
                struct _EXCEPTION_REGISTRATION_RECORD* var_170_4 = var_8
                void* const var_174_3 = &data_4cd090
                sub_404138(arg2, 6)
                esp = &__return_addr
            else
                void* const var_160_7 = &data_4cd09c
                int32_t var_164_3 = *arg2
                void* const var_168_3 = &data_4cd06c
                void* const var_16c_3 = &data_4cd078
                struct _EXCEPTION_REGISTRATION_RECORD* var_170_3 = var_8
                void* const var_174_2 = &data_4cd084
                void* var_178_2 = var_c
                void* const var_17c_1 = &data_4cd090
                sub_404138(arg2, 8)
                esp = &var_8
    else
        sub_404280(2, 1, var_8, &var_140)
        sub_404188(var_140, 0x4cd060)
        
        if (eax_44 == 2)
            sub_403e90(&var_8, 0x4cd060)
        else
            sub_404280(1, 1, var_8, &var_8)
        
        sub_404280(2, 1, var_c, &var_144)
        sub_404188(var_144, 0x4cd060)
        
        if (eax_44 == 2)
            sub_403e90(&var_c, 0x4cd060)
        else
            sub_404280(1, 1, var_c, &var_c)
        
        char temp8_1 = ebx.b
        ebx.b -= 3
        char temp9_1
        
        if (temp8_1 != 3)
            temp9_1 = ebx.b
            ebx.b -= 4
        
        if (temp8_1 != 3 && temp9_1 != 4)
            int32_t var_160_6 = *arg2
            void* const var_164_2 = &data_4cd06c
            void* const var_168_2 = &data_4cd078
            struct _EXCEPTION_REGISTRATION_RECORD* var_16c_2 = var_8
            void* const var_170_2 = &data_4cd090
            sub_404138(arg2, 5)
            void arg_4
            esp = &arg_4
        else
            int32_t var_160_5 = *arg2
            void* const var_164_1 = &data_4cd06c
            void* const var_168_1 = &data_4cd078
            struct _EXCEPTION_REGISTRATION_RECORD* var_16c_1 = var_8
            void* const var_170_1 = &data_4cd084
            void* var_174_1 = var_c
            void* const var_178_1 = &data_4cd090
            sub_404138(arg2, 7)
            esp = &var_4
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4ccefb
    sub_403e1c(&var_144, 2)
    return sub_403e1c(&var_c, 2)
}
