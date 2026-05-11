// ============================================================
// 函数名称: sub_46077c
// 虚拟地址: 0x46077c
// WARP GUID: fffeea6a-b050-58f6-90e9-6ea630edd3e5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453acc, sub_460708
// ============================================================

int32_t* __convention("regparm")sub_46077c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1[4] != 0x64)
    if (arg1[4] != 0x64)
        void* eax = *arg1
        *(eax + 0x14) = 0x12
        *(eax + 0x18) = arg1[4]
        (**arg1)()
    
    arg1[0xe] = arg2
    arg1[0x32] = 0
    *(arg1 + 0xd1) = 0
    
    if (arg2 u> 5)
        *(*arg1 + 0x14) = 8
        return (**arg1)()
    
    switch (arg2)
        case 0
            arg1[0xd] = arg1[8]
            int32_t* eax_28 = arg1[0xd]
            
            if (eax_28 s< 1 || eax_28 s> 0xa)
                void* eax_29 = *arg1
                *(eax_29 + 0x14) = 0x18
                *(eax_29 + 0x18) = arg1[0xd]
                *(eax_29 + 0x1c) = 0xa
                eax_28 = (**arg1)()
            
            for (int32_t i = 0; i s< arg1[0xd]; i += 1)
                eax_28 = i * 0x54 + arg1[0xf]
                *eax_28 = i
                eax_28[2] = 1
                eax_28[3] = 1
                eax_28[4] = 0
                eax_28[5] = 0
                eax_28[6] = 0
            
            return eax_28
        case 1
            arg1[0x32] = 1
            arg1[0xd] = 1
            int32_t* eax_2 = arg1[0xf]
            *eax_2 = 1
            eax_2[2] = 1
            eax_2[3] = 1
            eax_2[4] = 0
            eax_2[5] = 0
            eax_2[6] = 0
            return eax_2
        case 2
            *(arg1 + 0xd1) = 1
            arg1[0xd] = 3
            int32_t* eax_3 = arg1[0xf]
            *eax_3 = 0x52
            eax_3[2] = 1
            eax_3[3] = 1
            eax_3[4] = 0
            eax_3[5] = 0
            eax_3[6] = 0
            int32_t* eax_5 = arg1[0xf] + 0x54
            *eax_5 = 0x47
            eax_5[2] = 1
            eax_5[3] = 1
            eax_5[4] = 0
            eax_5[5] = 0
            eax_5[6] = 0
            int32_t* eax_7 = arg1[0xf] + 0xa8
            *eax_7 = 0x42
            eax_7[2] = 1
            eax_7[3] = 1
            eax_7[4] = 0
            eax_7[5] = 0
            eax_7[6] = 0
            return eax_7
        case 3
            arg1[0x32] = 1
            arg1[0xd] = 3
            int32_t* eax_8 = arg1[0xf]
            *eax_8 = 1
            eax_8[2] = 2
            eax_8[3] = 2
            eax_8[4] = 0
            eax_8[5] = 0
            eax_8[6] = 0
            int32_t* eax_10 = arg1[0xf] + 0x54
            *eax_10 = 2
            __builtin_memcpy(&eax_10[2], 
                "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
                0x14)
            int32_t* eax_12 = arg1[0xf] + 0xa8
            *eax_12 = 3
            __builtin_memcpy(&eax_12[2], 
                "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
                0x14)
            return eax_12
        case 4
            *(arg1 + 0xd1) = 1
            arg1[0xd] = 4
            int32_t* eax_13 = arg1[0xf]
            *eax_13 = 0x43
            eax_13[2] = 1
            eax_13[3] = 1
            eax_13[4] = 0
            eax_13[5] = 0
            eax_13[6] = 0
            int32_t* eax_15 = arg1[0xf] + 0x54
            *eax_15 = 0x4d
            eax_15[2] = 1
            eax_15[3] = 1
            eax_15[4] = 0
            eax_15[5] = 0
            eax_15[6] = 0
            int32_t* eax_17 = arg1[0xf] + 0xa8
            *eax_17 = 0x59
            eax_17[2] = 1
            eax_17[3] = 1
            eax_17[4] = 0
            eax_17[5] = 0
            eax_17[6] = 0
            int32_t* eax_19 = arg1[0xf] + 0xfc
            *eax_19 = 0x4b
            eax_19[2] = 1
            eax_19[3] = 1
            eax_19[4] = 0
            eax_19[5] = 0
            eax_19[6] = 0
            return eax_19
        case 5
            *(arg1 + 0xd1) = 1
            arg1[0xd] = 4
            int32_t* eax_20 = arg1[0xf]
            *eax_20 = 1
            eax_20[2] = 2
            eax_20[3] = 2
            eax_20[4] = 0
            eax_20[5] = 0
            eax_20[6] = 0
            int32_t* eax_22 = arg1[0xf] + 0x54
            *eax_22 = 2
            __builtin_memcpy(&eax_22[2], 
                "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
                0x14)
            int32_t* eax_24 = arg1[0xf] + 0xa8
            *eax_24 = 3
            __builtin_memcpy(&eax_24[2], 
                "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
                0x14)
            int32_t* eax_26 = arg1[0xf] + 0xfc
            *eax_26 = 4
            eax_26[2] = 2
            eax_26[3] = 2
            eax_26[4] = 0
            eax_26[5] = 0
            eax_26[6] = 0
            return eax_26
}
